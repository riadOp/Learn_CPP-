#include <iostream>
#include <string>
#include <queue>
#include <stack>
#include <list>
#include <set>
#include <algorithm> // For std::find
#ifdef _WIN32
#include <windows.h>
#else
#include <unistd.h> // For usleep (for Linux and MacOS)
#endif
#include <ctime>

using namespace std;

// Structs and Classes
struct User {
    int userId;
    string name;
    string password;
    string country;
    string gender;
    int age;
    list<int> friends; // To store friend ids
    User* next; // Pointer to the next user
};

struct Post {
    int postId;
    string content;
    int userId; // User ID of the post creator
    time_t timestamp;
    Post* next; // Pointer to the next post
};

struct FriendRequest {
    int senderId;
    int receiverId;
};

// Global Variables
int currentUserId = -1;
int postIdCounter = 1;
User* userListHead = nullptr; // Head of the user linked list
Post* postListHead = nullptr; // Head of the post linked list
queue<FriendRequest> friendRequests; // FIFO queue for pending friend requests
set<int> loggedInUsers; // To track logged in users

// Function prototypes
void Welcome_Interface();
void Registration();
void Login();
void Main_Menu();
void Add_Friend();
void Pending_Friends();
void View_Friends();
void Create_Post();
void View_Feed();
void Like_Post();
void Comment_On_Post();
void Admin_Database();
void Logout();
void Loading_Animation();
void Printing_at_Center(const string &text, int width);

// Function to print text at the center of the screen
void Printing_at_Center(const string &text, int width) {
    int padding = (width - text.size()) / 2;
    cout << string(padding, ' ') << text << string(padding, ' ') << endl;
}

// Function to show a loading animation
void Loading_Animation() {
    const int loading_time = 500; // Milliseconds
    const int screen_width = 100; // Terminal width

    cout << "\nLoading";
    for (int i = 1; i < 10; i++) {
        cout << '.'; 
        #ifdef _WIN32
        Sleep(loading_time);
        #else
        usleep(loading_time * 1000); // for Mac/Linux
        #endif
    }
    cout << "\n\n";
}

// Welcome Interface
void Welcome_Interface() {
    const int screen_width = 100;
    cout << "----------------------------------------------------------------------------------------------------------------------" << endl;
    Printing_at_Center("\033[1;35mWelcome to ChipiChipi Social Media!\033[0m", screen_width);
    Printing_at_Center("\033[1;37mA new way to connect with friends, share your moments, and interact with people!\033[0m", screen_width);
    cout << "-----------------------------------------------------------------------------------------------------------------------" << endl;
    cout << endl;

    Loading_Animation();
    Printing_at_Center("\033[1;36mPlease register to get started.\033[0m", screen_width);
    cout << endl;

    Printing_at_Center("\033[1;32m1. Register New Account\033[0m", screen_width);
    Printing_at_Center("\033[1;32m2. Login\033[0m", screen_width);
    Printing_at_Center("\033[1;33m3. Exit\033[0m", screen_width);

    cout << endl;

    // User input for choice
    int choice;
    while (true) {
        cout << "\nEnter your choice (1 or 2): ";
        cin >> choice;

        if (choice == 1 || choice == 2 || choice == 3) {
            break;
        } else {
            cout << "\033[1;31mInvalid option! Please choose 1 or 2.\033[0m" << endl;
        }
    }

    if (choice == 1) {
        Registration();
    } else if (choice == 2) {
        Login();
    } else if (choice == 3) {
        cout << "Exiting... Goodbye!" << endl;
        exit(0);
    }
}

// Registration Function
void Registration() {
    cout << "\033[1;36mEnter your name: \033[0m";
    string name;
    cin.ignore();
    getline(cin, name);

    cout << "\033[1;36mEnter your age: \033[0m";
    int age;
    cin >> age;

    cout << "\033[1;36mEnter your country: \033[0m";
    string country;
    cin.ignore();
    getline(cin, country);

    cout << "\033[1;36mEnter your gender (Male/Female): \033[0m";
    string gender;
    getline(cin, gender);

    cout << "\033[1;36mEnter a password: \033[0m";
    string password;
    getline(cin, password);

    // Assign a new User ID
    int userId = (userListHead ? userListHead->userId + 1 : 1);

    // Create a new user and add to the linked list
    User* newUser = new User{userId, name, password, country, gender, age, {}, nullptr};
    if (!userListHead) {
        userListHead = newUser;
    } else {
        User* temp = userListHead;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newUser;
    }

    cout << "\033[1;32mRegistration Successful! Your User ID is " << userId << ".\033[0m" << endl;

    // Post registration options
    cout << "\n\033[1;36mWhat would you like to do next?\033[0m" << endl;
    cout << "\033[1;32m1. Login\033[0m" << endl;
    cout << "\033[1;33m2. Create a New Account\033[0m" << endl;
    cout << "\033[1;31m3. Exit\033[0m" << endl;

    int choice;
    cin >> choice;

    if (choice == 1) {
        Login();
    } else if (choice == 3) {
        exit(0);
    } else {
        Registration();  // Recursively call registration if option 2 is chosen
    }
}

// Login Function
void Login() {
    cout << "\033[1;36mEnter your User ID: \033[0m";
    int userId;
    cin >> userId;

    cout << "\033[1;36mEnter your password: \033[0m";
    string password;
    cin >> password;

    // Find user in the linked list
    User* temp = userListHead;
    while (temp) {
        if (temp->userId == userId && temp->password == password) {
            cout << "\033[1;32mLogin Successful!\033[0m" << endl;
            currentUserId = userId;
            loggedInUsers.insert(userId);
            Main_Menu();
            return;
        }
        temp = temp->next;
    }
    
    cout << "\033[1;31mInvalid User ID or Password. Please try again.\033[0m" << endl;
    Login();
}

// Main Menu
void Main_Menu() {
    while (true) {
        cout << "\n\033[1;36mMain Menu:\033[0m" << endl;
        cout << "\033[1;32m1. Add Friend\033[0m" << endl;
        cout << "\033[1;33m2. Pending Friend Requests\033[0m" << endl;
        cout << "\033[1;34m3. View Friends\033[0m" << endl;
        cout << "\033[1;35m4. Create Post\033[0m" << endl;
        cout << "\033[1;36m5. View Feed\033[0m" << endl;
        cout << "\033[1;37m6. Logout\033[0m" << endl;
        cout << "\033[1;31m7. Admin Database (Admin Only)\033[0m" << endl;

        cout << "\n\033[1;36mEnter your choice (1-7): \033[0m";
        int choice;
        cin >> choice;

        switch (choice) {
            case 1: Add_Friend(); break;
            case 2: Pending_Friends(); break;
            case 3: View_Friends(); break;
            case 4: Create_Post(); break;
            case 5: View_Feed(); break;
            case 6: Logout(); break;
            case 7: Admin_Database(); break;
            default: cout << "\033[1;31mInvalid Option.\033[0m" << endl; break;
        }
    }
}

// Add Friend Function
void Add_Friend() {
    cout << "\n\033[1;36mEnter the User ID or Name to add as a friend: \033[0m";
    int friendId;
    cin >> friendId;

    // Check if the user exists
    User* temp = userListHead;
    bool userExists = false;
    while (temp) {
        if (temp->userId == friendId) {
            userExists = true;
            break;
        }
        temp = temp->next;
    }

    if (!userExists) {
        cout << "\033[1;31mUser does not exist.\033[0m" << endl;
        return;
    }

    // Check if already friends
    if (find(userListHead->friends.begin(), userListHead->friends.end(), friendId) != userListHead->friends.end()) {
        cout << "\033[1;31mYou are already friends with this user.\033[0m" << endl;
        return;
    }

    // Send a friend request
    FriendRequest request{currentUserId, friendId};
    friendRequests.push(request);
    cout << "\033[1;32mFriend request sent!\033[0m" << endl;
}

// View Pending Friends Function
void Pending_Friends() {
    cout << "\n\033[1;36mPending Friend Requests:\033[0m" << endl;

    // Process and display pending requests
    int size = friendRequests.size();
    for (int i = 0; i < size; i++) {
        FriendRequest request = friendRequests.front();
        friendRequests.pop(); // Pop from the queue for processing

        if (request.receiverId == currentUserId) {
            cout << "Request from User ID: " << request.senderId << endl;
            cout << "\033[1;32mPress 'a' to accept, 'd' to decline: \033[0m";
            char action;
            cin >> action;

            if (action == 'a') {
                // Add to friends list
                User* user = userListHead;
                while (user) {
                    if (user->userId == currentUserId) {
                        user->friends.push_back(request.senderId);
                        break;
                    }
                    user = user->next;
                }
                cout << "\033[1;32mFriend request accepted!\033[0m" << endl;
            } else {
                cout << "\033[1;31mFriend request declined.\033[0m" << endl;
            }
        }
        friendRequests.push(request); // Reinsert the request back into the queue if it wasn't processed
    }
}

// View Friends Function
void View_Friends() {
    cout << "\n\033[1;36mYour Friends:\033[0m" << endl;

    User* temp = userListHead;
    while (temp) {
        if (temp->userId == currentUserId) {
            if (temp->friends.empty()) {
                cout << "\033[1;31mYou have no friends yet.\033[0m" << endl;
            } else {
                for (int friendId : temp->friends) {
                    cout << "User ID: " << friendId << endl;
                }
            }
            break;
        }
        temp = temp->next;
    }
}

// Create Post Function
void Create_Post() {
    cout << "\033[1;36mEnter your post content: \033[0m";
    string content;
    cin.ignore();
    getline(cin, content);

    // Create a new post
    Post* newPost = new Post{postIdCounter++, content, currentUserId, time(nullptr), nullptr};

    // Add to the post linked list
    if (!postListHead) {
        postListHead = newPost;
    } else {
        Post* temp = postListHead;
        while (temp->next) {
            temp = temp->next;
        }
        temp->next = newPost;
    }

    cout << "\033[1;32mPost created successfully!\033[0m" << endl;
}

// View Feed Function
void View_Feed() {
    cout << "\n\033[1;36mFeed:\033[0m" << endl;

    Post* temp = postListHead;
    while (temp) {
        cout << "Post ID: " << temp->postId << " | User ID: " << temp->userId << " | Content: " << temp->content;
        cout << " | Timestamp: " << ctime(&temp->timestamp);
        temp = temp->next;
    }
}

// Logout Function
void Logout() {
    loggedInUsers.erase(currentUserId);
    currentUserId = -1;
    cout << "\033[1;32mLogged out successfully.\033[0m" << endl;
    Welcome_Interface();
}

// Admin Database Function (Placeholder)
void Admin_Database() {
    cout << "\033[1;36mAdmin Database is currently under construction.\033[0m" << endl;
}

// Main Function
int main() {
    Welcome_Interface();
    return 0;
}

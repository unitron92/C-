#include <QtWidgets/QApplication>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QWidget>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTextBrowser>

class CarRegistrationApp : public QMainWindow {
    Q_OBJECT

public:
    CarRegistrationApp(QWidget* parent = nullptr);

private slots:
    void registerCar();
    void searchCar();

private:
    QLineEdit* carNumberEntry;
    QLineEdit* ownerNameEntry;
    QLineEdit* carMakeEntry;
    QLineEdit* carModelEntry;
    QTextBrowser* resultText;
};

CarRegistrationApp::CarRegistrationApp(QWidget* parent) : QMainWindow(parent) {
    QWidget* centralWidget = new QWidget(this);
    setCentralWidget(centralWidget);

    QVBoxLayout* mainLayout = new QVBoxLayout(centralWidget);

    // Registration section
    QWidget* registrationWidget = new QWidget(this);
    mainLayout->addWidget(registrationWidget);

    QVBoxLayout* registrationLayout = new QVBoxLayout(registrationWidget);
    registrationLayout->addWidget(new QLabel("Car Registration"));

    carNumberEntry = new QLineEdit();
    registrationLayout->addWidget(carNumberEntry);

    ownerNameEntry = new QLineEdit();
    registrationLayout->addWidget(ownerNameEntry);

    carMakeEntry = new QLineEdit();
    registrationLayout->addWidget(carMakeEntry);

    carModelEntry = new QLineEdit();
    registrationLayout->addWidget(carModelEntry);

    QPushButton* registerButton = new QPushButton("Register Car");
    connect(registerButton, SIGNAL(clicked()), this, SLOT(registerCar()));
    registrationLayout->addWidget(registerButton);

    // Search section
    QWidget* searchWidget = new QWidget(this);
    mainLayout->addWidget(searchWidget);

    QVBoxLayout* searchLayout = new QVBoxLayout(searchWidget);
    searchLayout->addWidget(new QLabel("Car Search"));

    QLineEdit* searchEntry = new QLineEdit();
    searchLayout->addWidget(searchEntry);

    QPushButton* searchButton = new QPushButton("Search Car");
    connect(searchButton, SIGNAL(clicked()), this, SLOT(searchCar()));
    searchLayout->addWidget(searchButton);

    // Result section
    resultText = new QTextBrowser();
    mainLayout->addWidget(resultText);
}

void CarRegistrationApp::registerCar() {
    // Handle car registration logic here
    // Update UI or display messages as needed
}

void CarRegistrationApp::searchCar() {
    // Handle car search logic here
    // Update UI or display search results
}

int main(int argc, char* argv[]) {
    QApplication app(argc, argv);
    CarRegistrationApp mainWindow;
    mainWindow.show();
    return app.exec();
}

#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QString"
#include "phonon4qt5/phonon/MediaObject"
#include "phonon4qt5/phonon/AudioOutput"
#include "phonon4qt5/phonon/MediaSource"

QString soundsDir = "*path_to_repository*/sounds/"; //edit this for you.

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}


void playSound( QString sound )
{
    Phonon::MediaObject *player = Phonon::createPlayer(
                Phonon::MusicCategory, Phonon::MediaSource(sound)
    );
    player->play();

}


void MainWindow::on_workIt_clicked()
{
    playSound(soundsDir + "Work_It.mp3");
}

void MainWindow::on_makeIt_clicked()
{
    playSound(soundsDir + "Make_It.mp3");
}

void MainWindow::on_doIt_clicked()
{
    playSound(soundsDir + "Do_It.mp3");
}

void MainWindow::on_makeUs_clicked()
{
    playSound(soundsDir + "Make_Us.mp3");
}


void MainWindow::on_harder_clicked()
{
    playSound(soundsDir + "Harder.mp3");
}

void MainWindow::on_better_clicked()
{
    playSound(soundsDir + "Better.mp3");
}

void MainWindow::on_faster_clicked()
{
    playSound(soundsDir + "Faster.mp3");
}

void MainWindow::on_stronger_clicked()
{
    playSound(soundsDir + "Stronger.mp3");
}

void MainWindow::on_moreThan_clicked()
{
    playSound(soundsDir + "More_Than.mp3");
}

void MainWindow::on_hour_clicked()
{
    playSound(soundsDir + "Hour.mp3");
}

void MainWindow::on_our_clicked()
{
    playSound(soundsDir + "Our.mp3");
}

void MainWindow::on_never_clicked()
{
    playSound(soundsDir + "Never.mp3");
}

void MainWindow::on_ever_clicked()
{
    playSound(soundsDir + "Ever.mp3");
}

void MainWindow::on_after_clicked()
{
    playSound(soundsDir + "After.mp3");
}

void MainWindow::on_workIs_clicked()
{
    playSound(soundsDir + "Work_Is.mp3");
}

void MainWindow::on_over_clicked()
{
    playSound(soundsDir + "Over.mp3");
}

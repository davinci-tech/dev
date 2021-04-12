echo UPDATING and UPGRADING
sudo apt update
sudo apt upgrade -y

echo BOOT THINGS
sudo apt install grub2 -y
sudo apt install os-prober -y
sudo os-prober
sudo update-grub

echo INSTALL Visual Studio Code Insiders
sudo apt install snapd -y
sudo snap install --classic code-insiders

echo INSTALL NEOVIM
sudo apt install neovim -y

echo INSTALL BUILD ESSENTIAL
sudo apt install build-essential -y

echo UPDATING and UPGRADING
sudo apt update
sudo apt upgrade -y

exit

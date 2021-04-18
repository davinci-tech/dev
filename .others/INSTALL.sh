# Installing some base utilities
sudo apt update
sudo apt upgrade
sudo apt install tmux \
	htop \
	curl \
	vim \
	neovim \
	\
	build-essential \
	python3-pip \
	\
	snapd \
	gem \
	\
	zsh
	

# Installing and ...
sudo snap install --classic code
sudo snap install --classic code-insiders

# configuring VSCode (Insiders)
code --install-extension tabnine.tabnine-vscode --force 
code --install-extension ms-vscode.cpptools --force 
code --install-extension eamodio.gitlens --force 
code --install-extension dart-code.flutter --force 
code --install-extension dart-code.dart-code --force 
code --install-extension pkief.material-icon-theme --force 
code --install-extension akamud.vscode-insiders-theme-onedark --force 

code-insiders --install-extension tabnine.tabnine-vscode-insiders --force                   
code-insiders --install-extension ms-vscode-insiders.cpptools --force                       
code-insiders --install-extension eamodio.gitlens --force                          
code-insiders --install-extension dart-code-insiders.flutter --force                        
code-insiders --install-extension dart-code-insiders.dart-code-insiders --force                      
code-insiders --install-extension pkief.material-icon-theme --force                
code-insiders --install-extension akamud.vscode-theme-onedark --force 

# Installing Microsoft Teams
cd /tmp
wget https://packages.microsoft.com/repos/ms-teams/pool/main/t/teams/teams_1.3.00.5153_amd64.deb
dpkg -i teams_1.3.00.5153_amd64.deb

#Installing Brave Browser
curl -s https://brave-browser-apt-release.s3.brave.com/brave-core.asc | sudo apt-key --keyring /etc/apt/trusted.gpg.d/brave-browser-release.gpg add -
sudo sh -c 'echo "deb [arch=amd64] https://brave-browser-apt-release.s3.brave.com `lsb_release -sc` main" >> /etc/apt/sources.list.d/brave.list'
sudo apt update
sudo apt install brave-browser brave-keyring

# Configuring zsh
sh -c "$(curl -fsSL https://raw.github.com/ohmyzsh/ohmyzsh/master/tools/install.sh)"
git clone --depth=1 https://github.com/romkatv/powerlevel10k.git ~/powerlevel10k
echo 'source ~/powerlevel10k/powerlevel10k.zsh-theme' >>~/.zshrc

# Cleanup time!
sudo apt install cmatrix
sudo apt autoremove
cmatrix

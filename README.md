<div align="center">
  <img src="https://img.shields.io/static/v1?label=LANG&labelColor=FCFCFC&message=ED&color=000000&style=for-the-badge&logo=C&logoColor=000000"/>
</div>

<h1 align="center"> 💾 ATIVIDADES IFBA - ESTRUTURA DE DADOS 💾</h1>

## 🕵🏻‍♂️ OBJETIVO 🕵🏻‍♂️
O objetivo do repositório é manter anotações e os exercícios resolvidos disponíveis.

## 👨🏻‍💻 COMO RODAR 👨🏻‍💻

### INSTALAR LINUX NO WINDOWS

- Abra o PowerShell como administrador e execute:
```ps1
dism.exe /online /enable-feature /featurename:Microsoft-Windows-Subsystem-Linux /all /norestart
```

- Reinicie seu PC

- Habilite a virtualização
```ps1
dism.exe /online /enable-feature /featurename:VirtualMachinePlatform /all /norestart
```

- Reinicie seu PC outra vez

- [Baixar o pacote de atualização do kernel do Linux para 64x](https://wslstorestorage.blob.core.windows.net/wslblob/wsl_update_x64.msi)
- Execute e instale 
- Faça com que o linux seja distribuido como WSL2 por padrão
```ps1
wsl --set-default-version 2
```
- [Escolha uma distribuição na loja da Microsoft](https://aka.ms/wslstore)
* Sugestão: Ubuntu (Pesquise e baixe)
- Agora siga o passo a passo para a distribução que você está utilizando:

### 🐧 LINUX 🐧
- Instale o GCC, um compilador para a linguagem C:

Arch:
```bash
sudo pacman -S gcc
```
Ubuntu:
```bash
sudo apt install gcc
```

Solus:
```bash
sudo eopkg install -c system.devel
```

- Agora compile o arquivo C:

```bash
gcc arquivo.c -o programa
```

- Agora basta executar o programa:

```bash
./programa
```

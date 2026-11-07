// FUN_0168a3a0 @ 0168a3a0 size=100 calls_out=2 calls_in=1
// strings: 

void FUN_0168a3a0(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_016831f8(param_1 + 0x18);
  if (*(int *)(param_1 + 0x20) != 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x1c) + 0x65);
    iVar1 = *(int *)(param_1 + 0x20) * 0xc0;
    do {
      if ((*(int *)(pcVar2 + -0x65) == 2) && (*pcVar2 != '\0')) {
        FUN_0168a3a0(pcVar2 + -0x5d);
      }
      pcVar2 = pcVar2 + 0xc0;
      iVar1 = iVar1 + -0xc0;
    } while (iVar1 != 0);
  }
  return;
}


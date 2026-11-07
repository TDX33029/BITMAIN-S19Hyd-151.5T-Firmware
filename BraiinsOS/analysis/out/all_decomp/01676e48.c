// FUN_01676e48 @ 01676e48 size=112 calls_out=2 calls_in=1
// strings: 

void FUN_01676e48(int param_1)

{
  int iVar1;
  char *pcVar2;
  
  FUN_016831f8(param_1 + 0x10);
  if (*(int *)(param_1 + 0x18) != 0) {
    pcVar2 = (char *)(*(int *)(param_1 + 0x14) + 0x69);
    iVar1 = *(int *)(param_1 + 0x18) * 0xc0;
    do {
      if (((*(int *)(pcVar2 + -0x69) == 1) && (*(uint *)(pcVar2 + -0xd) < 2)) && (*pcVar2 == '\x01')
         ) {
        FUN_01676e48(pcVar2 + -0x61);
      }
      pcVar2 = pcVar2 + 0xc0;
      iVar1 = iVar1 + -0xc0;
    } while (iVar1 != 0);
  }
  return;
}


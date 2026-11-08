// FUN_016320b0 @ 016320b0 size=40 calls_out=1 calls_in=2
// strings: 

void FUN_016320b0(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = *(int *)(param_1 + 8) + 1;
  iVar1 = *(int *)(param_1 + 4);
  while (iVar2 = iVar2 + -1, iVar2 != 0) {
    FUN_01631ea8(iVar1);
    iVar1 = iVar1 + 0x14;
  }
  return;
}


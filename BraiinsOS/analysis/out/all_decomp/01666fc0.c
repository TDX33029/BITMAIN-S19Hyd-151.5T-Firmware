// FUN_01666fc0 @ 01666fc0 size=40 calls_out=0 calls_in=0
// strings: 

int FUN_01666fc0(int param_1)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = 0;
  piVar2 = *(int **)(param_1 + 0x1c);
  while (piVar2 != *(int **)(param_1 + 0x1c) + *(int *)(param_1 + 0x20) * 0x30) {
    piVar3 = piVar2 + 0x30;
    iVar4 = *piVar2;
    piVar2 = piVar3;
    if (iVar4 != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


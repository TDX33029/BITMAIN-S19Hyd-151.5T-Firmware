// FUN_0166819c @ 0166819c size=44 calls_out=0 calls_in=0
// strings: 

int FUN_0166819c(int param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  iVar2 = *(int *)(param_1 + 0x18) * 0xc0;
  iVar1 = 0;
  piVar3 = *(int **)(param_1 + 0x14);
  while (iVar2 != 0) {
    piVar4 = piVar3 + 0x30;
    iVar5 = *piVar3;
    iVar2 = iVar2 + -0xc0;
    piVar3 = piVar4;
    if (iVar5 != 0) {
      iVar1 = iVar1 + 1;
    }
  }
  return iVar1;
}


// FUN_01908284 @ 01908284 size=120 calls_out=0 calls_in=3
// strings: 

int FUN_01908284(int *param_1)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  
  iVar1 = *param_1;
  if (iVar1 == param_1[1]) {
    iVar2 = 0;
  }
  else {
    iVar4 = ((uint)(param_1[1] - iVar1) >> 2) * -0x55555555;
    iVar2 = 0;
    piVar3 = (int *)(iVar1 + 8);
    do {
      iVar4 = iVar4 + -1;
      iVar2 = *piVar3 + iVar2;
      piVar3 = piVar3 + 3;
    } while (iVar4 != 0);
  }
  iVar1 = param_1[2];
  if (iVar1 == param_1[3]) {
    return iVar2;
  }
  iVar4 = ((uint)(param_1[3] - iVar1) >> 2) * -0x55555555;
  piVar3 = (int *)(iVar1 + 8);
  do {
    iVar4 = iVar4 + -1;
    iVar2 = *piVar3 + iVar2;
    piVar3 = piVar3 + 3;
  } while (iVar4 != 0);
  return iVar2;
}


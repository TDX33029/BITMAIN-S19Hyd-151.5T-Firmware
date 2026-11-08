// FUN_019dd214 @ 019dd214 size=96 calls_out=1 calls_in=2
// strings: 

void FUN_019dd214(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
  iVar3 = param_1[1];
  if (iVar3 != 0) {
    piVar4 = (int *)*param_1;
    do {
      iVar1 = *piVar4;
      if (iVar1 == 0) {
        param_1[1] = iVar3 + -1;
        return;
      }
      iVar2 = *(int *)(iVar1 + 4);
      iVar3 = iVar3 + -1;
      *piVar4 = iVar2;
      param_1[1] = iVar3;
      if (iVar2 == 0) {
        piVar4[1] = 0;
      }
      *(undefined4 *)(iVar1 + 4) = 0;
      FUN_019d8d64();
    } while (iVar3 != 0);
  }
  return;
}


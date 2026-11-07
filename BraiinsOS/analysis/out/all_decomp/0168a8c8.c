// FUN_0168a8c8 @ 0168a8c8 size=112 calls_out=0 calls_in=0
// strings: 

void FUN_0168a8c8(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int *piVar4;
  int iVar5;
  
  if (param_3 == 0) {
    piVar4 = (int *)param_2[1];
    piVar3 = (int *)*param_2;
  }
  else {
    piVar4 = (int *)param_2[1];
    piVar2 = (int *)*param_2;
    do {
      if (piVar2 == piVar4) goto LAB_0168a92c;
      piVar3 = piVar2 + 0x30;
      iVar1 = *piVar2;
      *param_2 = piVar3;
      if (iVar1 != 0) {
        param_3 = param_3 + -1;
      }
      piVar2 = piVar3;
    } while (param_3 != 0);
  }
  while (piVar2 = piVar3, piVar2 != piVar4) {
    iVar1 = *piVar2;
    *param_2 = piVar2 + 0x30;
    piVar3 = piVar2 + 0x30;
    if (iVar1 != 0) {
      iVar1 = piVar2[0x1d];
      iVar5 = piVar2[0x1e];
      param_1[2] = (int)piVar2;
      *param_1 = iVar1;
      param_1[1] = iVar5;
      return;
    }
  }
LAB_0168a92c:
  *param_1 = 0;
  return;
}


// FUN_0168b198 @ 0168b198 size=112 calls_out=0 calls_in=0
// strings: 

int * FUN_0168b198(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  
  if (param_2 == 0) {
    piVar4 = (int *)param_1[1];
    piVar2 = (int *)*param_1;
  }
  else {
    piVar4 = (int *)param_1[1];
    piVar1 = (int *)*param_1;
    do {
      if (piVar1 == piVar4) {
        return (int *)0x0;
      }
      piVar2 = piVar1 + 0x30;
      iVar3 = *piVar1;
      *param_1 = (int)piVar2;
      if (iVar3 != 0) {
        param_2 = param_2 + -1;
      }
      piVar1 = piVar2;
    } while (param_2 != 0);
  }
  do {
    piVar1 = piVar2;
    if (piVar1 == piVar4) {
      return (int *)0x0;
    }
    iVar3 = *piVar1;
    *param_1 = (int)(piVar1 + 0x30);
    piVar2 = piVar1 + 0x30;
  } while (iVar3 == 0);
  return piVar1 + 0x1c;
}


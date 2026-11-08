// FUN_01b857dc @ 01b857dc size=144 calls_out=0 calls_in=3
// strings: 

int * FUN_01b857dc(int *param_1,uint param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  if (3 < param_2) {
    param_1[2] = param_1[1];
    param_1[1] = *param_1;
    *param_1 = param_2 - 3;
    return (int *)0x0;
  }
  iVar1 = param_3 + -1 + param_2;
  if (iVar1 == 0) {
    return param_1;
  }
  if (iVar1 == 3) {
    iVar2 = *param_1 + -1;
  }
  else {
    iVar2 = param_1[iVar1];
    if (iVar1 == 1) {
      iVar1 = param_1[2];
      goto LAB_01b8584c;
    }
  }
  iVar1 = param_1[1];
LAB_01b8584c:
  param_1[2] = iVar1;
  param_1[1] = *param_1;
  *param_1 = iVar2;
  return (int *)0x0;
}


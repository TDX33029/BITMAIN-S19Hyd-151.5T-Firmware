// FUN_00e7bd20 @ 00e7bd20 size=112 calls_out=0 calls_in=25
// strings: 

int FUN_00e7bd20(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x1b0);
  iVar2 = *(int *)(param_2 + 0x1a8);
  iVar1 = *(int *)(param_2 + 0x1ac);
  *(int *)(param_2 + 0x1a8) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x1ac) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7bd7c;
    }
LAB_00e7bd70:
    *(int *)(iVar1 + 0x1a8) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x1ac) = iVar1;
    if (iVar1 != 0) goto LAB_00e7bd70;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x1b0) = iVar4 + -1;
LAB_00e7bd7c:
  return param_2 + -8;
}


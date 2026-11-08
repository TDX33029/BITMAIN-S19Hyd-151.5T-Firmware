// FUN_00e7bcb0 @ 00e7bcb0 size=112 calls_out=0 calls_in=23
// strings: 

int FUN_00e7bcb0(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 200);
  iVar2 = *(int *)(param_2 + 0xc0);
  iVar1 = *(int *)(param_2 + 0xc4);
  *(int *)(param_2 + 0xc0) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0xc4) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7bd0c;
    }
LAB_00e7bd00:
    *(int *)(iVar1 + 0xc0) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0xc4) = iVar1;
    if (iVar1 != 0) goto LAB_00e7bd00;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 200) = iVar4 + -1;
LAB_00e7bd0c:
  return param_2 + -8;
}


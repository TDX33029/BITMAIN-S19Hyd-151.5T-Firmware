// FUN_00e7bb10 @ 00e7bb10 size=112 calls_out=0 calls_in=4
// strings: 

int FUN_00e7bb10(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x18);
  iVar2 = *(int *)(param_2 + 0x10);
  iVar1 = *(int *)(param_2 + 0x14);
  *(int *)(param_2 + 0x10) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x14) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7bb6c;
    }
LAB_00e7bb60:
    *(int *)(iVar1 + 0x10) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x14) = iVar1;
    if (iVar1 != 0) goto LAB_00e7bb60;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x18) = iVar4 + -1;
LAB_00e7bb6c:
  return param_2 + -8;
}


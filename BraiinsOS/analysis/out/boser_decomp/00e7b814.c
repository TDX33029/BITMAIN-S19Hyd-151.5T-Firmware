// FUN_00e7b814 @ 00e7b814 size=112 calls_out=0 calls_in=8
// strings: 

int FUN_00e7b814(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x68);
  iVar2 = *(int *)(param_2 + 0x60);
  iVar1 = *(int *)(param_2 + 100);
  *(int *)(param_2 + 0x60) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 100) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7b870;
    }
LAB_00e7b864:
    *(int *)(iVar1 + 0x60) = iVar2;
  }
  else {
    *(int *)(iVar2 + 100) = iVar1;
    if (iVar1 != 0) goto LAB_00e7b864;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x68) = iVar4 + -1;
LAB_00e7b870:
  return param_2 + -8;
}


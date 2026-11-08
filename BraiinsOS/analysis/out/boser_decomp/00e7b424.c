// FUN_00e7b424 @ 00e7b424 size=112 calls_out=0 calls_in=2
// strings: 

int FUN_00e7b424(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  iVar3 = param_1[1];
  iVar4 = *(int *)(iVar3 + 0x38);
  iVar2 = *(int *)(param_2 + 0x30);
  iVar1 = *(int *)(param_2 + 0x34);
  *(int *)(param_2 + 0x30) = *(int *)(*param_1 + 8) + 8;
  *(undefined4 *)(param_2 + 0x34) = 0;
  if (iVar2 == 0) {
    if (iVar1 == 0) {
      param_1[1] = 0;
      goto LAB_00e7b480;
    }
LAB_00e7b474:
    *(int *)(iVar1 + 0x30) = iVar2;
  }
  else {
    *(int *)(iVar2 + 0x34) = iVar1;
    if (iVar1 != 0) goto LAB_00e7b474;
    param_1[1] = iVar2;
    iVar3 = iVar2;
  }
  *(int *)(iVar3 + 0x38) = iVar4 + -1;
LAB_00e7b480:
  return param_2 + -8;
}


// FUN_00ea7944 @ 00ea7944 size=188 calls_out=3 calls_in=2
// strings: 

void FUN_00ea7944(int *param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  
  iVar2 = param_1[2];
  if (*param_1 == iVar2) {
    FUN_00edff4c(param_1,iVar2,1,1,1);
    iVar2 = param_1[2];
  }
  *(undefined1 *)(param_1[1] + iVar2) = 1;
  param_1[2] = iVar2 + 1;
  FUN_00f09308(param_1,iVar2,param_3,0);
  uVar1 = extraout_r1;
  for (param_3 = param_3 * 0x28; param_3 != 0; param_3 = param_3 + -0x28) {
    uVar3 = *(undefined4 *)(param_2 + 0x20);
    FUN_00f09308(param_1,uVar1,*(undefined4 *)(param_2 + 0x18),*(undefined4 *)(param_2 + 0x1c));
    FUN_00f09308(param_1,extraout_r1_00,uVar3,0);
    FUN_00efdc3c(param_2,param_1);
    param_2 = param_2 + 0x28;
    uVar1 = extraout_r1_01;
  }
  return;
}


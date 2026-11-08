// FUN_009dcbf4 @ 009dcbf4 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_009dcbf4(undefined4 *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  int iVar2;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined1 local_21;
  
  uVar1 = param_1[1];
  local_38 = *param_1;
  uStack_34 = uVar1;
  uStack_30 = param_1[2];
  uStack_2c = param_1[3];
  for (iVar2 = 0; iVar2 != 0x10; iVar2 = iVar2 + 1) {
    local_21 = *(undefined1 *)((int)&local_38 + iVar2);
    FUN_01ac6d2c(param_2,&local_21,(int)register0x00000054 + -0x20);
    uVar1 = extraout_r1;
  }
  FUN_009c9810(param_2,uVar1,param_1[4],param_1[5]);
  FUN_009c9810(param_2,extraout_r1_00,*(undefined1 *)(param_1 + 6),0);
  return;
}


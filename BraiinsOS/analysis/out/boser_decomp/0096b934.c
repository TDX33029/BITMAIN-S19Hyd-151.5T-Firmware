// FUN_0096b934 @ 0096b934 size=248 calls_out=5 calls_in=2
// strings: disable_cleanup

void FUN_0096b934(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  
  local_48 = 0x80000000;
  local_4c = 0;
  local_54 = 0;
  local_58 = 0;
  iVar1 = FUN_014a7ab8(&local_58,&DAT_0056d0e0,4,param_2[1],*param_2,param_2[1]);
  if ((((iVar1 == 0) &&
       (iVar1 = FUN_01271f48(&local_58,&DAT_0056c91c,4,param_2[3],param_2[4]), iVar1 == 0)) &&
      (iVar1 = FUN_014a7e18(&local_58,&DAT_0056a478,0x10,*(undefined1 *)(param_2 + 5)), iVar1 == 0))
     && (iVar1 = FUN_014a7e18(&local_58,"disable_cleanup",0xf,*(undefined1 *)((int)param_2 + 0x15)),
        iVar1 == 0)) {
    local_38 = local_58;
    uStack_34 = local_54;
    uStack_30 = uStack_50;
    uStack_2c = local_4c;
    local_28 = local_48;
    uStack_24 = uStack_44;
    uStack_20 = uStack_40;
    uStack_1c = uStack_3c;
    FUN_0196ac88(param_1);
    return;
  }
  *(int *)(param_1 + 4) = iVar1;
  *param_1 = 6;
  FUN_0127464c(&local_58);
  return;
}


// FUN_018fce10 @ 018fce10 size=304 calls_out=8 calls_in=2
// strings: 

undefined8 FUN_018fce10(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  undefined8 uVar3;
  undefined1 auStack_60 [24];
  undefined4 local_48;
  uint local_44;
  undefined4 local_40;
  undefined4 local_3c;
  uint local_38;
  undefined4 local_30;
  undefined4 uStack_2c;
  uint uStack_28;
  
  FUN_01b3b838(auStack_60);
  uVar2 = 0;
  if (param_4 != 0) {
    uVar2 = FUN_00705838(param_4 + 0x18,extraout_r1,0);
  }
  local_48 = 0;
  iVar1 = FUN_01b4aec0(auStack_60,&local_48,uVar2,0,param_1);
  if (iVar1 == 1) {
    local_44 = 0;
    iVar1 = FUN_01b4b350(auStack_60,0,&local_44,param_2,param_3);
    if ((iVar1 == 1) && (local_44 != 0)) {
      FUN_018a7af8(&local_40);
      uVar2 = local_3c;
      iVar1 = FUN_01b4b350(auStack_60,local_3c,&local_44,param_2,param_3);
      if (iVar1 == 1) {
        if (local_44 < local_38) {
          local_38 = local_44;
        }
        local_30 = local_40;
        uStack_2c = local_3c;
        uStack_28 = local_38;
        uVar3 = FUN_00703dd4();
        FUN_01b3b854(auStack_60);
        return uVar3;
      }
      FUN_0134bd64(local_40,uVar2);
    }
    FUN_01b3b854(auStack_60);
  }
  else {
    FUN_01b3b854(auStack_60);
  }
  return 0;
}


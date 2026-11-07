// FUN_007969fc @ 007969fc size=924 calls_out=4 calls_in=0
// strings: StratumClient | connection_detailsevent open/bosminer/bosminer/src/hub.rs:53bosminer::hubopen/bosminer/bosminer/src/hub.rsNo more work available for current job!pubkey | ConnectionDetailsStratumV2LegacyStratumV2 | connection_detailsevent open/bosminer/bosminer/src/hub.rs:53bosminer::hubopen/bosminer/bosminer/src/hub.rsNo more work available for current job!pubkey | ConnectionDetailsStratumV2LegacyStratumV2

undefined4 FUN_007969fc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint local_190;
  undefined4 local_18c;
  undefined4 auStack_180 [50];
  uint local_b8;
  undefined4 local_b4;
  int local_ac;
  undefined4 local_a8;
  int local_a0;
  undefined4 local_9c;
  int local_94;
  undefined4 local_90;
  undefined1 auStack_88 [8];
  undefined4 local_80;
  int local_7c;
  undefined1 *local_78;
  undefined1 local_71;
  undefined4 *local_70;
  undefined *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 *local_60;
  uint *local_5c;
  undefined *local_58;
  int *local_54;
  undefined *local_50;
  uint *local_4c;
  undefined *local_48;
  int *local_44;
  undefined *local_40;
  undefined1 *local_3c;
  undefined *local_38;
  int *local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined *local_28;
  
  FUN_007901fc(&local_190,param_1);
  uVar5 = *param_2;
  iVar6 = param_2[1];
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(uVar5,"StratumClient",0xd);
  uVar3 = 1;
  if (iVar1 != 0) goto LAB_00796a40;
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a79,3);
    if (((iVar1 != 0) ||
        (iVar1 = (*pcVar4)(uVar5,
                           "connection_detailsevent open/bosminer/bosminer/src/hub.rs:53bosminer::hubopen/bosminer/bosminer/src/hub.rsNo more work available for current job!pubkey"
                           ,0x12), iVar1 != 0)) ||
       (iVar1 = (*pcVar4)(uVar5,&DAT_00414a7c,2), iVar1 != 0)) goto LAB_00796a40;
    local_2c = &local_70;
    local_34 = &local_94;
    local_3c = auStack_88;
    local_44 = &local_a0;
    local_4c = &local_b8;
    local_54 = &local_ac;
    local_28 = &DAT_0185cb9c;
    local_70 = auStack_180;
    local_30 = &DAT_0185c128;
    local_38 = &DAT_0185c51c;
    local_40 = &DAT_0185c128;
    local_48 = &DAT_0185c54c;
    local_50 = &DAT_0185c128;
    local_58 = &DAT_0185cb8c;
    local_5c = &local_190;
    iVar1 = FUN_00fb36b8(param_2,"ConnectionDetailsStratumV2LegacyStratumV2",0x11,&DAT_0185cbac,7,
                         &local_5c,7);
joined_r0x00796d60:
    uVar3 = 1;
    if (iVar1 == 0) {
      bVar7 = (param_2[2] & 0x800000) != 0;
      pcVar2 = " }";
      if (bVar7) {
        pcVar2 = "}";
      }
      uVar3 = 1;
      if (!bVar7) {
        uVar3 = 2;
      }
      uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,pcVar2,uVar3);
    }
  }
  else {
    iVar1 = (*pcVar4)(uVar5,&DAT_00414a7e,3);
    if (iVar1 != 0) goto LAB_00796a40;
    local_68 = param_2[2];
    local_64 = param_2[3];
    local_78 = &local_71;
    local_70 = &local_80;
    local_71 = 1;
    local_6c = &DAT_01880dc4;
    local_80 = uVar5;
    local_7c = iVar6;
    iVar1 = FUN_00fb1f64(local_70,
                         "connection_detailsevent open/bosminer/bosminer/src/hub.rs:53bosminer::hubopen/bosminer/bosminer/src/hub.rsNo more work available for current job!pubkey"
                         ,0x12);
    if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_80,&DAT_00414a7c,2), iVar1 == 0)) {
      local_2c = &local_60;
      local_34 = &local_94;
      local_3c = auStack_88;
      local_44 = &local_a0;
      local_4c = &local_b8;
      local_54 = &local_ac;
      local_28 = &DAT_0185cb9c;
      local_60 = auStack_180;
      local_30 = &DAT_0185c128;
      local_38 = &DAT_0185c51c;
      local_40 = &DAT_0185c128;
      local_48 = &DAT_0185c54c;
      local_50 = &DAT_0185c128;
      local_58 = &DAT_0185cb8c;
      local_5c = &local_190;
      iVar1 = FUN_00fb36b8(&local_70,"ConnectionDetailsStratumV2LegacyStratumV2",0x11,&DAT_0185cbac,
                           7,&local_5c,7);
      if (iVar1 == 0) {
        iVar1 = (**(code **)(local_6c + 0xc))(local_70,&DAT_00414a81,2);
        goto joined_r0x00796d60;
      }
    }
    uVar3 = 1;
  }
LAB_00796a40:
  if ((local_190 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_18c);
  }
  if (local_ac != 0) {
    thunk_FUN_016d3fb4(local_a8);
  }
  if ((local_b8 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_b4);
  }
  if (local_a0 != 0) {
    thunk_FUN_016d3fb4(local_9c);
  }
  if (local_94 != 0) {
    thunk_FUN_016d3fb4(local_90);
  }
  return uVar3;
}


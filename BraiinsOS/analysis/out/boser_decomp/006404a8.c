// FUN_006404a8 @ 006404a8 size=488 calls_out=2 calls_in=72
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_006404a8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  int iVar1;
  undefined4 *puVar2;
  char *pcVar3;
  undefined4 *puVar4;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 *local_68;
  undefined1 *local_64;
  undefined4 *local_60;
  code *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined4 **local_28;
  
  puVar2 = (undefined4 *)param_1[6];
  uStack_80 = param_5;
  if ((puVar2 != (undefined4 *)0x0) && (5 - puVar2[2] <= DAT_01d51b00)) {
    DataMemoryBarrier(0xb);
    local_7c = 5;
    puVar4 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar4 = &DAT_01cfc5e0;
    }
    pcVar3 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    uStack_84 = param_4;
    local_78 = param_2;
    local_74 = param_3;
    iVar1 = (*(code *)puVar4[3])(pcVar3,&local_7c);
    if (iVar1 != 0) {
      local_34 = param_2;
      local_30 = param_3;
      if (param_1[2] == 2) {
        local_3c = puVar2[0xe];
        local_4c = puVar2[0xb];
        local_48 = puVar2[0xc];
        local_40 = puVar2[0xd];
        local_58 = *puVar2;
        local_54 = puVar2[1];
        local_50 = 1;
        if (local_4c == 0) {
          local_50 = 2;
        }
        local_38 = 5;
        local_44 = 1;
        if (local_40 == 0) {
          local_44 = 2;
        }
        local_28 = (undefined4 **)param_5;
        local_2c = (undefined *)param_4;
        (*(code *)puVar4[4])(pcVar3,&local_58);
      }
      else {
        local_70 = *param_1;
        local_6c = param_1[1];
        local_58 = *puVar2;
        local_54 = puVar2[1];
        local_4c = puVar2[0xb];
        local_48 = puVar2[0xc];
        local_40 = puVar2[0xd];
        local_3c = puVar2[0xe];
        local_50 = 1;
        if (local_4c == 0) {
          local_50 = 2;
        }
        local_28 = &local_68;
        local_38 = 5;
        local_44 = 1;
        local_60 = &local_70;
        local_2c = &DAT_005856e8;
        if (local_40 == 0) {
          local_44 = 2;
        }
        local_68 = &uStack_84;
        local_5c = FUN_012fd074;
        local_64 = &LAB_012fff30;
        (*(code *)puVar4[4])(pcVar3,&local_58);
      }
    }
  }
  return;
}


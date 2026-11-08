// FUN_01822488 @ 01822488 size=660 calls_out=3 calls_in=21
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01822488(undefined4 *param_1)

{
  char *pcVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined *puStack_94;
  undefined4 uStack_90;
  undefined **local_8c;
  undefined2 *local_88;
  undefined *local_84;
  undefined ***local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined **local_68;
  undefined1 *local_64;
  undefined4 *local_60;
  code *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  int local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined *local_2c;
  undefined ***local_28;
  
  if (param_1[2] != 2) {
    if ((param_1[2] & 1) == 0) {
      iVar2 = param_1[3];
      iVar3 = param_1[4];
    }
    else {
      iVar3 = param_1[4];
      iVar2 = param_1[3] + (*(int *)(iVar3 + 8) - 1U & 0xfffffff8) + 8;
    }
    (**(code **)(iVar3 + 0x40))(iVar2,param_1[1],*param_1,param_1[1]);
  }
  if ((DAT_01d51ae9 == '\0') && (puVar4 = (undefined4 *)param_1[6], puVar4 != (undefined4 *)0x0)) {
    puStack_94 = (undefined *)puVar4[3];
    uStack_90 = puVar4[4];
    local_8c = &puStack_94;
    local_88 = &DAT_0132b6a0;
    local_84 = &DAT_00593eec;
    local_80 = &local_8c;
    if (5 - puVar4[2] <= DAT_01d51b00) {
      DataMemoryBarrier(0xb);
      local_74 = 0xd;
      local_78 = &DAT_005312cd;
      local_7c = 5;
      puVar5 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar5 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar5[3])(pcVar1,&local_7c);
      if (iVar2 != 0) {
        if (param_1[2] == 2) {
          local_4c = puVar4[0xb];
          local_40 = puVar4[0xd];
          local_58 = *puVar4;
          local_54 = puVar4[1];
          uStack_48 = puVar4[0xc];
          local_3c = puVar4[0xe];
          local_50 = 1;
          if (local_4c == 0) {
            local_50 = 2;
          }
          local_44 = 1;
          if (local_40 == 0) {
            local_44 = 2;
          }
          local_30 = 0xd;
          local_2c = &DAT_00593eec;
          local_34 = &DAT_005312cd;
          local_38 = 5;
          local_28 = &local_8c;
          (*(code *)puVar5[4])(pcVar1,&local_58);
        }
        else {
          local_58 = *puVar4;
          local_54 = puVar4[1];
          local_4c = puVar4[0xb];
          uStack_48 = puVar4[0xc];
          local_40 = puVar4[0xd];
          local_3c = puVar4[0xe];
          local_70 = *param_1;
          local_6c = param_1[1];
          local_50 = 1;
          if (local_4c == 0) {
            local_50 = 2;
          }
          local_28 = &local_68;
          local_2c = &DAT_005856e8;
          local_30 = 0xd;
          local_38 = 5;
          local_44 = 1;
          local_34 = &DAT_005312cd;
          if (local_40 == 0) {
            local_44 = 2;
          }
          local_60 = &local_70;
          local_64 = &LAB_012fff30;
          local_68 = &local_84;
          local_5c = FUN_012fd074;
          (*(code *)puVar5[4])(pcVar1,&local_58);
        }
      }
    }
  }
  FUN_013536dc(param_1);
  return;
}


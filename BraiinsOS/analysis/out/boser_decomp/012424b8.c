// FUN_012424b8 @ 012424b8 size=1056 calls_out=11 calls_in=1
// strings: bosminer_config::supportopen/bosminer/bosminer-config/src/support.rsstruct AutotuningV1struct PowerScalingV1power_scalingan array of length 2 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | bosminer_config::supportopen/bosminer/bosminer-config/src/support.rsstruct AutotuningV1struct PowerScalingV1power_scalingan array of length 2 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_012424b8(undefined4 *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  undefined1 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined1 auStack_d0 [48];
  undefined4 ***local_a0;
  undefined4 local_9c;
  undefined4 *local_98;
  undefined4 ***local_94;
  undefined **local_90;
  undefined4 *local_8c;
  undefined4 **local_88;
  int iStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 local_78;
  undefined *local_70;
  int **ppiStack_6c;
  int *piStack_68;
  code *pcStack_64;
  undefined4 **local_60;
  undefined **local_5c;
  undefined1 *local_58;
  int local_54;
  undefined1 local_50;
  undefined1 auStack_4f [43];
  
  uVar7 = *param_2;
  uVar3 = 0x15;
  iVar6 = 2;
  if ((int)uVar7 < 0) {
    uVar3 = uVar7 ^ 0x80000000;
  }
  uVar5 = 4;
  if (uVar3 == 0x10) {
LAB_01242590:
    if (uVar7 != 0x80000011) {
      FUN_012222e0(param_2);
    }
  }
  else {
    if (uVar3 == 0x11) {
      puVar8 = (undefined4 *)param_2[1];
      local_88 = (undefined4 **)*puVar8;
      iStack_84 = puVar8[1];
      uStack_80 = puVar8[2];
      uStack_7c = puVar8[3];
      FUN_0122a118(&local_54);
      iVar6 = 2;
      if (local_54 != 2) {
        FUN_01bed4e2(auStack_d0,auStack_4f,0x2b);
        iVar6 = local_54;
      }
      thunk_FUN_01be4678(puVar8);
      uVar5 = local_50;
      goto LAB_01242590;
    }
    if (uVar3 == 0x12) goto LAB_01242590;
    FUN_0122a118(&local_54,param_2);
    iVar6 = 2;
    uVar5 = local_50;
    if (local_54 != 2) {
      FUN_01bed4e2(auStack_d0,auStack_4f,0x2b);
      iVar6 = local_54;
    }
  }
  if (iVar6 == 2) {
    *(undefined1 *)(param_1 + 1) = uVar5;
    *param_1 = 2;
  }
  else {
    local_54 = iVar6;
    local_50 = uVar5;
    FUN_01bed4e2(auStack_4f,auStack_d0,0x2b);
    if ((DAT_01d50f88 < 4) &&
       (((DAT_01d4cc34 - 1 < 2 ||
         ((DAT_01d4cc34 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4cc2c), cVar2 != '\0')))) &&
        (iVar6 = FUN_01aaa278(DAT_01d4cc2c), iVar6 != 0)))) {
      if (*(int *)(DAT_01d4cc2c + 0x20) == 0) {
LAB_012428c0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c24cbc);
      }
      local_90 = &local_70;
      uStack_80 = *(undefined4 *)(DAT_01d4cc2c + 0x24);
      uStack_7c = *(undefined4 *)(DAT_01d4cc2c + 0x28);
      local_98 = (undefined4 *)(DAT_01d4cc2c + 0x1c);
      local_88 = (undefined4 **)*local_98;
      local_94 = &local_88;
      local_a0 = &local_94;
      local_78 = 0;
      local_9c = 1;
      ppiStack_6c = &piStack_68;
      local_8c = (undefined4 *)&DAT_01d2ea4c;
      local_70 = &DAT_00575b6a;
      pcStack_64 = FUN_01a4a064;
      iStack_84 = *(int *)(DAT_01d4cc2c + 0x20);
      piStack_68 = &local_54;
      FUN_01aaaecc(DAT_01d4cc2c,&local_a0);
      iVar6 = DAT_01d4cc2c;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_5c = *(undefined ***)(DAT_01d4cc2c + 0x14);
        local_58 = *(undefined1 **)(DAT_01d4cc2c + 0x18);
        local_60 = (undefined4 **)0x2;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar8[3])(pcVar1,&local_60);
        if (iVar4 != 0) {
          FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_60,&local_a0);
        }
      }
    }
    else {
      iVar6 = DAT_01d4cc2c;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_9c = *(undefined4 *)(DAT_01d4cc2c + 0x14);
        local_98 = *(undefined4 **)(DAT_01d4cc2c + 0x18);
        local_a0 = (undefined4 ***)0x2;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar8[3])(pcVar1,&local_a0);
        if (iVar4 != 0) {
          local_8c = (undefined4 *)(DAT_01d4cc2c + 0x1c);
          if (*(int *)(DAT_01d4cc2c + 0x20) == 0) goto LAB_012428c0;
          local_5c = &local_70;
          uStack_80 = *(undefined4 *)(DAT_01d4cc2c + 0x24);
          uStack_7c = *(undefined4 *)(DAT_01d4cc2c + 0x28);
          local_60 = &local_88;
          local_94 = &local_60;
          local_78 = 0;
          local_90 = (undefined **)&DAT_00000001;
          ppiStack_6c = &piStack_68;
          local_58 = &DAT_01d2ea4c;
          local_70 = &DAT_00575b6a;
          pcStack_64 = FUN_01a4a064;
          local_88 = (undefined4 **)*local_8c;
          iStack_84 = *(int *)(DAT_01d4cc2c + 0x20);
          piStack_68 = &local_54;
          FUN_01aaa328(iVar6,pcVar1,puVar8[4],&local_a0,&local_94);
        }
      }
    }
    *param_1 = 2;
    *(undefined1 *)(param_1 + 1) = 4;
    FUN_00a25ec4(&local_54);
  }
  return;
}


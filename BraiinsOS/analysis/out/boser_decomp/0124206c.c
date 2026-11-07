// FUN_0124206c @ 0124206c size=956 calls_out=9 calls_in=1
// strings: bosminer_config::supportopen/bosminer/bosminer-config/src/support.rsstruct AutotuningV1struct PowerScalingV1power_scalingan array of length 2 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | bosminer_config::supportopen/bosminer/bosminer-config/src/support.rsstruct AutotuningV1struct PowerScalingV1power_scalingan array of length 2 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0124206c(undefined4 *param_1,uint *param_2)

{
  char *pcVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined1 uVar7;
  undefined1 auStack_c8 [44];
  undefined4 ****local_9c;
  undefined4 local_98;
  undefined4 *local_94;
  undefined4 ****local_90;
  undefined **local_8c;
  undefined4 *local_88;
  undefined4 ***local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined *local_70;
  int **ppiStack_6c;
  int *piStack_68;
  code *pcStack_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined1 *local_58;
  int local_54;
  undefined1 local_50;
  undefined1 auStack_4f [43];
  
  uVar3 = 0x15;
  uVar7 = 2;
  if ((int)*param_2 < 0) {
    uVar3 = *param_2 ^ 0x80000000;
  }
  if (uVar3 != 0x10) {
    if (uVar3 == 0x11) {
      param_2 = (uint *)param_2[1];
    }
    else if (uVar3 == 0x12) goto LAB_012420ec;
    FUN_01235d00(&local_54,param_2);
    iVar4 = 2;
    if (local_54 != 2) {
      FUN_01bed4e2(auStack_c8,auStack_4f,0x2b);
      iVar4 = local_54;
    }
    uVar7 = local_50;
    if (iVar4 != 2) {
      local_54 = iVar4;
      FUN_01bed4e2(auStack_4f,auStack_c8,0x2b);
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4cc34 - 1 < 2 ||
           ((DAT_01d4cc34 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4cc2c), cVar2 != '\0')))) &&
          (iVar4 = FUN_01aaa278(DAT_01d4cc2c), iVar4 != 0)))) {
        local_80 = *(int *)(DAT_01d4cc2c + 0x20);
        if (local_80 == 0) {
LAB_01242410:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c24cbc);
        }
        local_8c = &local_70;
        local_7c = *(undefined4 *)(DAT_01d4cc2c + 0x24);
        local_78 = *(undefined4 *)(DAT_01d4cc2c + 0x28);
        local_94 = (undefined4 *)(DAT_01d4cc2c + 0x1c);
        local_84 = (undefined4 ***)*local_94;
        local_90 = &local_84;
        local_9c = &local_90;
        local_74 = 0;
        local_98 = 1;
        ppiStack_6c = &piStack_68;
        local_88 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = &DAT_00575b6a;
        pcStack_64 = FUN_01a4a064;
        piStack_68 = &local_54;
        FUN_01aaaecc(DAT_01d4cc2c,&local_9c);
        iVar4 = DAT_01d4cc2c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_5c = *(undefined ***)(DAT_01d4cc2c + 0x14);
          local_58 = *(undefined1 **)(DAT_01d4cc2c + 0x18);
          local_60 = (undefined4 ***)0x2;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar6[3])(pcVar1,&local_60);
          if (iVar5 != 0) {
            FUN_01aaa328(iVar4,pcVar1,puVar6[4],&local_60,&local_9c);
          }
        }
      }
      else {
        iVar4 = DAT_01d4cc2c;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_98 = *(undefined4 *)(DAT_01d4cc2c + 0x14);
          local_94 = *(undefined4 **)(DAT_01d4cc2c + 0x18);
          local_9c = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          puVar6 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar6 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar5 = (*(code *)puVar6[3])(pcVar1,&local_9c);
          if (iVar5 != 0) {
            local_88 = (undefined4 *)(DAT_01d4cc2c + 0x1c);
            local_84 = (undefined4 ***)*local_88;
            local_80 = *(int *)(DAT_01d4cc2c + 0x20);
            if (local_80 == 0) goto LAB_01242410;
            local_5c = &local_70;
            local_7c = *(undefined4 *)(DAT_01d4cc2c + 0x24);
            local_78 = *(undefined4 *)(DAT_01d4cc2c + 0x28);
            local_60 = &local_84;
            local_90 = &local_60;
            local_74 = 0;
            local_8c = (undefined **)&DAT_00000001;
            ppiStack_6c = &piStack_68;
            local_58 = &DAT_01d2ea4c;
            local_70 = &DAT_00575b6a;
            pcStack_64 = FUN_01a4a064;
            piStack_68 = &local_54;
            FUN_01aaa328(iVar4,pcVar1,puVar6[4],&local_9c,&local_90);
          }
        }
      }
      *param_1 = 2;
      *(undefined1 *)(param_1 + 1) = 2;
      FUN_00a25ec4(&local_54);
      return;
    }
  }
LAB_012420ec:
  *param_1 = 2;
  *(undefined1 *)(param_1 + 1) = uVar7;
  return;
}


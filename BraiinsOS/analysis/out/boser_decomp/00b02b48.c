// FUN_00b02b48 @ 00b02b48 size=920 calls_out=6 calls_in=5
// strings: expected Gauge; ignoring sample | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00b02b48(undefined4 *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 *extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r6;
  undefined4 *puVar4;
  undefined4 unaff_r7;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 unaff_r11;
  undefined4 uVar7;
  undefined4 **local_94;
  undefined4 local_90;
  undefined4 *local_8c;
  int *local_88;
  undefined4 local_84;
  int *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 *local_70;
  undefined4 ***local_6c;
  undefined1 *local_68;
  undefined4 *local_64;
  int **local_60;
  undefined *local_5c;
  undefined4 local_58;
  uint uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 local_44;
  uint uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 **local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  if (*param_2 == 1) {
    uVar6 = 0;
    *(undefined8 *)(param_1 + 2) = *(undefined8 *)(param_2 + 2);
  }
  else {
    if ((DAT_01d50f88 < 5) &&
       ((DAT_01d4b9fc - 1 < 2 ||
        ((DAT_01d4b9fc != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4b9f4), cVar1 != '\0')))))) {
      uVar7 = 0xb02bb0;
      iVar2 = FUN_01aaa278(DAT_01d4b9f4);
      if (iVar2 != 0) {
        uStack_40 = *(uint *)(DAT_01d4b9f4 + 0x20);
        local_8c = extraout_r2;
        if (uStack_40 != 0) {
          unaff_r6 = *(undefined4 *)(DAT_01d4b9f4 + 0x24);
          unaff_r7 = *(undefined4 *)(DAT_01d4b9f4 + 0x28);
          local_8c = (undefined4 *)(DAT_01d4b9f4 + 0x1c);
          uVar7 = *local_8c;
          local_48 = 0;
          local_84 = 0x3f;
          local_88 = (int *)0x3eb6bd;
          local_58 = uVar7;
          uStack_54 = uStack_40;
          uStack_50 = unaff_r6;
          uStack_4c = unaff_r7;
        }
        if (1 < uStack_40) {
          local_60 = &local_80;
          uVar6 = 1;
          local_64 = &local_44;
          local_6c = (undefined4 ***)&local_88;
          local_70 = &local_58;
          local_94 = &local_70;
          local_34 = 1;
          local_90 = 2;
          local_80 = param_2 + 0xc;
          local_5c = &DAT_01c119e8;
          local_68 = &DAT_01d2ea4c;
          local_44 = uVar7;
          uStack_3c = unaff_r6;
          uStack_38 = unaff_r7;
          FUN_01aaaecc(DAT_01d4b9f4,&local_94);
          iVar2 = DAT_01d4b9f4;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_2c = *(undefined4 *)(DAT_01d4b9f4 + 0x14);
            local_28 = *(undefined4 **)(DAT_01d4b9f4 + 0x18);
            local_30 = (undefined4 **)0x1;
            DataMemoryBarrier(0xb);
            puVar4 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar4 = &DAT_01cfc5e0;
            }
            pcVar5 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar3 = (*(code *)puVar4[3])(pcVar5,&local_30);
            if (iVar3 != 0) {
              FUN_01aaa328(iVar2,pcVar5,puVar4[4],&local_30,&local_94);
            }
          }
          goto LAB_00b02d4c;
        }
        goto LAB_00b02e24;
      }
    }
    iVar2 = DAT_01d4b9f4;
    uVar6 = 1;
    if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
      local_78 = *(undefined4 *)(DAT_01d4b9f4 + 0x14);
      local_74 = *(undefined4 *)(DAT_01d4b9f4 + 0x18);
      local_7c = 1;
      DataMemoryBarrier(0xb);
      puVar4 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar4 = &DAT_01cfc5e0;
      }
      pcVar5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar4[3])(pcVar5,&local_7c);
      if (iVar3 != 0) {
        local_28 = (undefined4 *)(DAT_01d4b9f4 + 0x1c);
        local_44 = *local_28;
        uStack_40 = *(uint *)(DAT_01d4b9f4 + 0x20);
        uStack_3c = extraout_r3;
        if (uStack_40 != 0) {
          uStack_3c = *(undefined4 *)(DAT_01d4b9f4 + 0x24);
          unaff_r11 = *(undefined4 *)(DAT_01d4b9f4 + 0x28);
          local_48 = 0;
          local_90 = 0x3f;
          local_94 = (undefined4 **)0x3eb6bd;
          local_58 = local_44;
          uStack_54 = uStack_40;
          uStack_50 = uStack_3c;
          uStack_4c = unaff_r11;
        }
        if (uStack_40 < 2) {
LAB_00b02e24:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10a64);
        }
        local_60 = &local_88;
        local_64 = &local_44;
        local_6c = &local_94;
        local_70 = &local_58;
        local_30 = &local_70;
        uVar6 = 1;
        local_34 = 1;
        local_2c = 2;
        local_68 = &DAT_01d2ea4c;
        local_5c = &DAT_01c119e8;
        local_88 = param_2 + 0xc;
        uStack_38 = unaff_r11;
        FUN_01aaa328(iVar2,pcVar5,puVar4[4],&local_7c,&local_30);
      }
    }
  }
LAB_00b02d4c:
  *param_1 = uVar6;
  param_1[1] = 0;
  return;
}


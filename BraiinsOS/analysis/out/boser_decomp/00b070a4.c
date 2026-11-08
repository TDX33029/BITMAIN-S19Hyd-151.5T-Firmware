// FUN_00b070a4 @ 00b070a4 size=1748 calls_out=7 calls_in=4
// strings: FieldSet corrupted (this is a bug) | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug) | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_00b070a4(int param_1,undefined4 param_2,undefined4 param_3)

{
  ulonglong uVar1;
  char cVar2;
  byte *pbVar3;
  int iVar4;
  int iVar5;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  undefined4 *extraout_r2_00;
  undefined4 *extraout_r2_01;
  undefined4 *extraout_r2_02;
  undefined4 *extraout_r2_03;
  undefined4 *extraout_r2_04;
  undefined4 *extraout_r2_05;
  undefined4 *extraout_r2_06;
  undefined4 *extraout_r2_07;
  undefined4 uVar7;
  undefined4 *extraout_r2_08;
  undefined4 *extraout_r2_09;
  undefined4 extraout_r3;
  uint uVar8;
  undefined4 extraout_r3_00;
  undefined4 ***pppuVar9;
  uint unaff_r6;
  char *pcVar10;
  undefined4 unaff_r7;
  undefined4 *puVar11;
  uint unaff_r8;
  undefined4 unaff_r9;
  bool bVar12;
  ulonglong uVar13;
  undefined4 ***pppuVar14;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 **local_8c;
  undefined4 local_88;
  undefined4 *local_84;
  undefined4 *local_80;
  undefined **local_7c;
  undefined1 *local_78;
  undefined4 *local_74;
  int *local_70;
  undefined *local_6c;
  undefined4 local_68;
  uint uStack_64;
  uint uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined *local_54;
  undefined4 **local_50;
  undefined4 *local_4c;
  undefined2 *local_48;
  undefined4 local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  int local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  undefined4 *local_24;
  
  uStack_94 = param_2;
  uStack_90 = param_3;
  uVar13 = FUN_01657df4(param_1 + 0x10);
  iVar4 = (int)(uVar13 >> 0x20);
  pbVar3 = (byte *)uVar13;
  puVar6 = extraout_r2;
  if (pbVar3 == (byte *)0x0) {
    if ((DAT_01d50f88 < 5) &&
       (((DAT_01d4ba14 - 1 < 2 ||
         ((DAT_01d4ba14 != 0 &&
          (cVar2 = FUN_01aaafa8(&DAT_01d4ba0c), puVar6 = extraout_r2_09, cVar2 != '\0')))) &&
        (iVar4 = FUN_01aaa278(DAT_01d4ba0c), puVar6 = extraout_r2_00, iVar4 != 0)))) {
      local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
      local_44 = extraout_r3;
      if (local_40 != 0) {
        unaff_r6 = *(uint *)(DAT_01d4ba0c + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
        puVar6 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
        local_44 = *puVar6;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &uStack_94;
        local_54 = &DAT_00576c69;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        uStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) {
LAB_00b07188:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10fc8);
      }
      local_70 = &local_30;
      local_74 = &local_44;
      local_7c = &local_54;
      local_80 = &local_68;
      local_8c = &local_80;
      local_34 = 1;
      local_88 = 2;
      local_30 = param_1 + 0x30;
      local_6c = &DAT_01c119e8;
      local_78 = &DAT_01d2ea4c;
      local_84 = puVar6;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba0c,&local_8c);
      puVar6 = extraout_r2_06;
      if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 == 0)) goto LAB_00b0772c;
      iVar4 = DAT_01d4ba0c;
LAB_00b076b4:
      pppuVar14 = &local_8c;
      local_28 = *(undefined4 *)(iVar4 + 0x14);
      local_24 = *(undefined4 **)(iVar4 + 0x18);
      local_2c = (undefined4 **)&DAT_00000001;
      DataMemoryBarrier(0xb);
      puVar11 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar11 = &DAT_01cfc5e0;
      }
      pcVar10 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar11[3])(pcVar10,&local_2c);
      puVar6 = extraout_r2_07;
      if (iVar5 != 0) {
        uVar7 = puVar11[4];
        pppuVar9 = &local_2c;
LAB_00b07600:
        FUN_01aaa328(iVar4,pcVar10,uVar7,pppuVar9,pppuVar14);
        puVar6 = extraout_r2_05;
      }
    }
    else {
      iVar4 = DAT_01d4ba0c;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_88 = *(undefined4 *)(DAT_01d4ba0c + 0x14);
        local_84 = *(undefined4 **)(DAT_01d4ba0c + 0x18);
        local_8c = (undefined4 **)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
        }
        pcVar10 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar10,&local_8c);
        puVar6 = extraout_r2_04;
        if (iVar5 != 0) {
          local_24 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
          local_44 = *local_24;
          local_40 = *(uint *)(DAT_01d4ba0c + 0x20);
          if (local_40 != 0) {
            unaff_r8 = *(uint *)(DAT_01d4ba0c + 0x24);
            unaff_r9 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
            local_58 = 0;
            local_50 = &local_4c;
            local_4c = &uStack_94;
            local_54 = &DAT_00576c69;
            local_48 = &DAT_0132b6a0;
            local_68 = local_44;
            uStack_64 = local_40;
            uStack_60 = unaff_r8;
            uStack_5c = unaff_r9;
          }
          if (local_40 < 2) goto LAB_00b07188;
          goto LAB_00b07584;
        }
      }
    }
  }
  else {
    if (iVar4 != 0) {
      if (iVar4 == 1) {
        puVar6 = (undefined4 *)(uint)*pbVar3;
        if (puVar6 == (undefined4 *)&DAT_0000002b || puVar6 == (undefined4 *)&DAT_0000002d)
        goto LAB_00b07234;
      }
      else {
        puVar6 = (undefined4 *)(uint)*pbVar3;
      }
      if (puVar6 == (undefined4 *)&DAT_0000002b) {
        uVar13 = CONCAT44(iVar4 + -1,pbVar3 + 1);
      }
      if (uVar13 < 0x900000000) {
        puVar6 = (undefined4 *)0x0;
        while( true ) {
          iVar4 = (int)(uVar13 >> 0x20);
          if (iVar4 == 0) break;
          uVar8 = *(byte *)uVar13 - 0x30;
          if (9 < uVar8) goto LAB_00b07234;
          uVar13 = CONCAT44(iVar4 + -1,(byte *)uVar13 + 1);
          puVar6 = (undefined4 *)(uVar8 + (int)puVar6 * 10);
        }
        uVar7 = 0;
        goto LAB_00b07730;
      }
      uVar7 = 0;
      unaff_r7 = 10;
      puVar6 = (undefined4 *)0x0;
      while( true ) {
        iVar4 = (int)(uVar13 >> 0x20);
        if (iVar4 == 0) goto LAB_00b07730;
        uVar1 = ZEXT48(puVar6);
        puVar6 = (undefined4 *)(uVar1 * 10);
        unaff_r6 = (uint)(uVar1 * 10 >> 0x20);
        if (unaff_r6 != 0) break;
        uVar8 = *(byte *)uVar13 - 0x30;
        bVar12 = CARRY4(uVar8,(uint)puVar6);
        puVar6 = (undefined4 *)(uVar8 + (int)puVar6);
        unaff_r6 = (uint)bVar12;
        if ((9 < uVar8) || (uVar13 = CONCAT44(iVar4 + -1,(byte *)uVar13 + 1), unaff_r6 != 0)) break;
      }
    }
LAB_00b07234:
    if (((DAT_01d50f88 < 5) &&
        ((DAT_01d4ba08 - 1 < 2 ||
         ((DAT_01d4ba08 != 0 &&
          (cVar2 = FUN_01aaafa8(&DAT_01d4ba00), puVar6 = extraout_r2_08, cVar2 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4ba00), puVar6 = extraout_r2_01, iVar4 != 0)) {
      local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
      local_44 = extraout_r3_00;
      if (local_40 != 0) {
        unaff_r6 = *(uint *)(DAT_01d4ba00 + 0x24);
        unaff_r7 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
        puVar6 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
        local_44 = *puVar6;
        local_58 = 0;
        local_50 = &local_4c;
        local_4c = &uStack_94;
        local_54 = &DAT_005b7ad9;
        local_48 = &DAT_0132b6a0;
        local_68 = local_44;
        uStack_64 = local_40;
        uStack_60 = unaff_r6;
        uStack_5c = unaff_r7;
      }
      if (local_40 < 2) {
LAB_00b07474:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10fd8);
      }
      local_70 = &local_30;
      local_74 = &local_44;
      local_7c = &local_54;
      local_80 = &local_68;
      local_8c = &local_80;
      local_34 = 1;
      local_88 = 2;
      local_30 = param_1 + 0x30;
      local_6c = &DAT_01c119e8;
      local_78 = &DAT_01d2ea4c;
      local_84 = puVar6;
      local_3c = unaff_r6;
      local_38 = unaff_r7;
      FUN_01aaaecc(DAT_01d4ba00,&local_8c);
      puVar6 = extraout_r2_02;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        iVar4 = DAT_01d4ba00;
        goto LAB_00b076b4;
      }
    }
    else {
      iVar4 = DAT_01d4ba00;
      if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
        local_88 = *(undefined4 *)(DAT_01d4ba00 + 0x14);
        local_84 = *(undefined4 **)(DAT_01d4ba00 + 0x18);
        local_8c = (undefined4 **)&DAT_00000001;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
        }
        pcVar10 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar5 = (*(code *)puVar11[3])(pcVar10,&local_8c);
        puVar6 = extraout_r2_03;
        if (iVar5 != 0) {
          local_24 = (undefined4 *)(DAT_01d4ba00 + 0x1c);
          local_44 = *local_24;
          local_40 = *(uint *)(DAT_01d4ba00 + 0x20);
          if (local_40 != 0) {
            unaff_r8 = *(uint *)(DAT_01d4ba00 + 0x24);
            unaff_r9 = *(undefined4 *)(DAT_01d4ba00 + 0x28);
            local_58 = 0;
            local_50 = &local_4c;
            local_4c = &uStack_94;
            local_54 = &DAT_005b7ad9;
            local_48 = &DAT_0132b6a0;
            local_68 = local_44;
            uStack_64 = local_40;
            uStack_60 = unaff_r8;
            uStack_5c = unaff_r9;
          }
          if (local_40 < 2) goto LAB_00b07474;
LAB_00b07584:
          local_70 = &local_30;
          local_74 = &local_44;
          local_7c = &local_54;
          local_80 = &local_68;
          local_2c = &local_80;
          local_34 = 1;
          pppuVar9 = &local_8c;
          local_28 = 2;
          local_30 = param_1 + 0x30;
          pppuVar14 = &local_2c;
          local_6c = &DAT_01c119e8;
          local_78 = &DAT_01d2ea4c;
          uVar7 = puVar11[4];
          local_3c = unaff_r8;
          local_38 = unaff_r9;
          goto LAB_00b07600;
        }
      }
    }
  }
LAB_00b0772c:
  uVar7 = 1;
LAB_00b07730:
  return CONCAT44(puVar6,uVar7);
}


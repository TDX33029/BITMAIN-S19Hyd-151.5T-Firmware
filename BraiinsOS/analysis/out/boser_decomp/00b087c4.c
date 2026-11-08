// FUN_00b087c4 @ 00b087c4 size=1060 calls_out=10 calls_in=2
// strings: boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::metrics_scraper::metrics_datatypes::utilsopen/boser/boser/src/metrics_scraper/metrics_datatypes/utils.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_00b087c4(int *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 *extraout_r2;
  undefined4 *puVar6;
  undefined4 extraout_r3;
  undefined4 ***pppuVar7;
  undefined4 unaff_r4;
  undefined4 uVar8;
  undefined4 unaff_r7;
  undefined4 unaff_r10;
  undefined4 unaff_r11;
  longlong lVar9;
  undefined4 ***pppuVar10;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 **local_90;
  undefined4 local_8c;
  undefined4 *local_88;
  undefined4 *local_84;
  undefined **local_80;
  undefined1 *local_7c;
  undefined4 *local_78;
  int *local_74;
  undefined *local_70;
  undefined4 local_6c;
  uint uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_5c;
  undefined *local_58;
  undefined4 **local_54;
  undefined4 *local_50;
  undefined2 *local_4c;
  undefined4 local_48;
  uint uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  int local_34;
  undefined4 **local_30;
  undefined4 local_2c;
  undefined4 *local_28;
  
  local_98 = param_3;
  local_94 = param_4;
  lVar9 = FUN_01657df4(param_2 + 0x10,param_3,param_4);
  iVar2 = (int)((ulonglong)lVar9 >> 0x20);
  if ((int)lVar9 != 0) {
    uVar8 = 0;
    if (lVar9 < 0) {
LAB_00b08804:
                    /* WARNING: Subroutine does not return */
      FUN_00664620(uVar8,iVar2);
    }
    if (iVar2 == 0) {
      iVar4 = 1;
      iVar3 = 0;
    }
    else {
      uVar8 = 1;
      iVar4 = FUN_01298504(iVar2,1);
      iVar3 = iVar2;
      if (iVar4 == 0) goto LAB_00b08804;
    }
    FUN_01bed4e2(iVar4,(int)lVar9,iVar2);
    *param_1 = iVar3;
    param_1[1] = iVar4;
    param_1[2] = iVar2;
    return;
  }
  if ((DAT_01d50f88 < 5) &&
     (((DAT_01d4ba14 - 1 < 2 ||
       ((DAT_01d4ba14 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ba0c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4ba0c), iVar2 != 0)))) {
    uStack_44 = *(uint *)(DAT_01d4ba0c + 0x20);
    puVar6 = extraout_r2;
    local_48 = extraout_r3;
    if (uStack_44 != 0) {
      unaff_r4 = *(undefined4 *)(DAT_01d4ba0c + 0x24);
      unaff_r7 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
      puVar6 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
      local_48 = *puVar6;
      local_5c = 0;
      local_54 = &local_50;
      local_50 = &local_98;
      local_58 = &DAT_00576c69;
      local_4c = &DAT_0132b6a0;
      local_6c = local_48;
      uStack_68 = uStack_44;
      uStack_64 = unaff_r4;
      uStack_60 = unaff_r7;
    }
    if (uStack_44 < 2) {
LAB_00b08b30:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c10fc8);
    }
    local_74 = &local_34;
    local_78 = &local_48;
    local_80 = &local_58;
    local_84 = &local_6c;
    local_90 = &local_84;
    local_38 = 1;
    local_8c = 2;
    local_34 = param_2 + 0x30;
    pppuVar10 = &local_90;
    local_70 = &DAT_01c119e8;
    local_7c = &DAT_01d2ea4c;
    local_88 = puVar6;
    uStack_40 = unaff_r4;
    uStack_3c = unaff_r7;
    FUN_01aaaecc(DAT_01d4ba0c,pppuVar10);
    iVar2 = DAT_01d4ba0c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 == 0)) goto LAB_00b08a44;
    local_2c = *(undefined4 *)(DAT_01d4ba0c + 0x14);
    local_28 = *(undefined4 **)(DAT_01d4ba0c + 0x18);
    local_30 = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar6[3])(pcVar5,&local_30);
    if (iVar3 == 0) goto LAB_00b08a44;
    uVar8 = puVar6[4];
    pppuVar7 = &local_30;
  }
  else {
    iVar2 = DAT_01d4ba0c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 == 0)) goto LAB_00b08a44;
    local_8c = *(undefined4 *)(DAT_01d4ba0c + 0x14);
    local_88 = *(undefined4 **)(DAT_01d4ba0c + 0x18);
    local_90 = (undefined4 **)&DAT_00000001;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
    }
    pcVar5 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar6[3])(pcVar5,&local_90);
    if (iVar3 == 0) goto LAB_00b08a44;
    local_28 = (undefined4 *)(DAT_01d4ba0c + 0x1c);
    local_48 = *local_28;
    uStack_44 = *(uint *)(DAT_01d4ba0c + 0x20);
    if (uStack_44 != 0) {
      unaff_r10 = *(undefined4 *)(DAT_01d4ba0c + 0x24);
      unaff_r11 = *(undefined4 *)(DAT_01d4ba0c + 0x28);
      local_5c = 0;
      local_54 = &local_50;
      local_50 = &local_98;
      local_58 = &DAT_00576c69;
      local_4c = &DAT_0132b6a0;
      local_6c = local_48;
      uStack_68 = uStack_44;
      uStack_64 = unaff_r10;
      uStack_60 = unaff_r11;
    }
    if (uStack_44 < 2) goto LAB_00b08b30;
    local_74 = &local_34;
    local_78 = &local_48;
    local_80 = &local_58;
    local_84 = &local_6c;
    local_30 = &local_84;
    local_38 = 1;
    local_2c = 2;
    local_34 = param_2 + 0x30;
    pppuVar10 = &local_30;
    local_70 = &DAT_01c119e8;
    pppuVar7 = &local_90;
    local_7c = &DAT_01d2ea4c;
    uVar8 = puVar6[4];
    uStack_40 = unaff_r10;
    uStack_3c = unaff_r11;
  }
  FUN_01aaa328(iVar2,pcVar5,uVar8,pppuVar7,pppuVar10);
LAB_00b08a44:
  *param_1 = -0x80000000;
  return;
}


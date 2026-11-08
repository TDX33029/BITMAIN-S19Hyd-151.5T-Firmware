// FUN_01882168 @ 01882168 size=1404 calls_out=12 calls_in=2
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01882168(uint *param_1,int *param_2,undefined4 ****param_3,int param_4)

{
  char *pcVar1;
  undefined4 ****ppppuVar2;
  char cVar3;
  uint uVar4;
  undefined4 ***pppuVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 ****ppppuVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 ****unaff_r8;
  undefined4 ****local_80;
  undefined4 *****local_7c;
  undefined *local_78;
  uint *local_74;
  undefined *local_70;
  undefined4 ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 *****local_5c;
  undefined **local_58;
  uint *local_54;
  undefined4 ****local_50;
  undefined4 *****local_4c;
  undefined4 ****local_48;
  undefined4 ****local_44;
  undefined4 ***local_40;
  undefined4 ***pppuStack_3c;
  uint local_38;
  uint uStack_34;
  undefined4 *****local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_80 = param_3;
  if (param_4 == 0 || *param_2 == 0) {
    uVar10 = (uint)*(byte *)param_3;
    if (uVar10 == 0) {
      uVar6 = 0;
    }
    else if (uVar10 == 1) {
      uVar6 = (uint)*(byte *)((int)param_3 + 1) << 8;
    }
    else {
      unaff_r8 = (undefined4 ****)FUN_014333b0();
      pppuVar5 = param_3[1];
      (*(code *)**pppuVar5)(&local_48,pppuVar5 + 3,pppuVar5[1],pppuVar5[2]);
      *unaff_r8 = local_48;
      unaff_r8[1] = local_44;
      unaff_r8[2] = local_40;
      unaff_r8[3] = pppuStack_3c;
      uVar6 = 0;
    }
    local_48 = (undefined4 ****)(uVar6 | uVar10);
    local_44 = unaff_r8;
    (*(code *)*param_3[2])(&local_40,param_3 + 5,param_3[3],param_3[4]);
    *param_1 = (uint)local_48;
    param_1[1] = (uint)local_44;
    param_1[2] = (uint)local_40;
    param_1[3] = (uint)pppuStack_3c;
    param_1[4] = local_38;
    param_1[5] = uStack_34;
    param_1[6] = 0;
  }
  else {
    ppppuVar9 = &local_48;
    FUN_01933ff0(ppppuVar9,*param_2 + 8);
    ppppuVar2 = local_44;
    if (local_48 == (undefined4 ****)0x1) {
      local_2c = (undefined4 ****)CONCAT31(local_2c._1_3_,local_40._0_1_);
      local_30 = (undefined4 *****)local_44;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_30,&DAT_01d20ddc,&DAT_01d20c6c);
    }
    uVar6 = (uint)*(byte *)param_3;
    uVar10 = (uint)local_40 & 0xff;
    if (uVar6 == 0) {
      uVar4 = 0;
    }
    else if (uVar6 == 2) {
      unaff_r8 = (undefined4 ****)FUN_014333b0();
      pppuVar5 = param_3[1];
      (*(code *)**pppuVar5)(&local_48,pppuVar5 + 3,pppuVar5[1],pppuVar5[2]);
      *unaff_r8 = local_48;
      unaff_r8[1] = local_44;
      unaff_r8[2] = local_40;
      unaff_r8[3] = pppuStack_3c;
      uVar4 = 0;
    }
    else {
      uVar4 = (uint)*(byte *)((int)param_3 + 1) << 8;
    }
    local_48 = (undefined4 ****)(uVar4 | uVar6);
    local_44 = unaff_r8;
    (*(code *)*param_3[2])(&local_40,param_3 + 5,param_3[3],param_3[4]);
    iVar7 = FUN_0181de90(ppppuVar2 + 6,&local_48);
    if (iVar7 == 0) {
      uVar6 = (uint)*(byte *)param_3;
      if (uVar6 == 0) {
        uVar4 = 0;
      }
      else if (uVar6 == 2) {
        ppppuVar9 = (undefined4 ****)FUN_014333b0();
        pppuVar5 = param_3[1];
        (*(code *)**pppuVar5)(&local_48,pppuVar5 + 3,pppuVar5[1],pppuVar5[2]);
        *ppppuVar9 = local_48;
        ppppuVar9[1] = local_44;
        ppppuVar9[2] = local_40;
        ppppuVar9[3] = pppuStack_3c;
        uVar4 = 0;
      }
      else {
        uVar4 = (uint)*(byte *)((int)param_3 + 1) << 8;
      }
      local_48 = (undefined4 ****)(uVar4 | uVar6);
      local_44 = ppppuVar9;
      (*(code *)*param_3[2])(&local_40,param_3 + 5,param_3[3],param_3[4]);
      uVar6 = FUN_017048d8(param_2);
      *param_1 = (uint)local_48;
      param_1[1] = (uint)local_44;
      param_1[2] = (uint)local_40;
      param_1[3] = (uint)pppuStack_3c;
      param_1[4] = local_38;
      param_1[5] = uStack_34;
      param_1[6] = uVar6;
    }
    else {
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4fb20 - 1 < 2 ||
           ((DAT_01d4fb20 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4fb18), cVar3 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4fb18), iVar7 != 0)))) {
        if (*(undefined4 *****)(DAT_01d4fb18 + 0x20) == (undefined4 ****)0x0) {
LAB_018826d0:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20c7c);
        }
        local_58 = &local_70;
        local_40 = *(undefined4 ****)(DAT_01d4fb18 + 0x24);
        pppuStack_3c = *(undefined4 ****)(DAT_01d4fb18 + 0x28);
        local_74 = (uint *)(DAT_01d4fb18 + 0x1c);
        local_48 = (undefined4 ****)*local_74;
        local_7c = &local_5c;
        local_38 = 0;
        local_78 = (undefined *)0x1;
        local_6c = &local_50;
        local_50 = &local_80;
        local_54 = (uint *)&DAT_01d2ea4c;
        local_70 = &DAT_005af865;
        local_4c = (undefined4 *****)&DAT_01743c28;
        local_5c = &local_48;
        local_44 = *(undefined4 *****)(DAT_01d4fb18 + 0x20);
        FUN_01aaaecc(DAT_01d4fb18,&local_7c);
        iVar7 = DAT_01d4fb18;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2c = *(undefined4 *****)(DAT_01d4fb18 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d4fb18 + 0x18);
          local_30 = (undefined4 *****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar11 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar11[3])(pcVar1,&local_30);
          if (iVar8 != 0) {
            FUN_01aaa328(iVar7,pcVar1,puVar11[4],&local_30,&local_7c);
          }
        }
      }
      else {
        iVar7 = DAT_01d4fb18;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_64 = *(undefined4 *)(DAT_01d4fb18 + 0x14);
          local_60 = *(undefined4 *)(DAT_01d4fb18 + 0x18);
          local_68 = 5;
          DataMemoryBarrier(0xb);
          puVar11 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)puVar11[3])(pcVar1,&local_68);
          if (iVar8 != 0) {
            local_54 = (uint *)(DAT_01d4fb18 + 0x1c);
            if (*(undefined4 *****)(DAT_01d4fb18 + 0x20) == (undefined4 ****)0x0) goto LAB_018826d0;
            local_2c = &local_50;
            local_40 = *(undefined4 ****)(DAT_01d4fb18 + 0x24);
            pppuStack_3c = *(undefined4 ****)(DAT_01d4fb18 + 0x28);
            local_5c = &local_30;
            local_58 = (undefined **)&DAT_00000001;
            local_4c = &local_7c;
            local_38 = 0;
            local_7c = &local_80;
            local_28 = &DAT_01d2ea4c;
            local_50 = (undefined4 ****)&DAT_005af865;
            local_78 = &DAT_01743c28;
            local_48 = (undefined4 ****)*local_54;
            local_44 = *(undefined4 *****)(DAT_01d4fb18 + 0x20);
            local_30 = &local_48;
            FUN_01aaa328(iVar7,pcVar1,puVar11[4],&local_68,&local_5c);
          }
        }
      }
      *(undefined1 *)param_1 = 3;
    }
    FUN_00a97e8c(ppppuVar2,uVar10);
  }
  return;
}


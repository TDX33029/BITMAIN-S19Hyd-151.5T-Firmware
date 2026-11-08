// FUN_00a7cd48 @ 00a7cd48 size=1028 calls_out=8 calls_in=1
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_00a7cd48(uint *param_1,uint *param_2,uint ***param_3,uint *param_4)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint **ppuVar5;
  uint uVar6;
  uint ***pppuVar7;
  uint ***pppuVar8;
  uint ***unaff_r5;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  uint ***local_80;
  uint ****local_7c;
  undefined *local_78;
  undefined4 *local_74;
  undefined *local_70;
  uint ****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  uint ****local_5c;
  undefined **local_58;
  undefined4 *local_54;
  uint ****local_50;
  uint *****local_4c;
  uint ***local_48;
  uint ***local_44;
  uint **local_40;
  uint ***local_3c;
  uint local_38;
  uint uStack_34;
  uint ***local_30;
  uint ****local_2c;
  undefined1 *local_28;
  
  local_80 = param_3;
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d4fb2c - 1 < 2 ||
       ((DAT_01d4fb2c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4fb24), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d4fb24), iVar2 != 0)))) {
    local_44 = *(uint ****)(DAT_01d4fb24 + 0x20);
    if (local_44 == (uint ***)0x0) {
LAB_00a7d134:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d20c8c);
    }
    local_40 = *(uint ***)(DAT_01d4fb24 + 0x24);
    local_3c = *(uint ****)(DAT_01d4fb24 + 0x28);
    local_74 = (undefined4 *)(DAT_01d4fb24 + 0x1c);
    unaff_r5 = (uint ***)*local_74;
    local_58 = &local_70;
    local_5c = &local_48;
    local_78 = (undefined *)0x1;
    local_6c = (uint ****)&local_50;
    local_7c = (uint ****)&local_5c;
    local_50 = &local_80;
    local_38 = 0;
    local_54 = (undefined4 *)&DAT_01d2ea4c;
    local_70 = &DAT_0059dc5c;
    local_4c = (uint *****)&DAT_01743c28;
    local_48 = unaff_r5;
    FUN_01aaaecc(DAT_01d4fb24,&local_7c);
    iVar2 = DAT_01d4fb24;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_2c = *(uint *****)(DAT_01d4fb24 + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4fb24 + 0x18);
      local_30 = (uint ***)&SUB_00000004;
      DataMemoryBarrier(0xb);
      pppuVar7 = DAT_01d4edc8;
      unaff_r5 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppuVar7 = (uint ***)&DAT_01cfc5e0;
        unaff_r5 = (uint ***)"InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)pppuVar7[3])(unaff_r5,&local_30);
      if (iVar3 != 0) {
        FUN_01aaa328(iVar2,unaff_r5,pppuVar7[4],&local_30,&local_7c);
      }
    }
  }
  else {
    iVar2 = DAT_01d4fb24;
    if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
      local_64 = *(undefined4 *)(DAT_01d4fb24 + 0x14);
      local_60 = *(undefined4 *)(DAT_01d4fb24 + 0x18);
      local_68 = 4;
      unaff_r5 = (uint ***)&DAT_01cfc5e0;
      DataMemoryBarrier(0xb);
      pppuVar8 = DAT_01d4edc8;
      pppuVar7 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pppuVar8 = unaff_r5;
        pppuVar7 = (uint ***)"InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)pppuVar8[3])(pppuVar7,&local_68);
      if (iVar3 != 0) {
        local_54 = (undefined4 *)(DAT_01d4fb24 + 0x1c);
        local_48 = (uint ***)*local_54;
        local_44 = *(uint ****)(DAT_01d4fb24 + 0x20);
        if (local_44 == (uint ***)0x0) goto LAB_00a7d134;
        local_30 = (uint ***)&local_48;
        local_5c = &local_30;
        local_40 = *(uint ***)(DAT_01d4fb24 + 0x24);
        local_38 = 0;
        unaff_r5 = *(uint ****)(DAT_01d4fb24 + 0x28);
        local_2c = (uint ****)&local_50;
        local_58 = (undefined **)&DAT_00000001;
        local_28 = &DAT_01d2ea4c;
        local_4c = &local_7c;
        local_50 = (uint ****)&DAT_0059dc5c;
        local_78 = &DAT_01743c28;
        local_7c = &local_80;
        local_3c = unaff_r5;
        FUN_01aaa328(iVar2,pppuVar7,pppuVar8[4],&local_68,&local_5c);
      }
    }
  }
  uVar4 = (uint)(byte)param_4[2];
  uVar10 = 0;
  bVar11 = uVar4 != 2;
  if (bVar11) {
    uVar4 = *param_2;
  }
  if (bVar11 && uVar4 != 0) {
    uVar10 = FUN_017048d8(param_2);
  }
  uVar4 = (uint)*(byte *)param_3;
  if (uVar4 == 0) {
    uVar6 = 0;
  }
  else if (uVar4 == 1) {
    uVar6 = (uint)*(byte *)((int)param_3 + 1) << 8;
  }
  else {
    unaff_r5 = (uint ***)FUN_014333b0();
    ppuVar5 = param_3[1];
    (*(code *)**ppuVar5)(&local_48,ppuVar5 + 3,ppuVar5[1],ppuVar5[2]);
    *unaff_r5 = (uint **)local_48;
    unaff_r5[1] = (uint **)local_44;
    unaff_r5[2] = local_40;
    unaff_r5[3] = (uint **)local_3c;
    uVar6 = 0;
  }
  local_48 = (uint ***)(uVar6 | uVar4);
  local_44 = unaff_r5;
  (*(code *)*param_3[2])(&local_40,param_3 + 5,param_3[3],param_3[4]);
  uVar4 = param_4[1];
  uVar6 = param_4[2];
  param_1[6] = *param_4;
  param_1[7] = uVar4;
  param_1[8] = uVar6;
  uVar4 = param_4[4];
  uVar6 = param_4[5];
  uVar9 = param_4[6];
  param_1[9] = param_4[3];
  param_1[10] = uVar4;
  param_1[0xb] = uVar6;
  param_1[0xc] = uVar9;
  *(undefined1 *)(param_1 + 0xe) = 1;
  *param_1 = (uint)local_48;
  param_1[1] = (uint)local_44;
  param_1[2] = (uint)local_40;
  param_1[3] = (uint)local_3c;
  param_1[4] = local_38;
  param_1[5] = uStack_34;
  param_1[0xd] = uVar10;
  return;
}


// FUN_00f8729c @ 00f8729c size=2132 calls_out=30 calls_in=0
// strings: InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00f8729c(undefined4 *param_1,int param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  char *pcVar3;
  undefined1 uVar4;
  char cVar5;
  int iVar6;
  undefined *puVar7;
  int *piVar8;
  undefined4 uVar9;
  int iVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined4 ****ppppuVar13;
  undefined4 uVar14;
  undefined4 *puVar15;
  undefined8 uVar16;
  undefined4 local_1c0;
  undefined4 uStack_1bc;
  undefined4 uStack_1b8;
  undefined4 uStack_1b4;
  undefined4 local_1b0;
  undefined4 uStack_1ac;
  undefined4 uStack_1a8;
  undefined4 uStack_1a4;
  undefined1 auStack_1a0 [108];
  undefined4 ****local_134;
  code *local_130;
  undefined4 *local_12c;
  undefined *local_128;
  undefined4 ****local_124;
  undefined4 ****local_120;
  undefined4 ****local_11c;
  undefined1 *local_118;
  undefined4 ****local_114;
  undefined **local_110;
  undefined4 *local_10c;
  undefined4 ****local_108;
  undefined4 ****local_104;
  undefined4 ****local_100;
  undefined4 ****ppppuStack_fc;
  undefined1 *puStack_f8;
  int local_f4;
  undefined4 uStack_f0;
  undefined4 local_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 ****local_a0;
  undefined4 ****local_9c;
  undefined1 *local_98;
  undefined4 ****local_90;
  undefined4 ****local_8c;
  undefined1 *local_88;
  int local_84;
  undefined4 local_80;
  undefined4 local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x158)) {
  case 0:
    ppppuVar13 = (undefined4 ****)(param_2 + 0x90);
    *(undefined2 *)(param_2 + 0x15a) = 0;
    *(undefined1 *)(param_2 + 0x15c) = 1;
    puVar11 = *(undefined4 **)(param_2 + 0x138);
    FUN_01bed4e2(ppppuVar13,param_2,0x90);
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4c6c8 - 1 < 2 ||
         ((DAT_01d4c6c8 != 0 && (cVar5 = FUN_01aaafa8(&DAT_01d4c6c0), cVar5 != '\0')))) &&
        (iVar10 = FUN_01aaa278(DAT_01d4c6c0), iVar10 != 0)))) {
      local_8c = *(undefined4 *****)(DAT_01d4c6c0 + 0x20);
      if (local_8c == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1abb0);
      }
      local_114 = &local_90;
      local_88 = *(undefined1 **)(DAT_01d4c6c0 + 0x24);
      local_110 = &local_128;
      local_84 = *(int *)(DAT_01d4c6c0 + 0x28);
      local_12c = (undefined4 *)(DAT_01d4c6c0 + 0x1c);
      local_90 = (undefined4 ****)*local_12c;
      local_134 = &local_114;
      local_130 = (code *)0x1;
      local_124 = &local_108;
      local_80 = 0;
      local_10c = (undefined4 *)&DAT_01d2ea4c;
      local_104 = (undefined4 ****)FUN_0118bf80;
      local_128 = &DAT_0059fea4;
      local_108 = ppppuVar13;
      FUN_01aaaecc(DAT_01d4c6c0,&local_134);
      iVar10 = DAT_01d4c6c0;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_9c = *(undefined4 *****)(DAT_01d4c6c0 + 0x14);
        local_98 = *(undefined1 **)(DAT_01d4c6c0 + 0x18);
        local_a0 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar15[3])(pcVar3,&local_a0);
        if (iVar6 != 0) {
          local_100 = local_a0;
          ppppuStack_fc = local_9c;
          puStack_f8 = local_98;
          FUN_01aaa328(iVar10,pcVar3,puVar15[4],&local_100,&local_134);
        }
      }
    }
    else {
      iVar10 = DAT_01d4c6c0;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_11c = *(undefined4 *****)(DAT_01d4c6c0 + 0x14);
        local_118 = *(undefined1 **)(DAT_01d4c6c0 + 0x18);
        local_120 = (undefined4 ****)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar3 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar3 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar6 = (*(code *)puVar15[3])(pcVar3);
        if (iVar6 != 0) {
          local_10c = (undefined4 *)(DAT_01d4c6c0 + 0x1c);
          local_90 = (undefined4 ****)*local_10c;
          local_8c = *(undefined4 *****)(DAT_01d4c6c0 + 0x20);
          if (local_8c == (undefined4 ****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c1abb0);
          }
          local_a0 = &local_90;
          local_88 = *(undefined1 **)(DAT_01d4c6c0 + 0x24);
          local_84 = *(int *)(DAT_01d4c6c0 + 0x28);
          local_9c = &local_108;
          local_114 = &local_a0;
          local_80 = 0;
          local_110 = (undefined **)&DAT_00000001;
          local_108 = (undefined4 ****)&DAT_0059fea4;
          local_98 = &DAT_01d2ea4c;
          local_104 = &local_134;
          local_130 = FUN_0118bf80;
          local_100 = local_120;
          ppppuStack_fc = local_11c;
          puStack_f8 = local_118;
          local_134 = ppppuVar13;
          FUN_01aaa328(iVar10,pcVar3,puVar15[4],&local_100,&local_114);
        }
      }
    }
    FUN_00ec9a00(param_2 + 0x13c,ppppuVar13);
    piVar8 = (int *)*puVar11;
    do {
      iVar10 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar10 + 1;
    if (iVar10 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xf87b08);
      (*pcVar1)();
    }
    *(undefined1 *)(param_2 + 0x159) = 0;
    *(int **)(param_2 + 0x148) = piVar8;
    if (*(int *)(param_2 + 0x13c) == -0x80000000) {
      FUN_00a5e580(&local_100,ppppuVar13);
      local_90 = local_100;
      local_8c = ppppuStack_fc;
      local_88 = puStack_f8;
      local_84 = local_f4;
      local_80 = uStack_f0;
      local_7c = local_ec;
      uStack_78 = uStack_e8;
      uStack_74 = uStack_e4;
      uStack_70 = uStack_e0;
      uStack_6c = uStack_dc;
      local_68 = local_d8;
      uStack_64 = uStack_d4;
      uStack_60 = uStack_d0;
      uStack_5c = uStack_cc;
      uStack_58 = uStack_c8;
      uStack_54 = uStack_c4;
      FUN_00df0a4c(param_2 + 0x14c);
      piVar8 = *(int **)(param_2 + 0x148);
      iVar10 = *(int *)(param_2 + 0x150);
      uVar9 = *(undefined4 *)(param_2 + 0x154);
    }
    else {
      iVar10 = thunk_FUN_01be5118(0x60);
      if (iVar10 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(8,0x60);
      }
      *(undefined4 *)(iVar10 + 0x5c) = 0x3020202;
      *(undefined4 *)(iVar10 + 0x20) = 0x80000001;
      uVar12 = *(undefined4 *)(param_2 + 0x140);
      uVar14 = *(undefined4 *)(param_2 + 0x144);
      *(undefined1 *)(iVar10 + 0x17) = 2;
      uVar9 = 1;
      *(undefined4 *)(iVar10 + 0x50) = 0x80000002;
      *(undefined4 *)(iVar10 + 0xc) = 1;
      *(undefined4 *)(param_2 + 0x14c) = 1;
      *(int *)(param_2 + 0x150) = iVar10;
      *(undefined4 *)(param_2 + 0x154) = 1;
      *(undefined4 *)(iVar10 + 0x2c) = 0x80000000;
      *(undefined **)(iVar10 + 0x30) = &DAT_0051da27;
      *(undefined4 *)(iVar10 + 0x34) = 10;
      *(undefined4 *)(iVar10 + 0x38) = 0x80000000;
      *(undefined4 *)(iVar10 + 0x3c) = uVar12;
      *(undefined4 *)(iVar10 + 0x40) = uVar14;
      *(undefined4 *)(iVar10 + 0x44) = 0x80000002;
    }
    uVar9 = FUN_00b82aa4(piVar8 + 2,iVar10,uVar9);
    *(undefined4 *)(param_2 + 0x160) = uVar9;
    puVar7 = &DAT_01c13a58;
    *(undefined **)(param_2 + 0x164) = &DAT_01c13a58;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c1abc0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c1abc0);
  case 3:
    uVar9 = *(undefined4 *)(param_2 + 0x160);
    puVar7 = *(undefined **)(param_2 + 0x164);
    break;
  case 4:
    uVar9 = *(undefined4 *)(param_2 + 0x160);
    puVar7 = *(undefined **)(param_2 + 0x164);
    goto LAB_00f87800;
  }
  (**(code **)(puVar7 + 0xc))(&local_90,uVar9,param_3);
  if (local_90 == (undefined4 ****)0x8000001b) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar4 = 3;
    goto LAB_00f87a84;
  }
  *(int *)(param_2 + 0x120) = (int)local_90;
  *(undefined4 *****)(param_2 + 0x124) = local_8c;
  *(undefined1 **)(param_2 + 0x128) = local_88;
  *(int *)(param_2 + 300) = local_84;
  *(undefined4 *)(param_2 + 0x130) = local_80;
  *(undefined4 *)(param_2 + 0x134) = local_7c;
  FUN_01139b38(*(undefined4 *)(param_2 + 0x160),*(undefined4 *)(param_2 + 0x164));
  if (*(int *)(param_2 + 0x120) == -0x7fffffe6) {
    *(undefined1 *)(param_2 + 0x15a) = 1;
    *(undefined4 *)(param_2 + 0x168) = *(undefined4 *)(param_2 + 0x124);
    *(undefined4 *)(param_2 + 0x16c) = *(undefined4 *)(param_2 + 0x128);
    *(undefined4 *)(param_2 + 0x170) = *(undefined4 *)(param_2 + 300);
    *(undefined4 *)(param_2 + 0x174) = *(undefined4 *)(param_2 + 0x130);
    iVar10 = *(int *)(param_2 + 0x148);
    FUN_006666fc(&local_90,*(undefined4 *)(param_2 + 0x16c),*(undefined4 *)(param_2 + 0x170));
    local_84 = CONCAT31(local_84._1_3_,*(undefined1 *)(param_2 + 0x174));
    uVar9 = FUN_00b820d4(iVar10 + 8,&local_90);
    *(undefined4 *)(param_2 + 0x160) = uVar9;
    puVar7 = &DAT_01c13b88;
    *(undefined **)(param_2 + 0x164) = &DAT_01c13b88;
LAB_00f87800:
    (**(code **)(puVar7 + 0xc))(&local_90,uVar9,param_3);
    if (local_84 == 3) {
      uVar4 = 4;
      *param_1 = 4;
      param_1[1] = 0;
      goto LAB_00f87a84;
    }
    FUN_01bed4e2(&local_100,&local_90,0x60);
    FUN_01139b38(*(undefined4 *)(param_2 + 0x160),*(undefined4 *)(param_2 + 0x164));
    if (local_f4 != 2) {
      *(undefined1 *)(param_2 + 0x15a) = 0;
      local_90 = *(undefined4 *****)(param_2 + 0x168);
      local_8c = *(undefined4 *****)(param_2 + 0x16c);
      local_88 = *(undefined1 **)(param_2 + 0x170);
      local_84 = *(int *)(param_2 + 0x174);
      FUN_011deabc(&local_a0,param_2 + 0x110,&local_90);
      if (local_a0 != (undefined4 ****)&DAT_80000000) {
        FUN_019bb7e0(local_a0,local_9c);
      }
      *(undefined1 *)(param_2 + 0x159) = 1;
    }
    FUN_00f87d18(&local_100);
    if (*(char *)(param_2 + 0x15a) != '\0') {
      FUN_019bb7e0(*(undefined4 *)(param_2 + 0x168),*(undefined4 *)(param_2 + 0x16c));
    }
    *(undefined1 *)(param_2 + 0x15a) = 0;
    if (*(int *)(param_2 + 0x120) != -0x7fffffe6) goto LAB_00f878d0;
  }
  else {
LAB_00f878d0:
    FUN_00f87d3c(param_2 + 0x120);
  }
  if (*(char *)(param_2 + 0x159) == '\0') {
    FUN_01a71aac(&local_90,0x10,"Failed to get session",0x15);
    FUN_01bed4e2(auStack_1a0,&local_90,0x68);
    FUN_00f8503c(param_2 + 0x14c);
    piVar8 = *(int **)(param_2 + 0x148);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_2 + 0x148));
    }
    if (*(int *)(param_2 + 0x13c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_2 + 0x13c),*(undefined4 *)(param_2 + 0x140));
    }
    FUN_00eca9c4(param_2 + 0x90);
    uVar9 = 0;
    uVar12 = 3;
    *(undefined1 *)(param_2 + 0x15c) = 0;
    if (*(char *)(param_2 + 0x15b) != '\0') {
      FUN_00eca9c4(param_2);
    }
  }
  else {
    uVar16 = FUN_00f80570("");
    FUN_01ac3460(&local_90,(undefined4 *)(param_2 + 0x90),(int)uVar16,
                 (int)((ulonglong)uVar16 >> 0x20));
    if ((char)local_80 != '\x02') {
      (*(code *)local_90[4])(&local_84,local_8c,local_88);
    }
    *(undefined1 *)(param_2 + 0x15c) = 0;
    uVar9 = *(undefined4 *)(param_2 + 0x94);
    uVar12 = *(undefined4 *)(param_2 + 0x90);
    FUN_01bed4e2(auStack_1a0,param_2 + 0x98,0x68);
    local_1c0 = *(undefined4 *)(param_2 + 0x100);
    uStack_1bc = *(undefined4 *)(param_2 + 0x104);
    uStack_1b8 = *(undefined4 *)(param_2 + 0x108);
    uStack_1b4 = *(undefined4 *)(param_2 + 0x10c);
    local_1b0 = *(undefined4 *)(param_2 + 0x110);
    uStack_1ac = *(undefined4 *)(param_2 + 0x114);
    uStack_1a8 = *(undefined4 *)(param_2 + 0x118);
    uStack_1a4 = *(undefined4 *)(param_2 + 0x11c);
    FUN_00f8503c(param_2 + 0x14c);
    piVar8 = *(int **)(param_2 + 0x148);
    DataMemoryBarrier(0xb);
    do {
      iVar10 = *piVar8;
      bVar2 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar2);
    *piVar8 = iVar10 + -1;
    if (iVar10 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0117fe74(*(undefined4 *)(param_2 + 0x148));
    }
    if (*(int *)(param_2 + 0x13c) != -0x80000000) {
      FUN_019bb7e0(*(int *)(param_2 + 0x13c),*(undefined4 *)(param_2 + 0x140));
    }
    *(undefined1 *)(param_2 + 0x15c) = 0;
  }
  *param_1 = uVar12;
  param_1[1] = uVar9;
  FUN_01bed4e2(param_1 + 2,auStack_1a0,0x68);
  param_1[0x1c] = local_1c0;
  param_1[0x1d] = uStack_1bc;
  param_1[0x1e] = uStack_1b8;
  param_1[0x1f] = uStack_1b4;
  param_1[0x20] = local_1b0;
  param_1[0x21] = uStack_1ac;
  param_1[0x22] = uStack_1a8;
  param_1[0x23] = uStack_1a4;
  uVar4 = 1;
LAB_00f87a84:
  *(undefined1 *)(param_2 + 0x158) = uVar4;
  return;
}


// FUN_01735450 @ 01735450 size=1564 calls_out=19 calls_in=1
// strings: hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut | InvalidParamSegmentInvalidParamInvalidCatchAll | hyper_ut

void FUN_01735450(int *param_1,int param_2,undefined4 param_3)

{
  char *pcVar1;
  undefined1 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined1 *puVar6;
  undefined4 ***pppuVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined1 *puVar10;
  undefined8 uVar11;
  undefined1 auStack_ac8 [64];
  undefined1 auStack_a88 [44];
  char local_a5c;
  byte local_a44;
  int local_a30;
  int local_a2c;
  undefined1 *local_a28;
  undefined4 **ppuStack_a24;
  int iStack_a20;
  int local_a1c;
  int iStack_a18;
  undefined4 uStack_a14;
  int iStack_a10;
  undefined1 auStack_9c8 [96];
  undefined4 ****local_968;
  undefined4 ****local_964;
  undefined4 ****local_960;
  undefined4 ****local_95c;
  undefined4 ***local_958;
  undefined4 *local_954;
  undefined4 ***local_950;
  undefined4 local_94c;
  undefined4 ****local_948;
  undefined4 ****local_944;
  undefined4 ****local_940;
  undefined4 uStack_93c;
  undefined4 uStack_938;
  undefined4 uStack_934;
  undefined4 ***local_930;
  int local_92c;
  undefined4 ****local_928;
  undefined4 ****ppppuStack_924;
  undefined4 ****local_920;
  undefined4 local_91c;
  undefined4 uStack_918;
  undefined4 uStack_914;
  undefined4 local_910;
  undefined2 local_8e8;
  int *local_8d4;
  undefined *local_8d0;
  undefined1 auStack_898 [240];
  undefined4 ****local_7a8;
  undefined4 ****ppppuStack_7a4;
  undefined4 ****ppppuStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined1 local_11c;
  undefined4 ****local_118;
  undefined4 ****local_114;
  undefined4 ****ppppuStack_110;
  undefined4 ****ppppuStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 400)) {
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d19588);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d19588);
  case 3:
    uVar11 = *(undefined8 *)(param_2 + 0x188);
    goto LAB_017358d8;
  }
  FUN_01bed4e2(auStack_ac8,param_2,0x98);
  if (local_a44 - 2 < 2) {
LAB_017354b0:
    FUN_01442318(&local_118,auStack_a88,local_a5c == '\a');
    if (local_118 != (undefined4 ****)0x0) {
      local_928 = local_114;
      ppppuStack_924 = ppppuStack_110;
      local_920 = ppppuStack_10c;
      local_91c = local_108;
      uStack_918 = uStack_104;
      uStack_914 = uStack_100;
      local_910 = uStack_fc;
      local_92c = 0;
      local_930 = (undefined4 ***)0x3;
      uVar11 = FUN_0173ca90();
      goto LAB_017358c0;
    }
    local_948 = local_114;
    local_944 = ppppuStack_110;
    local_940 = ppppuStack_10c;
    uStack_93c = local_108;
    uStack_938 = uStack_104;
    uStack_934 = uStack_100;
    FUN_017435fc(&local_118,param_2 + 0x98);
    FUN_01bed4e2(&local_930,auStack_ac8,0x98);
    local_7a8 = local_948;
    ppppuStack_7a4 = local_944;
    ppppuStack_7a0 = local_940;
    uStack_79c = uStack_93c;
    uStack_798 = uStack_938;
    uStack_794 = uStack_934;
    FUN_01bed4e2(auStack_898,&local_118,0xf0);
    local_11c = 0;
    iVar5 = thunk_FUN_01be5118(0x818);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x818);
    }
    FUN_01bed4e2(iVar5,&local_930,0x818);
    uVar11 = CONCAT44(&DAT_01d1980c,iVar5);
  }
  else {
    if (local_a44 == 1) {
      if (local_a5c != '\a') goto LAB_017354b0;
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4fc28 - 1 < 2 ||
           ((DAT_01d4fc28 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4fc20), cVar3 != '\0')))) &&
          (iVar5 = FUN_01aaa278(DAT_01d4fc20), iVar5 != 0)))) {
        local_92c = *(int *)(DAT_01d4fc20 + 0x20);
        if (local_92c == 0) {
LAB_01735a70:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d210d8);
        }
        local_958 = &local_950;
        local_928 = *(undefined4 *****)(DAT_01d4fc20 + 0x24);
        ppppuStack_924 = *(undefined4 *****)(DAT_01d4fc20 + 0x28);
        local_960 = (undefined4 ****)(DAT_01d4fc20 + 0x1c);
        local_930 = *local_960;
        local_95c = &local_930;
        local_968 = &local_95c;
        local_920 = (undefined4 ****)0x0;
        local_964 = (undefined4 ****)&DAT_00000001;
        local_954 = (undefined4 *)&DAT_01d2ea4c;
        local_94c = 0x47;
        local_950 = (undefined4 ***)&DAT_0051cf72;
        FUN_01aaaecc(DAT_01d4fc20,&local_968);
        iVar5 = DAT_01d4fc20;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_944 = *(undefined4 *****)(DAT_01d4fc20 + 0x14);
          local_940 = *(undefined4 *****)(DAT_01d4fc20 + 0x18);
          local_948 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar9[3])(pcVar1,&local_948);
          if (iVar4 != 0) {
            local_118 = local_948;
            local_114 = local_944;
            ppppuStack_110 = local_940;
            FUN_01aaa328(iVar5,pcVar1,puVar9[4],&local_118,&local_968);
          }
        }
      }
      else {
        iVar5 = DAT_01d4fc20;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_964 = *(undefined4 *****)(DAT_01d4fc20 + 0x14);
          local_960 = *(undefined4 *****)(DAT_01d4fc20 + 0x18);
          local_968 = (undefined4 ****)0x2;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar9[3])(pcVar1,&local_968);
          if (iVar4 != 0) {
            local_954 = (undefined4 *)(DAT_01d4fc20 + 0x1c);
            local_930 = (undefined4 ***)*local_954;
            local_92c = *(int *)(DAT_01d4fc20 + 0x20);
            if (local_92c == 0) goto LAB_01735a70;
            local_948 = &local_930;
            local_95c = &local_948;
            local_928 = *(undefined4 *****)(DAT_01d4fc20 + 0x24);
            local_920 = (undefined4 ****)0x0;
            ppppuStack_924 = *(undefined4 *****)(DAT_01d4fc20 + 0x28);
            local_944 = &local_950;
            local_958 = (undefined4 ***)&DAT_00000001;
            local_940 = (undefined4 ****)&DAT_01d2ea4c;
            local_94c = 0x47;
            local_950 = (undefined4 ***)&DAT_0051cf72;
            local_118 = local_968;
            local_114 = local_964;
            ppppuStack_110 = local_960;
            FUN_01aaa328(iVar5,pcVar1,puVar9[4],&local_118,&local_95c);
          }
        }
      }
      local_930 = (undefined4 ***)0x3;
      local_910 = CONCAT31(local_910._1_3_,3);
      local_92c = 0;
      uStack_914._0_2_ = CONCAT11(2,(undefined1)uStack_914);
      local_928 = (undefined4 ****)0x0;
      uVar11 = FUN_0173ca90(&local_930);
    }
    else {
      uVar11 = FUN_014418a0();
    }
LAB_017358c0:
    FUN_01741b38(auStack_ac8);
  }
  *(undefined8 *)(param_2 + 0x188) = uVar11;
LAB_017358d8:
  (**(code **)((int)((ulonglong)uVar11 >> 0x20) + 0xc))(&local_930,(int)uVar11,param_3);
  if (local_930 == (undefined4 ***)0x4 && local_92c == 0) {
    *param_1 = 4;
    param_1[1] = 0;
    uVar2 = 3;
  }
  else {
    FUN_01bed4e2(&local_a30,&local_930,0x68);
    FUN_00b19860(*(undefined4 *)(param_2 + 0x188),*(undefined4 *)(param_2 + 0x18c));
    if (local_a30 == 3 && local_a2c == 0) {
      local_8d4 = (int *)0x0;
      if (uStack_a14._1_1_ != '\x03') {
        local_8d4 = (int *)thunk_FUN_01be5118(0x1c);
        if (local_8d4 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x1c);
        }
        *local_8d4 = (int)local_a28;
        local_8d4[1] = (int)ppuStack_a24;
        local_8d4[2] = iStack_a20;
        local_8d4[3] = local_a1c;
        local_8d4[4] = iStack_a18;
        local_8d4[5] = uStack_a14;
        local_8d4[6] = iStack_a10;
      }
      local_8e8 = 1;
      local_930 = (undefined4 ***)0x2;
      local_8d0 = &DAT_01d19e30;
      puVar6 = (undefined1 *)thunk_FUN_01be5118(100);
      if (puVar6 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0066439c(4,100);
      }
      pppuVar7 = &local_930;
      uVar8 = 100;
      puVar10 = puVar6;
    }
    else {
      pppuVar7 = &ppuStack_a24;
      puVar6 = auStack_9c8;
      uVar8 = 0x5c;
      puVar10 = local_a28;
    }
    FUN_01bed4e2(puVar6,pppuVar7,uVar8);
    FUN_017351e8(param_2 + 0x98);
    *param_1 = local_a30;
    param_1[1] = local_a2c;
    param_1[2] = (int)puVar10;
    FUN_01bed4e2(param_1 + 3,auStack_9c8,0x5c);
    uVar2 = 1;
  }
  *(undefined1 *)(param_2 + 400) = uVar2;
  return;
}


// FUN_00f5be74 @ 00f5be74 size=4972 calls_out=45 calls_in=1
// strings: background task failed | background task failed | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::contextopen/boser/boser/src/bosminer/context.rsevent open/boser/boser/src/bosminer/context.rs:524event open/boser/boser/src/bosminer/context.rs:353event open/boser/boser/src/bosminer/context.rs:393event open/boser/boser/src/bosminer/context.rs:380event open/boser/boser/src/bosminer/context.rs:209event open/boser/boser/src/bosminer/context.rs:333event open/boser/boser/src/bosminer/context.rs:637event open/boser/boser/src/bosminer/context.rs:639event open/boser/boser/src/bosminer/context.rs:690event open/boser/boser/src/bosminer/context.rs:683event open/boser/boser/src/bosminer/context.rs:698

int FUN_00f5be74(undefined4 *param_1,undefined4 *param_2)

{
  char *pcVar1;
  bool bVar2;
  char cVar3;
  undefined4 uVar4;
  int *piVar5;
  uint ****ppppuVar6;
  undefined4 *puVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 *puVar13;
  uint ****ppppuVar14;
  uint ****ppppuVar15;
  undefined1 uVar16;
  uint ****unaff_r7;
  uint uVar17;
  undefined8 uVar18;
  ulonglong uVar19;
  uint ****local_1c0;
  undefined4 *local_1bc;
  undefined4 *local_1b8;
  undefined4 *local_1b4;
  undefined4 *local_1b0;
  undefined4 local_19c;
  undefined4 local_198;
  undefined4 local_194;
  uint ****local_190;
  uint ****local_18c;
  uint ****local_188;
  uint ****local_180;
  uint ****local_17c;
  uint ****local_178;
  uint ****local_174;
  uint ****ppppuStack_170;
  uint ****ppppuStack_16c;
  undefined4 local_130;
  undefined4 uStack_12c;
  undefined4 uStack_128;
  uint ****ppppuStack_124;
  uint ****local_120;
  uint ****local_11c;
  uint ****local_118;
  uint ****local_114;
  uint ****local_110;
  uint ****local_10c;
  uint ****local_108;
  uint ****ppppuStack_104;
  uint ****ppppuStack_100;
  uint ****local_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  uint ****ppppuStack_e8;
  uint ****local_e0;
  uint ****local_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  uint ****local_d0;
  uint ****local_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 local_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  uint ****ppppuStack_a8;
  uint ****local_a0;
  uint ****local_9c;
  uint ****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****ppppuStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  uint ****local_80;
  uint ****local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  uint ****local_70;
  uint ****local_6c;
  uint ****local_68;
  uint ****local_64;
  uint ****local_60;
  uint ****local_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  uint ****ppppuStack_48;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  uint ****ppppuStack_28;
  
  puVar13 = param_1 + 4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_1 + 0x10d)) {
  case 0:
    uVar4 = *param_1;
    uVar10 = param_1[1];
    uVar11 = param_1[2];
    iVar12 = param_1[0x42];
    uVar16 = *(undefined1 *)(param_1 + 0x43);
    *(undefined1 *)((int)param_1 + 0x7d) = 0;
    *puVar13 = uVar4;
    param_1[5] = uVar10;
    *(undefined1 *)(param_1 + 0x1f) = uVar16;
    param_1[0x14] = iVar12;
    param_1[6] = uVar11;
LAB_00f5bedc:
    param_1[0x15] = iVar12;
    *(undefined1 *)((int)param_1 + 0x7e) = uVar16;
    param_1[10] = uVar11;
    param_1[8] = uVar4;
    param_1[9] = uVar10;
    FUN_00f25b04(&local_70,*(undefined4 *)(iVar12 + 0x14),*(undefined4 *)(iVar12 + 0x18),
                 &DAT_00400ca8);
    ppppuVar6 = local_6c;
    puVar7 = param_1 + 0x16;
    FUN_019a66e4(puVar7,local_6c,local_68,
                 *(undefined4 *)(&DAT_01c2087c + (uint)*(byte *)((int)param_1 + 0x7e) * 4),
                 *(undefined4 *)(&DAT_0056ada8 + (uint)*(byte *)((int)param_1 + 0x7e) * 4));
    FUN_019bb7e0(local_70,ppppuVar6);
    *(undefined1 *)(param_1 + 0x27) = 0;
    param_1[0x20] = puVar7;
LAB_00f5bf60:
    param_1[0x21] = puVar7;
    FUN_019afae4(&local_a0,puVar7[1],puVar7[2]);
    param_1[0x22] = local_a0;
    param_1[0x23] = local_9c;
    param_1[0x24] = local_98;
    *(undefined1 *)(param_1 + 0x26) = 0;
switchD_00f5c2c4_caseD_0:
    local_110 = (uint ****)param_1[0x22];
    local_10c = (uint ****)param_1[0x23];
    unaff_r7 = (uint ****)param_1[0x24];
    local_108 = unaff_r7;
    uVar4 = FUN_006308d4(&local_110,&DAT_01c230d0);
    param_1[0x25] = uVar4;
LAB_00f5bfc4:
    FUN_014b4c40(&local_70,uVar4,*param_2);
    if (((uint)local_70 & 1) != 0) {
      *(undefined1 *)(param_1 + 0x26) = 3;
LAB_00f5c0f8:
      uVar16 = 3;
      *(undefined1 *)(param_1 + 0x27) = 3;
LAB_00f5cd9c:
      iVar12 = 1;
      *(undefined1 *)((int)param_1 + 0x7d) = uVar16;
      goto LAB_00f5cddc;
    }
    local_180 = local_68;
    local_17c = local_64;
    local_178 = local_60;
    local_174 = local_5c;
    piVar5 = (int *)param_1[0x25];
    if (*piVar5 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar2 = (bool)hasExclusiveAccess(piVar5);
      if (!bVar2) goto LAB_00f5c074;
      *piVar5 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00f5c074:
      (**(code **)(piVar5[2] + 0x10))();
    }
    if (local_180 == (uint ****)0x0 && local_17c == (uint ****)0x0) {
      uVar17 = (uint)local_178 >> 8 | (int)local_174 << 0x18;
      ppppuVar6 = local_178;
      ppppuVar15 = local_174;
    }
    else {
      FUN_019a18a8(&local_70,0x28,"background task failed",0x16);
      ppppuVar15 = local_6c;
      ppppuVar6 = local_70;
      FUN_00f29ea4(&local_180);
      uVar17 = (uint)ppppuVar6 >> 8 | (int)ppppuVar15 << 0x18;
    }
    unaff_r7 = (uint ****)((uint)ppppuVar6 & 0xff);
    *(undefined1 *)(param_1 + 0x26) = 1;
    if (unaff_r7 == (uint ****)&DAT_00000005) goto LAB_00f5c0f8;
    FUN_00b71be0(param_1 + 0x22);
    *(undefined1 *)(param_1 + 0x27) = 1;
    if (unaff_r7 == (uint ****)&SUB_00000004) {
      uVar18 = FUN_019b00d0(*(undefined4 *)(param_1[0x15] + 0x14),
                            *(undefined4 *)(param_1[0x15] + 0x18));
      if ((int)uVar18 == 0) {
        FUN_019b9f84(&local_70);
        unaff_r7 = (uint ****)FUN_00783ce8(&DAT_00400caf,0x18,&local_70);
      }
      else {
        FUN_012fbd94(&local_70,(int)uVar18,(int)((ulonglong)uVar18 >> 0x20));
        ppppuVar6 = local_6c;
        if (local_70 != (uint ****)0x0) {
          ppppuVar6 = (uint ****)0x0;
        }
        if (local_70 != (uint ****)&DAT_00000001) {
          local_70 = (uint ****)(param_1 + 0xc);
          *local_70 = (uint ***)ppppuVar6;
          param_1[0xe] = (uint ***)param_1[8];
          param_1[0xd] = local_68;
          *(undefined1 *)(param_1 + 0x12) = 1;
          uVar4 = param_1[0x17];
          uVar10 = param_1[0x18];
          param_1[0x10] = param_1[10];
          param_1[0xf] = param_1[9];
          local_6c = (uint ****)&DAT_0132b6a0;
          local_64 = (uint ****)FUN_01417570;
          local_68 = (uint ****)(param_1 + 0xe);
          FUN_00664898(&local_180,&DAT_005b64e9,&local_70);
          local_110 = local_180;
          local_10c = local_17c;
          local_108 = local_178;
          FUN_019c8874(param_1 + 0x19,uVar4,uVar10);
          *(undefined1 *)(param_1 + 0x27) = 0;
          param_1[0x20] = param_1[0x15] + 0x10;
          goto switchD_00f5c24c_caseD_0;
        }
        FUN_019b9f84(&local_70);
        unaff_r7 = (uint ****)FUN_012c6a30(&DAT_00400cc7,0x1d,&local_70);
      }
    }
    else {
      local_70 = (uint ****)((uint)unaff_r7 | uVar17 << 8);
      local_6c = (uint ****)((uint)ppppuVar15 & 0xffffff00 | uVar17 >> 0x18);
      unaff_r7 = (uint ****)FUN_007afd78(&local_70);
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c202e4);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c202e4);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x7d)) {
    case 0:
      uVar4 = *puVar13;
      uVar10 = param_1[5];
      uVar11 = param_1[6];
      iVar12 = param_1[0x14];
      uVar16 = *(undefined1 *)(param_1 + 0x1f);
      goto LAB_00f5bedc;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(0x1c201f4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(0x1c201f4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x27)) {
      case 0:
        puVar7 = (undefined4 *)param_1[0x20];
        goto LAB_00f5bf60;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2043c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2043c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x26)) {
      case 0:
        goto switchD_00f5c2c4_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case 3:
        uVar4 = param_1[0x25];
      }
      goto LAB_00f5bfc4;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x27)) {
      case 0:
switchD_00f5c24c_caseD_0:
        iVar12 = param_1[0x20];
        param_1[0x21] = iVar12;
        FUN_019afae4(&local_a0,*(undefined4 *)(iVar12 + 4),*(undefined4 *)(iVar12 + 8));
        param_1[0x22] = local_a0;
        param_1[0x23] = local_9c;
        param_1[0x24] = local_98;
        *(undefined1 *)(param_1 + 0x26) = 0;
switchD_00f5c274_caseD_0:
        local_110 = (uint ****)param_1[0x22];
        local_10c = (uint ****)param_1[0x23];
        ppppuVar6 = (uint ****)param_1[0x24];
        local_108 = ppppuVar6;
        uVar4 = FUN_00631460(&local_110,&DAT_01c230d0);
        param_1[0x25] = uVar4;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2047c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2047c);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x26)) {
        case 0:
          goto switchD_00f5c274_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case 3:
          uVar4 = param_1[0x25];
          ppppuVar6 = unaff_r7;
        }
      }
      puVar7 = param_1 + 0x26;
      FUN_00798728(&local_70,uVar4,*param_2);
      unaff_r7 = local_5c;
      if (local_70 == (uint ****)0x2) {
        *(undefined1 *)puVar7 = 3;
        unaff_r7 = ppppuVar6;
LAB_00f5c448:
        *(undefined1 *)(param_1 + 0x27) = 3;
        uVar16 = 4;
        goto LAB_00f5cd9c;
      }
      local_180 = local_70;
      local_17c = local_6c;
      local_178 = local_68;
      local_174 = local_64;
      ppppuStack_170 = local_60;
      ppppuStack_16c = local_5c;
      piVar5 = (int *)param_1[0x25];
      if (*piVar5 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar2) goto LAB_00f5c498;
        *piVar5 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5c498:
        (**(code **)(piVar5[2] + 0x10))();
      }
      if (local_180 == (uint ****)&DAT_00000001) {
        FUN_019a18a8(&local_70,0x28,"background task failed",0x16);
        ppppuVar6 = local_6c;
        ppppuVar15 = local_70;
        FUN_00f2fa08(&local_180);
        *(undefined1 *)puVar7 = 1;
        ppppuVar14 = (uint ****)&DAT_80000000;
      }
      else {
        *(undefined1 *)puVar7 = 1;
        ppppuVar15 = local_178;
        ppppuVar14 = local_17c;
        ppppuVar6 = local_174;
        if (local_17c == (uint ****)&DAT_80000001) goto LAB_00f5c448;
      }
      FUN_00b71be0(param_1 + 0x22);
      *(undefined1 *)(param_1 + 0x27) = 1;
      if (ppppuVar14 != (uint ****)&DAT_80000000) {
        *(undefined1 *)((int)param_1 + 0x95) = 0;
        puVar7 = param_1 + 0x19;
        param_1[0x20] = ppppuVar15;
        param_1[0x1c] = ppppuVar14;
        param_1[0x1d] = ppppuVar15;
        param_1[0x1e] = ppppuVar6;
        param_1[0x24] = puVar7;
        param_1[0x21] = ppppuVar6;
        goto LAB_00f5c59c;
      }
      local_70 = ppppuVar15;
      local_6c = ppppuVar6;
      unaff_r7 = (uint ****)FUN_007afd78(&local_70);
      goto LAB_00f5cdc0;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0x95)) {
      case 0:
        ppppuVar6 = (uint ****)param_1[0x21];
        puVar7 = (undefined4 *)param_1[0x24];
LAB_00f5c59c:
        uVar4 = param_1[0x20];
        uVar10 = 0;
        param_1[0x22] = puVar7;
        *(undefined1 *)(param_1 + 0x25) = 0;
        unaff_r7 = (uint ****)&local_110;
        FUN_019afae4(unaff_r7,puVar7[1],puVar7[2]);
        ppppuVar15 = (uint ****)&DAT_00000001;
        *(undefined1 *)(param_1 + 0x25) = 1;
        if ((int)ppppuVar6 < 0) {
LAB_00f5c5d4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar10,ppppuVar6);
        }
        ppppuVar14 = (uint ****)0x0;
        if (ppppuVar6 != (uint ****)0x0) {
          uVar10 = 1;
          ppppuVar15 = (uint ****)FUN_01298504(ppppuVar6,1);
          if (ppppuVar15 == (uint ****)0x0) goto LAB_00f5c5d4;
          ppppuVar14 = ppppuVar6;
        }
        FUN_01bed4e2(ppppuVar15,uVar4,ppppuVar6);
        *(undefined1 *)(param_1 + 0x25) = 0;
        local_70 = local_110;
        local_6c = local_10c;
        local_68 = local_108;
        local_64 = ppppuVar14;
        local_60 = ppppuVar15;
        local_5c = ppppuVar6;
        uVar4 = FUN_00631a34(&local_70,&DAT_01c20394);
        param_1[0x23] = uVar4;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c203a4);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c203a4);
      }
      FUN_00f6119c(&local_70,param_1 + 0x23,*param_2);
      if (((uint)local_70 & 1) != 0) {
        *(undefined1 *)((int)param_1 + 0x95) = 3;
        uVar16 = 5;
        goto LAB_00f5cd9c;
      }
      local_180 = local_68;
      local_17c = local_64;
      local_178 = local_60;
      local_174 = local_5c;
      piVar5 = (int *)param_1[0x23];
      if (*piVar5 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar2 = (bool)hasExclusiveAccess(piVar5);
        if (!bVar2) goto LAB_00f5c6d4;
        *piVar5 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00f5c6d4:
        (**(code **)(piVar5[2] + 0x10))();
      }
      uVar19 = FUN_00ead84c(&local_180,&DAT_00400ddb);
      unaff_r7 = (uint ****)(uVar19 >> 0x20);
      if ((uVar19 & 1) == 0) {
        *(undefined2 *)(param_1 + 0x25) = 0x100;
        if (unaff_r7 == (uint ****)0x0) {
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4c8b0 - 1 < 2 ||
               ((DAT_01d4c8b0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c8a8), cVar3 != '\0')))) &&
              (iVar12 = FUN_01aaa278(DAT_01d4c8a8), iVar12 != 0)))) {
            if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
            }
            local_68 = *(uint *****)(DAT_01d4c8a8 + 0x24);
            local_64 = *(uint *****)(DAT_01d4c8a8 + 0x28);
            local_60 = (uint ****)0x0;
            local_7c = (uint ****)param_1[0x1b];
            local_17c = (uint ****)&local_d0;
            local_cc = (uint ****)&local_a0;
            local_a0 = (uint ****)&local_80;
            local_80 = (uint ****)param_1[0x1a];
            local_178 = (uint ****)&DAT_01d2ea4c;
            local_d0 = (uint ****)&DAT_005a5c71;
            local_9c = (uint ****)&LAB_019ba78c;
            local_10c = (uint ****)&DAT_00000001;
            local_180 = (uint ****)&local_70;
            local_110 = (uint ****)&local_180;
            local_108 = (uint ****)(DAT_01d4c8a8 + 0x1c);
            local_70 = *(uint *****)(DAT_01d4c8a8 + 0x1c);
            local_6c = *(uint *****)(DAT_01d4c8a8 + 0x20);
            FUN_0060df78(&local_110);
          }
          else {
            iVar12 = DAT_01d4c8a8;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_18c = *(uint *****)(DAT_01d4c8a8 + 0x14);
              local_188 = *(uint *****)(DAT_01d4c8a8 + 0x18);
              local_190 = (uint ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar7 = DAT_01d4edc8;
              pcVar1 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar7 = &DAT_01cfc5e0;
                pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)puVar7[3])(pcVar1,&local_190);
              if (iVar8 != 0) {
                local_98 = (uint ****)(DAT_01d4c8a8 + 0x1c);
                if (*(uint *****)(DAT_01d4c8a8 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,0x1c20204);
                }
                local_68 = *(uint *****)(DAT_01d4c8a8 + 0x24);
                local_64 = *(uint *****)(DAT_01d4c8a8 + 0x28);
                local_60 = (uint ****)0x0;
                local_10c = (uint ****)&local_e0;
                local_d0 = (uint ****)param_1[0x1a];
                local_cc = (uint ****)param_1[0x1b];
                local_dc = (uint ****)&local_80;
                local_108 = (uint ****)&DAT_01d2ea4c;
                local_e0 = (uint ****)&DAT_005a5c71;
                local_7c = (uint ****)&LAB_019ba78c;
                local_80 = (uint ****)&local_d0;
                local_9c = (uint ****)&DAT_00000001;
                local_a0 = (uint ****)&local_110;
                local_180 = local_190;
                local_17c = local_18c;
                local_178 = local_188;
                local_110 = (uint ****)&local_70;
                local_70 = (uint ****)*local_98;
                local_6c = *(uint *****)(DAT_01d4c8a8 + 0x20);
                FUN_01aaa328(iVar12,pcVar1,puVar7[4],&local_180,&local_a0);
              }
            }
          }
          param_1[0x20] = param_1[0x17];
          uVar10 = param_1[0x18];
          uVar11 = *(undefined4 *)(&DAT_00568848 + (uint)*(byte *)((int)param_1 + 0x7e) * 4);
          param_1[0x21] = uVar10;
          param_1[0x22] = uVar11;
          *(undefined1 *)(param_1 + 0x2b) = 0;
          goto LAB_00f5c9c8;
        }
      }
      else {
        *(undefined2 *)(param_1 + 0x25) = 0x100;
      }
      break;
    case 6:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x2b)) {
      case 0:
        uVar10 = param_1[0x21];
        uVar11 = param_1[0x22];
LAB_00f5c9c8:
        uVar4 = param_1[0x20];
        param_1[0x2c] = uVar4;
        param_1[0x23] = uVar11;
        param_1[0x2d] = uVar10;
        *(undefined1 *)(param_1 + 0x35) = 0;
LAB_00f5c9ec:
        param_1[0x2e] = uVar4;
        param_1[0x2f] = uVar10;
        FUN_019afae4(&local_c0,uVar4,uVar10);
        param_1[0x30] = local_c0;
        param_1[0x31] = uStack_bc;
        param_1[0x32] = uStack_b8;
        *(undefined1 *)(param_1 + 0x34) = 0;
switchD_00f5c808_caseD_0:
        local_b0 = param_1[0x30];
        uStack_ac = param_1[0x31];
        unaff_r7 = (uint ****)param_1[0x32];
        ppppuStack_a8 = unaff_r7;
        uVar4 = FUN_00b912c8(&local_b0,&DAT_01c230d0);
        param_1[0x33] = uVar4;
        break;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c20304);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c20304);
      case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x35)) {
        case 0:
          uVar4 = param_1[0x2c];
          uVar10 = param_1[0x2d];
          goto LAB_00f5c9ec;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c204dc);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c204dc);
        }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)(param_1 + 0x34)) {
        case 0:
          goto switchD_00f5c808_caseD_0;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01c230e0);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01c230e0);
        case 3:
          uVar4 = param_1[0x33];
        }
        break;
      case 4:
        goto switchD_00f5c1b0_caseD_4;
      case 5:
        uVar4 = *param_2;
        goto LAB_00f5cd38;
      }
      local_1b8 = param_1 + 0x35;
      local_1bc = param_1 + 0x30;
      puVar7 = param_1 + 0x34;
      FUN_00798844(&local_70,uVar4,*param_2);
      if (local_70 == (uint ****)0x2) {
        *(undefined1 *)puVar7 = 3;
LAB_00f5ca80:
        local_1b0 = param_1 + 0x2b;
        *(undefined1 *)local_1b8 = 3;
        *(undefined1 *)local_1b0 = 3;
        bVar2 = true;
      }
      else {
        local_a0 = local_70;
        local_9c = local_6c;
        local_98 = local_68;
        local_94 = local_64;
        local_90 = local_60;
        ppppuStack_8c = local_5c;
        uStack_88 = uStack_58;
        uStack_84 = local_54;
        piVar5 = (int *)param_1[0x33];
        if (*piVar5 == 0xcc) {
          DataMemoryBarrier(0xb);
          bVar2 = (bool)hasExclusiveAccess(piVar5);
          if (!bVar2) goto LAB_00f5caec;
          *piVar5 = 0x84;
        }
        else {
          ClearExclusiveLocal();
LAB_00f5caec:
          (**(code **)(piVar5[2] + 0x10))();
        }
        if (local_a0 == (uint ****)&DAT_00000001) {
          FUN_019a18a8(&local_70,0x28,"background task failed",0x16);
          ppppuVar6 = local_70;
          local_1c0 = local_6c;
          FUN_00f2accc(&local_a0);
          *(undefined1 *)puVar7 = 1;
          ppppuVar15 = (uint ****)0x80000002;
        }
        else {
          local_1c0 = local_94;
          local_80 = local_90;
          local_7c = ppppuStack_8c;
          uStack_78 = uStack_88;
          uStack_74 = uStack_84;
          local_e0 = local_90;
          local_dc = ppppuStack_8c;
          uStack_d8 = uStack_88;
          uStack_d4 = uStack_84;
          *(undefined1 *)puVar7 = 1;
          unaff_r7 = local_98;
          ppppuVar6 = local_98;
          ppppuVar15 = local_9c;
          if (local_9c == (uint ****)0x80000003) goto LAB_00f5ca80;
        }
        local_e0 = local_80;
        local_dc = local_7c;
        uStack_d8 = uStack_78;
        uStack_d4 = uStack_74;
        FUN_00b71be0(local_1bc);
        *(undefined1 *)(param_1 + 0x35) = 1;
        local_d0 = local_e0;
        local_cc = local_dc;
        uStack_c8 = uStack_d8;
        uStack_c4 = uStack_d4;
        if (ppppuVar15 == (uint ****)0x80000002) {
          param_1[0x24] = 0x80000002;
          param_1[0x25] = ppppuVar6;
          param_1[0x26] = local_1c0;
          local_6c = local_1c0;
          local_70 = ppppuVar6;
          unaff_r7 = (uint ****)FUN_007afd78(&local_70);
LAB_00f5cd78:
          local_1b0 = param_1 + 0x2b;
          *(undefined1 *)local_1b0 = 1;
          bVar2 = false;
        }
        else {
          param_1[0x24] = ppppuVar15;
          param_1[0x25] = ppppuVar6;
          param_1[0x26] = local_1c0;
          param_1[0x27] = local_e0;
          param_1[0x28] = local_dc;
          param_1[0x29] = uStack_d8;
          param_1[0x2a] = uStack_d4;
          ppppuStack_100 = (uint ****)param_1[0x24];
          local_fc = (uint ****)param_1[0x25];
          uStack_f8 = param_1[0x26];
          uStack_f4 = param_1[0x27];
          uStack_f0 = param_1[0x28];
          uStack_ec = param_1[0x29];
          unaff_r7 = (uint ****)param_1[0x2a];
          local_110 = local_70;
          local_10c = local_6c;
          local_108 = local_68;
          ppppuStack_104 = local_64;
          param_1[0x2c] = 0;
          param_1[0x2d] = local_70;
          param_1[0x2e] = local_6c;
          param_1[0x2f] = local_68;
          param_1[0x30] = local_64;
          param_1[0x31] = ppppuStack_100;
          param_1[0x32] = local_fc;
          param_1[0x33] = uStack_f8;
          param_1[0x34] = uStack_f4;
          param_1[0x35] = uStack_f0;
          param_1[0x36] = uStack_ec;
          param_1[0x37] = unaff_r7;
          param_1[0x38] = 0;
          param_1[0x39] = 4;
          param_1[0x3a] = 0;
          ppppuStack_e8 = unaff_r7;
          local_60 = ppppuStack_100;
          local_5c = local_fc;
          uStack_58 = uStack_f8;
          local_54 = uStack_f4;
          uStack_50 = uStack_f0;
          uStack_4c = uStack_ec;
          ppppuStack_48 = unaff_r7;
switchD_00f5c1b0_caseD_4:
          uVar4 = *param_2;
          FUN_0101efcc(&local_70,param_1 + 0x2c,uVar4);
          ppppuVar14 = local_68;
          ppppuVar15 = local_6c;
          ppppuVar6 = local_70;
          if (local_70 == (uint ****)&DAT_80000000) {
            uVar16 = 4;
          }
          else {
            FUN_00f277d8(param_1 + 0x2c);
            local_118 = ppppuVar6;
            local_11c = ppppuVar15;
            local_114 = ppppuVar15 + (int)ppppuVar14 * 3;
            local_120 = ppppuVar15;
            FUN_01018698(&local_130,&local_120);
            local_34 = local_130;
            uStack_30 = uStack_12c;
            uStack_2c = uStack_128;
            ppppuStack_28 = ppppuStack_124;
            uVar10 = param_1[0x23];
            FUN_01bed4e2(&local_180,&local_70,0x4c);
            param_1[0x2c] = 0;
            FUN_01bed4e2(param_1 + 0x2d,&local_180,0x4c);
            param_1[0x40] = uVar10;
            unaff_r7 = ppppuStack_124;
LAB_00f5cd38:
            iVar12 = FUN_010bd674(param_1 + 0x2c,uVar4);
            if (iVar12 == 0) {
              unaff_r7 = (uint ****)0x0;
              FUN_005f7098(param_1 + 0x2c);
              goto LAB_00f5cd78;
            }
            uVar16 = 5;
          }
          *(undefined1 *)(param_1 + 0x2b) = uVar16;
          bVar2 = true;
        }
      }
      local_1b4 = param_1 + 0x20;
      if (bVar2) {
        uVar16 = 6;
        goto LAB_00f5cd9c;
      }
      FUN_00f27794(local_1b4);
    }
    FUN_019bb7e0(param_1[0x1c],param_1[0x1d]);
LAB_00f5cdc0:
    FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
  }
  FUN_019bb7e0(param_1[0x16],param_1[0x17]);
  iVar12 = 0;
  *(undefined1 *)((int)param_1 + 0x7d) = 1;
LAB_00f5cddc:
  uVar16 = 3;
  if (iVar12 == 0) {
    FUN_00f2759c(puVar13);
    uVar16 = 1;
    if (unaff_r7 != (uint ****)0x0) {
      local_e0 = unaff_r7;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4c8ec - 1 < 2 ||
           ((DAT_01d4c8ec != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4c8e4), cVar3 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4c8e4), iVar8 != 0)) {
        if (*(uint *****)(DAT_01d4c8e4 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c202f4);
        }
        local_68 = *(uint *****)(DAT_01d4c8e4 + 0x24);
        local_64 = *(uint *****)(DAT_01d4c8e4 + 0x28);
        local_10c = (uint ****)&local_d0;
        local_98 = (uint ****)(DAT_01d4c8e4 + 0x1c);
        local_70 = (uint ****)*local_98;
        local_110 = (uint ****)&local_70;
        local_9c = (uint ****)&DAT_00000001;
        local_cc = (uint ****)&local_80;
        local_a0 = (uint ****)&local_110;
        local_80 = (uint ****)&local_e0;
        local_60 = (uint ****)0x0;
        local_108 = (uint ****)&DAT_01d2ea4c;
        local_d0 = (uint ****)&DAT_00400d90;
        local_7c = (uint ****)FUN_00667a08;
        local_6c = *(uint *****)(DAT_01d4c8e4 + 0x20);
        FUN_01aaaecc(DAT_01d4c8e4,&local_a0);
        iVar8 = DAT_01d4c8e4;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_17c = *(uint *****)(DAT_01d4c8e4 + 0x14);
          local_178 = *(uint *****)(DAT_01d4c8e4 + 0x18);
          local_180 = (uint ****)0x2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar13[3])(pcVar1,&local_180);
          if (iVar9 != 0) {
            FUN_01aaa328(iVar8,pcVar1,puVar13[4],&local_180,&local_a0);
          }
        }
      }
      else {
        iVar8 = DAT_01d4c8e4;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_198 = *(undefined4 *)(DAT_01d4c8e4 + 0x14);
          local_194 = *(undefined4 *)(DAT_01d4c8e4 + 0x18);
          local_19c = 2;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar9 = (*(code *)puVar13[3])(pcVar1,&local_19c);
          if (iVar9 != 0) {
            if (*(uint *****)(DAT_01d4c8e4 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c202f4);
            }
            local_17c = (uint ****)&local_80;
            local_68 = *(uint *****)(DAT_01d4c8e4 + 0x24);
            local_64 = *(uint *****)(DAT_01d4c8e4 + 0x28);
            local_180 = (uint ****)&local_70;
            local_110 = (uint ****)&local_180;
            local_60 = (uint ****)0x0;
            local_10c = (uint ****)&DAT_00000001;
            local_7c = (uint ****)&local_a0;
            local_178 = (uint ****)&DAT_01d2ea4c;
            local_9c = (uint ****)FUN_00667a08;
            local_80 = (uint ****)&DAT_00400d90;
            local_a0 = (uint ****)&local_e0;
            local_108 = (uint ****)(DAT_01d4c8e4 + 0x1c);
            local_70 = *(uint *****)(DAT_01d4c8e4 + 0x1c);
            local_6c = *(uint *****)(DAT_01d4c8e4 + 0x20);
            FUN_01aaa328(iVar8,pcVar1,puVar13[4],&local_19c,&local_110);
          }
        }
      }
      (*(code *)**local_e0)();
    }
  }
  *(undefined1 *)((int)param_1 + 0x10d) = uVar16;
  return iVar12;
}


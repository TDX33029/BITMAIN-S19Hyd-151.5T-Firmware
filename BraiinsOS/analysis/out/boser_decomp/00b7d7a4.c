// FUN_00b7d7a4 @ 00b7d7a4 size=8236 calls_out=36 calls_in=0
// strings: notify:sysupgrade | boser::bosopen/boser/boser/src/bos.rsevent open/boser/boser/src/bos.rs:125event open/boser/boser/src/bos.rs:432event open/boser/boser/src/bos.rs:471event open/boser/boser/src/bos.rs:464event open/boser/boser/src/bos.rs:454event open/boser/boser/src/bos.rs:459event open/boser/boser/src/bos.rs:450event open/boser/boser/src/bos.rs:446event open/boser/boser/src/bos.rs:456uievent open/boser/boser/src/web/graphql/bosminer/license.rs:120 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Signaling ready to `do_upgrade` task...

undefined4 FUN_00b7d7a4(undefined4 *param_1,undefined4 *param_2)

{
  code *pcVar1;
  char *pcVar2;
  byte bVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  int ***pppiVar7;
  int **ppiVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 *puVar13;
  bool bVar16;
  undefined4 *puVar14;
  undefined1 *puVar15;
  int ***pppiVar17;
  int *piVar18;
  undefined4 uVar19;
  int ****ppppiVar20;
  undefined1 *puVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined1 *local_34c;
  undefined4 *local_340;
  undefined1 *local_338;
  int ***local_330;
  int ***local_32c;
  int local_328;
  undefined4 local_324;
  undefined4 local_320;
  undefined4 local_31c;
  int ***local_318;
  int ****local_314;
  undefined4 *local_310;
  int ***local_2a8;
  int ****local_2a4;
  undefined1 *local_2a0;
  int ***local_1e8;
  int ***local_1e4;
  undefined *local_1e0;
  code *local_1dc;
  undefined *local_1d8;
  undefined2 *local_1d4;
  undefined1 auStack_198 [116];
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  int ****local_118;
  int ****local_114;
  undefined4 *local_110;
  int ****local_c8;
  int ****local_c4;
  undefined4 *local_c0;
  uint local_b8;
  undefined1 local_b1;
  int ****local_b0;
  int ****local_ac;
  undefined4 *local_a8;
  int ****local_a4;
  int ****local_a0;
  undefined4 *local_9c;
  int ****local_98;
  int ****local_94;
  undefined4 *local_90;
  int ****local_88;
  int ****local_84;
  undefined4 *local_80;
  int ****local_78;
  int ****local_74;
  undefined4 *local_70;
  undefined4 uStack_68;
  undefined3 uStack_64;
  int ***local_60;
  int ***pppiStack_5c;
  int ****local_58;
  int ****local_54;
  undefined4 *local_50;
  int ****local_48;
  int ****local_44;
  undefined4 *local_40;
  int ***local_38;
  undefined4 ****local_34;
  int ****local_30;
  int ****local_2c;
  undefined4 *local_28;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x3e)) {
  case 0:
    pppiVar17 = *(int ****)(param_1[0x3c] + 0xc);
    pppiVar7 = pppiVar17 + 0x26;
    do {
      bVar23 = (bool)hasExclusiveAccess(pppiVar7);
    } while (!bVar23);
    *pppiVar7 = (int **)((int)*pppiVar7 + 1);
    do {
      ppiVar8 = *pppiVar17;
      bVar23 = (bool)hasExclusiveAccess(pppiVar17);
    } while (!bVar23);
    *pppiVar17 = (int **)((int)ppiVar8 + 1);
    if ((int)ppiVar8 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0xb7faac);
      (*pcVar1)();
    }
    local_32c = (int ***)*param_1;
    local_328 = param_1[1];
    ppppiVar20 = (int ****)param_1[0x3d];
    param_1[0x36] = local_32c;
    param_1[0x37] = local_328;
    param_1[0x38] = pppiVar17;
    param_1[0x39] = ppppiVar20;
    *(undefined1 *)((int)param_1 + 0xe9) = 0;
LAB_00b7d86c:
    *(undefined1 *)(param_1 + 0x3a) = 1;
    local_330 = pppiVar17;
    if ((local_328 == 0x11) &&
       (iVar9 = thunk_FUN_01bed842(local_32c,"notify:sysupgrade",0x11), iVar9 == 0)) {
      *(undefined1 *)(param_1 + 0x34) = 0;
      param_1[0x32] = pppiVar17;
      param_1[0x33] = ppppiVar20;
      *(undefined1 *)(param_1 + 0x3a) = 0;
LAB_00b7da70:
      local_310._0_3_ = (uint3)(ushort)local_310;
      local_318 = pppiVar17;
      local_314 = ppppiVar20;
      FUN_019ac130(&local_118,1);
      puVar14 = local_110;
      puVar15 = (undefined1 *)((int)local_118 + 3);
      puVar21 = (undefined1 *)((int)local_114 + (uint)((int ****)0xfffffffc < local_118));
      if ((int)(((uint)local_114 ^ (uint)puVar21) & ~(uint)local_114) < 0) {
        FUN_019e6e14(&local_118);
      }
      else {
        uVar24 = FUN_019ef7f4(&DAT_01c13288);
        uVar19 = (undefined4)((ulonglong)uVar24 >> 0x20);
        FUN_019dc4f8(&local_118,(int)uVar24,uVar19,uVar19,puVar15,puVar21,puVar14,&DAT_01c13288);
      }
      FUN_01bed4e2(auStack_198,&local_318,0x6c);
      FUN_01bed4e2(&local_1e8,&local_118,0x50);
      FUN_01bed4e2(&local_2a8,&local_1e8,0xc0);
      FUN_01bed4e2(param_1 + 2,&local_2a8,0xc0);
      goto switchD_00b7da3c_caseD_3;
    }
    if (((DAT_01d50f88 < 4) &&
        ((DAT_01d4c314 - 1 < 2 ||
         ((DAT_01d4c314 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c30c), cVar6 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4c30c), iVar9 != 0)) {
      local_1e4 = *(int ****)(DAT_01d4c30c + 0x20);
      if (local_1e4 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13268);
      }
      local_314 = (int ****)&local_48;
      local_1e0 = *(undefined **)(DAT_01d4c30c + 0x24);
      local_1dc = *(code **)(DAT_01d4c30c + 0x28);
      local_110 = (undefined4 *)(DAT_01d4c30c + 0x1c);
      local_1e8 = (int ***)*local_110;
      local_318 = (int ***)&local_1e8;
      local_118 = &local_318;
      local_1d8 = (undefined *)0x0;
      local_114 = (int ****)&DAT_00000001;
      local_44 = (int ****)&local_30;
      local_30 = &local_32c;
      local_310 = (undefined4 *)&DAT_01d2ea4c;
      local_48 = (int ****)&DAT_0058fb57;
      local_2c = (int ****)&DAT_0132b6a0;
      FUN_01aaaecc(DAT_01d4c30c,&local_118);
      iVar9 = DAT_01d4c30c;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_2a4 = *(int *****)(DAT_01d4c30c + 0x14);
        local_2a0 = *(undefined1 **)(DAT_01d4c30c + 0x18);
        local_2a8 = (int ***)0x2;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar10 = (*(code *)puVar14[3])(pcVar2,&local_2a8);
        if (iVar10 != 0) {
          FUN_01aaa328(iVar9,pcVar2,puVar14[4],&local_2a8,&local_118);
        }
      }
    }
    else {
      iVar9 = DAT_01d4c30c;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_320 = *(undefined4 *)(DAT_01d4c30c + 0x14);
        local_31c = *(undefined4 *)(DAT_01d4c30c + 0x18);
        local_324 = 2;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar10 = (*(code *)puVar14[3])(pcVar2,&local_324);
        if (iVar10 != 0) {
          local_310 = (undefined4 *)(DAT_01d4c30c + 0x1c);
          local_1e8 = (int ***)*local_310;
          local_1e4 = *(int ****)(DAT_01d4c30c + 0x20);
          if (local_1e4 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c13268);
          }
          local_2a4 = (int ****)&local_30;
          local_1e0 = *(undefined **)(DAT_01d4c30c + 0x24);
          local_1dc = *(code **)(DAT_01d4c30c + 0x28);
          local_2a8 = (int ***)&local_1e8;
          local_318 = (int ***)&local_2a8;
          local_314 = (int ****)&DAT_00000001;
          local_2c = (int ****)&local_118;
          local_118 = &local_32c;
          local_1d8 = (undefined *)0x0;
          local_2a0 = &DAT_01d2ea4c;
          local_30 = (int ****)&DAT_0058fb57;
          local_114 = (int ****)&DAT_0132b6a0;
          FUN_01aaa328(iVar9,pcVar2,puVar14[4],&local_324,&local_318);
        }
      }
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c13760);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13760);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0xe9)) {
    case 0:
      local_32c = (int ***)param_1[0x36];
      local_328 = param_1[0x37];
      pppiVar17 = (int ***)param_1[0x38];
      ppppiVar20 = (int ****)param_1[0x39];
      goto LAB_00b7d86c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13278);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c13278);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x34)) {
    case 0:
      pppiVar17 = (int ***)param_1[0x32];
      ppppiVar20 = (int ****)param_1[0x33];
      goto LAB_00b7da70;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c13298);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c13298);
    }
switchD_00b7da3c_caseD_3:
    local_338 = (undefined1 *)((int)param_1 + 0xe9);
    local_340 = param_1 + 0x34;
    puVar14 = param_1 + 2;
    bVar3 = FUN_019ec70c();
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x62)) {
    case 0:
      *(undefined2 *)(param_1 + 0x18) = 0x100;
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4b8e8 - 1 < 2 ||
           ((DAT_01d4b8e8 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b8e0), cVar6 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4b8e0), iVar9 != 0)))) {
        local_1e4 = *(int ****)(DAT_01d4b8e0 + 0x20);
        if (local_1e4 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5b4);
        }
        local_44 = &local_38;
        local_1e0 = *(undefined **)(DAT_01d4b8e0 + 0x24);
        local_1dc = *(code **)(DAT_01d4b8e0 + 0x28);
        local_9c = (undefined4 *)(DAT_01d4b8e0 + 0x1c);
        local_1e8 = (int ***)*local_9c;
        local_48 = &local_1e8;
        local_a4 = (int ****)&local_48;
        local_1d8 = (undefined *)0x0;
        local_a0 = (int ****)&DAT_00000001;
        local_40 = (undefined4 *)&DAT_01d2ea4c;
        local_34 = (undefined4 ****)0x4f;
        local_38 = (int ***)0x3e6541;
        FUN_01aaaecc(DAT_01d4b8e0,&local_a4);
        iVar9 = DAT_01d4b8e0;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_2c = *(int *****)(DAT_01d4b8e0 + 0x14);
          local_28 = *(undefined4 **)(DAT_01d4b8e0 + 0x18);
          local_30 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar13[3])(pcVar2,&local_30);
          if (iVar10 != 0) {
            local_118 = local_30;
            local_114 = local_2c;
            local_110 = local_28;
            FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_a4);
          }
        }
      }
      else {
        iVar9 = DAT_01d4b8e0;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_c4 = *(int *****)(DAT_01d4b8e0 + 0x14);
          local_c0 = *(undefined4 **)(DAT_01d4b8e0 + 0x18);
          local_c8 = (int ****)&DAT_00000003;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar13[3])(pcVar2,&local_c8);
          if (iVar10 != 0) {
            local_40 = (undefined4 *)(DAT_01d4b8e0 + 0x1c);
            local_1e8 = (int ***)*local_40;
            local_1e4 = *(int ****)(DAT_01d4b8e0 + 0x20);
            if (local_1e4 == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5b4);
            }
            local_30 = &local_1e8;
            local_1e0 = *(undefined **)(DAT_01d4b8e0 + 0x24);
            local_1dc = *(code **)(DAT_01d4b8e0 + 0x28);
            local_2c = (int ****)&local_a4;
            local_48 = (int ****)&local_30;
            local_1d8 = (undefined *)0x0;
            local_44 = (int ****)&DAT_00000001;
            local_a4 = (int ****)0x3e6541;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_a0 = (int ****)0x4f;
            local_118 = local_c8;
            local_114 = local_c4;
            local_110 = local_c0;
            FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
          }
        }
      }
      *(undefined1 *)((int)param_1 + 0xc1) = 0;
      *(undefined1 *)((int)param_1 + 0x61) = 0;
      iVar9 = param_1[0x16];
      param_1[0x2f] = iVar9;
LAB_00b7e09c:
      piVar18 = param_1 + 0x2d;
      *piVar18 = iVar9;
      *(undefined1 *)(param_1 + 0x30) = 0;
      uVar24 = FUN_019f16d8();
      ppppiVar20 = (int ****)uVar24;
      *(undefined1 *)((int)param_1 + 0xb1) = 0;
      *(undefined1 *)(param_1 + 0x30) = 0;
      param_1[0x2e] = (int)((ulonglong)uVar24 >> 0x20);
      param_1[0x2b] = piVar18;
      param_1[0x29] = ppppiVar20;
      local_118 = ppppiVar20;
LAB_00b7e0cc:
      *(undefined1 *)(param_1 + 0x28) = 0;
      param_1[0x2a] = ppppiVar20;
      *(undefined1 *)(param_1 + 0x2c) = 1;
      param_1[0x19] = piVar18;
LAB_00b7e0ec:
      *(undefined1 *)(param_1 + 0x1f) = 0;
      uVar11 = 1;
      param_1[0x1a] = piVar18;
      param_1[0x1b] = piVar18;
      param_1[0x1c] = 1;
LAB_00b7e108:
      param_1[0x1d] = piVar18;
      param_1[0x1e] = uVar11;
LAB_00b7e114:
      iVar9 = *piVar18;
      if (uVar11 <= *(uint *)(iVar9 + 0x94)) {
        *(undefined1 *)(param_1 + 0x27) = 0;
        param_1[0x23] = 0;
        param_1[0x24] = 0;
        param_1[0x25] = uVar11;
        param_1[0x26] = uVar11;
        param_1[0x20] = iVar9 + 0x80;
        param_1[0x21] = 0;
        goto switchD_00b7e688_caseD_4;
      }
      *(undefined1 *)(param_1 + 0x1f) = 1;
LAB_00b7e1a8:
      uVar22 = 1;
      *(undefined1 *)(param_1 + 0x2c) = 0;
      pppiVar17 = (int ***)param_1[0x2a];
      *(undefined1 *)(param_1 + 0x28) = 1;
LAB_00b7e1c4:
      *(undefined1 *)(param_1 + 0x2c) = 0;
      uVar5 = 1;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0e5c4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0e5c4);
    case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xc1)) {
      case 0:
        iVar9 = param_1[0x2f];
        goto LAB_00b7e09c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e43c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c0e43c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_1 + 0xb1)) {
      case 0:
        ppppiVar20 = (int ****)param_1[0x29];
        piVar18 = (int *)param_1[0x2b];
        goto LAB_00b7e0cc;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2e0bc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2e0bc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x28)) {
      case 0:
        piVar18 = (int *)param_1[0x19];
        goto LAB_00b7e0ec;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2e0cc);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2e0cc);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x1f)) {
      case 0:
        piVar18 = (int *)param_1[0x1b];
        uVar11 = param_1[0x1c];
        goto LAB_00b7e108;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d2e0ac);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d2e0ac);
      case 3:
        piVar18 = (int *)param_1[0x1d];
        uVar11 = param_1[0x1e];
        goto LAB_00b7e114;
      }
switchD_00b7e688_caseD_4:
      pppiVar17 = (int ***)(param_1 + 0x28);
      bVar4 = FUN_019f9bc4(param_1 + 0x20,param_2);
      if (bVar4 != 2) {
        FUN_0193c3cc(param_1 + 0x20);
        *(undefined1 *)(param_1 + 0x1f) = 1;
        if ((bVar4 & 1) != 0) goto LAB_00b7e1a8;
        *(undefined1 *)(param_1 + 0x2c) = 0;
        *(undefined1 *)(param_1 + 0x28) = 1;
        pppiVar17 = (int ***)param_1[0x2a];
        iVar9 = *(int *)param_1[0x1a];
        puVar12 = (uint *)(iVar9 + 0x24);
        do {
          uVar11 = *puVar12;
          bVar23 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar23);
        *puVar12 = uVar11 + 1;
        DataMemoryBarrier(0xb);
        iVar10 = FUN_00942ff4(iVar9 + 0x20,uVar11);
        *(int ****)(iVar10 + (uVar11 & 0xf) * 4) = pppiVar17;
        puVar12 = (uint *)(iVar10 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          bVar23 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar23);
        *puVar12 = *puVar12 | 1 << (uVar11 & 0xf);
        puVar12 = (uint *)(iVar9 + 0x48);
        DataMemoryBarrier(0xb);
        do {
          uVar11 = *puVar12;
          bVar23 = (bool)hasExclusiveAccess(puVar12);
        } while (!bVar23);
        *puVar12 = uVar11 | 2;
        uVar22 = 0;
        DataMemoryBarrier(0xb);
        if (uVar11 == 0) {
          iVar10 = *(int *)(iVar9 + 0x40);
          *(undefined4 *)(iVar9 + 0x40) = 0;
          DataMemoryBarrier(0xb);
          do {
            bVar23 = (bool)hasExclusiveAccess(puVar12);
          } while (!bVar23);
          *puVar12 = 0;
          uVar22 = 0;
          if (iVar10 != 0) {
            (**(code **)(iVar10 + 4))(*(undefined4 *)(iVar9 + 0x44));
          }
        }
        goto LAB_00b7e1c4;
      }
      *(undefined1 *)(param_1 + 0x1f) = 4;
      uVar5 = 3;
      *(undefined1 *)pppiVar17 = 3;
      uVar22 = 2;
      break;
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_1 + 0x1b)) {
      case 0:
        goto switchD_00b7dea4_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c0e44c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c0e44c);
      }
      goto switchD_00b7dea4_caseD_3;
    case 5:
      goto switchD_00b7db58_caseD_5;
    }
    local_34c = (undefined1 *)((int)param_1 + 0xc1);
    *(undefined1 *)((int)param_1 + 0xb1) = uVar5;
    if (uVar22 == 2) {
      uVar5 = 3;
      *local_34c = 3;
LAB_00b7ef44:
      *(undefined1 *)((int)param_1 + 0x62) = uVar5;
      iVar9 = FUN_019ee264(bVar3 == 2 | bVar3 & 1,puVar14,*param_2);
      bVar23 = false;
      if (iVar9 != 0) {
        uVar5 = 3;
        uVar19 = 1;
        *(undefined1 *)local_340 = 3;
        *local_338 = 3;
        goto LAB_00b7f2f0;
      }
    }
    else {
      FUN_00a43a24(param_1 + 0x19);
      bVar23 = (uVar22 & 1) == 0;
      if (bVar23) {
        uVar22 = param_1[0x2e];
        *(undefined1 *)(param_1 + 0x30) = 0;
        FUN_00b697cc(param_1 + 0x2d);
      }
      else {
        local_1e8 = pppiVar17;
        FUN_00a43aa8(&local_1e8);
        FUN_00b802e4(param_1 + 0x2e);
        *(undefined1 *)(param_1 + 0x30) = 0;
        FUN_00b697cc(param_1 + 0x2d);
      }
      bVar16 = !bVar23;
      *local_34c = 1;
      FUN_00a439a8(param_1 + 0x19);
      if (bVar23) {
        *(undefined1 *)(param_1 + 0x18) = 1;
        local_b8 = uVar22;
        if (((DAT_01d50f88 < 3) &&
            ((DAT_01d4b8f4 - 1 < 2 ||
             ((DAT_01d4b8f4 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b8ec), cVar6 != '\0')))))) &&
           (iVar9 = FUN_01aaa278(DAT_01d4b8ec), iVar9 != 0)) {
          if (*(int ****)(DAT_01d4b8ec + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5d4);
          }
          local_44 = &local_38;
          local_1e0 = *(undefined **)(DAT_01d4b8ec + 0x24);
          local_1dc = *(code **)(DAT_01d4b8ec + 0x28);
          local_9c = (undefined4 *)(DAT_01d4b8ec + 0x1c);
          local_1e8 = (int ***)*local_9c;
          local_48 = &local_1e8;
          local_a4 = (int ****)&local_48;
          local_1d8 = (undefined *)0x0;
          local_a0 = (int ****)&DAT_00000001;
          local_40 = (undefined4 *)&DAT_01d2ea4c;
          local_34 = (undefined4 ****)&DAT_00000065;
          local_38 = (int ***)0x3e6568;
          local_1e4 = *(int ****)(DAT_01d4b8ec + 0x20);
          FUN_01aaaecc(DAT_01d4b8ec,&local_a4);
          iVar9 = DAT_01d4b8ec;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_2c = *(int *****)(DAT_01d4b8ec + 0x14);
            local_28 = *(undefined4 **)(DAT_01d4b8ec + 0x18);
            local_30 = (int ****)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar13 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar13 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)puVar13[3])(pcVar2,&local_30);
            if (iVar10 != 0) {
              local_118 = local_30;
              local_114 = local_2c;
              local_110 = local_28;
              FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_a4);
            }
          }
        }
        else {
          iVar9 = DAT_01d4b8ec;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_94 = *(int *****)(DAT_01d4b8ec + 0x14);
            local_90 = *(undefined4 **)(DAT_01d4b8ec + 0x18);
            local_98 = (int ****)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar13 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar13 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)puVar13[3])(pcVar2,&local_98);
            if (iVar10 != 0) {
              if (*(int ****)(DAT_01d4b8ec + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5d4);
              }
              local_30 = &local_1e8;
              local_48 = (int ****)&local_30;
              local_1e0 = *(undefined **)(DAT_01d4b8ec + 0x24);
              local_1dc = *(code **)(DAT_01d4b8ec + 0x28);
              local_2c = (int ****)&local_a4;
              local_1d8 = (undefined *)0x0;
              local_44 = (int ****)&DAT_00000001;
              local_28 = (undefined4 *)&DAT_01d2ea4c;
              local_a0 = (int ****)&DAT_00000065;
              local_a4 = (int ****)0x3e6568;
              local_118 = local_98;
              local_114 = local_94;
              local_110 = local_90;
              local_1e8 = *(int ****)(DAT_01d4b8ec + 0x1c);
              local_1e4 = *(int ****)(DAT_01d4b8ec + 0x20);
              local_40 = (undefined4 *)(DAT_01d4b8ec + 0x1c);
              FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
            }
          }
        }
        param_1[0x19] = uVar22;
        *(undefined1 *)(param_1 + 0x18) = 0;
        *(undefined1 *)(param_1 + 0x1b) = 0;
switchD_00b7dea4_caseD_0:
        param_1[0x1a] = param_1[0x19];
switchD_00b7dea4_caseD_3:
        cVar6 = FUN_019f6a08(param_1 + 0x1a,*param_2);
        if (cVar6 == '\x02') {
          *(undefined1 *)(param_1 + 0x1b) = 3;
          uVar5 = 4;
          goto LAB_00b7ef44;
        }
        FUN_00b802e4(param_1 + 0x1a);
        *(undefined1 *)(param_1 + 0x1b) = 1;
        if (cVar6 == '\0') {
          if ((DAT_01d50f88 < 3) &&
             (((DAT_01d4b918 - 1 < 2 ||
               ((DAT_01d4b918 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b910), cVar6 != '\0')))) &&
              (iVar9 = FUN_01aaa278(DAT_01d4b910), iVar9 != 0)))) {
            if (*(int *)(DAT_01d4b910 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e604);
            }
            local_114 = (int ****)&local_48;
            local_1e0 = *(undefined **)(DAT_01d4b910 + 0x24);
            local_1dc = *(code **)(DAT_01d4b910 + 0x28);
            local_118 = &local_1e8;
            local_30 = (int ****)&local_118;
            local_2c = (int ****)&DAT_00000001;
            local_1d8 = (undefined *)0x0;
            local_110 = (undefined4 *)&DAT_01d2ea4c;
            local_44 = (int ****)0x5f;
            local_48 = (int ****)0x3e659a;
            local_1e8 = *(int ****)(DAT_01d4b910 + 0x1c);
            local_1e4 = (int ***)*(int *)(DAT_01d4b910 + 0x20);
            local_28 = (undefined4 *)(DAT_01d4b910 + 0x1c);
            FUN_00a46154(&local_30);
          }
          else {
            iVar9 = DAT_01d4b910;
            if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
              local_74 = *(int *****)(DAT_01d4b910 + 0x14);
              local_70 = *(undefined4 **)(DAT_01d4b910 + 0x18);
              local_78 = (int ****)&DAT_00000003;
              DataMemoryBarrier(0xb);
              puVar13 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar10 = (*(code *)puVar13[3])(pcVar2,&local_78);
              if (iVar10 != 0) {
                if (*(int *)(DAT_01d4b910 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e604);
                }
                local_30 = &local_1e8;
                local_48 = (int ****)&local_30;
                local_1e0 = *(undefined **)(DAT_01d4b910 + 0x24);
                local_1d8 = (undefined *)0x0;
                local_1dc = *(code **)(DAT_01d4b910 + 0x28);
                local_2c = (int ****)&local_a4;
                local_44 = (int ****)&DAT_00000001;
                local_28 = (undefined4 *)&DAT_01d2ea4c;
                local_a0 = (int ****)0x5f;
                local_a4 = (int ****)0x3e659a;
                local_118 = local_78;
                local_114 = local_74;
                local_110 = local_70;
                local_1e8 = *(int ****)(DAT_01d4b910 + 0x1c);
                local_1e4 = (int ***)*(int *)(DAT_01d4b910 + 0x20);
                local_40 = (undefined4 *)(DAT_01d4b910 + 0x1c);
                FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
              }
            }
          }
          uVar19 = param_1[0x17];
          local_1d4 = &DAT_0132b6a0;
          local_1d8 = &DAT_01c0dcac;
          local_1dc = FUN_012fbb84;
          local_1e0 = &DAT_0056df10;
          local_1e4 = (int ***)&DAT_0132b6a0;
          local_1e8 = (int ***)&DAT_01c0dca4;
          FUN_00664898(param_1 + 0x19,&DAT_005a902e,&local_1e8);
          param_1[0x1c] = uVar19;
          param_1[0x1d] = param_1[0x1a];
          param_1[0x1e] = param_1[0x1b];
switchD_00b7db58_caseD_5:
          FUN_014ad7a4(&local_1e8,param_1 + 0x1c,param_2);
          if (((uint)local_1e8 & 0xff) == 5) {
            uVar5 = 5;
            goto LAB_00b7ef44;
          }
          uStack_68 = CONCAT13(local_1e4._0_1_,local_1e8._1_3_);
          uStack_64 = (undefined3)((uint)local_1e4 >> 8);
          if (((uint)local_1e8 & 0xff) != 4) {
            pppiStack_5c = local_1e4;
            local_60 = local_1e8;
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d4b924 - 1 < 2 ||
                 ((DAT_01d4b924 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b91c), cVar6 != '\0')))))) &&
               (iVar9 = FUN_01aaa278(DAT_01d4b91c), iVar9 != 0)) {
              if (*(int ****)(DAT_01d4b91c + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e614);
              }
              local_1e0 = *(undefined **)(DAT_01d4b91c + 0x24);
              local_1dc = *(code **)(DAT_01d4b91c + 0x28);
              local_114 = (int ****)&local_a4;
              local_2c = (int ****)&DAT_00000001;
              local_a0 = (int ****)&local_48;
              local_48 = &local_60;
              local_30 = (int ****)&local_118;
              local_1d8 = (undefined *)0x0;
              local_110 = (undefined4 *)&DAT_01d2ea4c;
              local_a4 = (int ****)&DAT_0057d0e6;
              local_44 = (int ****)FUN_019a7d7c;
              local_1e8 = *(int ****)(DAT_01d4b91c + 0x1c);
              local_1e4 = *(int ****)(DAT_01d4b91c + 0x20);
              local_118 = &local_1e8;
              local_28 = (undefined4 *)(DAT_01d4b91c + 0x1c);
              FUN_00a4624c(&local_30);
            }
            else {
              iVar9 = DAT_01d4b91c;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_54 = *(int *****)(DAT_01d4b91c + 0x14);
                local_50 = *(undefined4 **)(DAT_01d4b91c + 0x18);
                local_58 = (int ****)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar13 = DAT_01d4edc8;
                pcVar2 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar13 = &DAT_01cfc5e0;
                  pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar10 = (*(code *)puVar13[3])(pcVar2,&local_58);
                if (iVar10 != 0) {
                  if (*(int ****)(DAT_01d4b91c + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e614);
                  }
                  local_1e0 = *(undefined **)(DAT_01d4b91c + 0x24);
                  local_2c = &local_38;
                  local_1dc = *(code **)(DAT_01d4b91c + 0x28);
                  local_48 = (int ****)&local_30;
                  local_44 = (int ****)&DAT_00000001;
                  local_34 = &local_a4;
                  local_1d8 = (undefined *)0x0;
                  local_28 = (undefined4 *)&DAT_01d2ea4c;
                  local_38 = (int ***)&DAT_0057d0e6;
                  local_a0 = (int ****)FUN_019a7d7c;
                  local_a4 = &local_60;
                  local_118 = local_58;
                  local_114 = local_54;
                  local_110 = local_50;
                  local_1e8 = *(int ****)(DAT_01d4b91c + 0x1c);
                  local_1e4 = *(int ****)(DAT_01d4b91c + 0x20);
                  local_40 = (undefined4 *)(DAT_01d4b91c + 0x1c);
                  local_30 = &local_1e8;
                  FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
                }
              }
            }
            FUN_0069d8a4((uint)local_60 & 0xff,pppiStack_5c);
          }
          FUN_019bb7e0(param_1[0x19],param_1[0x1a]);
        }
        else {
          local_60 = (int ***)(CONCAT31(local_60._1_3_,cVar6 << 1) ^ 2);
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d4b90c - 1 < 2 ||
               ((DAT_01d4b90c != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b904), cVar6 != '\0')))))) &&
             (iVar9 = FUN_01aaa278(DAT_01d4b904), iVar9 != 0)) {
            if (*(int ****)(DAT_01d4b904 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5f4);
            }
            local_1e0 = *(undefined **)(DAT_01d4b904 + 0x24);
            local_1dc = *(code **)(DAT_01d4b904 + 0x28);
            local_114 = (int ****)&local_a4;
            local_2c = (int ****)&DAT_00000001;
            local_a0 = (int ****)&local_48;
            local_118 = &local_1e8;
            local_48 = &local_60;
            local_30 = (int ****)&local_118;
            local_1d8 = (undefined *)0x0;
            local_110 = (undefined4 *)&DAT_01d2ea4c;
            local_a4 = (int ****)&DAT_005ba13b;
            local_44 = (int ****)&LAB_009e6c18;
            local_1e8 = *(int ****)(DAT_01d4b904 + 0x1c);
            local_1e4 = *(int ****)(DAT_01d4b904 + 0x20);
            local_28 = (undefined4 *)(DAT_01d4b904 + 0x1c);
            FUN_00a46058(&local_30);
          }
          else {
            iVar9 = DAT_01d4b904;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_84 = *(int *****)(DAT_01d4b904 + 0x14);
              local_80 = *(undefined4 **)(DAT_01d4b904 + 0x18);
              local_88 = (int ****)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar13 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar10 = (*(code *)puVar13[3])(pcVar2,&local_88);
              if (iVar10 != 0) {
                if (*(int ****)(DAT_01d4b904 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5f4);
                }
                local_30 = &local_1e8;
                local_1e0 = *(undefined **)(DAT_01d4b904 + 0x24);
                local_1dc = *(code **)(DAT_01d4b904 + 0x28);
                local_2c = &local_38;
                local_48 = (int ****)&local_30;
                local_44 = (int ****)&DAT_00000001;
                local_34 = &local_a4;
                local_1d8 = (undefined *)0x0;
                local_28 = (undefined4 *)&DAT_01d2ea4c;
                local_38 = (int ***)&DAT_005ba13b;
                local_a0 = (int ****)&LAB_009e6c18;
                local_a4 = &local_60;
                local_118 = local_88;
                local_114 = local_84;
                local_110 = local_80;
                local_1e8 = *(int ****)(DAT_01d4b904 + 0x1c);
                local_1e4 = *(int ****)(DAT_01d4b904 + 0x20);
                local_40 = (undefined4 *)(DAT_01d4b904 + 0x1c);
                FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
              }
            }
          }
        }
      }
      else {
        local_b1 = bVar16;
        if (((DAT_01d50f88 < 5) &&
            ((DAT_01d4b900 - 1 < 2 ||
             ((DAT_01d4b900 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4b8f8), cVar6 != '\0')))))) &&
           (iVar9 = FUN_01aaa278(DAT_01d4b8f8), iVar9 != 0)) {
          if (*(int ****)(DAT_01d4b8f8 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5e4);
          }
          local_44 = &local_60;
          local_1e0 = *(undefined **)(DAT_01d4b8f8 + 0x24);
          local_1dc = *(code **)(DAT_01d4b8f8 + 0x28);
          local_9c = (undefined4 *)(DAT_01d4b8f8 + 0x1c);
          local_1e8 = (int ***)*local_9c;
          local_48 = &local_1e8;
          local_a4 = (int ****)&local_48;
          local_1d8 = (undefined *)0x0;
          local_a0 = (int ****)&DAT_00000001;
          pppiStack_5c = (int ***)&local_38;
          local_60 = (int ***)&DAT_005a0d8c;
          local_38 = (int ***)&local_b1;
          local_40 = (undefined4 *)&DAT_01d2ea4c;
          local_34 = (undefined4 ****)&LAB_009e6c18;
          local_1e4 = *(int ****)(DAT_01d4b8f8 + 0x20);
          FUN_01aaaecc(DAT_01d4b8f8,&local_a4);
          iVar9 = DAT_01d4b8f8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_2c = *(int *****)(DAT_01d4b8f8 + 0x14);
            local_28 = *(undefined4 **)(DAT_01d4b8f8 + 0x18);
            local_30 = (int ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar13 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar13 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)puVar13[3])(pcVar2,&local_30);
            if (iVar10 != 0) {
              local_118 = local_30;
              local_114 = local_2c;
              local_110 = local_28;
              FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_a4);
            }
          }
        }
        else {
          iVar9 = DAT_01d4b8f8;
          if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
            local_ac = *(int *****)(DAT_01d4b8f8 + 0x14);
            local_a8 = *(undefined4 **)(DAT_01d4b8f8 + 0x18);
            local_b0 = (int ****)&DAT_00000001;
            DataMemoryBarrier(0xb);
            puVar13 = DAT_01d4edc8;
            pcVar2 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar13 = &DAT_01cfc5e0;
              pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar10 = (*(code *)puVar13[3])(pcVar2,&local_b0);
            if (iVar10 != 0) {
              if (*(int ****)(DAT_01d4b8f8 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0e5e4);
              }
              local_30 = &local_1e8;
              local_1e0 = *(undefined **)(DAT_01d4b8f8 + 0x24);
              local_1dc = *(code **)(DAT_01d4b8f8 + 0x28);
              local_2c = &local_38;
              local_48 = (int ****)&local_30;
              local_44 = (int ****)&DAT_00000001;
              local_34 = &local_a4;
              local_1d8 = (undefined *)0x0;
              local_28 = (undefined4 *)&DAT_01d2ea4c;
              local_38 = (int ***)&DAT_005a0d8c;
              local_a0 = (int ****)&LAB_009e6c18;
              local_a4 = (int ****)&local_b1;
              local_118 = local_b0;
              local_114 = local_ac;
              local_110 = local_a8;
              local_1e8 = *(int ****)(DAT_01d4b8f8 + 0x1c);
              local_1e4 = *(int ****)(DAT_01d4b8f8 + 0x20);
              local_40 = (undefined4 *)(DAT_01d4b8f8 + 0x1c);
              FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_118,&local_48);
            }
          }
        }
      }
      bVar23 = true;
      *(undefined1 *)(param_1 + 0x18) = 0;
      *(undefined1 *)((int)param_1 + 0x62) = 1;
    }
    FUN_00b80150(puVar14);
    if (!bVar23) {
      if ((DAT_01d50f88 < 5) &&
         (((DAT_01d4c320 - 1 < 2 ||
           ((DAT_01d4c320 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c318), cVar6 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4c318), iVar9 != 0)))) {
        if (*(int ****)(DAT_01d4c318 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c132a8);
        }
        local_114 = (int ****)&local_78;
        local_1e0 = *(undefined **)(DAT_01d4c318 + 0x24);
        local_1dc = *(code **)(DAT_01d4c318 + 0x28);
        local_28 = (undefined4 *)(DAT_01d4c318 + 0x1c);
        local_1e8 = (int ***)*local_28;
        local_118 = &local_1e8;
        local_30 = (int ****)&local_118;
        local_1d8 = (undefined *)0x0;
        local_2c = (int ****)&DAT_00000001;
        local_58 = (int ****)&DAT_00000003;
        local_74 = (int ****)&local_48;
        local_48 = (int ****)&local_58;
        local_110 = (undefined4 *)&DAT_01d2ea4c;
        local_54 = (int ****)0x0;
        local_78 = (int ****)&DAT_00589f8a;
        local_44 = (int ****)FUN_012fd074;
        local_1e4 = *(int ****)(DAT_01d4c318 + 0x20);
        FUN_01aaaecc(DAT_01d4c318,&local_30);
        iVar9 = DAT_01d4c318;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_2a4 = *(int *****)(DAT_01d4c318 + 0x14);
          local_2a0 = *(undefined1 **)(DAT_01d4c318 + 0x18);
          local_2a8 = (int ***)&DAT_00000001;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar13[3])(pcVar2,&local_2a8);
          if (iVar10 != 0) {
            FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_2a8,&local_30);
          }
        }
      }
      else {
        iVar9 = DAT_01d4c318;
        if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
          local_120 = *(undefined4 *)(DAT_01d4c318 + 0x14);
          local_11c = *(undefined4 *)(DAT_01d4c318 + 0x18);
          local_124 = 1;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar10 = (*(code *)puVar13[3])(pcVar2,&local_124);
          if (iVar10 != 0) {
            if (*(int ****)(DAT_01d4c318 + 0x20) == (int ***)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c132a8);
            }
            local_1e0 = *(undefined **)(DAT_01d4c318 + 0x24);
            local_2a4 = (int ****)&local_58;
            local_1dc = *(code **)(DAT_01d4c318 + 0x28);
            local_2a8 = (int ***)&local_1e8;
            local_114 = (int ****)&DAT_00000001;
            local_118 = &local_2a8;
            local_48 = (int ****)&DAT_00000003;
            local_54 = (int ****)&local_30;
            local_30 = (int ****)&local_48;
            local_1d8 = (undefined *)0x0;
            local_2a0 = &DAT_01d2ea4c;
            local_44 = (int ****)0x0;
            local_58 = (int ****)&DAT_00589f8a;
            local_2c = (int ****)FUN_012fd074;
            local_1e8 = *(int ****)(DAT_01d4c318 + 0x1c);
            local_1e4 = *(int ****)(DAT_01d4c318 + 0x20);
            local_110 = (undefined4 *)(DAT_01d4c318 + 0x1c);
            FUN_01aaa328(iVar9,pcVar2,puVar13[4],&local_124,&local_118);
          }
        }
      }
    }
    *(undefined1 *)local_340 = 1;
    FUN_00b80130(puVar14);
  }
  if (*(char *)(param_1 + 0x3a) != '\0') {
    FUN_00b697cc(&local_330);
  }
  uVar19 = 0;
  uVar5 = 1;
  *(undefined1 *)(param_1 + 0x3a) = 0;
  *(undefined1 *)((int)param_1 + 0xe9) = 1;
  FUN_00b800e8(param_1 + 2);
LAB_00b7f2f0:
  *(undefined1 *)(param_1 + 0x3e) = uVar5;
  return uVar19;
}


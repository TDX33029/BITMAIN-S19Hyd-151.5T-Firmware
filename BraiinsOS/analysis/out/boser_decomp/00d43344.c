// FUN_00d43344 @ 00d43344 size=9412 calls_out=67 calls_in=1
// strings: /var/run/bosminer.pid | /var/run/bosminer.pid | /var/run/bosminer.pid | background task failed | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::monitor::bosmineropen/boser/boser/src/monitor/bosminer.rsevent open/boser/boser/src/monitor/bosminer.rs:69

/* WARNING: Removing unreachable block (ram,0x00d45b48) */
/* WARNING: Type propagation algorithm not settling */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d43344(undefined4 *param_1,uint *param_2,undefined4 *param_3)

{
  code *pcVar1;
  byte bVar2;
  uint *******pppppppuVar3;
  uint *******pppppppuVar4;
  undefined1 uVar5;
  char cVar6;
  int *piVar7;
  uint *puVar8;
  int iVar9;
  int *piVar10;
  int iVar11;
  uint ******ppppppuVar12;
  uint ******ppppppuVar13;
  uint *******pppppppuVar14;
  undefined4 *puVar15;
  int iVar16;
  uint ******ppppppuVar17;
  undefined4 *extraout_r2;
  char *pcVar18;
  uint ******extraout_r2_00;
  uint ******ppppppuVar19;
  uint uVar20;
  uint ******extraout_r3;
  uint ******ppppppuVar21;
  uint ******ppppppuVar22;
  uint *******pppppppuVar23;
  uint uVar24;
  uint *******pppppppuVar25;
  undefined4 uVar26;
  uint *******pppppppuVar27;
  uint *******pppppppuVar28;
  bool bVar29;
  bool bVar30;
  undefined8 in_d16;
  undefined8 in_d17;
  undefined8 uVar31;
  uint *******local_1850;
  uint *local_183c;
  uint *local_1838;
  uint local_1834;
  uint *local_181c;
  uint *local_1818;
  uint ******local_1814;
  uint *local_1810;
  int local_1808;
  undefined4 uStack_1804;
  undefined4 uStack_1800;
  undefined4 uStack_17fc;
  undefined4 uStack_17f8;
  uint *******local_17f0;
  uint *******local_17ec;
  undefined4 local_17e8;
  uint *******pppppppuStack_17e4;
  undefined1 uStack_17e0;
  undefined1 local_17df;
  undefined1 uStack_17de;
  undefined1 local_17dd;
  uint *******local_17dc;
  uint *******local_17d8;
  uint *******pppppppuStack_17d4;
  undefined1 auStack_1508 [88];
  uint *******local_14b0;
  uint *******pppppppuStack_14ac;
  uint *******pppppppuStack_14a8;
  uint *******local_14a0;
  uint *******local_149c;
  uint *******local_1498;
  uint *******local_11c8;
  uint *******local_11c4;
  uint *******local_11c0;
  uint *******local_11b8;
  uint *******local_11b4;
  uint ******local_11ac;
  uint ******local_11a8;
  uint ******local_11a4;
  uint ******local_11a0;
  uint *******local_119c;
  undefined4 local_1198;
  uint *******local_1194;
  uint *******local_1190;
  uint *******local_118c;
  uint *******local_1188;
  uint *******pppppppuStack_1184;
  uint *******local_ec0;
  uint *******local_ebc;
  uint *******local_eb8;
  uint *******pppppppuStack_eb4;
  uint *******pppppppuStack_eb0;
  undefined1 auStack_e50 [624];
  uint *******local_be0;
  uint *******local_bdc;
  uint *******local_bd8;
  uint *******pppppppuStack_bd4;
  uint *******pppppppuStack_bd0;
  uint *******pppppppuStack_bcc;
  uint local_bc8;
  uint uStack_bc4;
  uint uStack_bc0;
  uint uStack_bbc;
  uint uStack_bb8;
  uint uStack_bb4;
  uint *******local_bb0;
  uint *******local_bac;
  uint *******local_ba8;
  undefined1 auStack_b58 [624];
  uint *******local_8e8;
  uint *******pppppppuStack_8e4;
  uint *******pppppppuStack_8e0;
  uint *******pppppppuStack_8dc;
  uint *******local_8d8 [2];
  uint ******local_8d0;
  uint *******pppppppuStack_8cc;
  uint *******local_8c8;
  uint *******pppppppuStack_8c4;
  undefined1 auStack_8c0 [24];
  uint ******local_8a8;
  uint ******ppppppuStack_8a4;
  undefined8 local_8a0;
  uint ******local_898;
  uint ******ppppppuStack_894;
  undefined8 local_890;
  uint *******local_5f8;
  uint *******local_5f4;
  uint *******local_5f0;
  uint *******local_5ec;
  uint *******local_5e8;
  uint *******local_5e4;
  uint local_5e0;
  uint uStack_5dc;
  uint uStack_5d8;
  uint uStack_5d4;
  uint uStack_5d0;
  uint uStack_5cc;
  uint *******local_4f8;
  int local_4f4;
  uint *******local_4ec;
  int local_34c;
  uint *******local_348;
  uint *******local_318;
  uint *******local_314;
  uint *******local_310;
  uint *******local_50;
  uint *******local_4c;
  uint *******local_48;
  uint *******pppppppuStack_44;
  uint *******local_40;
  uint *******local_3c;
  uint *******local_38;
  uint *******pppppppuStack_34;
  
  if ((char)param_2[0x194] == '\x01') {
    *param_1 = 0;
    param_1[1] = 0;
    return;
  }
  uVar31 = thunk_FUN_01bee35a(param_2 + 3,0x178);
  piVar7 = (int *)((int)uVar31 + (int)((ulonglong)uVar31 >> 0x20));
  iVar16 = *piVar7;
  *piVar7 = (int)&local_1808;
  local_1808 = 0;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x1d)) {
  case 0:
    *(undefined1 *)(param_2 + 7) = 0;
    break;
  case 1:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xd45c40);
    (*pcVar1)();
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c15dec);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x24]) {
    case '\0':
      puVar8 = (uint *)param_2[0x22];
      goto LAB_00d439e8;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c15e1c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c15e1c);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x3b]) {
      case '\0':
        goto switchD_00d43518_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1812c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1812c);
      }
      break;
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x58]) {
      case '\0':
        goto switchD_00d434a0_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1816c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1816c);
      case '\x03':
        goto switchD_00d434a0_caseD_3;
      }
    case '\x05':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x193]) {
      case '\0':
        puVar8 = (uint *)param_2[0x192];
        goto LAB_00d4486c;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1819c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1819c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x646)) {
      case 0:
        cVar6 = *(char *)((int)param_2 + 0x645);
        puVar8 = (uint *)param_2[400];
        goto LAB_00d4487c;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c19d6c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c19d6c);
      case 3:
        goto LAB_00d4490c;
      }
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x29]) {
    case '\0':
      goto switchD_00d43540_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20104);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20104);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x33]) {
      case '\0':
        pcVar18 = (char *)param_2[0x2a];
        uVar20 = param_2[0x2b];
        goto LAB_00d43a38;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2044c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2044c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x32]) {
      case '\0':
        goto switchD_00d4363c_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case '\x03':
        uVar20 = param_2[0x31];
        goto LAB_00d43a9c;
      }
    case '\x04':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x3a]) {
      case '\0':
        goto switchD_00d435e4_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c2044c);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c2044c);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x39]) {
      case '\0':
        goto switchD_00d4360c_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c230e0);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c230e0);
      case '\x03':
        uVar20 = param_2[0x38];
        goto LAB_00d43fb0;
      }
    }
  case 4:
    goto switchD_00d433d8_caseD_4;
  case 5:
    goto LAB_00d4399c;
  }
  do {
    *(undefined1 *)(param_2 + 0x24) = 0;
    puVar8 = param_2 + 6;
    param_2[0x22] = (uint)puVar8;
LAB_00d439e8:
    param_2[0x23] = (uint)puVar8;
    *(undefined1 *)(param_2 + 0x3b) = 0;
switchD_00d43518_caseD_0:
    *(undefined1 *)(param_2 + 0x29) = 0;
switchD_00d43540_caseD_0:
    uVar20 = 0x15;
    pcVar18 = "/var/run/bosminer.pid";
    param_2[0x2a] = (uint)"/var/run/bosminer.pid";
    param_2[0x2b] = 0x15;
    *(undefined1 *)(param_2 + 0x33) = 0;
LAB_00d43a38:
    param_2[0x2c] = (uint)pcVar18;
    param_2[0x2d] = uVar20;
    FUN_019afae4(&local_14a0,pcVar18,uVar20);
    param_2[0x2e] = (uint)local_14a0;
    param_2[0x2f] = (uint)local_149c;
    param_2[0x30] = (uint)local_1498;
    *(undefined1 *)(param_2 + 0x32) = 0;
switchD_00d4363c_caseD_0:
    local_1198 = (uint *******)param_2[0x2e];
    local_1194 = (uint *******)param_2[0x2f];
    local_1190 = (uint *******)param_2[0x30];
    uVar20 = FUN_007972a8(&local_1198,&DAT_01c230d0);
    param_2[0x31] = uVar20;
LAB_00d43a9c:
    local_183c = param_2 + 0x33;
    puVar8 = param_2 + 0x32;
    FUN_00798728(&local_5f8,uVar20,*extraout_r2);
    if (local_5f8 == (uint *******)0x2) {
      *(undefined1 *)puVar8 = 3;
LAB_00d456c8:
      uVar5 = 3;
      *(undefined1 *)local_183c = 3;
LAB_00d45700:
      local_1814 = (uint ******)(param_2 + 0x3b);
      local_1818 = param_2 + 0x29;
      *(undefined1 *)local_1818 = uVar5;
      *(undefined1 *)local_1814 = 3;
LAB_00d45714:
      uVar5 = 3;
LAB_00d45738:
      local_1838 = param_2 + 0x24;
      *(undefined1 *)local_1838 = uVar5;
      uVar5 = 3;
      goto LAB_00d4392c;
    }
    local_17e8._0_1_ = (byte)local_5f8;
    local_17e8._1_1_ = (char)((uint)local_5f8 >> 8);
    local_17e8._2_2_ = (undefined2)((uint)local_5f8 >> 0x10);
    pppppppuStack_17e4 = local_5f4;
    uStack_17e0 = SUB41(local_5f0,0);
    local_17df = (undefined1)((uint)local_5f0 >> 8);
    uStack_17de = (undefined1)((uint)local_5f0 >> 0x10);
    local_17dd = (undefined1)((uint)local_5f0 >> 0x18);
    local_17dc = local_5ec;
    local_17d8 = local_5e8;
    pppppppuStack_17d4 = local_5e4;
    piVar10 = (int *)param_2[0x31];
    if (*piVar10 == 0xcc) {
      DataMemoryBarrier(0xb);
      bVar30 = (bool)hasExclusiveAccess(piVar10);
      if (!bVar30) goto LAB_00d43b14;
      *piVar10 = 0x84;
    }
    else {
      ClearExclusiveLocal();
LAB_00d43b14:
      (**(code **)(piVar10[2] + 0x10))();
    }
    if (CONCAT22(local_17e8._2_2_,CONCAT11(local_17e8._1_1_,(byte)local_17e8)) == 1) {
      FUN_019a18a8(&local_5f8,0x28,"background task failed",0x16);
      pppppppuVar14 = local_5f4;
      pppppppuVar23 = local_5f8;
      FUN_00d4639c(&local_17e8);
      *(undefined1 *)puVar8 = 1;
      pppppppuVar25 = (uint *******)&DAT_80000000;
    }
    else {
      pppppppuVar23 =
           (uint *******)CONCAT13(local_17dd,CONCAT12(uStack_17de,CONCAT11(local_17df,uStack_17e0)))
      ;
      *(undefined1 *)puVar8 = 1;
      pppppppuVar25 = pppppppuStack_17e4;
      pppppppuVar14 = local_17dc;
      if (pppppppuStack_17e4 == (uint *******)&DAT_80000001) goto LAB_00d456c8;
    }
    FUN_00b71be0(param_2 + 0x2e);
    *(undefined1 *)(param_2 + 0x33) = 1;
    param_2[0x26] = (uint)pppppppuVar25;
    param_2[0x27] = (uint)pppppppuVar23;
    param_2[0x28] = (uint)pppppppuVar14;
    if (pppppppuVar25 == (uint *******)&DAT_80000000) {
LAB_00d440d8:
      FUN_00d463b8(param_2 + 0x26);
LAB_00d440e0:
      local_17dd = 2;
      local_17df = 2;
      local_17e8._1_1_ = '\0';
      local_17e8._2_2_ = 0;
      pppppppuStack_17e4 = (uint *******)0x1000000;
      uStack_17e0 = 0;
      local_17e8._0_1_ = 0;
      FUN_019c7348(&local_5f8,&local_17e8);
      local_118c = (uint *******)((int)local_4f8 + local_4f4 + 1);
      local_1190 = local_4f8 + 1;
      local_1188 = local_4ec;
      local_1198 = local_4f8;
      local_1194 = (uint *******)(~(uint)*local_4f8 & 0x80808080);
      do {
        do {
          uVar31 = FUN_00ab9798(&local_1198);
          iVar9 = (int)((ulonglong)uVar31 >> 0x20);
          bVar29 = (int)uVar31 != 0;
          bVar30 = bVar29 && iVar9 != 0;
          if (!bVar29 || iVar9 == 0) goto LAB_00d44534;
        } while (*(int *)(iVar9 + 0xcc) == 0);
        ppppppuVar22 = *(uint *******)(iVar9 + 200);
        local_11ac = ppppppuVar22;
        iVar9 = FUN_00b8c13c(ppppppuVar22[1],ppppppuVar22[2],"bosminer-am-",0xc);
      } while (((iVar9 == 0) &&
               (iVar9 = FUN_00b8c13c(ppppppuVar22[1],ppppppuVar22[2],"bosminer-plus-",0xe),
               iVar9 == 0)) &&
              (iVar9 = FUN_00b8c13c(ppppppuVar22[1],ppppppuVar22[2],"bosminer-dummy",0xe),
              iVar9 == 0));
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4c850 - 1 < 2 ||
           ((DAT_01d4c850 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c848), cVar6 != '\0')))))) &&
         (iVar9 = FUN_01aaa278(DAT_01d4c848), iVar9 != 0)) {
        if (*(uint ********)(DAT_01d4c848 + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
        }
        uVar26 = *(undefined4 *)(DAT_01d4c848 + 0x24);
        local_17dc = *(uint ********)(DAT_01d4c848 + 0x28);
        local_bac = &local_11a8;
        local_38 = (uint *******)(DAT_01d4c848 + 0x1c);
        ppppppuVar22 = *local_38;
        uStack_17e0 = (undefined1)uVar26;
        local_17df = (undefined1)((uint)uVar26 >> 8);
        uStack_17de = (undefined1)((uint)uVar26 >> 0x10);
        local_17dd = (undefined1)((uint)uVar26 >> 0x18);
        local_17d8 = (uint *******)0x0;
        local_119c = (uint *******)&LAB_0193a90c;
        local_3c = (uint *******)&DAT_00000001;
        local_11a4 = (uint ******)&local_11a0;
        local_11a0 = (uint ******)&local_11ac;
        local_40 = (uint *******)&local_bb0;
        local_17e8._0_1_ = (byte)ppppppuVar22;
        local_17e8._1_1_ = (char)((uint)ppppppuVar22 >> 8);
        local_17e8._2_2_ = (undefined2)((uint)ppppppuVar22 >> 0x10);
        local_ba8 = (uint *******)&DAT_01d2ea4c;
        local_11a8 = (uint ******)&DAT_005bdccb;
        pppppppuStack_17e4 = *(uint ********)(DAT_01d4c848 + 0x20);
        local_bb0 = (uint *******)&local_17e8;
        FUN_01aaaecc(DAT_01d4c848,&local_40);
        iVar9 = DAT_01d4c848;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_314 = *(uint ********)(DAT_01d4c848 + 0x14);
          local_310 = *(uint ********)(DAT_01d4c848 + 0x18);
          local_318 = (uint *******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar15[3])(pcVar18,&local_318);
          if (iVar11 != 0) {
            local_14a0 = local_318;
            local_149c = local_314;
            local_1498 = local_310;
            FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_14a0,&local_40);
          }
        }
      }
      else {
        iVar9 = DAT_01d4c848;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_bdc = *(uint ********)(DAT_01d4c848 + 0x14);
          local_bd8 = *(uint ********)(DAT_01d4c848 + 0x18);
          local_be0 = (uint *******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar15[3])(pcVar18,&local_be0);
          if (iVar11 != 0) {
            ppppppuVar22 = *(uint *******)(DAT_01d4c848 + 0x1c);
            if (*(uint ********)(DAT_01d4c848 + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20124);
            }
            local_314 = &local_11a0;
            uVar26 = *(undefined4 *)(DAT_01d4c848 + 0x24);
            local_17dc = *(uint ********)(DAT_01d4c848 + 0x28);
            local_bb0 = (uint *******)&local_318;
            local_17d8 = (uint *******)0x0;
            local_17e8._0_1_ = (byte)ppppppuVar22;
            local_17e8._1_1_ = (char)((uint)ppppppuVar22 >> 8);
            local_17e8._2_2_ = (undefined2)((uint)ppppppuVar22 >> 0x10);
            uStack_17e0 = (undefined1)uVar26;
            local_17df = (undefined1)((uint)uVar26 >> 8);
            uStack_17de = (undefined1)((uint)uVar26 >> 0x10);
            local_17dd = (undefined1)((uint)uVar26 >> 0x18);
            local_bac = (uint *******)&DAT_00000001;
            local_310 = (uint *******)&DAT_01d2ea4c;
            local_119c = (uint *******)&local_40;
            local_11a0 = (uint ******)&DAT_005bdccb;
            local_40 = &local_11ac;
            local_3c = (uint *******)&LAB_0193a90c;
            local_14a0 = local_be0;
            local_149c = local_bdc;
            local_1498 = local_bd8;
            pppppppuStack_17e4 = *(uint ********)(DAT_01d4c848 + 0x20);
            local_ba8 = (uint *******)(DAT_01d4c848 + 0x1c);
            local_318 = (uint *******)&local_17e8;
            FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_14a0,&local_bb0);
          }
        }
      }
LAB_00d44534:
      FUN_00d463dc(&local_5f8);
    }
    else {
      param_2[0x2a] = param_2[0x26];
      param_2[0x2b] = param_2[0x27];
      param_2[0x2c] = param_2[0x28];
      uVar31 = FUN_013245a0(param_2[0x2b],param_2[0x2c]);
      pppppppuVar23 = (uint *******)(param_2 + 0x2d);
      *(undefined8 *)pppppppuVar23 = uVar31;
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d4c844 - 1 < 2 ||
           ((DAT_01d4c844 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c83c), cVar6 != '\0')))) &&
          (iVar9 = FUN_01aaa278(DAT_01d4c83c), iVar9 != 0)))) {
        if (*(uint ********)(DAT_01d4c83c + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
        }
        local_149c = (uint *******)&local_40;
        local_5f0 = *(uint ********)(DAT_01d4c83c + 0x24);
        local_5ec = *(uint ********)(DAT_01d4c83c + 0x28);
        local_310 = (uint *******)(DAT_01d4c83c + 0x1c);
        local_5f8 = (uint *******)*local_310;
        local_318 = (uint *******)&local_14a0;
        local_5e8 = (uint *******)0x0;
        local_314 = (uint *******)&DAT_00000001;
        local_3c = (uint *******)&local_bb0;
        local_1498 = (uint *******)&DAT_01d2ea4c;
        local_40 = (uint *******)&DAT_0058a516;
        local_bac = (uint *******)&DAT_0132b6a0;
        local_14a0 = (uint *******)&local_5f8;
        local_bb0 = pppppppuVar23;
        local_5f4 = *(uint ********)(DAT_01d4c83c + 0x20);
        FUN_01aaaecc(DAT_01d4c83c,&local_318);
        iVar9 = DAT_01d4c83c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_1194 = *(uint ********)(DAT_01d4c83c + 0x14);
          local_1190 = *(uint ********)(DAT_01d4c83c + 0x18);
          local_1198 = (uint *******)0x5;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar15[3])(pcVar18,&local_1198);
          if (iVar11 != 0) {
            local_17e8._0_1_ = (byte)local_1198;
            local_17e8._1_1_ = (char)((uint)local_1198 >> 8);
            local_17e8._2_2_ = (undefined2)((uint)local_1198 >> 0x10);
            pppppppuStack_17e4 = local_1194;
            uStack_17e0 = SUB41(local_1190,0);
            local_17df = (undefined1)((uint)local_1190 >> 8);
            uStack_17de = (undefined1)((uint)local_1190 >> 0x10);
            local_17dd = (undefined1)((uint)local_1190 >> 0x18);
            FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_17e8,&local_318);
          }
        }
      }
      else {
        iVar9 = DAT_01d4c83c;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_4c = *(uint ********)(DAT_01d4c83c + 0x14);
          local_48 = *(uint ********)(DAT_01d4c83c + 0x18);
          local_50 = (uint *******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar15 = DAT_01d4edc8;
          pcVar18 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar15 = &DAT_01cfc5e0;
            pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar15[3])(pcVar18,&local_50);
          if (iVar11 != 0) {
            if (*(uint ********)(DAT_01d4c83c + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c20114);
            }
            local_1194 = (uint *******)&local_bb0;
            local_14a0 = (uint *******)&local_1198;
            local_5f0 = *(uint ********)(DAT_01d4c83c + 0x24);
            local_5ec = *(uint ********)(DAT_01d4c83c + 0x28);
            local_5e8 = (uint *******)0x0;
            local_149c = (uint *******)&DAT_00000001;
            local_1190 = (uint *******)&DAT_01d2ea4c;
            local_bac = (uint *******)&local_318;
            local_bb0 = (uint *******)&DAT_0058a516;
            local_314 = (uint *******)&DAT_0132b6a0;
            local_17e8._0_1_ = (byte)local_50;
            local_17e8._1_1_ = (char)((uint)local_50 >> 8);
            local_17e8._2_2_ = (undefined2)((uint)local_50 >> 0x10);
            pppppppuStack_17e4 = local_4c;
            uStack_17e0 = SUB41(local_48,0);
            local_17df = (undefined1)((uint)local_48 >> 8);
            uStack_17de = (undefined1)((uint)local_48 >> 0x10);
            local_17dd = (undefined1)((uint)local_48 >> 0x18);
            local_1498 = (uint *******)(DAT_01d4c83c + 0x1c);
            local_1198 = (uint *******)&local_5f8;
            local_5f8 = *(uint ********)(DAT_01d4c83c + 0x1c);
            local_5f4 = *(uint ********)(DAT_01d4c83c + 0x20);
            local_318 = pppppppuVar23;
            FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_17e8,&local_14a0);
          }
        }
      }
      local_1194 = (uint *******)&DAT_0132b6a0;
      local_1198 = pppppppuVar23;
      FUN_00664898(&local_17e8,&DAT_005b0279,&local_1198);
      local_5f8 = (uint *******)
                  CONCAT22(local_17e8._2_2_,CONCAT11(local_17e8._1_1_,(byte)local_17e8));
      local_5f0 = (uint *******)
                  CONCAT13(local_17dd,CONCAT12(uStack_17de,CONCAT11(local_17df,uStack_17e0)));
      local_5f4 = pppppppuStack_17e4;
      param_2[0x2f] = (uint)local_5f8;
      param_2[0x30] = (uint)pppppppuStack_17e4;
      param_2[0x31] = (uint)local_5f0;
      param_2[0x32] = (uint)local_5ec;
      param_2[0x33] = (uint)local_5e8;
      param_2[0x34] = (uint)local_5e4;
      param_2[0x35] = local_5e0;
      param_2[0x36] = uStack_5dc;
      param_2[0x37] = uStack_5d8;
      param_2[0x38] = uStack_5d4;
      param_2[0x39] = uStack_5d0;
      *(undefined1 *)(param_2 + 0x3a) = 0;
switchD_00d435e4_caseD_0:
      param_2[0x32] = param_2[0x2f];
      param_2[0x33] = param_2[0x30];
      param_2[0x34] = param_2[0x31];
      FUN_019afae4(&local_318,param_2[0x33],param_2[0x34]);
      param_2[0x35] = (uint)local_318;
      param_2[0x36] = (uint)local_314;
      param_2[0x37] = (uint)local_310;
      *(undefined1 *)(param_2 + 0x39) = 0;
switchD_00d4360c_caseD_0:
      local_14a0 = (uint *******)param_2[0x35];
      local_149c = (uint *******)param_2[0x36];
      local_1498 = (uint *******)param_2[0x37];
      uVar20 = FUN_00a98224(&local_14a0,&DAT_01c230d0);
      param_2[0x38] = uVar20;
LAB_00d43fb0:
      local_1810 = param_2 + 0x26;
      puVar8 = param_2 + 0x39;
      FUN_00798728(&local_17e8,uVar20,*extraout_r2);
      if (CONCAT22(local_17e8._2_2_,CONCAT11(local_17e8._1_1_,(byte)local_17e8)) == 2) {
        *(undefined1 *)puVar8 = 3;
LAB_00d456f4:
        *(undefined1 *)(param_2 + 0x3a) = 3;
        uVar5 = 4;
        goto LAB_00d45700;
      }
      local_1198 = (uint *******)
                   CONCAT22(local_17e8._2_2_,CONCAT11(local_17e8._1_1_,(byte)local_17e8));
      local_1190 = (uint *******)
                   CONCAT13(local_17dd,CONCAT12(uStack_17de,CONCAT11(local_17df,uStack_17e0)));
      local_1194 = pppppppuStack_17e4;
      local_118c = local_17dc;
      local_1188 = local_17d8;
      pppppppuStack_1184 = pppppppuStack_17d4;
      piVar10 = (int *)param_2[0x38];
      if (*piVar10 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar30 = (bool)hasExclusiveAccess(piVar10);
        if (!bVar30) goto LAB_00d44010;
        *piVar10 = 0x84;
      }
      else {
        ClearExclusiveLocal();
LAB_00d44010:
        (**(code **)(piVar10[2] + 0x10))();
      }
      if (local_1198 == (uint *******)&DAT_00000001) {
        FUN_019a18a8(&local_17e8,0x28,"background task failed",0x16);
        pppppppuVar14 = pppppppuStack_17e4;
        pppppppuVar23 =
             (uint *******)CONCAT22(local_17e8._2_2_,CONCAT11(local_17e8._1_1_,(byte)local_17e8));
        FUN_00d4639c(&local_1198);
        *(undefined1 *)puVar8 = 1;
        pppppppuVar25 = (uint *******)&DAT_80000000;
      }
      else {
        *(undefined1 *)puVar8 = 1;
        pppppppuVar14 = local_118c;
        pppppppuVar23 = local_1190;
        pppppppuVar25 = local_1194;
        if (local_1194 == (uint *******)&DAT_80000001) goto LAB_00d456f4;
      }
      FUN_00b71be0(param_2 + 0x35);
      FUN_019bb7e0(param_2[0x32],param_2[0x33]);
      *(undefined1 *)(param_2 + 0x3a) = 1;
      local_bb0 = pppppppuVar25;
      local_bac = pppppppuVar23;
      local_ba8 = pppppppuVar14;
      FUN_005f0650(param_2 + 0x2f);
      if (pppppppuVar25 == (uint *******)&DAT_80000000) {
        FUN_00d463b8(&local_bb0);
        FUN_019bb7e0(param_2[0x2a],param_2[0x2b]);
        if (param_2[0x26] == 0x80000000) goto LAB_00d440d8;
        goto LAB_00d440e0;
      }
      FUN_00d463b8(&local_bb0);
      FUN_019bb7e0(param_2[0x2a],param_2[0x2b]);
      bVar30 = true;
      if (param_2[0x26] == 0x80000000) {
        FUN_00d463b8(local_1810);
      }
    }
    local_1814 = (uint ******)(param_2 + 0x3b);
    local_1818 = param_2 + 0x29;
    *(undefined1 *)local_1818 = 1;
    FUN_00d46310(param_2 + 0x26);
    if (!bVar30) {
      FUN_01a71aac(&local_5f8,9,&DAT_003f2fc4,0x17);
      pppppppuVar14 = local_5f4;
      pppppppuVar23 = local_5f8;
      FUN_01bed4e2(&local_ec0,&local_5f0,0x60);
      *(undefined1 *)local_1814 = 1;
      if (pppppppuVar23 != (uint *******)&SUB_00000004 || pppppppuVar14 != (uint *******)0x0) {
        local_8d8[0] = pppppppuVar23;
        local_8d8[1] = pppppppuVar14;
        FUN_01bed4e2(&local_8d0,&local_ec0,0x60);
        if (pppppppuVar23 == (uint *******)&DAT_00000003 && pppppppuVar14 == (uint *******)0x0)
        goto LAB_00d4461c;
        FUN_005f6588(local_8d8);
        uVar20 = 0;
        pppppppuVar23 = (uint *******)&DAT_80000000;
        goto LAB_00d452b4;
      }
      goto LAB_00d45714;
    }
    *(undefined1 *)local_1814 = 1;
LAB_00d4461c:
    param_2[0x26] = param_2[0x23];
    *(undefined1 *)(param_2 + 0x58) = 0;
switchD_00d434a0_caseD_0:
    iVar9 = *(int *)param_2[0x26];
    *(undefined1 *)(param_2 + 0x57) = 0;
    param_2[0x27] = iVar9 + 0x6c;
switchD_00d434a0_caseD_3:
    local_181c = param_2 + 8;
    puVar8 = param_2 + 0x26;
    FUN_00b99540(&local_5f8,param_2 + 0x27,extraout_r2);
    pppppppuVar23 = local_5f8;
    if (local_5f8 == (uint *******)0x80000006) {
      *(undefined1 *)(param_2 + 0x58) = 3;
LAB_00d456e0:
      uVar5 = 4;
      goto LAB_00d45738;
    }
    local_14a0 = local_5f4;
    local_149c = local_5f0;
    local_1498 = local_5ec;
    if ((char)param_2[0x57] == '\x03') {
      FUN_00b99500(param_2 + 0x28);
    }
    if (pppppppuVar23 == (uint *******)&DAT_80000005) {
      local_14b0 = local_14a0;
      pppppppuStack_14ac = local_149c;
      pppppppuStack_14a8 = local_1498;
      FUN_01bed4e2(auStack_1508,local_8d8,0x54);
      *(undefined1 *)(param_2 + 0x58) = 1;
      *local_181c = 3;
      param_2[9] = 0;
      param_2[10] = (uint)local_14b0;
      param_2[0xb] = (uint)pppppppuStack_14ac;
      param_2[0xc] = (uint)pppppppuStack_14a8;
      FUN_01bed4e2(param_2 + 0xd,auStack_1508,0x54);
LAB_00d4483c:
      FUN_01bed864(puVar8,&local_14b0,0xc);
      *(undefined1 *)(param_2 + 0x193) = 0;
      param_2[0x192] = (uint)puVar8;
LAB_00d4486c:
      cVar6 = '\x02';
      *(undefined2 *)((int)param_2 + 0x645) = 2;
      param_2[400] = (uint)puVar8;
LAB_00d4487c:
      *(undefined1 *)(param_2 + 0x191) = 1;
      FUN_019cfcf0(&local_5f8);
      *(undefined1 *)(param_2 + 0x191) = 0;
      if (cVar6 == '\x03') {
        cVar6 = '\x02';
      }
      local_be0 = local_5f8;
      local_bdc = local_5f4;
      local_bd8 = local_5f0;
      pppppppuStack_bd4 = local_5ec;
      pppppppuStack_bd0 = local_5e8;
      pppppppuStack_bcc = local_5e4;
      local_bc8 = local_5e0;
      uStack_bc4 = uStack_5dc;
      uStack_bc0 = uStack_5d8;
      uStack_bbc = uStack_5d4;
      uStack_bb8 = uStack_5d0;
      uStack_bb4 = uStack_5cc;
      param_2[0x40] = (uint)"Bosminer.get_root_hub";
      param_2[0x32] = (uint)&DAT_80000004;
      param_2[0x41] = 0x15;
      *(char *)(param_2 + 0x33) = cVar6;
      param_2[0x42] = (uint)local_5f8;
      param_2[0x43] = (uint)local_5f4;
      param_2[0x44] = (uint)local_5f0;
      param_2[0x45] = (uint)local_5ec;
      param_2[0x46] = (uint)local_5e8;
      param_2[0x47] = (uint)local_5e4;
      param_2[0x48] = local_5e0;
      param_2[0x49] = uStack_5dc;
      param_2[0x4a] = uStack_5d8;
      param_2[0x4b] = uStack_5d4;
      param_2[0x4c] = uStack_5d0;
      param_2[0x4d] = uStack_5cc;
      param_2[0x4e] = (uint)puVar8;
      *(undefined1 *)(param_2 + 0x18e) = 0;
      *(undefined1 *)((int)param_2 + 0x13f) = 0;
      param_3 = extraout_r2;
LAB_00d4490c:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x18e]) {
      case '\0':
        FUN_01bed4e2(param_2 + 0xdc,param_2 + 0x2a,0x2c8);
        break;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f170);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f170);
      }
      FUN_00d464a0(&local_5f8,param_2 + 0xdc,param_3);
      pppppppuVar14 = local_5f4;
      pppppppuVar23 = local_5f8;
      if (local_5f8 == (uint *******)&DAT_0000001e && local_5f4 == (uint *******)0x0) {
        *(undefined1 *)(param_2 + 0x18e) = 3;
        *(undefined1 *)((int)param_2 + 0x646) = 3;
        *(undefined1 *)(param_2 + 0x193) = 3;
        uVar5 = 5;
        goto LAB_00d45738;
      }
      local_50 = local_5f0;
      local_4c = local_5ec;
      local_48 = local_5e8;
      pppppppuStack_44 = local_5e4;
      FUN_01bed4e2(&local_318,&local_5e0,0x2c8);
      FUN_00b9a8cc(param_2 + 0xdc);
      if (pppppppuVar23 == (uint *******)&DAT_0000001d && pppppppuVar14 == (uint *******)0x0) {
        pppppppuVar14 = (uint *******)0x0;
        pppppppuVar23 = (uint *******)&SUB_00000004;
        local_40 = local_50;
        local_3c = local_4c;
        local_38 = local_48;
        pppppppuStack_34 = pppppppuStack_44;
      }
      else {
        FUN_01bed4e2(auStack_8c0,&local_318,0x2c8);
        local_8d0 = (uint ******)local_50;
        pppppppuStack_8cc = local_4c;
        local_8c8 = local_48;
        pppppppuStack_8c4 = pppppppuStack_44;
        local_8d8[1] = pppppppuVar14;
        local_8d8[0] = pppppppuVar23;
        if (pppppppuVar14 != (uint *******)0x0 ||
            pppppppuVar14 < (uint *******)(uint)(&DAT_00000003 < pppppppuVar23)) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
        }
        local_40 = local_50;
        local_3c = local_4c;
        local_38 = local_48;
        pppppppuStack_34 = pppppppuStack_44;
        FUN_01bed4e2(&local_bb0,&local_318,0x2c8);
      }
      *(undefined1 *)(param_2 + 0x18e) = 1;
      local_8e8 = local_40;
      pppppppuStack_8e4 = local_3c;
      pppppppuStack_8e0 = local_38;
      pppppppuStack_8dc = pppppppuStack_34;
      *(undefined1 *)(param_2 + 0x191) = 0;
      *(undefined1 *)((int)param_2 + 0x646) = 1;
      local_1198 = local_40;
      local_1194 = local_3c;
      local_1190 = local_38;
      local_118c = pppppppuStack_34;
      FUN_01bed4e2(&local_1188,&local_bb0,0x2c8);
      FUN_00b99b94(param_2 + 0x2a);
      if (((uint)pppppppuVar23 & 7) == 3) {
        pppppppuVar14 = (uint *******)0x0;
        pppppppuVar23 = (uint *******)&DAT_00000003;
        FUN_01a71aac(&local_eb8,0xd,"BUG: Root hub with HB info should be present",0x2c);
      }
      else if (pppppppuVar23 == (uint *******)&SUB_00000004) {
        local_8d8[1] = (uint *******)&DAT_00000001;
        local_8d0 = (uint ******)0x0;
        local_5f8 = (uint *******)local_8d8;
        local_8d8[0] = (uint *******)0x0;
        local_5f4 = (uint *******)&DAT_01c15d54;
        local_5f0 = (uint *******)0x60000020;
        local_5ec = (uint *******)0x0;
        iVar9 = FUN_00aeeb78(&local_8e8,&local_5f8);
        if (iVar9 != 0) {
                    /* WARNING: Subroutine does not return */
          FUN_013073dc(&DAT_00533383,0x37,&local_318,&DAT_01c15d8c,&DAT_01d30334);
        }
        local_318 = local_8d8[0];
        local_314 = local_8d8[1];
        local_310 = (uint *******)local_8d0;
        FUN_01a70fd4(&local_5f8,0xd,&local_318);
        FUN_00d46410(&local_8e8);
        FUN_01bed4e2(&local_eb8,&local_5f8,0x68);
        pppppppuVar14 = (uint *******)0x0;
        pppppppuVar23 = (uint *******)&DAT_00000003;
      }
      else {
        local_ec0 = pppppppuVar23;
        local_ebc = pppppppuVar14;
        FUN_01bed4e2(&local_eb8,&local_1198,0x68);
        FUN_01bed4e2(auStack_e50,auStack_b58,0x270);
      }
      FUN_01bed4e2(&local_14a0,&local_eb8,0x2d8);
      *(undefined1 *)(param_2 + 0x193) = 1;
      FUN_01bed4e2(&uStack_17e0,&local_14a0,0x2d8);
      local_17e8._0_1_ = (byte)pppppppuVar23;
      local_17e8._1_1_ = (char)((uint)pppppppuVar23 >> 8);
      local_17e8._2_2_ = (undefined2)((uint)pppppppuVar23 >> 0x10);
      pppppppuStack_17e4 = pppppppuVar14;
      FUN_0084ec48(param_2 + 0x26);
      pppppppuVar25 = &local_8d0;
      if (pppppppuVar23 != (uint *******)&DAT_00000003 || pppppppuVar14 != (uint *******)0x0) {
        FUN_01bed4e2(&local_5f8,&local_17e8,0x2e0);
        uVar20 = FUN_01220aac(&local_5f8);
        pppppppuVar14 = local_348;
        iVar9 = local_34c;
        pppppppuVar23 = (uint *******)0x0;
        bVar29 = (uint *******)0x3fffffe < local_348;
        bVar30 = local_348 == (uint *******)0x3ffffff;
        if (local_348 < (uint *******)0x4000000) {
          pppppppuVar25 = (uint *******)((int)local_348 << 6);
          bVar29 = (uint *******)0x7ffffff7 < pppppppuVar25;
          bVar30 = pppppppuVar25 == (uint *******)0x7ffffff8;
        }
        if (bVar29 && !bVar30) {
LAB_00d44ca4:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(pppppppuVar23,local_1850);
        }
        pppppppuVar27 = (uint *******)&DAT_00000008;
        local_1834 = *(uint *)(&DAT_0056c168 + (uVar20 & 0xff) * 4);
        if (pppppppuVar25 != (uint *******)0x0) {
          pppppppuVar23 = (uint *******)&DAT_00000008;
          pppppppuVar27 = (uint *******)FUN_01298504(pppppppuVar25,8);
          local_1850 = pppppppuVar25;
          if (pppppppuVar27 == (uint *******)0x0) goto LAB_00d44ca4;
          pppppppuVar23 = pppppppuVar14;
        }
        local_eb8 = (uint *******)0x0;
        local_ebc = pppppppuVar27;
        local_ec0 = pppppppuVar23;
        pppppppuVar25 = (uint *******)0x0;
        if (pppppppuVar14 != (uint *******)0x0) {
          pppppppuVar25 = (uint *******)0x0;
          pppppppuVar28 = pppppppuVar27 + 0xf;
          do {
            uVar26 = *(undefined4 *)(iVar9 + 0x2a4);
            if (*(int *)(iVar9 + 0x2a0) == 0) {
              uVar26 = 0;
            }
            iVar11 = FUN_012fc81c(uVar26,local_8d8);
            ppppppuVar22 = (uint ******)(10 - iVar11);
            if (iVar11 == 10) {
              ppppppuVar12 = (uint ******)0x1;
              local_1814 = (uint ******)0x0;
            }
            else {
              ppppppuVar12 = (uint ******)FUN_01298504(ppppppuVar22,1);
              local_1814 = ppppppuVar22;
              if (ppppppuVar12 == (uint ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00664620(1,ppppppuVar22);
              }
            }
            FUN_01bed4e2(ppppppuVar12,(int)local_8d8 + iVar11,ppppppuVar22);
            bVar2 = *(byte *)(iVar9 + 0x2d8);
            FUN_00a40c30(local_8d8,iVar9);
            pppppppuVar4 = local_8d8[1];
            pppppppuVar3 = local_8d8[0];
            uVar31 = CONCAT44(pppppppuStack_8cc,local_8d0);
            FUN_00a40a80(local_8d8,iVar9);
            if (local_8d8[0] == (uint *******)0x2 && local_8d8[1] == (uint *******)0x0) {
              ppppppuVar13 = (uint ******)0x2;
              ppppppuVar17 = (uint ******)0x0;
              ppppppuVar19 = extraout_r2_00;
              ppppppuVar21 = extraout_r3;
            }
            else {
              ppppppuVar13 = local_8a8;
              ppppppuVar17 = ppppppuStack_8a4;
              ppppppuVar19 = local_898;
              ppppppuVar21 = ppppppuStack_894;
              in_d16 = local_8a0;
              in_d17 = local_890;
            }
            pppppppuVar28[-0xb] = ppppppuVar13;
            *(byte *)pppppppuVar28 = bVar2 & 1;
            iVar9 = iVar9 + 0x2e0;
            pppppppuVar28[-3] = local_1814;
            pppppppuVar28[-1] = ppppppuVar22;
            pppppppuVar28[-2] = ppppppuVar12;
            pppppppuVar25 = (uint *******)((int)pppppppuVar25 + 1);
            pppppppuVar28[-7] = ppppppuVar19;
            pppppppuVar28[-0xf] = (uint ******)pppppppuVar3;
            *(undefined8 *)(pppppppuVar28 + -5) = in_d17;
            *(undefined8 *)(pppppppuVar28 + -9) = in_d16;
            *(undefined8 *)(pppppppuVar28 + -0xd) = uVar31;
            pppppppuVar28[-6] = ppppppuVar21;
            pppppppuVar28[-10] = ppppppuVar17;
            pppppppuVar28[-0xe] = (uint ******)pppppppuVar4;
            pppppppuVar28 = pppppppuVar28 + 0x10;
          } while (pppppppuVar14 != pppppppuVar25);
          pppppppuVar25 = pppppppuVar14;
        }
        local_eb8 = pppppppuVar25;
        local_11b8 = local_ebc;
        local_11b4 = pppppppuVar25;
        FUN_00a57438(&local_5f8);
        uVar20 = 1;
        local_1850 = pppppppuVar27;
        goto LAB_00d452b4;
      }
    }
    else {
      local_1198 = (uint *******)&local_ec0;
      local_ec0 = pppppppuVar23;
      local_ebc = local_14a0;
      local_eb8 = local_149c;
      pppppppuStack_eb4 = local_1498;
      local_1194 = (uint *******)FUN_00aeeb78;
      FUN_00664898(&local_5f8,&DAT_005ba7dc,&local_1198);
      local_1198 = local_5f8;
      local_1194 = local_5f4;
      local_1190 = local_5f0;
      FUN_01a70fd4(&local_5f8,0xd,&local_1198);
      FUN_00d46410(&local_ec0);
      pppppppuVar14 = local_5f4;
      pppppppuVar23 = local_5f8;
      local_14b0 = local_5f0;
      pppppppuStack_14ac = local_5ec;
      pppppppuStack_14a8 = local_5e8;
      FUN_01bed4e2(local_8d8,&local_5e4,0x54);
      FUN_01bed4e2(auStack_1508,local_8d8,0x54);
      *(undefined1 *)(param_2 + 0x58) = 1;
      if (pppppppuVar23 == (uint *******)&SUB_00000004 && pppppppuVar14 == (uint *******)0x0)
      goto LAB_00d456e0;
      *local_181c = (uint)pppppppuVar23;
      param_2[9] = (uint)pppppppuVar14;
      param_2[10] = (uint)local_14b0;
      param_2[0xb] = (uint)pppppppuStack_14ac;
      param_2[0xc] = (uint)pppppppuStack_14a8;
      FUN_01bed4e2(param_2 + 0xd,auStack_1508,0x54);
      if (pppppppuVar23 == (uint *******)&DAT_00000003 && pppppppuVar14 == (uint *******)0x0)
      goto LAB_00d4483c;
      FUN_01bed4e2(&uStack_17e0,local_181c,0x68);
      pppppppuStack_17e4 = (uint *******)0x0;
      local_17e8._0_1_ = 3;
      local_17e8._1_1_ = '\0';
      local_17e8._2_2_ = 0;
    }
    FUN_01bed4e2(&local_5f8,&uStack_17e0,0x68);
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4c3d4 - 1 < 2 ||
         ((DAT_01d4c3d4 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4c3cc), cVar6 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4c3cc), iVar9 != 0)) {
      if (*(uint ********)(DAT_01d4c3cc + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c15e2c);
      }
      local_8d0 = *(uint *******)(DAT_01d4c3cc + 0x24);
      pppppppuStack_8cc = *(uint ********)(DAT_01d4c3cc + 0x28);
      local_310 = (uint *******)(DAT_01d4c3cc + 0x1c);
      local_8d8[0] = (uint *******)*local_310;
      local_149c = (uint *******)&local_be0;
      local_318 = (uint *******)&local_14a0;
      local_14a0 = (uint *******)local_8d8;
      local_314 = (uint *******)&DAT_00000001;
      local_bdc = (uint *******)&local_bb0;
      local_8c8 = (uint *******)0x0;
      local_1498 = (uint *******)&DAT_01d2ea4c;
      local_be0 = (uint *******)&DAT_005ac57e;
      local_bac = (uint *******)FUN_01a755dc;
      local_bb0 = (uint *******)&local_5f8;
      local_8d8[1] = *(uint ********)(DAT_01d4c3cc + 0x20);
      FUN_01aaaecc(DAT_01d4c3cc,&local_318);
      iVar9 = DAT_01d4c3cc;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_1194 = *(uint ********)(DAT_01d4c3cc + 0x14);
        local_1190 = *(uint ********)(DAT_01d4c3cc + 0x18);
        local_1198 = (uint *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar15[3])(pcVar18,&local_1198);
        if (iVar11 != 0) {
          local_ec0 = local_1198;
          local_ebc = local_1194;
          local_eb8 = local_1190;
          FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_ec0,&local_318);
        }
      }
    }
    else {
      iVar9 = DAT_01d4c3cc;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_11c4 = *(uint ********)(DAT_01d4c3cc + 0x14);
        local_11c0 = *(uint ********)(DAT_01d4c3cc + 0x18);
        local_11c8 = (uint *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar15 = DAT_01d4edc8;
        pcVar18 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar15 = &DAT_01cfc5e0;
          pcVar18 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar15[3])(pcVar18,&local_11c8);
        if (iVar11 != 0) {
          if (*(uint ********)(DAT_01d4c3cc + 0x20) == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c15e2c);
          }
          local_1194 = (uint *******)&local_bb0;
          local_8d0 = *(uint *******)(DAT_01d4c3cc + 0x24);
          pppppppuStack_8cc = *(uint ********)(DAT_01d4c3cc + 0x28);
          local_1198 = (uint *******)local_8d8;
          local_149c = (uint *******)&DAT_00000001;
          local_bac = (uint *******)&local_318;
          local_14a0 = (uint *******)&local_1198;
          local_8c8 = (uint *******)0x0;
          local_1190 = (uint *******)&DAT_01d2ea4c;
          local_bb0 = (uint *******)&DAT_005ac57e;
          local_314 = (uint *******)FUN_01a755dc;
          local_ec0 = local_11c8;
          local_ebc = local_11c4;
          local_eb8 = local_11c0;
          local_1498 = (uint *******)(DAT_01d4c3cc + 0x1c);
          local_8d8[0] = *(uint ********)(DAT_01d4c3cc + 0x1c);
          local_8d8[1] = *(uint ********)(DAT_01d4c3cc + 0x20);
          local_318 = (uint *******)&local_5f8;
          FUN_01aaa328(iVar9,pcVar18,puVar15[4],&local_ec0,&local_14a0);
        }
      }
    }
    FUN_005f6588(&local_5f8);
    uVar20 = 0;
    pppppppuVar23 = (uint *******)&DAT_80000000;
LAB_00d452b4:
    local_181c = param_2 + 8;
    *(undefined1 *)(param_2 + 0x24) = 1;
    local_17ec = local_11b4;
    param_2[3] = (uint)local_11b8;
    param_2[4] = (uint)local_11b4;
    local_17f0 = local_11b8;
    *param_2 = uVar20;
    param_2[1] = local_1834;
    param_2[2] = (uint)pppppppuVar23;
    *(char *)(param_2 + 5) = (char)uVar20;
    FUN_00d46278(local_181c);
    pppppppuVar23 = (uint *******)thunk_FUN_01be5118(0x80);
    if (pppppppuVar23 == (uint *******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0x80);
    }
    local_8d0 = (uint ******)0x0;
    local_14a0 = (uint *******)local_8d8;
    local_8d8[0] = (uint *******)&DAT_00000080;
    local_8d8[1] = pppppppuVar23;
    FUN_01ac6cbc(local_14a0,"{",1);
    local_1194 = (uint *******)&local_14a0;
    local_1198 = (uint *******)&DAT_00000100;
    pppppppuVar14 = (uint *******)FUN_00697e34(&local_1198,&DAT_00567638,0x10,(char)param_2[5]);
    pppppppuVar23 = local_1194;
    if (pppppppuVar14 == (uint *******)0x0) {
      if ((char)local_1198 != '\0') {
        local_5f8 = (uint *******)&DAT_0000000a;
        pppppppuVar14 = (uint *******)FUN_01966fbc(&local_5f8,0,0);
        goto LAB_00d45640;
      }
      uVar20 = *param_2;
      uVar24 = param_2[1];
      if (local_1198._1_1_ != '\x01') {
        FUN_01ac6cbc(*local_1194,",",1);
      }
      local_1198._0_2_ = CONCAT11(2,(char)local_1198);
      FUN_012650dc(&local_5f8,*pppppppuVar23,"overall_tuner_state",0x13);
      if ((char)local_5f8 != '\x04') {
        pppppppuVar14 = (uint *******)FUN_01966f50(local_5f8,local_5f4);
        goto LAB_00d45640;
      }
      FUN_01ac6cbc(*pppppppuVar23,":",1);
      if ((uVar20 & 1) == 0) {
        FUN_01ac6cbc(*pppppppuVar23,&DAT_0056d030,4);
      }
      else {
        uVar31 = FUN_014160e4(&local_5f8,uVar24);
        FUN_01ac6cbc(*pppppppuVar23,(int)uVar31,(int)((ulonglong)uVar31 >> 0x20));
      }
      FUN_01ac6cbc(*pppppppuVar23,",",1);
      local_1198._0_2_ = CONCAT11(2,(char)local_1198);
      FUN_012650dc(&local_5f8,*pppppppuVar23,"hashboards",10);
      if ((char)local_5f8 != '\x04') {
        pppppppuVar14 = (uint *******)FUN_01966f50(local_5f8,local_5f4);
        goto LAB_00d45640;
      }
      FUN_01ac6cbc(*pppppppuVar23,":",1);
      uVar26 = 4;
      pcVar18 = &DAT_0056d030;
      if (param_2[2] == 0x80000000) {
LAB_00d4555c:
        FUN_01ac6cbc(*pppppppuVar23,pcVar18,uVar26);
      }
      else {
        uVar20 = param_2[3];
        uVar24 = param_2[4];
        ppppppuVar22 = *pppppppuVar23;
        FUN_01ac6cbc(ppppppuVar22,&DAT_0053340d,1);
        bVar30 = uVar24 != 0;
        iVar9 = 0x100;
        if (!bVar30) {
          iVar9 = 0;
          FUN_01ac6cbc(ppppppuVar22,"]",1);
        }
        for (iVar11 = 0; uVar24 << 6 != iVar11; iVar11 = iVar11 + 0x40) {
          if (!bVar30) {
            FUN_01ac6cbc(*pppppppuVar23,",",1);
          }
          FUN_01ac6cbc(*pppppppuVar23,"{",1);
          iVar9 = uVar20 + iVar11;
          pppppppuStack_17e4 = pppppppuVar23;
          local_17e8._0_1_ = 0;
          local_17e8._1_1_ = '\x01';
          local_17e8._2_2_ = 0;
          pppppppuVar14 =
               (uint *******)
               FUN_006e6e30(&local_17e8,"idlast_updatedlast_ticknext_tickran",2,
                            *(undefined4 *)(iVar9 + 0x34),*(undefined4 *)(iVar9 + 0x38));
          if (pppppppuVar14 != (uint *******)0x0) goto LAB_00d45640;
          if ((byte)local_17e8 != 0) {
LAB_00d45a34:
            local_5f8 = (uint *******)&DAT_0000000a;
            pppppppuVar14 = (uint *******)FUN_01966fbc(&local_5f8,0,0);
            goto LAB_00d45640;
          }
          pppppppuVar14 =
               (uint *******)FUN_00697e34(&local_17e8,"enabled",7,*(undefined1 *)(iVar9 + 0x3c));
          if (pppppppuVar14 != (uint *******)0x0) goto LAB_00d45640;
          if ((byte)local_17e8 != 0) goto LAB_00d45a34;
          puVar15 = (undefined4 *)(uVar20 + iVar11);
          pppppppuVar14 =
               (uint *******)
               FUN_00ec4c74((int)*(undefined8 *)(puVar15 + 2),&local_17e8,&DAT_00569a18,0x10,
                            puVar15[1],*puVar15,puVar15[1]);
          pppppppuVar25 = pppppppuStack_17e4;
          if (pppppppuVar14 != (uint *******)0x0) goto LAB_00d45640;
          if ((byte)local_17e8 != 0) goto LAB_00d45a34;
          if (local_17e8._1_1_ != '\x01') {
            FUN_01ac6cbc(*pppppppuStack_17e4,",",1);
          }
          local_17e8._1_1_ = '\x02';
          FUN_012650dc(&local_5f8,*pppppppuVar25,"real_hashrate",0xd);
          if ((char)local_5f8 != '\x04') {
            pppppppuVar14 = (uint *******)FUN_01966f50(local_5f8,local_5f4);
            goto LAB_00d45640;
          }
          FUN_01ac6cbc(*pppppppuVar25,":",1);
          if (*(int *)(iVar9 + 0x10) == 2 && *(int *)(iVar9 + 0x14) == 0) {
            FUN_01ac6cbc(*pppppppuVar25,&DAT_0056d030,4);
          }
          else {
            FUN_01ac6cbc(*pppppppuVar25,"{",1);
            local_ebc = pppppppuVar25;
            local_ec0 = (uint *******)&DAT_00000100;
            pppppppuVar14 =
                 (uint *******)
                 FUN_00ec4c74((int)*(undefined8 *)(iVar9 + 0x18),&local_ec0,"last_1m",7);
            if (pppppppuVar14 != (uint *******)0x0) goto LAB_00d45640;
            if ((char)local_ec0 == '\x01') {
              local_5f8 = (uint *******)&DAT_0000000a;
              pppppppuVar14 = (uint *******)FUN_01966fbc(&local_5f8,0,0);
              goto LAB_00d45640;
            }
            pppppppuVar14 =
                 (uint *******)
                 FUN_00ec4c74((int)*(undefined8 *)(iVar9 + 0x28),&local_ec0,"last_5m",7);
            if (pppppppuVar14 != (uint *******)0x0) goto LAB_00d45640;
            if ((((uint)local_ec0 & 0xff00) != 0) && (((uint)local_ec0 & 1) == 0)) {
              FUN_01ac6cbc(*local_ebc,"}",1);
            }
          }
          if ((local_17e8._1_1_ != '\0') && (((byte)local_17e8 & 1) == 0)) {
            FUN_01ac6cbc(*pppppppuVar25,"}",1);
          }
          iVar9 = 0x200;
          bVar30 = false;
        }
        uVar26 = 1;
        pcVar18 = "]";
        if (iVar9 != 0) goto LAB_00d4555c;
      }
      if ((((uint)local_1198 & 0xff00) != 0) && (((uint)local_1198 & 1) == 0)) {
        FUN_01ac6cbc(*pppppppuVar23,"}",1);
      }
      pppppppuVar14 = local_8d8[1];
      if (local_8d8[0] == (uint *******)&DAT_80000000) goto LAB_00d4564c;
      param_2[10] = (uint)local_8d0;
      param_2[8] = (uint)local_8d8[0];
      param_2[9] = (uint)local_8d8[1];
      *(undefined1 *)(param_2 + 7) = 1;
      pppppppuStack_17e4 = (uint *******)param_2[9];
      uVar20 = param_2[10];
      local_5e8 = (uint *******)((uint)local_5e8 & 0xffffff00);
      local_5f8 = (uint *******)&DAT_00000001;
      local_5f4 = (uint *******)0x0;
      local_5f0 = (uint *******)0x0;
      local_5ec = (uint *******)&DAT_00000001;
      *(undefined1 *)(param_2 + 7) = 0;
      uStack_17e0 = (undefined1)uVar20;
      local_17df = (undefined1)(uVar20 >> 8);
      uStack_17de = (undefined1)(uVar20 >> 0x10);
      local_17dd = (undefined1)(uVar20 >> 0x18);
      local_17e8._0_1_ = (byte)local_8d8[0];
      local_17e8._1_1_ = (char)((uint)local_8d8[0] >> 8);
      local_17e8._2_2_ = (undefined2)((uint)local_8d8[0] >> 0x10);
      FUN_00ea99c0(local_8d8,&local_5f8,&local_17e8);
      local_ec0 = local_8d8[0];
      local_ebc = local_8d8[1];
      local_eb8 = (uint *******)local_8d0;
      pppppppuStack_eb4 = pppppppuStack_8cc;
      pppppppuStack_eb0 = local_8c8;
      param_2[0xb] = (uint)local_8d8[0];
      param_2[0xc] = (uint)local_8d8[1];
      param_2[0xd] = (uint)local_8d0;
      param_2[0xe] = (uint)pppppppuStack_8cc;
      param_2[0xf] = (uint)local_8c8;
      param_3 = extraout_r2;
switchD_00d433d8_caseD_4:
      puVar8 = param_2 + 0xb;
      iVar9 = FUN_0118cdb8(puVar8);
      if (iVar9 != 0) {
        uVar5 = 4;
        goto LAB_00d4392c;
      }
      if (*puVar8 != 0) {
        FUN_012840cc(puVar8);
      }
      *(undefined1 *)(param_2 + 7) = 0;
      if (param_2[8] == 0x80000000) goto LAB_00d4565c;
    }
    else {
LAB_00d45640:
      FUN_019bb7e0(local_8d8[0],local_8d8[1]);
LAB_00d4564c:
      param_2[8] = 0x80000000;
      param_2[9] = (uint)pppppppuVar14;
      param_3 = extraout_r2;
LAB_00d4565c:
      FUN_00d47b64(param_2[9]);
    }
    FUN_019e6e74(&local_5f8,&DAT_01c15dfc,5,0,0,&DAT_01c15dfc);
    FUN_01bed4e2(local_8d8,&local_5f8,0x50);
    FUN_01bed4e2(param_2 + 8,local_8d8,0x50);
LAB_00d4399c:
    iVar9 = FUN_019e84a0(param_2 + 8,*param_3);
    if (iVar9 != 0) {
      uVar5 = 5;
LAB_00d4392c:
      *(undefined1 *)((int)param_2 + 0x1d) = uVar5;
      *(undefined1 *)(param_2 + 0x194) = 0;
      *piVar7 = iVar16;
      if (local_1808 == 0) {
        *param_1 = 1;
        return;
      }
      param_1[1] = local_1808;
      param_1[2] = uStack_1804;
      param_1[3] = uStack_1800;
      param_1[4] = uStack_17fc;
      param_1[5] = uStack_17f8;
      *param_1 = 0;
      return;
    }
    FUN_01431b40(param_2 + 8);
    FUN_00d46228(param_2);
  } while( true );
}


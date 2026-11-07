// FUN_00a63a18 @ 00a63a18 size=3620 calls_out=26 calls_in=2
// strings: Bosminer.send_telemetry_data | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | boser::bosminer::senderopen/boser/boser/src/bosminer/sender.rsevent open/boser/boser/src/bosminer/sender.rs:57 | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_00a63a18(undefined4 *param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  uint ****ppppuVar3;
  byte bVar4;
  undefined1 uVar5;
  char cVar6;
  uint uVar7;
  uint uVar8;
  uint ***pppuVar9;
  int iVar10;
  code *unaff_r5;
  undefined4 uVar11;
  uint ****ppppuVar12;
  uint ****ppppuVar13;
  int iVar14;
  undefined4 uVar15;
  uint ****ppppuVar16;
  undefined4 *puVar17;
  int *piVar18;
  undefined4 *local_efc;
  undefined4 *local_ef4;
  uint ****local_ee8;
  uint ****local_ee4;
  uint ****local_ee0;
  uint ****local_edc;
  undefined4 local_ed8;
  uint ****local_940;
  uint ****local_93c;
  uint ****ppppuStack_938;
  uint ****local_930;
  uint ****ppppuStack_92c;
  uint ****ppppuStack_928;
  uint ****local_920;
  uint ****local_91c;
  uint ****local_918;
  undefined4 local_910;
  undefined4 local_90c;
  uint ****local_908;
  uint ****local_904;
  uint ****local_900;
  uint ****ppppuStack_8fc;
  uint ****ppppuStack_8f8;
  uint ****ppppuStack_8f4;
  undefined4 local_8f0;
  undefined4 uStack_8ec;
  undefined4 uStack_8e8;
  undefined4 uStack_8e4;
  undefined4 uStack_8e0;
  undefined4 uStack_8dc;
  uint ****local_8d8;
  uint ****local_8d4;
  uint ****local_8d0;
  uint ****local_8c8;
  uint ****local_8c4;
  uint ****local_8c0;
  uint ****local_8bc;
  uint ****local_8b8;
  uint ****ppppuStack_8b4;
  undefined1 auStack_8b0 [712];
  uint ****local_5e8;
  uint ****local_5e4;
  uint ****local_5e0;
  uint ****local_5dc;
  uint ****local_5d8;
  uint ****local_5d4;
  undefined4 local_5d0;
  undefined4 uStack_5cc;
  undefined4 uStack_5c8;
  undefined4 uStack_5c4;
  undefined4 uStack_5c0;
  undefined4 uStack_5bc;
  uint ****local_308;
  uint ****local_304;
  uint ****local_300;
  uint ****ppppuStack_2fc;
  uint ****local_40;
  uint ****local_3c;
  uint ****local_38;
  uint ****local_30;
  uint ****local_2c;
  uint ****local_28;
  
  ppppuVar16 = (uint ****)(param_1 + 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0xe)) {
  case 0:
    param_1[5] = param_1[4];
    param_1[6] = *param_1;
    param_1[7] = param_1[1];
    param_1[8] = param_1[2];
    param_1[9] = param_1[3];
    bVar4 = 0;
    param_1[10] = 1;
    *(undefined1 *)(param_1 + 0xc) = 0;
    param_1[0xb] = 3;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c0ef90);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c0ef90);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x18)) {
    case 0:
      goto switchD_00a63aa0_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0eff0);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0eff0);
    case 3:
      goto switchD_00a63aa0_caseD_3;
    case 4:
      goto switchD_00a63aa0_caseD_4;
    }
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x17b)) {
    case 0:
      piVar18 = (int *)param_1[0x17a];
      goto LAB_00a63c9c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c0f070);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c0f070);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x178)) {
    case 0:
      goto switchD_00a63b20_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c1f170);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c1f170);
    case 3:
      goto LAB_00a63d6c;
    }
  }
LAB_00a63bf4:
  if ((bVar4 & 1) == 0) {
    uVar7 = param_1[10];
    if (uVar7 <= (uint)param_1[0xb]) {
      if (uVar7 < (uint)param_1[0xb]) {
        param_1[10] = uVar7 + 1;
      }
      else {
        *(undefined1 *)(param_1 + 0xc) = 1;
      }
      piVar18 = (int *)param_1[5];
      param_1[0xd] = uVar7;
      if (*piVar18 == 0) {
        *(undefined1 *)(param_1 + 0x18) = 0;
        param_1[0xf] = piVar18;
switchD_00a63aa0_caseD_0:
        param_1[0x12] = 0;
        *ppppuVar16 = (uint ***)0x1;
        param_1[0x11] = 0;
        do {
          *(undefined1 *)(param_1 + 0x4a) = 0;
          param_1[0x1a] = 1;
switchD_00a63aa0_caseD_3:
          ppppuVar13 = (uint ****)(param_1 + 0x1a);
          FUN_00a553e4(&local_8c8,ppppuVar13,param_2);
          if (local_8c8 == (uint ****)0x80000006) {
            uVar5 = 3;
LAB_00a649b0:
            *(undefined1 *)(param_1 + 0x18) = uVar5;
            goto LAB_00a649b4;
          }
          unaff_r5 = (code *)(param_1 + 0x14);
          *(uint *****)unaff_r5 = local_8c8;
          param_1[0x15] = local_8c4;
          param_1[0x16] = local_8c0;
          param_1[0x17] = local_8bc;
          if (*(char *)(param_1 + 0x4a) == '\x03') {
            FUN_00b99500(param_1 + 0x1b);
          }
          if (*(uint ****)unaff_r5 == (uint ***)&DAT_80000005) goto code_r0x00a645a0;
          *ppppuVar13 = *(uint ****)unaff_r5;
          param_1[0x1b] = param_1[0x15];
          param_1[0x1c] = param_1[0x16];
          param_1[0x1d] = param_1[0x17];
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4bb4c - 1 < 2 ||
               ((DAT_01d4bb4c != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4bb44), cVar6 != '\0')))) &&
              (iVar10 = FUN_01aaa278(DAT_01d4bb44), iVar10 != 0)))) {
            if (*(uint *****)(DAT_01d4bb44 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0f000);
            }
            local_904 = (uint ****)&local_940;
            local_ee0 = *(uint *****)(DAT_01d4bb44 + 0x24);
            local_edc = *(uint *****)(DAT_01d4bb44 + 0x28);
            local_38 = (uint ****)(DAT_01d4bb44 + 0x1c);
            unaff_r5 = (code *)*local_38;
            local_908 = (uint ****)&local_ee8;
            local_40 = (uint ****)&local_908;
            local_ed8 = 0;
            local_3c = (uint ****)&DAT_00000001;
            local_93c = (uint ****)&local_8d8;
            local_900 = (uint ****)&DAT_01d2ea4c;
            local_940 = (uint ****)&DAT_005ad2a9;
            local_8d4 = (uint ****)FUN_00aeeb78;
            local_ee8 = (uint ****)unaff_r5;
            local_ee4 = *(uint *****)(DAT_01d4bb44 + 0x20);
            local_8d8 = ppppuVar13;
            FUN_01aaaecc(DAT_01d4bb44,&local_40);
            iVar10 = DAT_01d4bb44;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_304 = *(uint *****)(DAT_01d4bb44 + 0x14);
              local_300 = *(uint *****)(DAT_01d4bb44 + 0x18);
              local_308 = (uint ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              unaff_r5 = (code *)DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                unaff_r5 = (code *)&DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)*(uint ****)((int)unaff_r5 + 0xc))(pcVar2,&local_308);
              if (iVar14 != 0) {
                local_5e8 = local_308;
                local_5e4 = local_304;
                local_5e0 = local_300;
                FUN_01aaa328(iVar10,pcVar2,*(uint ****)((int)unaff_r5 + 0x10),&local_5e8,&local_40);
              }
            }
          }
          else {
            iVar10 = DAT_01d4bb44;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_2c = *(uint *****)(DAT_01d4bb44 + 0x14);
              local_28 = *(uint *****)(DAT_01d4bb44 + 0x18);
              local_30 = (uint ****)&SUB_00000004;
              DataMemoryBarrier(0xb);
              unaff_r5 = (code *)DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                unaff_r5 = (code *)&DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)*(uint ****)((int)unaff_r5 + 0xc))(pcVar2,&local_30);
              if (iVar14 != 0) {
                if (*(uint *****)(DAT_01d4bb44 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0f000);
                }
                local_ee0 = *(uint *****)(DAT_01d4bb44 + 0x24);
                local_304 = (uint ****)&local_8d8;
                local_edc = *(uint *****)(DAT_01d4bb44 + 0x28);
                local_308 = (uint ****)&local_ee8;
                local_908 = (uint ****)&local_308;
                local_904 = (uint ****)&DAT_00000001;
                local_8d4 = (uint ****)&local_40;
                local_ed8 = 0;
                local_300 = (uint ****)&DAT_01d2ea4c;
                local_8d8 = (uint ****)&DAT_005ad2a9;
                local_3c = (uint ****)FUN_00aeeb78;
                local_5e8 = local_30;
                local_5e4 = local_2c;
                local_5e0 = local_28;
                local_ee8 = *(uint *****)(DAT_01d4bb44 + 0x1c);
                local_ee4 = *(uint *****)(DAT_01d4bb44 + 0x20);
                local_900 = (uint ****)(DAT_01d4bb44 + 0x1c);
                local_40 = ppppuVar13;
                FUN_01aaa328(iVar10,pcVar2,*(uint ****)((int)unaff_r5 + 0x10),&local_5e8,&local_908)
                ;
              }
            }
          }
          FUN_019e6e74(&local_ee8,&DAT_01c0f010,*ppppuVar16,param_1[0x11],param_1[0x12],
                       &DAT_01c0f010);
          FUN_01bed4e2(&local_5e8,&local_ee8,0x50);
          FUN_01bed4e2(param_1 + 0x1e,&local_5e8,0x50);
switchD_00a63aa0_caseD_4:
          iVar10 = FUN_019e84a0(param_1 + 0x1e,*param_2);
          if (iVar10 != 0) {
            uVar5 = 4;
            goto LAB_00a649b0;
          }
          FUN_01431b40(param_1 + 0x1e);
          if ((int)param_1[0x11] < 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("overflow when multiplying duration by scalarstruct ConnectionEvent",0x2c,
                         &DAT_01ce2d7c);
          }
          uVar7 = param_1[0x12];
          iVar10 = uVar7 * 2 + -1000000000;
          if (uVar7 < 500000000) {
            iVar10 = uVar7 << 1;
          }
          uVar8 = param_1[0x11] << 1 | (uint)*ppppuVar16 >> 0x1f;
          pppuVar9 = (uint ***)((uint)(499999999 < uVar7) | (int)*ppppuVar16 << 1);
          bVar1 = (uint)(pppuVar9 < (uint ***)0x12d) <= -uVar8;
          if (pppuVar9 == (uint ***)0x12c && uVar8 == 0) {
            bVar1 = iVar10 != 0;
          }
          if (bVar1) {
            pppuVar9 = (uint ***)0x12c;
            uVar8 = 0;
            iVar10 = 0;
          }
          *ppppuVar16 = pppuVar9;
          param_1[0x11] = uVar8;
          param_1[0x12] = iVar10;
          FUN_00a55a24(param_1 + 0x1a);
          unaff_r5 = (code *)ppppuVar16;
        } while( true );
      }
      goto LAB_00a645e4;
    }
  }
  local_ee4 = (uint ****)FUN_012fd02c;
  local_ee8 = (uint ****)&DAT_0056d73c;
  unaff_r5 = (code *)FUN_00a57a98(&DAT_00587dc0,&local_ee8);
LAB_00a642b8:
  FUN_019bb7e0(param_1[6],param_1[7]);
  *(undefined1 *)(param_1 + 0xe) = 1;
  uVar11 = 0;
LAB_00a64428:
  return CONCAT44(unaff_r5,uVar11);
code_r0x00a645a0:
  iVar14 = param_1[0x15];
  *(undefined1 *)(param_1 + 0x18) = 1;
  iVar10 = param_1[0x16];
  unaff_r5 = (code *)param_1[0x17];
  if (iVar14 == 0) {
LAB_00a649b4:
    uVar5 = 3;
    goto LAB_00a64420;
  }
  FUN_00a618a0(ppppuVar16);
  piVar18 = (int *)param_1[0xf];
  if (*piVar18 != 0) {
    FUN_0084ec48(piVar18);
  }
  *piVar18 = iVar14;
  piVar18[1] = iVar10;
  piVar18[2] = (int)unaff_r5;
LAB_00a645e4:
  uVar5 = *(undefined1 *)(param_1 + 9);
  FUN_006666fc(&local_5e8,param_1[7],param_1[8]);
  local_5dc = (uint ****)CONCAT31(local_5dc._1_3_,uVar5);
  local_ee8 = local_5e8;
  local_ee4 = local_5e4;
  local_ee0 = local_5e0;
  local_edc = local_5dc;
  FUN_01bed4e2(ppppuVar16,&local_ee8,0x5a8);
  *(undefined1 *)(param_1 + 0x17b) = 0;
  param_1[0x17a] = piVar18;
LAB_00a63c9c:
  local_910 = param_1[0x12];
  local_90c = param_1[0x13];
  uVar15 = param_1[0x10];
  uVar11 = param_1[0x11];
  *(undefined1 *)((int)param_1 + 0x5ed) = 1;
  FUN_019cfcf0(&local_5e8);
  *(undefined1 *)((int)param_1 + 0x5ed) = 0;
  local_908 = local_5e8;
  local_904 = local_5e4;
  local_900 = local_5e0;
  ppppuStack_8fc = local_5dc;
  ppppuStack_8f8 = local_5d8;
  ppppuStack_8f4 = local_5d4;
  local_8f0 = local_5d0;
  uStack_8ec = uStack_5cc;
  uStack_8e8 = uStack_5c8;
  uStack_8e4 = uStack_5c4;
  uStack_8e0 = uStack_5c0;
  uStack_8dc = uStack_5bc;
  param_1[0x1f] = local_910;
  param_1[0x20] = local_90c;
  param_1[0x1c] = 0x80000017;
  param_1[0x1d] = uVar15;
  param_1[0x1e] = uVar11;
  param_1[0x2a] = "Bosminer.send_telemetry_data";
  param_1[0x2b] = 0x1c;
  param_1[0x2c] = local_5e8;
  param_1[0x2d] = local_5e4;
  param_1[0x2e] = local_5e0;
  param_1[0x2f] = local_5dc;
  param_1[0x30] = local_5d8;
  param_1[0x31] = local_5d4;
  param_1[0x32] = local_5d0;
  param_1[0x33] = uStack_5cc;
  param_1[0x34] = uStack_5c8;
  param_1[0x35] = uStack_5c4;
  param_1[0x36] = uStack_5c0;
  param_1[0x37] = uStack_5bc;
  *(undefined1 *)(param_1 + 0x178) = 0;
  *(undefined1 *)((int)param_1 + 0xe7) = 0;
  param_1[0x38] = piVar18;
switchD_00a63b20_caseD_0:
  FUN_01bed4e2(param_1 + 0xc6,param_1 + 0x14,0x2c8);
LAB_00a63d6c:
  local_ef4 = param_1 + 0x10;
  local_efc = param_1 + 0x17b;
  puVar17 = param_1 + 0x178;
  FUN_00a55b84(&local_5e8,param_1 + 0xc6,param_2);
  ppppuVar12 = local_5e0;
  ppppuVar3 = local_5e4;
  ppppuVar13 = local_5e8;
  if (local_5e8 == (uint ****)&DAT_0000001e && local_5e4 == (uint ****)0x0) {
    *(undefined1 *)puVar17 = 3;
    local_2c = local_5e4;
LAB_00a6429c:
    *(undefined1 *)local_efc = 3;
  }
  else {
    local_30 = local_5dc;
    local_2c = local_5d8;
    local_28 = local_5d4;
    FUN_01bed4e2(&local_308,&local_5d0,0x2c8);
    FUN_00df9ef8(param_1 + 0xc6);
    if (ppppuVar13 != (uint ****)&DAT_0000001d || ppppuVar3 != (uint ****)0x0) {
      FUN_01bed4e2(auStack_8b0,&local_308,0x2c8);
      local_8bc = local_30;
      local_8b8 = local_2c;
      ppppuStack_8b4 = local_28;
      local_8c4 = ppppuVar3;
      local_8c8 = ppppuVar13;
      local_8c0 = ppppuVar12;
      if (ppppuVar13 != (uint ****)&DAT_0000001b || ppppuVar3 != (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01c1f170);
      }
      FUN_00a57044(&local_8c8);
      *(undefined1 *)puVar17 = 1;
LAB_00a63ea8:
      ppppuVar12 = (uint ****)&DAT_80000005;
      *(undefined2 *)(param_1 + 0x17b) = 1;
LAB_00a63ec0:
      unaff_r5 = (code *)&local_930;
      local_930 = local_940;
      ppppuStack_92c = local_93c;
      ppppuStack_928 = ppppuStack_938;
      FUN_00a61904(local_ef4);
      if (ppppuVar12 == (uint ****)&DAT_80000005) {
        unaff_r5 = (code *)0x0;
        goto LAB_00a642b8;
      }
      local_304 = local_930;
      local_300 = ppppuStack_92c;
      ppppuStack_2fc = ppppuStack_928;
      local_308 = ppppuVar12;
      if (((DAT_01d50f88 < 4) &&
          ((DAT_01d4bb28 - 1 < 2 ||
           ((DAT_01d4bb28 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4bb20), cVar6 != '\0')))))) &&
         (iVar10 = FUN_01aaa278(DAT_01d4bb20), iVar10 != 0)) {
        if (*(uint *****)(DAT_01d4bb20 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efa0);
        }
        local_8c0 = *(uint *****)(DAT_01d4bb20 + 0x24);
        local_8bc = *(uint *****)(DAT_01d4bb20 + 0x28);
        local_8d0 = (uint ****)(DAT_01d4bb20 + 0x1c);
        local_8c8 = (uint ****)*local_8d0;
        local_5d4 = (uint ****)FUN_00aeeb78;
        local_40 = (uint ****)&local_8c8;
        local_8d4 = (uint ****)&DAT_00000001;
        local_5d8 = (uint ****)&local_308;
        local_8d8 = (uint ****)&local_40;
        local_5e8 = (uint ****)(param_1 + 0xd);
        unaff_r5 = FUN_012fd02c;
        local_8b8 = (uint ****)0x0;
        local_38 = (uint ****)&DAT_01d2ea4c;
        local_940 = (uint ****)&DAT_005816ab;
        local_5dc = (uint ****)FUN_012fd02c;
        local_5e0 = (uint ****)&DAT_0056d73c;
        local_5e4 = (uint ****)FUN_012fd02c;
        local_93c = (uint ****)&local_5e8;
        local_8c4 = *(uint *****)(DAT_01d4bb20 + 0x20);
        local_3c = (uint ****)&local_940;
        FUN_01aaaecc(DAT_01d4bb20,&local_8d8);
        iVar10 = DAT_01d4bb20;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_2c = *(uint *****)(DAT_01d4bb20 + 0x14);
          local_28 = *(uint *****)(DAT_01d4bb20 + 0x18);
          local_30 = (uint ****)0x2;
          DataMemoryBarrier(0xb);
          unaff_r5 = (code *)DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            unaff_r5 = (code *)&DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar14 = (*(code *)*(uint ****)((int)unaff_r5 + 0xc))(pcVar2,&local_30);
          if (iVar14 != 0) {
            local_908 = local_30;
            local_904 = local_2c;
            local_900 = local_28;
            FUN_01aaa328(iVar10,pcVar2,*(uint ****)((int)unaff_r5 + 0x10),&local_908,&local_8d8);
          }
        }
      }
      else {
        iVar10 = DAT_01d4bb20;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_91c = *(uint *****)(DAT_01d4bb20 + 0x14);
          local_918 = *(uint *****)(DAT_01d4bb20 + 0x18);
          local_920 = (uint ****)0x2;
          DataMemoryBarrier(0xb);
          unaff_r5 = (code *)DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            unaff_r5 = (code *)&DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar14 = (*(code *)*(uint ****)((int)unaff_r5 + 0xc))(pcVar2,&local_920);
          if (iVar14 != 0) {
            if (*(uint *****)(DAT_01d4bb20 + 0x20) == (uint ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c0efa0);
            }
            local_8c0 = *(uint *****)(DAT_01d4bb20 + 0x24);
            local_8bc = *(uint *****)(DAT_01d4bb20 + 0x28);
            local_2c = (uint ****)&local_8d8;
            local_30 = (uint ****)&local_8c8;
            local_8b8 = (uint ****)0x0;
            local_3c = (uint ****)&DAT_00000001;
            local_28 = (uint ****)&DAT_01d2ea4c;
            local_8d8 = (uint ****)&DAT_005816ab;
            local_5dc = (uint ****)FUN_012fd02c;
            local_5d4 = (uint ****)FUN_00aeeb78;
            local_5d8 = (uint ****)&local_308;
            local_5e0 = (uint ****)&DAT_0056d73c;
            local_5e8 = (uint ****)(param_1 + 0xd);
            local_5e4 = (uint ****)FUN_012fd02c;
            local_908 = local_920;
            local_904 = local_91c;
            local_900 = local_918;
            local_8d4 = (uint ****)&local_5e8;
            local_8c8 = *(uint *****)(DAT_01d4bb20 + 0x1c);
            local_8c4 = *(uint *****)(DAT_01d4bb20 + 0x20);
            local_40 = (uint ****)&local_30;
            local_38 = (uint ****)(DAT_01d4bb20 + 0x1c);
            FUN_01aaa328(iVar10,pcVar2,*(uint ****)((int)unaff_r5 + 0x10),&local_908,&local_40);
          }
        }
      }
      piVar18 = (int *)param_1[5];
      if (*piVar18 != 0) {
        FUN_0084ec48();
        piVar18 = (int *)param_1[5];
      }
      *piVar18 = 0;
      FUN_00a55a24(&local_308);
      bVar4 = *(byte *)(param_1 + 0xc);
      goto LAB_00a63bf4;
    }
    local_8d8 = local_30;
    local_8d4 = local_2c;
    local_8d0 = local_28;
    *(undefined1 *)puVar17 = 1;
    if (ppppuVar12 == (uint ****)&DAT_80000005) goto LAB_00a6429c;
    local_40 = local_30;
    local_3c = local_2c;
    local_38 = local_28;
    if (ppppuVar12 == (uint ****)&DAT_80000004) goto LAB_00a63ea8;
    *(undefined1 *)((int)param_1 + 0x5ed) = 0;
    local_940 = local_30;
    local_93c = local_2c;
    ppppuStack_938 = local_28;
    *(undefined1 *)(param_1 + 0x17b) = 1;
    if (ppppuVar12 != (uint ****)0x80000006) goto LAB_00a63ec0;
  }
  uVar5 = 4;
  unaff_r5 = (code *)local_2c;
LAB_00a64420:
  *(undefined1 *)(param_1 + 0xe) = uVar5;
  uVar11 = 1;
  goto LAB_00a64428;
}


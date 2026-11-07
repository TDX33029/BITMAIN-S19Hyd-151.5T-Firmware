// FUN_006481b8 @ 006481b8 size=8120 calls_out=50 calls_in=2
// strings: Error sending new job | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_006481b8(undefined1 *param_1,undefined4 *param_2,undefined4 *param_3)

{
  code *pcVar1;
  undefined2 uVar2;
  bool bVar3;
  longlong lVar4;
  char *pcVar5;
  undefined1 uVar6;
  char cVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 ******ppppppuVar12;
  uint uVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  uint uVar17;
  undefined4 ******ppppppuVar18;
  undefined4 ******unaff_r5;
  undefined4 *****unaff_r6;
  undefined1 auVar19 [4];
  int *piVar20;
  uint uVar21;
  bool bVar22;
  undefined8 uVar23;
  ulonglong uVar24;
  undefined4 ******local_798;
  undefined4 ******local_794;
  undefined1 *local_78c;
  code *local_788;
  undefined4 *local_780;
  undefined4 ******local_770 [46];
  undefined1 auStack_6b8 [200];
  undefined4 local_5f0;
  undefined4 uStack_5ec;
  undefined4 uStack_5e8;
  undefined2 local_5e4;
  undefined1 local_5e2;
  int local_5e0;
  undefined4 uStack_5dc;
  undefined4 uStack_5d8;
  undefined4 *****local_5d0;
  undefined4 *puStack_5cc;
  undefined4 uStack_5c8;
  undefined2 local_5c4;
  undefined1 local_5c2;
  undefined4 *****local_5c0;
  undefined4 *puStack_5bc;
  undefined4 uStack_5b8;
  undefined2 local_5b4;
  undefined1 local_5b2;
  undefined4 ******local_5b0;
  undefined4 ******local_5ac;
  undefined4 *local_5a8;
  undefined4 local_5a0;
  undefined4 uStack_59c;
  undefined4 uStack_598;
  undefined4 local_590;
  undefined4 uStack_58c;
  undefined4 uStack_588;
  undefined2 local_584;
  undefined1 local_582;
  undefined4 ******local_580;
  undefined4 ******local_57c;
  undefined4 *local_578;
  undefined4 ******local_570;
  undefined4 ******local_56c;
  undefined4 *local_568;
  undefined4 *****local_560;
  undefined4 *local_55c;
  undefined4 uStack_558;
  undefined2 local_554;
  undefined1 local_552;
  undefined4 ******local_550;
  undefined4 ******local_54c;
  undefined4 local_548;
  undefined4 uStack_544;
  undefined1 local_421;
  undefined4 ******local_420;
  undefined4 ******local_41c;
  undefined4 *local_418;
  undefined4 ******local_410;
  undefined4 ******local_40c;
  undefined4 local_408;
  code *local_404 [46];
  undefined4 local_34c;
  undefined4 uStack_348;
  undefined4 uStack_344;
  undefined4 ******local_2e8;
  undefined4 ******local_2e4;
  undefined4 *local_2e0;
  undefined4 local_2dc;
  undefined4 local_2d8;
  undefined4 local_1b8;
  undefined4 ******local_1b4;
  undefined1 local_1b0 [4];
  code *local_1ac;
  undefined4 *****local_1a8;
  code *local_1a4;
  uint local_190 [2];
  undefined4 local_188;
  undefined4 uStack_184;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 *****local_d4;
  undefined4 ******local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 ******local_b0;
  int local_ac;
  undefined4 *local_90;
  undefined4 ******local_88;
  undefined4 ******local_84;
  undefined4 *local_80;
  undefined4 ******local_7c;
  undefined4 ******local_78;
  undefined4 *local_74;
  undefined4 ******local_70;
  undefined4 ******local_6c;
  undefined4 *local_68;
  undefined4 ******local_64;
  undefined4 ******local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 *****local_50;
  undefined4 local_4c;
  undefined4 *****local_48;
  undefined4 ******local_44;
  undefined4 local_40;
  undefined4 ******local_38;
  undefined4 ******local_34;
  undefined4 *local_30;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)((int)param_2 + 0x549)) {
  case 0:
    *(undefined2 *)((int)param_2 + 0x546) = 0;
    *(undefined1 *)(param_2 + 0x152) = 0;
    piVar20 = (int *)param_2[0x150];
    FUN_01bed4e2(param_2 + 0xe4,param_2 + 0x11a,0xd8);
    if (param_2[0xe4] == -0x80000000) {
      local_410 = (undefined4 ******)param_2[0x148];
      local_40c = (undefined4 ******)param_2[0x149];
      local_408 = (undefined4 *)param_2[0x14a];
      FUN_0195c644(&local_1b8,&local_410,param_2[0xe6],param_2[0xe7],&local_410);
      ppppppuVar12 = local_1b4;
      if (local_1b8 != (undefined4 ******)&DAT_80000001) {
        local_794 = local_1b8;
        local_1b8 = (undefined4 ******)&DAT_80000000;
        local_798 = local_1b4;
        local_788 = local_1ac;
        auVar19 = local_1b0;
LAB_006483dc:
        local_770[0] = local_1b8;
        FUN_01bed4e2((uint)local_770 | 4,&local_2e8,0xb4);
        *(undefined1 *)(param_2 + 0x152) = 0;
        *(undefined1 *)((int)param_2 + 0x547) = 1;
        *(undefined1 *)((int)param_2 + 0x546) = 0;
        FUN_006666fc(&local_2e8,param_2[0x116],param_2[0x117]);
        *(undefined1 *)((int)param_2 + 0x547) = 0;
        FUN_01bed4e2(&local_1ac,local_770,0xb8);
        local_1b8 = local_2e8;
        local_1b4 = local_2e4;
        local_1b0 = (undefined1  [4])local_2e0;
        FUN_01bed4e2(auStack_6b8,&local_1b8,0xc4);
        FUN_01bed4e2(param_2,auStack_6b8,0xc4);
        *(undefined1 *)(param_2 + 0x6e) = 0;
        param_2[0x31] = local_794;
        param_2[0x32] = local_798;
        param_2[0x33] = auVar19;
        param_2[0x34] = piVar20;
        param_2[0x35] = local_788;
        goto LAB_00648490;
      }
    }
    else {
      uVar2 = *(undefined2 *)(param_2 + 0x151);
      FUN_01bed4e2(&local_1b8,param_2 + 0x11a,0xb8);
      local_550 = (undefined4 ******)param_2[0x148];
      local_54c = (undefined4 ******)param_2[0x149];
      local_548 = (undefined4 *)param_2[0x14a];
      FUN_0195baf0(&local_410,&local_1b8,&local_550,uVar2);
      auVar19 = (undefined1  [4])local_408;
      ppppppuVar12 = local_40c;
      if (local_410 != (undefined4 ******)&DAT_80000001) {
        local_794 = local_410;
        local_788 = local_404[0];
        local_798 = local_40c;
        FUN_01bed4e2(&local_2e8,(uint)&local_1b8 | 4,0xb4);
        goto LAB_006483dc;
      }
      FUN_01a2affc(&local_1b8);
    }
    uVar6 = 1;
LAB_006499a4:
    FUN_019bb7e0(param_2[0x115],param_2[0x116]);
    *(undefined2 *)(param_1 + 1) = local_5e4;
    param_1[3] = local_5e2;
    *param_1 = uVar6;
    *(undefined4 *******)(param_1 + 4) = ppppppuVar12;
    *(undefined4 *)(param_1 + 8) = local_5f0;
    *(undefined4 *)(param_1 + 0xc) = uStack_5ec;
    *(undefined4 *)(param_1 + 0x10) = uStack_5e8;
    uVar6 = 1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c2080c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c2080c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0x6e)) {
    case 0:
      piVar20 = (int *)param_2[0x34];
      local_788 = (code *)param_2[0x35];
LAB_00648490:
      *(undefined2 *)((int)param_2 + 0x1bb) = 0x101;
      param_2[0x36] = local_788;
      FUN_01bed4e2(param_2 + 0x37,param_2 + 3,0xb8);
      *(undefined1 *)((int)param_2 + 0x1ba) = 1;
      param_2[0x65] = *param_2;
      param_2[0x66] = param_2[1];
      param_2[0x67] = param_2[2];
      *(undefined1 *)((int)param_2 + 0x1b9) = 1;
      param_2[0x68] = param_2[0x31];
      param_2[0x69] = param_2[0x32];
      param_2[0x6a] = param_2[0x33];
      iVar8 = *piVar20;
      *(undefined1 *)(param_2 + 0x7b) = 0;
      param_2[0x70] = iVar8 + 8;
      break;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c2085c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c2085c);
    case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)((int)param_2 + 0x1e1)) {
      case 0:
        uVar9 = param_2[0x76];
        piVar20 = (int *)param_2[0x77];
        goto LAB_00648578;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01d25d20);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01d25d20);
      case 3:
        if (*(char *)(param_2 + 0x7a) != '\0') {
          if (*(char *)(param_2 + 0x7a) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d25d60);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d25d60);
        }
        iVar8 = param_2[0x79];
        goto LAB_006485a4;
      case 4:
        goto switchD_00648344_caseD_4;
      case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch(*(undefined1 *)((int)param_2 + 0x23b)) {
        case 0:
          piVar20 = (int *)param_2[0x8c];
          uVar9 = param_2[0x8d];
          break;
        case 1:
                    /* WARNING: Subroutine does not return */
          FUN_013079f0(&DAT_01d25db4);
        case 2:
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d25db4);
        case 3:
          goto LAB_0064a808;
        }
      }
      goto LAB_00648608;
    case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch(*(undefined1 *)(param_2 + 0x7d)) {
      case 0:
        goto switchD_00648380_caseD_0;
      case 1:
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c1f51c);
      case 2:
                    /* WARNING: Subroutine does not return */
        FUN_01307a10(&DAT_01c1f51c);
      case 3:
        if (*(char *)(param_2 + 0x7f) != '\0') {
          if (*(char *)(param_2 + 0x7f) == '\x01') {
                    /* WARNING: Subroutine does not return */
            FUN_013079f0(&DAT_01d25d60);
          }
                    /* WARNING: Subroutine does not return */
          FUN_01307a10(&DAT_01d25d60);
        }
        iVar8 = param_2[0x7e];
        goto LAB_00649524;
      case 4:
        goto switchD_00648380_caseD_4;
      case 5:
        goto switchD_00648380_caseD_5;
      case 6:
        uVar23 = *(undefined8 *)(param_2 + 0x7e);
      }
      goto LAB_006495cc;
    }
    FUN_006177f4(&local_5e0,param_2 + 0x70,param_3);
    if (local_5e0 == 0) {
      uVar6 = 3;
    }
    else {
      param_2[0x6b] = local_5e0;
      param_2[0x6c] = uStack_5dc;
      param_2[0x6d] = uStack_5d8;
      cVar7 = *(char *)(param_2 + 0x7b);
      bVar22 = cVar7 == '\x03';
      if (bVar22) {
        cVar7 = *(char *)(param_2 + 0x7a);
      }
      if (bVar22 && cVar7 == '\x03') {
        FUN_0193c3cc(param_2 + 0x72);
      }
      piVar20 = (int *)param_2[0x36];
      uVar9 = param_2[0x6d];
      do {
        iVar8 = *piVar20;
        bVar22 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar22);
      *piVar20 = iVar8 + 1;
      if (iVar8 < 0) goto LAB_0064a7c8;
      *(undefined1 *)((int)param_2 + 0x1e1) = 0;
      param_2[0x76] = uVar9;
      param_2[0x77] = piVar20;
LAB_00648578:
      param_2[0x75] = piVar20;
      *(undefined1 *)(param_2 + 0x78) = 1;
      param_2[0x74] = uVar9;
      FUN_01a36648(param_2 + 0x70);
      iVar8 = param_2[0x74];
      param_2[0x79] = iVar8;
      param_2[0x7a] = 0;
LAB_006485a4:
      cVar7 = *(char *)(*(int *)(iVar8 + 4) + 8);
      *(undefined1 *)(param_2 + 0x7a) = 1;
      if (cVar7 == '\0') {
        if ((DAT_01d50f88 < 3) &&
           (((DAT_01d50624 - 1 < 2 ||
             ((DAT_01d50624 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d5061c), cVar7 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d5061c), iVar8 != 0)))) {
          if (*(undefined4 *******)(DAT_01d5061c + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d30);
          }
          local_54c = &local_48;
          local_1b0 = *(undefined1 (*) [4])(DAT_01d5061c + 0x24);
          local_1ac = *(code **)(DAT_01d5061c + 0x28);
          local_5c = (undefined4 *)(DAT_01d5061c + 0x1c);
          local_1b8 = (undefined4 ******)*local_5c;
          local_550 = (undefined4 ******)&local_1b8;
          local_64 = &local_550;
          local_60 = (undefined4 ******)&DAT_00000001;
          local_1a8 = (undefined4 *****)0x0;
          local_548 = (undefined4 *)&DAT_01d2ea4c;
          local_44 = (undefined4 ******)&DAT_00000011;
          local_48 = (undefined4 *****)&DAT_00570450;
          local_1b4 = *(undefined4 *******)(DAT_01d5061c + 0x20);
          FUN_01aaaecc(DAT_01d5061c,&local_64);
          iVar8 = DAT_01d5061c;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_40c = *(undefined4 *******)(DAT_01d5061c + 0x14);
            local_408 = *(undefined4 **)(DAT_01d5061c + 0x18);
            local_410 = (undefined4 ******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar5 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar14 = (*(code *)puVar10[3])(pcVar5,&local_410);
            if (iVar14 != 0) {
              local_2e8 = local_410;
              local_2e4 = local_40c;
              local_2e0 = local_408;
              FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_64);
            }
          }
        }
        else {
          iVar8 = DAT_01d5061c;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_57c = *(undefined4 *******)(DAT_01d5061c + 0x14);
            local_578 = *(undefined4 **)(DAT_01d5061c + 0x18);
            local_580 = (undefined4 ******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar5 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar14 = (*(code *)puVar10[3])(pcVar5,&local_580);
            if (iVar14 != 0) {
              if (*(undefined4 *******)(DAT_01d5061c + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d30);
              }
              local_1b0 = *(undefined1 (*) [4])(DAT_01d5061c + 0x24);
              local_40c = &local_64;
              local_1ac = *(code **)(DAT_01d5061c + 0x28);
              local_410 = (undefined4 ******)&local_1b8;
              local_550 = &local_410;
              local_54c = (undefined4 ******)&DAT_00000001;
              local_60 = (undefined4 ******)&DAT_00000011;
              local_1a8 = (undefined4 *****)0x0;
              local_408 = (undefined4 *)&DAT_01d2ea4c;
              local_64 = (undefined4 ******)&DAT_00570450;
              local_2e8 = local_580;
              local_2e4 = local_57c;
              local_2e0 = local_578;
              local_548 = (undefined4 *)(DAT_01d5061c + 0x1c);
              local_1b8 = *(undefined4 *******)(DAT_01d5061c + 0x1c);
              local_1b4 = *(undefined4 *******)(DAT_01d5061c + 0x20);
              FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_550);
            }
          }
        }
        FUN_01a35774(param_2 + 0xd0,param_2[0x74]);
        param_2[0x79] = param_2 + 0xd0;
        *(undefined1 *)(param_2 + 0x7b) = 0;
switchD_00648344_caseD_4:
        uVar21 = FUN_005eb444(param_2 + 0x79,param_3);
        uVar6 = 4;
        if ((uVar21 & 0xff) == 0x1c) {
LAB_0064a930:
          local_78c = (undefined1 *)((int)param_2 + 0x1e1);
          *local_78c = uVar6;
          uVar6 = 4;
          goto LAB_0064a93c;
        }
        if (*(char *)(param_2 + 0x7b) == '\x04') {
          FUN_005f1388(param_2 + 0x7c);
        }
        if ((uVar21 & 0xff) == 0x1b) {
          FUN_005fb2fc(param_2 + 0xd0);
          goto LAB_006485bc;
        }
        FUN_005fb2fc(param_2 + 0xd0);
LAB_00648f98:
        if (*(char *)(param_2 + 0x78) != '\0') {
          piVar20 = (int *)param_2[0x75];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar20;
            bVar22 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar22);
          *piVar20 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0195b288(param_2[0x75]);
          }
        }
        bVar22 = true;
        *(undefined1 *)(param_2 + 0x78) = 0;
      }
      else {
LAB_006485bc:
        piVar20 = *(int **)param_2[0x74];
        do {
          iVar8 = *piVar20;
          bVar22 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar22);
        *piVar20 = iVar8 + 1;
        if (iVar8 < 0) {
LAB_0064a7c8:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x64a7c8);
          (*pcVar1)();
        }
        *(undefined1 *)((int)param_2 + 0x23b) = 0;
        *(undefined1 *)(param_2 + 0x78) = 0;
        uVar9 = param_2[0x75];
        param_2[0x79] = piVar20;
        piVar20 = piVar20 + 2;
        param_2[0x8c] = piVar20;
        param_2[0x8d] = uVar9;
LAB_00648608:
        puVar10 = param_2 + 0x8a;
        *puVar10 = uVar9;
        *(undefined1 *)((int)param_2 + 0x23a) = 0;
        *(undefined2 *)(param_2 + 0x8e) = 0x100;
        piVar15 = (int *)piVar20[2];
        do {
          iVar8 = *piVar15;
          bVar22 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar22);
        *piVar15 = iVar8 + 1;
        if (iVar8 < 0) goto LAB_0064a7c8;
        piVar16 = piVar15 + 0x11;
        do {
          bVar22 = (bool)hasExclusiveAccess(piVar16);
        } while (!bVar22);
        *piVar16 = *piVar16 + 1;
        param_2[0x8b] = piVar15;
        FUN_01a15574(param_2 + 0x82,piVar20[3]);
        FUN_01a367d8(&local_550,*puVar10);
        *(undefined1 *)(param_2 + 0x8e) = 1;
        FUN_01a36648(param_2 + 0x86,puVar10);
        ppppppuVar18 = local_54c;
        ppppppuVar12 = local_550;
        uVar6 = (undefined1)local_548;
        if (local_550 == (undefined4 ******)0x2 && local_54c == (undefined4 ******)0x0) {
          uVar21 = (uint)local_548 & 0xff;
          local_421 = (undefined1)local_548;
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d5072c - 1 < 2 ||
               ((DAT_01d5072c != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d50724), cVar7 != '\0')))))) &&
             (iVar8 = FUN_01aaa278(DAT_01d50724), iVar8 != 0)) {
            if (*(undefined4 *******)(DAT_01d50724 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d80);
            }
            local_1b0 = *(undefined1 (*) [4])(DAT_01d50724 + 0x24);
            local_1ac = *(code **)(DAT_01d50724 + 0x28);
            local_60 = &local_7c;
            local_30 = (undefined4 *)(DAT_01d50724 + 0x1c);
            local_1b8 = (undefined4 ******)*local_30;
            local_64 = (undefined4 ******)&local_1b8;
            local_34 = (undefined4 ******)&DAT_00000001;
            local_78 = &local_70;
            local_7c = (undefined4 ******)&DAT_005991b4;
            local_38 = &local_64;
            local_70 = (undefined4 ******)&local_421;
            local_1a8 = (undefined4 *****)0x0;
            local_5c = (undefined4 *)&DAT_01d2ea4c;
            local_6c = (undefined4 ******)FUN_006446e4;
            local_1b4 = *(undefined4 *******)(DAT_01d50724 + 0x20);
            FUN_01aaaecc(DAT_01d50724,&local_38);
            iVar8 = DAT_01d50724;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_40c = *(undefined4 *******)(DAT_01d50724 + 0x14);
              local_408 = *(undefined4 **)(DAT_01d50724 + 0x18);
              local_410 = (undefined4 ******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar10 = DAT_01d4edc8;
              pcVar5 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar10 = &DAT_01cfc5e0;
                pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)puVar10[3])(pcVar5,&local_410);
              if (iVar14 != 0) {
                local_2e8 = local_410;
                local_2e4 = local_40c;
                local_2e0 = local_408;
                FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_38);
              }
            }
            bVar22 = true;
          }
          else {
            iVar8 = DAT_01d50724;
            bVar22 = true;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_41c = *(undefined4 *******)(DAT_01d50724 + 0x14);
              local_418 = *(undefined4 **)(DAT_01d50724 + 0x18);
              local_420 = (undefined4 ******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              puVar10 = DAT_01d4edc8;
              pcVar5 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar10 = &DAT_01cfc5e0;
                pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)puVar10[3])(pcVar5,&local_420);
              if (iVar14 != 0) {
                if (*(undefined4 *******)(DAT_01d50724 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d80);
                }
                local_40c = &local_70;
                local_1b0 = *(undefined1 (*) [4])(DAT_01d50724 + 0x24);
                local_1ac = *(code **)(DAT_01d50724 + 0x28);
                local_410 = (undefined4 ******)&local_1b8;
                local_64 = &local_410;
                local_1a8 = (undefined4 *****)0x0;
                bVar22 = true;
                local_6c = &local_38;
                local_60 = (undefined4 ******)&DAT_00000001;
                local_408 = (undefined4 *)&DAT_01d2ea4c;
                local_70 = (undefined4 ******)&DAT_005991b4;
                local_34 = (undefined4 ******)FUN_006446e4;
                local_38 = (undefined4 ******)&local_421;
                local_2e8 = local_420;
                local_2e4 = local_41c;
                local_2e0 = local_418;
                local_1b8 = *(undefined4 *******)(DAT_01d50724 + 0x1c);
                local_1b4 = *(undefined4 *******)(DAT_01d50724 + 0x20);
                local_5c = (undefined4 *)(DAT_01d50724 + 0x1c);
                FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_64);
              }
            }
          }
        }
        else {
          *(undefined1 *)(param_2 + 0x8e) = 0;
          FUN_01bed4e2((int)&local_408 + 1,(int)&local_548 + 1,0x11f);
          *(undefined2 *)((int)param_2 + 0x239) = 0x100;
          uVar9 = param_2[0x8a];
          local_40c = ppppppuVar18;
          local_410 = ppppppuVar12;
          local_408 = (undefined4 *)CONCAT31(local_408._1_3_,uVar6);
          puVar10 = (undefined4 *)thunk_FUN_01be5118(4);
          if (puVar10 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,4);
          }
          *puVar10 = uVar9;
          puVar11 = (undefined4 *)thunk_FUN_01be5118(0x28);
          if (puVar11 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x28);
          }
          puVar11[8] = puVar10;
          puVar11[7] = 0x3ffffffe;
          *(undefined1 *)(puVar11 + 6) = 0;
          puVar11[4] = 0;
          puVar11[5] = 0;
          *(undefined1 *)(puVar11 + 3) = 0;
          *(undefined1 *)((int)param_2 + 0x23a) = 0;
          puVar11[2] = 0x1fffffff;
          puVar11[9] = &DAT_01c02508;
          *puVar11 = 1;
          puVar11[1] = 1;
          FUN_01bed4e2(&local_1b8,&local_410,0x128);
          local_90 = puVar11;
          FUN_0195ff74(&local_2e8,param_2[0x8b],&local_1b8);
          if (local_2e8 == (undefined4 ******)0x2 && local_2e4 == (undefined4 ******)0x0) {
LAB_0064a908:
            do {
              *(undefined1 *)(param_2 + 0x81) = 0;
              param_2[0x7a] = param_2 + 0x82;
LAB_0064a808:
              uVar9 = *param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
              switch(*(undefined1 *)(param_2 + 0x81)) {
              case 0:
                param_2[0x7b] = param_2[0x7a];
                FUN_01bed93e(param_2 + 0x7c,0,0x11);
                break;
              case 1:
                    /* WARNING: Subroutine does not return */
                FUN_013079f0(&DAT_01d29fe0);
              case 2:
                    /* WARNING: Subroutine does not return */
                FUN_01307a10(&DAT_01d29fe0);
              }
              FUN_01a397c8(&local_1b8,param_2 + 0x7b,uVar9);
              if ((char)local_1b8 == '\x02') {
                *(undefined1 *)(param_2 + 0x81) = 3;
LAB_0064a924:
                *(undefined1 *)((int)param_2 + 0x23b) = 3;
                uVar6 = 5;
                goto LAB_0064a930;
              }
              FUN_009cdcac(param_2 + 0x7b);
              ppppppuVar12 = local_1b8;
              *(undefined1 *)(param_2 + 0x81) = 1;
              if ((char)local_1b8 == '\x02') goto LAB_0064a924;
              uVar21 = (uint)local_1b8 >> 8 & 0xff;
              cVar7 = local_1b8._2_1_;
              FUN_01bed4e2(&local_48,(uint)&local_1b8 | 3,0x10);
              if (*(char *)(param_2 + 0x81) == '\x03') {
                FUN_009cdcac(param_2 + 0x7b);
              }
              if (((uint)ppppppuVar12 & 1) != 0) {
                *(undefined1 *)((int)param_2 + 0x23a) = 0;
                *(undefined1 *)(param_2 + 0x8e) = 0;
                FUN_0193d87c(param_2 + 0x82);
                FUN_005f797c(param_2 + 0x8b);
                bVar22 = true;
                uVar21 = 1;
                goto LAB_00648f48;
              }
              if (cVar7 == '\x02') {
                iVar8 = thunk_FUN_01bed842(&local_48,param_2 + 0x86,0x10);
                if (iVar8 == 0) {
                  uVar21 = (uint)*(byte *)(param_2 + 0x86);
                  bVar22 = false;
                  goto LAB_00648ec0;
                }
                goto LAB_0064a908;
              }
            } while ((((uint)ppppppuVar12 & 0x10000) == 0) ||
                    (iVar8 = thunk_FUN_01bed842(&local_48,param_2 + 0x86,0x10), iVar8 != 0));
            bVar22 = true;
          }
          else {
            FUN_01bed4e2(&local_1b8,&local_2e8,0x130);
            if (((DAT_01d50f88 < 5) &&
                ((DAT_01d50720 - 1 < 2 ||
                 ((DAT_01d50720 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d50718), cVar7 != '\0')))))) &&
               (iVar8 = FUN_01aaa278(DAT_01d50718), iVar8 != 0)) {
              local_68 = (undefined4 *)(DAT_01d50718 + 0x1c);
              if (*(undefined4 *******)(DAT_01d50718 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25da4);
              }
              local_5c = *(undefined4 **)(DAT_01d50718 + 0x24);
              local_58 = *(undefined4 *)(DAT_01d50718 + 0x28);
              local_34 = &local_7c;
              local_38 = &local_64;
              local_70 = &local_38;
              local_54 = 0;
              local_6c = (undefined4 ******)&DAT_00000001;
              local_30 = (undefined4 *)&DAT_01d2ea4c;
              local_78 = (undefined4 ******)&DAT_0000002b;
              local_7c = (undefined4 ******)0x523dbf;
              local_64 = (undefined4 ******)*local_68;
              local_60 = *(undefined4 *******)(DAT_01d50718 + 0x20);
              FUN_005ed7bc(&local_70);
            }
            else {
              iVar8 = DAT_01d50718;
              if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
                local_84 = *(undefined4 *******)(DAT_01d50718 + 0x14);
                local_80 = *(undefined4 **)(DAT_01d50718 + 0x18);
                local_88 = (undefined4 ******)&DAT_00000001;
                DataMemoryBarrier(0xb);
                puVar10 = DAT_01d4edc8;
                pcVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  puVar10 = &DAT_01cfc5e0;
                  pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar14 = (*(code *)puVar10[3])(pcVar5,&local_88);
                if (iVar14 != 0) {
                  local_74 = (undefined4 *)(DAT_01d50718 + 0x1c);
                  if (*(undefined4 *******)(DAT_01d50718 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25da4);
                  }
                  local_5c = *(undefined4 **)(DAT_01d50718 + 0x24);
                  local_6c = &local_50;
                  local_58 = *(undefined4 *)(DAT_01d50718 + 0x28);
                  local_70 = &local_64;
                  local_7c = &local_70;
                  local_54 = 0;
                  local_78 = (undefined4 ******)&DAT_00000001;
                  local_68 = (undefined4 *)&DAT_01d2ea4c;
                  local_4c = 0x2b;
                  local_50 = (undefined4 *****)0x523dbf;
                  local_38 = local_88;
                  local_34 = local_84;
                  local_30 = local_80;
                  local_64 = (undefined4 ******)*local_74;
                  local_60 = *(undefined4 *******)(DAT_01d50718 + 0x20);
                  FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_38,&local_7c);
                }
              }
            }
            FUN_005f7b2c(&local_1b8);
            bVar22 = true;
            uVar21 = 1;
          }
LAB_00648ec0:
          *(undefined1 *)((int)param_2 + 0x23a) = 0;
        }
        if ((*(char *)(param_2 + 0x8e) == '\x01') &&
           (local_550 != (undefined4 ******)0x2 || local_54c != (undefined4 ******)0x0)) {
          FUN_0193c420(&local_550);
        }
        *(undefined1 *)(param_2 + 0x8e) = 0;
        FUN_0193d87c(param_2 + 0x82);
        FUN_005f797c(param_2 + 0x8b);
        if (*(char *)((int)param_2 + 0x239) != '\0') {
          piVar20 = (int *)param_2[0x8a];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar20;
            bVar3 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar3);
          *piVar20 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_0195b288(param_2[0x8a]);
          }
        }
LAB_00648f48:
        *(undefined1 *)((int)param_2 + 0x239) = 0;
        *(undefined1 *)((int)param_2 + 0x23b) = 1;
        FUN_005efecc(param_2 + 0x7a);
        if (bVar22) {
          piVar20 = (int *)param_2[0x79];
          DataMemoryBarrier(0xb);
          do {
            iVar8 = *piVar20;
            bVar22 = (bool)hasExclusiveAccess(piVar20);
          } while (!bVar22);
          *piVar20 = iVar8 + -1;
          if (iVar8 == 1) {
            DataMemoryBarrier(0xb);
            FUN_01a38f34(param_2[0x79]);
          }
          goto LAB_00648f98;
        }
        if ((DAT_01d50f88 < 3) &&
           (((DAT_01d50630 - 1 < 2 ||
             ((DAT_01d50630 != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d50628), cVar7 != '\0')))) &&
            (iVar8 = FUN_01aaa278(DAT_01d50628), iVar8 != 0)))) {
          if (*(undefined4 *******)(DAT_01d50628 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d40);
          }
          local_54c = &local_48;
          local_1b0 = *(undefined1 (*) [4])(DAT_01d50628 + 0x24);
          local_1ac = *(code **)(DAT_01d50628 + 0x28);
          local_5c = (undefined4 *)(DAT_01d50628 + 0x1c);
          local_1b8 = (undefined4 ******)*local_5c;
          local_550 = (undefined4 ******)&local_1b8;
          local_64 = &local_550;
          local_60 = (undefined4 ******)&DAT_00000001;
          local_1a8 = (undefined4 *****)0x0;
          local_548 = (undefined4 *)&DAT_01d2ea4c;
          local_44 = (undefined4 ******)&DAT_00000027;
          local_48 = (undefined4 *****)0x523dac;
          local_1b4 = *(undefined4 *******)(DAT_01d50628 + 0x20);
          FUN_01aaaecc(DAT_01d50628,&local_64);
          iVar8 = DAT_01d50628;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_40c = *(undefined4 *******)(DAT_01d50628 + 0x14);
            local_408 = *(undefined4 **)(DAT_01d50628 + 0x18);
            local_410 = (undefined4 ******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar5 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar14 = (*(code *)puVar10[3])(pcVar5,&local_410);
            if (iVar14 != 0) {
              local_2e8 = local_410;
              local_2e4 = local_40c;
              local_2e0 = local_408;
              FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_64);
            }
          }
        }
        else {
          iVar8 = DAT_01d50628;
          if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
            local_56c = *(undefined4 *******)(DAT_01d50628 + 0x14);
            local_568 = *(undefined4 **)(DAT_01d50628 + 0x18);
            local_570 = (undefined4 ******)&DAT_00000003;
            DataMemoryBarrier(0xb);
            puVar10 = DAT_01d4edc8;
            pcVar5 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar10 = &DAT_01cfc5e0;
              pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar14 = (*(code *)puVar10[3])(pcVar5,&local_570);
            if (iVar14 != 0) {
              if (*(undefined4 *******)(DAT_01d50628 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d25d40);
              }
              local_1b0 = *(undefined1 (*) [4])(DAT_01d50628 + 0x24);
              local_40c = &local_64;
              local_1ac = *(code **)(DAT_01d50628 + 0x28);
              local_410 = (undefined4 ******)&local_1b8;
              local_550 = &local_410;
              local_54c = (undefined4 ******)&DAT_00000001;
              local_60 = (undefined4 ******)&DAT_00000027;
              local_1a8 = (undefined4 *****)0x0;
              local_408 = (undefined4 *)&DAT_01d2ea4c;
              local_64 = (undefined4 ******)0x523dac;
              local_2e8 = local_570;
              local_2e4 = local_56c;
              local_2e0 = local_568;
              local_548 = (undefined4 *)(DAT_01d50628 + 0x1c);
              local_1b8 = *(undefined4 *******)(DAT_01d50628 + 0x1c);
              local_1b4 = *(undefined4 *******)(DAT_01d50628 + 0x20);
              FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_2e8,&local_550);
            }
          }
        }
        uVar21 = (uint)*(byte *)(param_2 + 0x70);
        FUN_01bed4e2(&local_560,(int)param_2 + 0x1c1,0xf);
        piVar20 = (int *)param_2[0x79];
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar20;
          bVar22 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar22);
        *piVar20 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_01a38f34(param_2[0x79]);
        }
        bVar22 = false;
        *(undefined1 *)(param_2 + 0x78) = 0;
      }
      local_78c = (undefined1 *)((int)param_2 + 0x1e1);
      local_5d0 = local_560;
      puStack_5cc = local_55c;
      uStack_5c8 = uStack_558;
      local_5c2 = local_552;
      local_5c4 = local_554;
      *local_78c = 1;
      local_5c0 = local_560;
      puStack_5bc = local_55c;
      uStack_5b8 = uStack_558;
      local_5b4 = local_554;
      local_5b2 = local_552;
      FUN_0193efb0(param_2 + 0x70);
      if (bVar22) {
        ppppppuVar12 = (undefined4 ******)FUN_0195b784(uVar21);
LAB_006498d4:
        FUN_019f8c54(param_2[0x6b],param_2[0x6c]);
        if (param_2[0x68] != -0x80000000) {
          FUN_019bb7e0(param_2[0x68],param_2[0x69]);
        }
        *(undefined1 *)((int)param_2 + 0x1b9) = 0;
        FUN_019bb7e0(param_2[0x65],param_2[0x66]);
        *(undefined1 *)((int)param_2 + 0x1ba) = 0;
        if (param_2[0x37] != -0x80000000) {
          FUN_01a2affc();
        }
        piVar20 = (int *)param_2[0x36];
        *(undefined1 *)((int)param_2 + 0x1bb) = 0;
        DataMemoryBarrier(0xb);
        do {
          iVar8 = *piVar20;
          bVar22 = (bool)hasExclusiveAccess(piVar20);
        } while (!bVar22);
        *piVar20 = iVar8 + -1;
        if (iVar8 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0195b288(param_2[0x36]);
        }
        uVar6 = 1;
        *(undefined1 *)(param_2 + 0x6f) = 0;
LAB_0064995c:
        local_5e2 = local_582;
        local_5e4 = local_584;
        local_5f0 = local_590;
        uStack_5ec = uStack_58c;
        uStack_5e8 = uStack_588;
        *(undefined1 *)(param_2 + 0x6e) = 1;
        FUN_005fc39c(param_2);
        *(undefined2 *)((int)param_2 + 0x546) = 0;
        *(undefined1 *)(param_2 + 0x152) = 0;
        goto LAB_006499a4;
      }
      *(char *)(param_2 + 0xdf) = (char)uVar21;
      FUN_01bed4e2((int)param_2 + 0x37d,&local_5c0,0xf);
      local_410 = (undefined4 ******)param_2[0xdf];
      local_40c = (undefined4 ******)param_2[0xe0];
      local_408 = (undefined4 *)param_2[0xe1];
      local_404[0] = (code *)param_2[0xe2];
      param_2[0x70] = param_2[0x6d];
      param_2[0x71] = local_410;
      param_2[0x72] = local_40c;
      param_2[0x73] = local_408;
      param_2[0x74] = local_404[0];
      *(undefined1 *)(param_2 + 0x7d) = 0;
switchD_00648380_caseD_0:
      iVar8 = param_2[0x70];
      param_2[0x75] = iVar8;
      unaff_r6 = (undefined4 *****)param_2[0x73];
      param_2[0x76] = param_2[0x71];
      param_2[0x77] = param_2[0x72];
      param_2[0x78] = unaff_r6;
      param_2[0x79] = param_2[0x74];
      param_2[0x7e] = iVar8;
      param_2[0x7f] = 0;
LAB_00649524:
      cVar7 = *(char *)(*(int *)(iVar8 + 4) + 8);
      *(undefined1 *)(param_2 + 0x7f) = 1;
      if (cVar7 == '\0') {
        unaff_r5 = (undefined4 ******)(param_2 + 0xd5);
        FUN_01a35774(unaff_r5,param_2[0x75]);
        param_2[0x7e] = unaff_r5;
        *(undefined1 *)(param_2 + 0x80) = 0;
switchD_00648380_caseD_4:
        uVar21 = FUN_005eb444(param_2 + 0x7e,param_3);
        uVar6 = 4;
        if ((uVar21 & 0xff) != 0x1c) {
          if (*(char *)(param_2 + 0x80) == '\x04') {
            FUN_005f1388(param_2 + 0x81);
          }
          if ((uVar21 & 0xff) == 0x1b) {
            FUN_005fb2fc(param_2 + 0xd5);
            goto LAB_0064953c;
          }
          FUN_005fb2fc(param_2 + 0xd5);
          bVar22 = true;
LAB_006498b4:
          *(undefined1 *)(param_2 + 0x7d) = 1;
          FUN_005f2134(param_2 + 0x70);
          if (bVar22) {
            ppppppuVar12 = (undefined4 ******)FUN_0195b784(uVar21);
            goto LAB_006498d4;
          }
          local_40 = 0;
          local_48 = unaff_r6;
          local_44 = unaff_r5;
          if (((DAT_01d50f88 < 2) &&
              ((DAT_01d4fccc - 1 < 2 ||
               ((DAT_01d4fccc != 0 && (cVar7 = FUN_01aaafa8(&DAT_01d4fcc4), cVar7 != '\0')))))) &&
             (iVar8 = FUN_01aaa278(DAT_01d4fcc4), iVar8 != 0)) {
            if (*(undefined4 *******)(DAT_01d4fcc4 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2086c);
            }
            local_2e0 = *(undefined4 **)(DAT_01d4fcc4 + 0x24);
            local_2dc = *(undefined4 *)(DAT_01d4fcc4 + 0x28);
            local_40c = &local_64;
            local_54c = (undefined4 ******)&DAT_00000001;
            local_60 = (undefined4 ******)&local_1b8;
            local_1a8 = &local_48;
            local_1b0 = (undefined1  [4])(param_2 + 0xdf);
            local_410 = &local_2e8;
            local_1b8 = (undefined4 ******)(param_2 + 0x65);
            local_550 = &local_410;
            local_2d8 = 0;
            local_408 = (undefined4 *)&DAT_01d2ea4c;
            local_64 = (undefined4 ******)&DAT_00577426;
            local_1a4 = FUN_0063308c;
            local_1ac = FUN_01ae1bc4;
            local_1b4 = (undefined4 ******)&LAB_00632348;
            local_548 = (undefined4 *)(DAT_01d4fcc4 + 0x1c);
            local_2e8 = *(undefined4 *******)(DAT_01d4fcc4 + 0x1c);
            local_2e4 = *(undefined4 *******)(DAT_01d4fcc4 + 0x20);
            FUN_00651764(&local_550);
          }
          else {
            iVar8 = DAT_01d4fcc4;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_5ac = *(undefined4 *******)(DAT_01d4fcc4 + 0x14);
              local_5a8 = *(undefined4 **)(DAT_01d4fcc4 + 0x18);
              local_5b0 = (undefined4 ******)&SUB_00000004;
              DataMemoryBarrier(0xb);
              puVar10 = DAT_01d4edc8;
              pcVar5 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar10 = &DAT_01cfc5e0;
                pcVar5 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar14 = (*(code *)puVar10[3])(pcVar5,&local_5b0);
              if (iVar14 != 0) {
                if (*(undefined4 *******)(DAT_01d4fcc4 + 0x20) == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c2086c);
                }
                local_550 = &local_2e8;
                local_2e0 = *(undefined4 **)(DAT_01d4fcc4 + 0x24);
                local_2dc = *(undefined4 *)(DAT_01d4fcc4 + 0x28);
                local_54c = &local_560;
                local_64 = &local_550;
                local_60 = (undefined4 ******)&DAT_00000001;
                local_55c = &local_1b8;
                local_2d8 = 0;
                local_548 = (undefined4 *)&DAT_01d2ea4c;
                local_560 = (undefined4 *****)&DAT_00577426;
                local_1a4 = FUN_0063308c;
                local_1a8 = &local_48;
                local_1ac = FUN_01ae1bc4;
                local_1b0 = (undefined1  [4])(param_2 + 0xdf);
                local_1b4 = (undefined4 ******)&LAB_00632348;
                local_1b8 = (undefined4 ******)(param_2 + 0x65);
                local_410 = local_5b0;
                local_40c = local_5ac;
                local_408 = local_5a8;
                local_2e8 = *(undefined4 *******)(DAT_01d4fcc4 + 0x1c);
                local_2e4 = *(undefined4 *******)(DAT_01d4fcc4 + 0x20);
                local_5c = (undefined4 *)(DAT_01d4fcc4 + 0x1c);
                FUN_01aaa328(iVar8,pcVar5,puVar10[4],&local_410,&local_64);
              }
            }
          }
          FUN_01a367d8(&local_2e8,param_2[0x36]);
          ppppppuVar18 = local_2e4;
          ppppppuVar12 = local_2e8;
          if (local_2e8 == (undefined4 ******)0x2 && local_2e4 == (undefined4 ******)0x0) {
            local_5a0 = 0;
          }
          else {
            FUN_01bed4e2(local_1b0,&local_2e0,0x120);
            local_1b4 = ppppppuVar18;
            local_1b8 = ppppppuVar12;
            if ((local_190[0] & 1) == 0) {
              local_5a0 = 0;
            }
            else {
              FUN_01a2b1e0(&local_5a0,local_190,local_188,uStack_184);
            }
            FUN_0193c420(&local_1b8);
          }
          puVar10 = param_2 + 0xdf;
          local_e4 = *puVar10;
          uStack_e0 = param_2[0xe0];
          uStack_dc = param_2[0xe1];
          uStack_d8 = param_2[0xe2];
          uVar9 = param_2[0x36];
          *(undefined2 *)((int)param_2 + 0x1bb) = 0;
          FUN_01bed4e2(local_404,param_2 + 0x37,0xb8);
          *(undefined1 *)((int)param_2 + 0x1ba) = 0;
          local_410 = (undefined4 ******)param_2[0x65];
          local_40c = (undefined4 ******)param_2[0x66];
          local_408 = (undefined4 *)param_2[0x67];
          *(undefined1 *)((int)param_2 + 0x1b9) = 0;
          local_34c = param_2[0x68];
          uStack_348 = param_2[0x69];
          uStack_344 = param_2[0x6a];
          local_cc = 0;
          local_c8 = local_5a0;
          uStack_c4 = uStack_59c;
          uStack_c0 = uStack_598;
          iVar8 = param_2[0x6d];
          local_550 = (undefined4 ******)*puVar10;
          local_54c = (undefined4 ******)param_2[0xe0];
          local_548 = (undefined4 *)param_2[0xe1];
          uStack_544 = param_2[0xe2];
          local_d4 = unaff_r6;
          local_d0 = unaff_r5;
          FUN_01bed4e2(&local_1b8,&local_410,0xd0);
          local_e8 = uVar9;
          FUN_0195f2c0(&local_2e8,iVar8 + 0x28,&local_550,&local_1b8);
          if (local_2e8 != (undefined4 ******)&DAT_80000000) {
            FUN_005f6dd8(&local_2e8);
          }
          local_582 = *(undefined1 *)((int)param_2 + 0x37e);
          local_584 = *(undefined2 *)puVar10;
          ppppppuVar12 = *(undefined4 *******)((int)param_2 + 0x37f);
          FUN_01bed4e2(&local_590,(int)param_2 + 899,9);
          FUN_019f8c54(param_2[0x6b],param_2[0x6c]);
          uVar6 = 0;
          *(undefined4 *)((int)param_2 + 0x1b9) = 0;
          goto LAB_0064995c;
        }
      }
      else {
LAB_0064953c:
        iVar8 = *(int *)(*(int *)param_2[0x75] + 0x30);
        *(undefined1 *)(param_2 + 0x89) = 0;
        param_2[0x7e] = iVar8 + 8;
switchD_00648380_caseD_5:
        FUN_006177f4(&local_550,param_2 + 0x7e,param_3);
        if (local_550 == (undefined4 ******)0x0) {
          uVar6 = 5;
        }
        else {
          param_2[0x7a] = local_550;
          param_2[0x7b] = local_54c;
          param_2[0x7c] = local_548;
          cVar7 = *(char *)(param_2 + 0x89);
          bVar22 = cVar7 == '\x03';
          if (bVar22) {
            cVar7 = *(char *)(param_2 + 0x88);
          }
          if (bVar22 && cVar7 == '\x03') {
            FUN_0193c3cc(param_2 + 0x80);
          }
          local_1b8 = (undefined4 ******)param_2[0x76];
          local_1b4 = (undefined4 ******)param_2[0x77];
          local_1b0 = (undefined1  [4])param_2[0x78];
          local_1ac = (code *)param_2[0x79];
          uVar23 = (**(code **)(((undefined4 *)param_2[0x7c])[1] + 0xc))
                             (*(undefined4 *)param_2[0x7c]);
          *(undefined8 *)(param_2 + 0x7e) = uVar23;
LAB_006495cc:
          (**(code **)((int)((ulonglong)uVar23 >> 0x20) + 0xc))(&local_1b8,(int)uVar23,param_3);
          ppppppuVar12 = local_1b4;
          unaff_r5 = local_1b8;
          if (local_1b8 != (undefined4 ******)&SUB_00000004 || local_1b4 != (undefined4 ******)0x0)
          {
            unaff_r6 = (undefined4 *****)(local_1b0 + 1);
            uVar6 = local_1b0[0];
            uVar21 = (uint)(byte)local_1b0[0];
            FUN_01bed4e2(&local_2e8,unaff_r6,0x11f);
            FUN_01139b38(param_2[0x7e],param_2[0x7f]);
            uVar13 = (uint)unaff_r5 ^ 3;
            if (uVar13 != 0 || ppppppuVar12 != (undefined4 ******)0x0) {
              if (unaff_r5 == (undefined4 ******)0x2 && ppppppuVar12 == (undefined4 ******)0x0) {
                unaff_r6 = (undefined4 *****)0x0;
              }
              else {
                local_1b0 = (undefined1  [4])CONCAT31(local_1b0._1_3_,uVar6);
                local_1b8 = unaff_r5;
                local_1b4 = ppppppuVar12;
                FUN_01bed4e2(unaff_r6,&local_2e8,0x11f);
                if (local_b0 == (undefined4 ******)0x0 && local_ac == 0) {
                  unaff_r6 = (undefined4 *****)0x0;
                  unaff_r5 = local_b0;
                }
                else {
                  uVar21 = 0x15180;
                  uVar24 = FUN_01bf0fb0(local_b0,local_ac,0x15180,0);
                  lVar4 = (uVar24 & 0xffffffff) * 0xfffeae80;
                  uVar17 = (uint)lVar4;
                  ppppppuVar18 = (undefined4 ******)(uVar17 + (int)local_b0);
                  unaff_r6 = (undefined4 *****)0x0;
                  iVar14 = (int)(uVar24 >> 0x20) * -0x15180 +
                           ((int)((ulonglong)lVar4 >> 0x20) - (int)uVar24) + local_ac +
                           (uint)CARRY4(uVar17,(uint)local_b0);
                  iVar8 = iVar14 >> 0x1f;
                  lVar4 = uVar24 + CONCAT44(iVar8,iVar8);
                  uVar17 = (uint)lVar4;
                  unaff_r5 = ppppppuVar18 + 0x5460;
                  if (-1 < iVar14) {
                    unaff_r5 = ppppppuVar18;
                  }
                  if ((int)((ulonglong)lVar4 >> 0x20) - (uint)(uVar17 < 0x7ff506c5) == -1) {
                    unaff_r6 = (undefined4 *****)FUN_01292134(uVar17 + 0xaf93b);
                  }
                }
                FUN_0193c420(&local_1b8);
              }
            }
            FUN_019f8c54(param_2[0x7a],param_2[0x7b]);
            bVar22 = uVar13 == 0 && ppppppuVar12 == (undefined4 ******)0x0;
            goto LAB_006498b4;
          }
          uVar6 = 6;
        }
      }
      *(undefined1 *)(param_2 + 0x7d) = uVar6;
      uVar6 = 5;
    }
LAB_0064a93c:
    local_780 = param_2 + 0x6e;
    *(undefined1 *)local_780 = uVar6;
    *param_1 = 2;
    uVar6 = 3;
  }
  *(undefined1 *)((int)param_2 + 0x549) = uVar6;
  return;
}


// FUN_00a91764 @ 00a91764 size=7124 calls_out=53 calls_in=2
// strings: failed to get host | failed to resolve host | /usr/bin/braa | unexpected braa output format | filled must not become larger than initialized | filled must not become larger than initialized

/* WARNING: Type propagation algorithm not settling */

void FUN_00a91764(int *param_1,int *param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  bool bVar3;
  byte bVar4;
  byte bVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int *piVar9;
  uint *puVar10;
  ushort *******pppppppuVar11;
  code *pcVar12;
  undefined1 uVar13;
  int iVar14;
  uint uVar15;
  ushort *******pppppppuVar16;
  ushort *******pppppppuVar17;
  uint uVar18;
  undefined4 *puVar19;
  char cVar20;
  undefined4 *puVar21;
  undefined4 uVar22;
  ushort *******unaff_r6;
  ushort ******ppppppuVar23;
  ushort *******pppppppuVar24;
  ushort *******pppppppuVar25;
  ushort *******unaff_r7;
  ushort *******pppppppuVar26;
  ushort *******pppppppuVar27;
  ushort *******pppppppuVar28;
  ushort *******pppppppuVar29;
  ushort ******ppppppuVar30;
  bool bVar31;
  undefined8 uVar32;
  longlong lVar33;
  uint local_7d4;
  int *local_7d0;
  int *local_7cc;
  int *local_7c8;
  int *local_7c4;
  int *local_7bc;
  ushort ******local_7b8;
  ushort local_7b0;
  ushort *******local_7ac;
  ushort *******local_7a8;
  int *local_7a4;
  ushort *******local_79c;
  ushort *******local_798;
  ushort *******pppppppuStack_794;
  ushort *******local_790;
  int *local_78c;
  ushort *******local_788;
  ushort *******local_784;
  ushort local_780;
  undefined2 uStack_77e;
  undefined2 uStack_77c;
  undefined2 uStack_77a;
  ushort *******pppppppuStack_778;
  int iStack_774;
  int local_770;
  int iStack_76c;
  int iStack_768;
  int iStack_764;
  undefined4 local_740;
  ushort *******local_73c;
  undefined2 local_738;
  ushort *******local_518;
  ushort *******local_514;
  ushort *******local_510;
  code *local_50c;
  int iStack_508;
  int local_504;
  int iStack_500;
  int iStack_4fc;
  int iStack_4f8;
  int iStack_4f4;
  int iStack_4f0;
  undefined1 auStack_4c8 [536];
  ushort *******local_2b0;
  ushort *******local_2ac;
  ushort *******local_2a8;
  undefined1 *local_2a4;
  int local_2a0;
  int iStack_29c;
  int iStack_298;
  int iStack_294;
  undefined4 local_98;
  ushort *******local_94;
  ushort *******local_90;
  ushort ******local_8c;
  ushort *******local_88;
  undefined8 local_68;
  uint local_60;
  ushort *******local_5c;
  ushort *******local_58;
  undefined1 local_50;
  undefined8 local_48;
  ushort *******local_40;
  ushort *******local_3c;
  ushort *******local_38;
  ushort *******local_34;
  ushort *******local_30;
  ushort *******local_2c [2];
  
  local_7a8 = (ushort *******)(param_2 + 0x23);
  uVar6 = (&switchD_00a91798::switchdataD_00a9179c)[*(byte *)(param_2 + 5)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_2 + 5)) {
  case 0:
    iVar14 = *param_2;
    param_2[6] = iVar14;
    param_2[3] = param_2[1];
    param_2[4] = param_2[2];
    *(undefined1 *)(param_2 + 0x13) = 0;
    if (*(char *)(iVar14 + 0x34) != '\0') {
LAB_00a917dc:
      iVar7 = *(int *)(iVar14 + 0x14);
      uVar6 = *(uint *)(iVar14 + 0x18);
      uVar15 = *(uint *)(iVar14 + 0x28);
      uVar18 = *(uint *)(iVar14 + 0x2c);
      if (uVar18 < uVar15) goto LAB_00a91bb8;
      if (uVar15 != 0) {
        if (uVar15 < uVar6) {
          if (*(char *)(iVar7 + uVar15) < -0x40) goto LAB_00a91bb8;
        }
        else if (uVar15 != uVar6) goto LAB_00a91bb8;
      }
      if (uVar18 != 0) {
        if (uVar18 < uVar6) {
          if (*(char *)(iVar7 + uVar18) < -0x40) goto LAB_00a91bb8;
        }
        else if (uVar18 != uVar6) {
LAB_00a91bb8:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac();
        }
      }
      local_2b0 = (ushort *******)(iVar7 + uVar15);
      local_2ac = (ushort *******)(uVar18 - uVar15);
      local_514 = (ushort *******)&DAT_0157d360;
      local_510 = (ushort *******)&DAT_0059a1de;
      local_50c = FUN_00fac370;
      local_518 = (ushort *******)&local_2b0;
      FUN_00600d2c(&local_780,&DAT_005988a1,&local_518);
      local_510 = pppppppuStack_778;
      param_2[7] = CONCAT22(uStack_77e,local_780);
      param_2[8] = CONCAT22(uStack_77a,uStack_77c);
      param_2[9] = (int)pppppppuStack_778;
      param_2[10] = (int)local_50c;
      param_2[0xb] = iStack_508;
      param_2[0xc] = local_504;
      param_2[0xd] = iStack_500;
      param_2[0xe] = iStack_4fc;
      param_2[0xf] = iStack_4f8;
      param_2[0x10] = iStack_4f4;
      param_2[0x11] = iStack_4f0;
      *(undefined1 *)(param_2 + 0x12) = 0;
switchD_00a919e4_caseD_0:
      iVar14 = param_2[7];
      iVar7 = param_2[8];
      FUN_0165a2a8(&local_780,iVar7,param_2[9]);
      if (iVar14 != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      local_2b0 = (ushort *******)CONCAT22(uStack_77e,local_780);
      local_2ac = (ushort *******)CONCAT22(uStack_77a,uStack_77c);
      local_2a8 = pppppppuStack_778;
      local_2a4 = (undefined1 *)iStack_774;
      local_2a0 = local_770;
      iStack_29c = iStack_76c;
      iStack_298 = iStack_768;
      iStack_294 = iStack_764;
      param_2[10] = (int)local_2b0;
      param_2[0xb] = (int)local_2ac;
      param_2[0xc] = (int)pppppppuStack_778;
      param_2[0xd] = iStack_774;
      param_2[0xe] = local_770;
      param_2[0xf] = iStack_76c;
      param_2[0x10] = iStack_768;
      param_2[0x11] = iStack_764;
      goto switchD_00a919e4_caseD_3;
    }
LAB_00a91844:
    FUN_01602d08(&local_518);
    uVar6 = FUN_00ac0334("failed to get host",0x12,&local_518);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0187b60c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0187b60c);
  case 3:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x13]) {
    case '\0':
      iVar14 = param_2[6];
      if (*(char *)(iVar14 + 0x34) == '\0') goto LAB_00a91844;
      goto LAB_00a917dc;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187b62c);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187b62c);
    }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0x12]) {
    case '\0':
      goto switchD_00a919e4_caseD_0;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187bca0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187bca0);
    }
switchD_00a919e4_caseD_3:
    pppppppuVar28 = (ushort *******)(param_2 + 0x12);
    FUN_0164e5d4(&local_98,param_2 + 10,*param_3);
    uVar6 = (uint)local_98 & 0xffff;
    if (uVar6 == 5) {
      *(undefined1 *)(param_2 + 0x13) = 3;
      *(undefined1 *)pppppppuVar28 = 3;
      *param_1 = -0x7fffffff;
      *(undefined1 *)(param_2 + 5) = 3;
      return;
    }
    if ((short)param_2[10] == 3) {
      piVar9 = (int *)param_2[0xb];
      if (*piVar9 == 0xcc) {
        DataMemoryBarrier(0xb);
        bVar31 = (bool)hasExclusiveAccess(piVar9);
        if (bVar31) {
          *piVar9 = 0x84;
          goto LAB_00a91d5c;
        }
      }
      else {
        ClearExclusiveLocal();
      }
      (**(code **)(piVar9[2] + 0x10))();
    }
LAB_00a91d5c:
    ppppppuVar23 = local_8c;
    pppppppuVar29 = local_94;
    *(undefined1 *)pppppppuVar28 = 1;
    if (uVar6 != 4) {
      if (uVar6 == 3) {
        if (local_88 != local_90) {
          pppppppuVar28 = (ushort *******)local_90[1];
          iVar14 = 3;
          ppppppuVar30 = local_90[3];
          local_88 = (ushort *******)local_90[4];
          uVar1 = *(ushort *)((int)local_90 + 10);
          pppppppuVar16 = (ushort *******)(uint)*(ushort *)(local_90 + 2);
          uVar2 = *(ushort *)((int)local_90 + 2);
          uVar6 = (uint)*(ushort *)local_90;
          goto joined_r0x00a91e1c;
        }
        iVar14 = 3;
LAB_00a92010:
        uVar6 = FUN_00ac0588("failed to resolve host",0x16);
        uVar13 = 2;
        bVar31 = true;
      }
      else {
        uVar1 = (ushort)((uint)local_90 >> 0x10);
        iVar14 = 2;
        uVar2 = local_98._2_2_;
        pppppppuVar28 = local_94;
        pppppppuVar16 = local_90;
        ppppppuVar30 = local_8c;
joined_r0x00a91e1c:
        if (uVar6 == 2) goto LAB_00a92010;
        bVar31 = (uVar6 & 1) == 0;
        uStack_77e = SUB42(pppppppuVar28,0);
        uStack_77c = (undefined2)((uint)pppppppuVar28 >> 0x10);
        if (bVar31) {
          pppppppuVar28 = (ushort *******)CONCAT22(uStack_77e,uVar2);
          uVar6 = 0;
        }
        else {
          uVar6 = (int)pppppppuVar16 << 0x10;
          local_7b8 = ppppppuVar30;
          local_7ac = local_88;
          local_7b0 = uVar1;
        }
        uVar13 = !bVar31;
        uVar6 = uVar6 | (uint)pppppppuVar28 >> 0x10;
        bVar31 = false;
        local_780 = uVar2;
      }
      if ((iVar14 == 3) && (ppppppuVar23 != (ushort ******)0x0)) {
        thunk_FUN_016d3fb4(pppppppuVar29);
      }
      *(undefined1 *)(param_2 + 0x13) = 1;
      if (bVar31) {
        iVar14 = -0x80000000;
        goto LAB_00a92d58;
      }
      local_50c = (code *)&DAT_0157d360;
      *(ushort ********)((int)param_2 + 0x25) = local_7ac;
      *(ushort *******)((int)param_2 + 0x21) = local_7b8;
      *(undefined1 *)(param_2 + 6) = uVar13;
      local_510 = (ushort *******)(param_2 + 3);
      *(ushort *)((int)param_2 + 0x1f) = local_7b0;
      *(uint *)((int)param_2 + 0x1b) = uVar6;
      *(short *)((int)param_2 + 0x19) = (short)pppppppuVar28;
      local_514 = (ushort *******)&LAB_00fb9bd8;
      local_518 = (ushort *******)(param_2 + 6);
      FUN_00600d2c(&local_780,&DAT_00579f06,&local_518);
      piVar9 = param_2 + 0xa8;
      param_2[0xb] = CONCAT22(uStack_77e,local_780);
      param_2[0xc] = CONCAT22(uStack_77a,uStack_77c);
      param_2[0xd] = (int)pppppppuStack_778;
      FUN_015f7334(piVar9,"/usr/bin/braa",0xd);
      *(undefined1 *)(param_2 + 199) = 0;
      FUN_015f71d4(piVar9,param_2[0xc],param_2[0xd]);
      FUN_01641e84(&local_2b0,piVar9);
      FUN_0165a798(&local_98);
      uVar6 = (int)local_98 + 1;
      unaff_r7 = (ushort *******)((int)local_94 + (uint)((ushort *******)0xfffffffe < local_98));
      pppppppuVar28 = (ushort *******)&DAT_0157d360;
      if ((int)(((uint)local_94 ^ (uint)unaff_r7) & ~(uint)local_94) < 0) {
LAB_00a92190:
        unaff_r7 = pppppppuVar28;
        FUN_01656dc8(&local_98);
        local_68 = CONCAT44(local_68._4_4_,(undefined4)local_68);
      }
      else {
        if (&DAT_3b9aca00 <= local_90) {
          bVar31 = 0xfffffffe < uVar6;
          uVar6 = (int)local_98 + 2;
          pppppppuVar28 = (ushort *******)((int)unaff_r7 + (uint)bVar31);
          if (-1 < (int)(((uint)unaff_r7 ^ (uint)pppppppuVar28) & ~(uint)unaff_r7)) {
            pppppppuVar29 = local_90 + -250000000;
            unaff_r7 = pppppppuVar28;
            if (local_90 + -250000000 != (ushort *******)&DAT_3b9aca00) goto LAB_00a921a0;
          }
          goto LAB_00a92190;
        }
        pppppppuVar29 = local_90;
LAB_00a921a0:
        local_48 = FUN_0164ec90(&DAT_0187b61c);
        iVar14 = 0x180;
        if ((local_48 & 1) != 0) {
          iVar14 = 0xb8;
        }
        if (*(undefined1 **)((int)(local_48 >> 0x20) + iVar14 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                       ,0x73,&DAT_0187b61c);
        }
        local_94 = (ushort *******)0x0;
        local_98 = (ushort *******)0x0;
        local_50 = 0;
        local_60 = uVar6;
        local_5c = unaff_r7;
        local_58 = pppppppuVar29;
        local_68 = local_48;
      }
      FUN_016dd1aa(auStack_4c8,&local_2b0,0x218);
      FUN_016dd1aa(&local_518,&local_98,0x50);
      unaff_r6 = (ushort *******)&local_780;
      FUN_016dd1aa(unaff_r6,&local_518,0x268);
      uVar6 = FUN_016dd1aa(param_2 + 0xe,unaff_r6,0x268);
      goto LAB_00a91868;
    }
    uVar6 = FUN_00a93e74(local_94);
    break;
  case 4:
LAB_00a91868:
    uVar32 = thunk_FUN_016de0ee(uVar6,0x40);
    pppppppuVar28 = (ushort *******)((int)uVar32 + (int)((ulonglong)uVar32 >> 0x20));
    bVar5 = *(byte *)(pppppppuVar28 + 0xe);
    if (bVar5 == 1) {
LAB_00a918b0:
      bVar5 = 1;
      bVar4 = ~*(byte *)(pppppppuVar28 + 0xc) & 1 | *(char *)((int)pppppppuVar28 + 0x31) != '\0';
    }
    else {
      bVar4 = bVar5;
      if (bVar5 != 2) {
        FUN_015e8e6c(pppppppuVar28,FUN_00a303f4);
        *(undefined1 *)(pppppppuVar28 + 0xe) = 1;
        goto LAB_00a918b0;
      }
    }
    local_7a4 = param_3;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch((char)param_2[0xa7]) {
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0187c394);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0187c394);
    case '\x03':
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xa5]) {
      case '\0':
        goto switchD_00a9194c_caseD_0;
      case '\x01':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_0187c384);
      case '\x02':
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(&DAT_0187c384);
      }
      if (param_2[0x8a] != 1) {
        if (param_2[0x8a] == 2) goto LAB_00a93340;
        goto LAB_00a91af8;
      }
      if ((char)param_2[0x8b] != '\x04') goto LAB_00a91990;
LAB_00a91f8c:
      bVar31 = true;
LAB_00a92260:
      local_7bc = param_2 + 0x8f;
      local_7c4 = param_2 + 0x8a;
      local_7cc = param_2 + 0x9a;
      if (*local_7bc == 0) {
        puVar8 = &DAT_0187b508;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)param_2[0x99]) {
        case '\0':
          pppppppuVar29 = (ushort *******)0x0;
          param_2[0x91] = 0;
          ppppppuVar23 = (ushort ******)param_2[0x90];
          param_2[0x92] = 1;
          param_2[0x93] = 0;
          if (*ppppppuVar23 != (ushort *****)0x2) {
            param_2[0x94] = (int)ppppppuVar23;
            param_2[0x95] = (int)(param_2 + 0x91);
            param_2[0x96] = 0;
            param_2[0x97] = 0;
            param_2[0x98] = 0;
            local_7b8 = ppppppuVar23;
            goto LAB_00a92314;
          }
          unaff_r6 = (ushort *******)param_2[0x92];
          pppppppuVar28 = (ushort *******)param_2[0x93];
          break;
        case '\x01':
          goto switchD_00a91b10_caseD_1;
        case '\x02':
          goto switchD_00a91b10_caseD_2;
        case '\x03':
          pppppppuVar29 = (ushort *******)param_2[0x98];
          local_7b8 = (ushort ******)param_2[0x94];
LAB_00a92314:
          do {
            puVar10 = (uint *)param_2[0x95];
            uVar6 = puVar10[2];
            uVar15 = *puVar10 - uVar6;
            if (((uVar15 < 0x20) && (param_2[0x97] == *puVar10)) && (0x1f < (uint)param_2[0x97])) {
              local_8c = (ushort ******)0x0;
              local_90 = (ushort *******)0x0;
              local_94 = (ushort *******)&DAT_00000020;
              local_98 = (ushort *******)&local_518;
              FUN_01646538(&local_2b0,local_7b8,param_3,&local_98);
              pppppppuVar16 = local_90;
              pppppppuVar27 = local_98;
              pppppppuVar28 = local_2ac;
              pppppppuVar17 = local_2b0;
              local_34 = local_2ac;
              local_38 = local_2b0;
              if (local_94 < local_90) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,local_90,local_94,&DAT_018acc90);
              }
              puVar19 = (undefined4 *)param_2[0x95];
              pppppppuVar24 = (ushort *******)param_2[0x96];
              pppppppuVar11 = (ushort *******)puVar19[2];
              if (pppppppuVar24 < pppppppuVar11) {
LAB_00a93180:
                    /* WARNING: Subroutine does not return */
                FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
              }
              local_48._4_4_ = (ushort *******)*puVar19;
              local_48._0_4_ = (ushort *******)puVar19[1];
              local_2c[0] = (ushort *******)((int)local_48._4_4_ - (int)pppppppuVar11);
              local_40 = pppppppuVar11;
              local_3c = pppppppuVar24;
              if (local_2c[0] < local_90) {
                if (local_2c[0] < &DAT_00000020) {
                  param_2[0x96] = (int)pppppppuVar11;
                  FUN_00a8a86c(puVar19,pppppppuVar11,0x20,1,1);
                  puVar19 = (undefined4 *)param_2[0x95];
                  pppppppuVar24 = (ushort *******)param_2[0x96];
                }
                pppppppuVar11 = (ushort *******)puVar19[2];
                if (pppppppuVar24 < pppppppuVar11) goto LAB_00a93180;
                local_48._4_4_ = (ushort *******)*puVar19;
                local_48._0_4_ = (ushort *******)puVar19[1];
                local_2c[0] = (ushort *******)((int)local_48._4_4_ - (int)pppppppuVar11);
                local_40 = pppppppuVar11;
                local_3c = pppppppuVar24;
              }
              pppppppuVar25 = local_3c;
              pppppppuVar24 = local_48._4_4_;
              pppppppuVar11 = (ushort *******)local_48;
              if (local_2c[0] < pppppppuVar16) {
                local_2a8 = (ushort *******)local_2c;
                local_2a4 = &LAB_00fac484;
                local_2ac = (ushort *******)&LAB_00fac484;
                local_2b0 = (ushort *******)&local_30;
                local_30 = pppppppuVar16;
                    /* WARNING: Subroutine does not return */
                FUN_00faa478(&DAT_0058c77e,&local_2b0,&DAT_0187c654);
              }
              pppppppuVar26 = (ushort *******)((int)local_40 + (int)pppppppuVar16);
              if ((CARRY4((uint)local_40,(uint)pppppppuVar16)) || (local_48._4_4_ < pppppppuVar26))
              {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(local_40,pppppppuVar26,local_48._4_4_,&DAT_0187c654);
              }
              FUN_016dd1aa((int)(ushort *******)local_48 + (int)local_40,pppppppuVar27,pppppppuVar16
                          );
              local_40 = pppppppuVar26;
              if (pppppppuVar25 < pppppppuVar26) {
                pppppppuVar25 = pppppppuVar26;
                local_3c = pppppppuVar26;
              }
            }
            else {
              if (uVar15 < 0x20) {
                param_2[0x96] = uVar6;
                FUN_00a8a86c(puVar10,uVar6,0x20,1,1);
                puVar10 = (uint *)param_2[0x95];
              }
              local_3c = (ushort *******)param_2[0x96];
              local_48._4_4_ = (ushort *******)*puVar10;
              local_48._0_4_ = (ushort *******)puVar10[1];
              pppppppuVar16 = (ushort *******)puVar10[2];
              if (local_3c < pppppppuVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
              }
              local_40 = pppppppuVar16;
              if (local_48._4_4_ < pppppppuVar16) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,pppppppuVar16,local_48._4_4_,&DAT_018acc90);
              }
              FUN_01646538(&local_518,local_7b8,param_3,&local_48);
              local_34 = local_514;
              local_38 = local_518;
              if (local_48._4_4_ < local_40) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa36c(0,local_40,local_48._4_4_,&DAT_018acc90);
              }
              pppppppuVar16 = (ushort *******)((int)local_40 - (int)pppppppuVar16);
              pppppppuVar24 = local_48._4_4_;
              pppppppuVar25 = local_3c;
              pppppppuVar28 = local_514;
              pppppppuVar11 = (ushort *******)local_48;
              pppppppuVar17 = local_518;
            }
            unaff_r7 = local_40;
            local_7ac = (ushort *******)((uint)pppppppuVar17 & 0xff);
            if (pppppppuVar24 < local_40) {
              puVar8 = &DAT_018acc90;
              pppppppuVar25 = local_40;
LAB_00a93094:
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,pppppppuVar25,pppppppuVar24,puVar8);
            }
            if (pppppppuVar24 < pppppppuVar25) {
              puVar8 = &DAT_018acc80;
              goto LAB_00a93094;
            }
            local_2b0 = *(ushort ********)(param_2[0x95] + 4);
            local_518 = pppppppuVar11;
            local_514 = local_40;
            local_510 = pppppppuVar25;
            if (local_2b0 != pppppppuVar11) {
              FUN_01446ae8(&local_2b0,&local_518,&DAT_0187d100);
              goto LAB_00a9347c;
            }
            *(ushort ********)(param_2[0x95] + 8) = local_40;
            param_2[0x96] = (int)pppppppuVar25;
            if (local_7ac != (ushort *******)0x4) {
              if (local_7ac != (ushort *******)0x5) {
                local_7d4 = (uint)pppppppuVar17 >> 8;
                uVar6 = (uint)pppppppuVar17 & 0xff;
                if (uVar6 == 4) {
                  pppppppuVar16 = pppppppuVar28;
                  goto LAB_00a92570;
                }
                if (uVar6 != 5) goto LAB_00a925bc;
              }
              *(undefined1 *)(param_2 + 0x99) = 3;
              bVar3 = false;
              unaff_r6 = pppppppuVar25;
              goto LAB_00a9265c;
            }
LAB_00a92570:
            if (pppppppuVar16 == (ushort *******)0x0) goto LAB_00a925a8;
            pppppppuVar29 = (ushort *******)((int)pppppppuVar16 + (int)pppppppuVar29);
            param_2[0x98] = (int)pppppppuVar29;
          } while( true );
        }
        goto LAB_00a92604;
      }
      if (*local_7bc != 1) goto LAB_00a93340;
      bVar3 = bVar31;
      if (param_2[0x90] != -0x80000000) goto LAB_00a9265c;
      goto LAB_00a92634;
    }
    unaff_r6 = (ushort *******)*local_7a8;
    unaff_r7 = (ushort *******)param_2[0x24];
    if (param_2[0x22] != 3) {
      param_2[0x3a] = param_2[0x22];
      param_2[0x3b] = (int)unaff_r6;
      param_2[0x3c] = (int)unaff_r7;
      FUN_016dd1aa(param_2 + 0x3d,param_2 + 0x25,0x54);
      FUN_016dd1aa(param_2 + 0x52,param_2 + 0x3a,0x60);
      *(undefined1 *)(param_2 + 0xa5) = 0;
switchD_00a9194c_caseD_0:
      local_7c8 = param_2 + 0x52;
      FUN_016dd1aa(param_2 + 0x6a,local_7c8,0x60);
      param_2[0x89] = param_2[0x5d];
      param_2[0x85] = param_2[0x59];
      param_2[0x9a] = 0;
      param_2[0x83] = param_2[0x57];
      param_2[0x84] = param_2[0x58];
      param_2[0x88] = param_2[0x5c];
      param_2[0x6e] = 2;
      param_2[0x72] = 2;
      param_2[0x86] = param_2[0x5a];
      param_2[0x82] = param_2[0x56];
      param_2[0x8f] = 0;
      *(undefined1 *)(param_2 + 0xa6) = 1;
      param_2[0x87] = param_2[0x5b];
      *(undefined1 *)((int)param_2 + 0x297) = 1;
      *(undefined2 *)((int)param_2 + 0x295) = 0;
      param_2[0x8b] = (int)(param_2 + 0x6a);
      param_2[0x90] = (int)(param_2 + 0x82);
      param_2[0x9b] = (int)(param_2 + 0x86);
      *(undefined1 *)(param_2 + 0xa4) = 0;
      *(undefined1 *)(param_2 + 0x99) = 0;
      *(undefined1 *)(param_2 + 0x8e) = 0;
      param_2[0x8a] = 0;
LAB_00a91af8:
      local_7c4 = param_2 + 0x8a;
      puVar8 = &DAT_0187b518;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0x8e]) {
      case '\0':
        puVar19 = (undefined4 *)param_2[0x8b];
        param_2[0x8c] = (int)puVar19;
        local_518 = (ushort *******)*puVar19;
        local_514 = (ushort *******)puVar19[1];
        local_510 = (ushort *******)puVar19[2];
        local_50c = (code *)puVar19[3];
        *puVar19 = 2;
        if (local_518 != (ushort *******)&SUB_00000002) {
          FUN_00a86e98(&local_518);
          if (local_50c != (code *)0xffffffff) {
            FUN_016dffb2();
          }
          FUN_00a414e8(&local_518);
        }
        unaff_r6 = (ushort *******)(param_2[0x8c] + 0x30);
        if (*unaff_r6 != (ushort ******)0x4) {
          bVar5 = *(byte *)(pppppppuVar28 + 0xe);
          param_2[0x8d] = (int)unaff_r6;
          goto joined_r0x00a91b8c;
        }
        pppppppuVar29 = *(ushort ********)(param_2[0x8c] + 0x34);
LAB_00a91f00:
        uVar6 = 4;
        *(undefined1 *)(param_2 + 0x8e) = 1;
        unaff_r7 = pppppppuVar29;
LAB_00a91f0c:
        unaff_r6 = (ushort *******)(uVar6 | (int)unaff_r6 << 8);
        if (((*local_7c4 == 1) && (cVar20 = (char)param_2[0x8b], cVar20 != '\x04')) &&
           (cVar20 == '\x03')) {
          puVar19 = (undefined4 *)param_2[0x8c];
          pppppppuVar28 = (ushort *******)*puVar19;
          puVar21 = (undefined4 *)puVar19[1];
          pcVar12 = (code *)*puVar21;
          if (pcVar12 != (code *)0x0) {
            (*pcVar12)(pppppppuVar28);
          }
          if (puVar21[1] != 0) {
            thunk_FUN_016d3fb4(pppppppuVar28);
          }
          thunk_FUN_016d3fb4(puVar19);
        }
        param_2[0x8b] = (int)unaff_r6;
        param_2[0x8c] = (int)unaff_r7;
        *local_7c4 = 1;
        if (uVar6 == 4) goto LAB_00a91f8c;
LAB_00a91990:
        unaff_r6 = (ushort *******)param_2[0x8b];
        unaff_r7 = (ushort *******)param_2[0x8c];
        param_2[0x8a] = 2;
        pppppppuVar29 = local_518;
        pppppppuVar17 = local_514;
        if (4 < ((uint)unaff_r6 & 0xff)) goto LAB_00a9337c;
        if (((uint)unaff_r6 & 0xff) == 4) {
          puVar8 = &DAT_0187c220;
          goto LAB_00a919bc;
        }
        break;
      case '\x01':
        goto switchD_00a91b10_caseD_1;
      case '\x02':
        goto switchD_00a91b10_caseD_2;
      case '\x03':
        unaff_r6 = (ushort *******)param_2[0x8d];
joined_r0x00a91b8c:
        if (bVar5 == 1) {
LAB_00a91e64:
          bVar5 = *(byte *)((int)pppppppuVar28 + 0x31);
          unaff_r7 = (ushort *******)(uint)bVar5;
          cVar20 = *(char *)(pppppppuVar28 + 0xc);
          if (cVar20 != '\x01') {
LAB_00a91e84:
            *(byte *)((int)pppppppuVar28 + 0x31) = bVar5;
            goto LAB_00a91e88;
          }
          if (unaff_r7 != (ushort *******)0x0) {
            bVar5 = bVar5 - 1;
            goto LAB_00a91e84;
          }
          FUN_016455a4(*(undefined4 *)*param_3,((undefined4 *)*param_3)[1]);
LAB_00a92250:
          *(undefined1 *)(param_2 + 0x8e) = 3;
        }
        else {
          cVar20 = '\0';
          unaff_r7 = (ushort *******)0x0;
          if (bVar5 != 2) {
            FUN_015e8e6c(pppppppuVar28,FUN_00a303f4);
            *(undefined1 *)(pppppppuVar28 + 0xe) = 1;
            goto LAB_00a91e64;
          }
LAB_00a91e88:
          FUN_01645de0(&local_518,unaff_r6,param_3);
          pppppppuVar29 = local_514;
          if (((uint)local_518 & 0xff) == 5) {
            if (cVar20 != '\0') {
              if (*(char *)(pppppppuVar28 + 0xe) != '\x01') {
                if (*(char *)(pppppppuVar28 + 0xe) == '\x02') goto LAB_00a92250;
                FUN_015e8e6c(pppppppuVar28,FUN_01655ec4);
                *(undefined1 *)(pppppppuVar28 + 0xe) = 1;
              }
              *(char *)((int)pppppppuVar28 + 0x31) = (char)unaff_r7;
              *(undefined1 *)(pppppppuVar28 + 0xc) = 1;
            }
            goto LAB_00a92250;
          }
          if (((uint)local_518 & 0xff) == 4) {
            *(undefined1 *)(unaff_r6 + 0xb) = 0;
          }
          unaff_r6 = (ushort *******)((uint)local_518 >> 8 | (int)local_514 << 0x18);
          uVar6 = (uint)local_518 & 0xff;
          if (uVar6 == 4) {
            iVar14 = param_2[0x8c];
            piVar9 = (int *)(iVar14 + 0x30);
            if (*piVar9 != 4) {
              FUN_00a7a2c8(piVar9);
              FUN_00a415f0(piVar9);
              iVar14 = param_2[0x8c];
            }
            *(undefined4 *)(iVar14 + 0x30) = 4;
            *(ushort ********)(iVar14 + 0x34) = pppppppuVar29;
            goto LAB_00a91f00;
          }
          *(undefined1 *)(param_2 + 0x8e) = 1;
          unaff_r7 = local_514;
          if (uVar6 != 5) goto LAB_00a91f0c;
        }
        bVar31 = false;
        goto LAB_00a92260;
      }
      goto LAB_00a926a4;
    }
    param_2[0x3b] = (int)unaff_r6;
    param_2[0x3c] = (int)unaff_r7;
    param_2[0x3a] = 3;
    pppppppuVar29 = (ushort *******)&DAT_80000000;
    pppppppuVar16 = local_7a8;
    goto LAB_00a92ce8;
  }
  *(undefined1 *)(param_2 + 0x13) = 1;
  iVar14 = -0x80000000;
  goto LAB_00a92d58;
LAB_00a925a8:
  param_2[0x98] = 0;
  uVar6 = 4;
  pppppppuVar28 = pppppppuVar29;
LAB_00a925bc:
  pppppppuVar29 = (ushort *******)param_2[0x91];
  if (uVar6 == 4) {
    unaff_r6 = (ushort *******)param_2[0x92];
    pppppppuVar28 = (ushort *******)param_2[0x93];
    *(undefined1 *)(param_2 + 0x99) = 1;
    bVar3 = false;
    if (pppppppuVar29 != (ushort *******)0x80000001) goto LAB_00a9260c;
LAB_00a9265c:
    if (*local_7cc == 0) {
      puVar8 = &DAT_0187b508;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
      switch((char)param_2[0xa4]) {
      case '\x01':
switchD_00a91b10_caseD_1:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0();
      case '\x02':
switchD_00a91b10_caseD_2:
                    /* WARNING: Subroutine does not return */
        FUN_00fb7cc0(puVar8);
      case '\x03':
        piVar9 = (int *)param_2[0x9f];
        pppppppuVar28 = (ushort *******)param_2[0xa3];
LAB_00a927a0:
        do {
          puVar10 = (uint *)param_2[0xa0];
          uVar6 = puVar10[2];
          uVar15 = *puVar10 - uVar6;
          if (((uVar15 < 0x20) && (param_2[0xa2] == *puVar10)) && (0x1f < (uint)param_2[0xa2])) {
            local_8c = (ushort ******)0x0;
            local_90 = (ushort *******)0x0;
            local_94 = (ushort *******)&DAT_00000020;
            local_98 = (ushort *******)&local_518;
            FUN_01646538(&local_2b0,piVar9,param_3,&local_98);
            pppppppuVar29 = local_90;
            pppppppuVar25 = local_98;
            pppppppuVar16 = local_2ac;
            unaff_r6 = local_2b0;
            local_7ac = (ushort *******)((uint)local_2b0 & 0xff);
            local_34 = local_2ac;
            local_38 = local_2b0;
            if (local_94 < local_90) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,local_90,local_94,&DAT_018acc90);
            }
            puVar19 = (undefined4 *)param_2[0xa0];
            pppppppuVar11 = (ushort *******)param_2[0xa1];
            pppppppuVar17 = (ushort *******)puVar19[2];
            if (pppppppuVar11 < pppppppuVar17) {
LAB_00a932ac:
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
            }
            local_48._4_4_ = (ushort *******)*puVar19;
            local_48._0_4_ = (ushort *******)puVar19[1];
            local_2c[0] = (ushort *******)((int)local_48._4_4_ - (int)pppppppuVar17);
            local_40 = pppppppuVar17;
            local_3c = pppppppuVar11;
            if (local_2c[0] < local_90) {
              if (local_2c[0] <= &DAT_0000001f) {
                param_2[0xa1] = (int)pppppppuVar17;
                FUN_00a8a86c(puVar19,pppppppuVar17,0x20,1,1);
                puVar19 = (undefined4 *)param_2[0xa0];
                pppppppuVar11 = (ushort *******)param_2[0xa1];
              }
              pppppppuVar17 = (ushort *******)puVar19[2];
              if (pppppppuVar11 < pppppppuVar17) goto LAB_00a932ac;
              local_48._4_4_ = (ushort *******)*puVar19;
              local_48._0_4_ = (ushort *******)puVar19[1];
              local_2c[0] = (ushort *******)((int)local_48._4_4_ - (int)pppppppuVar17);
              local_40 = pppppppuVar17;
              local_3c = pppppppuVar11;
            }
            pppppppuVar24 = local_3c;
            pppppppuVar11 = local_48._4_4_;
            pppppppuVar17 = (ushort *******)local_48;
            if (local_2c[0] < pppppppuVar29) {
              local_2a8 = (ushort *******)local_2c;
              local_2a4 = &LAB_00fac484;
              local_2ac = (ushort *******)&LAB_00fac484;
              local_2b0 = (ushort *******)&local_30;
              local_30 = pppppppuVar29;
                    /* WARNING: Subroutine does not return */
              FUN_00faa478(&DAT_0058c77e,&local_2b0,&DAT_0187c654);
            }
            pppppppuVar27 = (ushort *******)((int)local_40 + (int)pppppppuVar29);
            if ((CARRY4((uint)local_40,(uint)pppppppuVar29)) || (local_48._4_4_ < pppppppuVar27)) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(local_40,pppppppuVar27,local_48._4_4_,&DAT_0187c654);
            }
            FUN_016dd1aa((int)(ushort *******)local_48 + (int)local_40,pppppppuVar25,pppppppuVar29);
            local_40 = pppppppuVar27;
            if (pppppppuVar24 < pppppppuVar27) {
              pppppppuVar24 = pppppppuVar27;
              local_3c = pppppppuVar27;
            }
          }
          else {
            if (uVar15 < 0x20) {
              param_2[0xa1] = uVar6;
              FUN_00a8a86c(puVar10,uVar6,0x20,1,1);
              puVar10 = (uint *)param_2[0xa0];
            }
            local_3c = (ushort *******)param_2[0xa1];
            local_48._4_4_ = (ushort *******)*puVar10;
            local_48._0_4_ = (ushort *******)puVar10[1];
            pppppppuVar29 = (ushort *******)puVar10[2];
            if (local_3c < pppppppuVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa478("filled must not become larger than initialized",0x5d,&DAT_0187d0f0);
            }
            local_40 = pppppppuVar29;
            if (local_48._4_4_ < pppppppuVar29) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,pppppppuVar29,local_48._4_4_,&DAT_018acc90);
            }
            FUN_01646538(&local_518,piVar9,param_3,&local_48);
            local_7ac = (ushort *******)((uint)local_518 & 0xff);
            local_34 = local_514;
            local_38 = local_518;
            if (local_48._4_4_ < local_40) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa36c(0,local_40,local_48._4_4_,&DAT_018acc90);
            }
            pppppppuVar29 = (ushort *******)((int)local_40 - (int)pppppppuVar29);
            pppppppuVar24 = local_3c;
            unaff_r6 = local_518;
            pppppppuVar16 = local_514;
            pppppppuVar11 = local_48._4_4_;
            pppppppuVar17 = (ushort *******)local_48;
          }
          unaff_r7 = local_40;
          if (pppppppuVar11 < local_40) {
            puVar8 = &DAT_018acc90;
            pppppppuVar24 = local_40;
LAB_00a930c8:
                    /* WARNING: Subroutine does not return */
            FUN_00faa36c(0,pppppppuVar24,pppppppuVar11,puVar8);
          }
          if (pppppppuVar11 < pppppppuVar24) {
            puVar8 = &DAT_018acc80;
            goto LAB_00a930c8;
          }
          local_2b0 = *(ushort ********)(param_2[0xa0] + 4);
          local_518 = pppppppuVar17;
          local_514 = local_40;
          local_510 = pppppppuVar24;
          if (local_2b0 != pppppppuVar17) {
            FUN_01446ae8(&local_2b0,&local_518,&DAT_0187d100);
LAB_00a9347c:
                    /* WARNING: Does not return */
            pcVar12 = (code *)software_udf(0xfdee,0xa9347c);
            (*pcVar12)();
          }
          *(ushort ********)(param_2[0xa0] + 8) = local_40;
          param_2[0xa1] = (int)pppppppuVar24;
          if (local_7ac != (ushort *******)0x4) {
            if (local_7ac != (ushort *******)0x5) {
              local_7b8 = (ushort ******)((uint)unaff_r6 >> 8);
              uVar6 = (uint)unaff_r6 & 0xff;
              if (uVar6 == 4) {
                pppppppuVar29 = pppppppuVar16;
                goto LAB_00a92a08;
              }
              if (uVar6 != 5) goto LAB_00a92a58;
            }
            *(undefined1 *)(param_2 + 0xa4) = 3;
            goto LAB_00a92e0c;
          }
LAB_00a92a08:
          if (pppppppuVar29 == (ushort *******)0x0) goto LAB_00a92a34;
          pppppppuVar28 = (ushort *******)((int)pppppppuVar29 + (int)pppppppuVar28);
          param_2[0xa3] = (int)pppppppuVar28;
        } while( true );
      }
      pppppppuVar28 = (ushort *******)0x0;
      param_2[0x9c] = 0;
      piVar9 = (int *)param_2[0x9b];
      param_2[0x9d] = 1;
      param_2[0x9e] = 0;
      if (*piVar9 != 2) {
        param_2[0x9f] = (int)piVar9;
        param_2[0xa0] = (int)(param_2 + 0x9c);
        param_2[0xa1] = 0;
        param_2[0xa2] = 0;
        param_2[0xa3] = 0;
        goto LAB_00a927a0;
      }
      uVar6 = param_2[0x9d];
      unaff_r6 = (ushort *******)param_2[0x9e];
      goto LAB_00a92ab0;
    }
    if (*local_7cc != 1) {
LAB_00a93340:
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0035b674,0x45,&DAT_0187b564);
    }
    pppppppuVar28 = (ushort *******)param_2[0x9b];
    if (pppppppuVar28 != (ushort *******)&DAT_80000000) goto LAB_00a92ae0;
LAB_00a92688:
    unaff_r6 = (ushort *******)param_2[0x9c];
    unaff_r7 = (ushort *******)param_2[0x9d];
    param_2[0x9a] = 2;
    if (((uint)unaff_r6 & 0xff) == 4) {
      puVar8 = &DAT_0187c280;
LAB_00a919bc:
                    /* WARNING: Subroutine does not return */
      FUN_00faa444(puVar8);
    }
  }
  else {
    unaff_r6 = (ushort *******)(uVar6 | local_7d4 << 8);
    if (pppppppuVar29 != (ushort *******)0x0) {
      thunk_FUN_016d3fb4(param_2[0x92]);
    }
    pppppppuVar29 = (ushort *******)&DAT_80000000;
LAB_00a92604:
    *(undefined1 *)(param_2 + 0x99) = 1;
LAB_00a9260c:
    FUN_00a41410(local_7bc);
    param_2[0x90] = (int)pppppppuVar29;
    param_2[0x8f] = 1;
    param_2[0x91] = (int)unaff_r6;
    param_2[0x92] = (int)pppppppuVar28;
    bVar3 = bVar31;
    if (pppppppuVar29 != (ushort *******)&DAT_80000000) goto LAB_00a9265c;
LAB_00a92634:
    unaff_r6 = (ushort *******)param_2[0x91];
    unaff_r7 = (ushort *******)param_2[0x92];
    param_2[0x8f] = 2;
    if (((uint)unaff_r6 & 0xff) == 4) {
      puVar8 = &DAT_0187c230;
      goto LAB_00a919bc;
    }
  }
LAB_00a926a4:
  local_7c4 = param_2 + 0x8a;
  pppppppuVar29 = (ushort *******)&DAT_80000000;
  iVar14 = *local_7c4;
  pppppppuVar16 = local_7a8;
joined_r0x00a92b94:
  if (((iVar14 == 1) && ((char)param_2[0x8b] != '\x04')) && ((char)param_2[0x8b] == '\x03')) {
    puVar19 = (undefined4 *)param_2[0x8c];
    puVar21 = (undefined4 *)puVar19[1];
    uVar22 = *puVar19;
    pcVar12 = (code *)*puVar21;
    if (pcVar12 != (code *)0x0) {
      (*pcVar12)(uVar22);
    }
    if (puVar21[1] != 0) {
      thunk_FUN_016d3fb4(uVar22);
    }
    thunk_FUN_016d3fb4(puVar19);
  }
  local_7bc = param_2 + 0x8f;
  local_7c8 = param_2 + 0x52;
  local_7cc = param_2 + 0x9a;
  local_7d0 = param_2 + 0xa5;
  FUN_00a41410(local_7bc);
  FUN_00a41410(local_7cc);
  if (pppppppuVar29 == (ushort *******)&DAT_80000000) {
    piVar9 = param_2 + 0x86;
    *(undefined2 *)((int)param_2 + 0x295) = 0;
    if (*piVar9 != 2) {
      FUN_00a86e98(piVar9);
      if (param_2[0x89] != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar9);
    }
    piVar9 = param_2 + 0x82;
    *(undefined1 *)((int)param_2 + 0x297) = 0;
    if (*piVar9 != 2) {
      FUN_00a86e98(piVar9);
      if (param_2[0x85] != -1) {
        FUN_016dffb2();
      }
      FUN_00a414e8(piVar9);
    }
    *(undefined1 *)(param_2 + 0xa6) = 0;
    FUN_00d97900(param_2 + 0x6a);
  }
  else {
    *(undefined1 *)(param_2 + 0xa6) = 0;
    local_518 = (ushort *******)param_2[0x82];
    local_514 = (ushort *******)param_2[0x83];
    local_510 = (ushort *******)param_2[0x84];
    local_50c = (code *)param_2[0x85];
    if (local_518 != (ushort *******)0x2) {
      FUN_00a86e98(&local_518);
      if (local_50c != (code *)0xffffffff) {
        FUN_016dffb2();
      }
      FUN_00a414e8(&local_518);
    }
    *(undefined1 *)((int)param_2 + 0x297) = 0;
    local_518 = (ushort *******)param_2[0x86];
    local_514 = (ushort *******)param_2[0x87];
    local_510 = (ushort *******)param_2[0x88];
    local_50c = (code *)param_2[0x89];
    if (local_518 != (ushort *******)&SUB_00000002) {
      FUN_00a86e98(&local_518);
      if (local_50c != (code *)0xffffffff) {
        FUN_016dffb2();
      }
      FUN_00a414e8(&local_518);
    }
    *(undefined4 *)((int)param_2 + 0x295) = 0;
    FUN_00d97900(param_2 + 0x6a);
  }
  *(undefined1 *)local_7d0 = 1;
  FUN_00a41228(local_7c8);
LAB_00a92ce8:
  *(undefined1 *)(param_2 + 0xa7) = 1;
  goto LAB_00a92cf4;
LAB_00a92a34:
  param_2[0xa3] = 0;
  uVar6 = 4;
  pppppppuVar16 = pppppppuVar28;
LAB_00a92a58:
  pppppppuVar28 = (ushort *******)param_2[0x9c];
  if (uVar6 == 4) {
    uVar6 = param_2[0x9d];
    unaff_r6 = (ushort *******)param_2[0x9e];
    *(undefined1 *)(param_2 + 0xa4) = 1;
    pppppppuVar16 = local_7a8;
    if (pppppppuVar28 != (ushort *******)0x80000001) goto LAB_00a92ab8;
  }
  else {
    uVar6 = uVar6 | (int)local_7b8 << 8;
    if (pppppppuVar28 != (ushort *******)0x0) {
      thunk_FUN_016d3fb4(param_2[0x9d]);
    }
    pppppppuVar28 = (ushort *******)&DAT_80000000;
    unaff_r6 = pppppppuVar16;
LAB_00a92ab0:
    *(undefined1 *)(param_2 + 0xa4) = 1;
LAB_00a92ab8:
    FUN_00a41410(local_7cc);
    param_2[0x9b] = (int)pppppppuVar28;
    param_2[0x9a] = 1;
    param_2[0x9c] = uVar6;
    param_2[0x9d] = (int)unaff_r6;
    if (pppppppuVar28 == (ushort *******)&DAT_80000000) goto LAB_00a92688;
LAB_00a92ae0:
    pppppppuVar16 = local_7a8;
    if (bVar3) {
      if (*local_7c4 != 1) {
        puVar8 = &DAT_0187c240;
        goto LAB_00a919bc;
      }
      pppppppuVar11 = (ushort *******)param_2[0x8b];
      pppppppuVar16 = (ushort *******)param_2[0x8c];
      param_2[0x8a] = 2;
      pppppppuVar29 = local_518;
      pppppppuVar17 = local_514;
      if (4 < ((uint)pppppppuVar11 & 0xff)) {
LAB_00a9337c:
        local_514 = pppppppuVar17;
        local_518 = pppppppuVar29;
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0187c374);
      }
      local_518 = pppppppuVar11;
      local_514 = pppppppuVar16;
      if (((uint)pppppppuVar11 & 0xff) != 4) {
        FUN_009b8520(&local_518);
        puVar8 = &DAT_0187c250;
        goto LAB_00a919bc;
      }
      if (*local_7bc != 1) {
        puVar8 = &DAT_0187c260;
LAB_00a93474:
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(puVar8);
      }
      local_518 = (ushort *******)param_2[0x90];
      param_2[0x8f] = 2;
      local_514 = (ushort *******)param_2[0x91];
      unaff_r7 = (ushort *******)param_2[0x92];
      pppppppuVar29 = pppppppuVar11;
      pppppppuVar17 = pppppppuVar16;
      if (&DAT_80000000 < local_518) goto LAB_00a9337c;
      local_510 = unaff_r7;
      if (local_518 == (ushort *******)&DAT_80000000) {
        FUN_009b8520(&local_514);
        puVar8 = &DAT_0187c270;
        goto LAB_00a93474;
      }
      local_7a4 = (int *)param_2[0x9c];
      local_7a8 = (ushort *******)param_2[0x9d];
      param_2[0x9a] = 2;
      iVar14 = *local_7c4;
      pppppppuVar29 = local_518;
      unaff_r6 = local_514;
      goto joined_r0x00a92b94;
    }
  }
LAB_00a92e0c:
  *(undefined1 *)(param_2 + 0xa7) = 3;
  *(undefined1 *)(param_2 + 0xa5) = 3;
  iVar14 = FUN_016540e8(bVar4 == 2 | bVar4 & 1,param_2 + 0xe,*param_3);
  if (iVar14 != 0) {
    *param_1 = -0x7fffffff;
    *(undefined1 *)(param_2 + 5) = 4;
    return;
  }
  pppppppuVar29 = (ushort *******)0x80000001;
LAB_00a92cf4:
  FUN_00a94310(param_2 + 0xe);
  if (pppppppuVar29 == (ushort *******)0x80000001) {
    uVar6 = FUN_00a94620();
LAB_00a92d2c:
    FUN_00a93f24(param_2 + 0xa8);
LAB_00a92d40:
    iVar7 = param_2[0xb];
    iVar14 = -0x80000000;
  }
  else {
    if (pppppppuVar29 == (ushort *******)&DAT_80000000) {
      local_518 = unaff_r6;
      local_514 = unaff_r7;
      uVar6 = FUN_00a74eb4(&local_518);
      goto LAB_00a92d2c;
    }
    local_788 = local_7a8;
    local_78c = local_7a4;
    local_79c = pppppppuVar29;
    local_798 = unaff_r6;
    pppppppuStack_794 = unaff_r7;
    local_790 = pppppppuVar28;
    local_784 = pppppppuVar16;
    FUN_00a93f24(param_2 + 0xa8);
    if (pppppppuVar16 != (ushort *******)0x0) {
      local_2ac = (ushort *******)FUN_016041cc;
      local_2b0 = (ushort *******)&local_79c;
      FUN_00600d2c(&local_518,&DAT_00574ce2,&local_2b0);
      local_780 = (ushort)local_518;
      uStack_77e = (undefined2)((uint)local_518 >> 0x10);
      uStack_77c = SUB42(local_514,0);
      uStack_77a = (undefined2)((uint)local_514 >> 0x10);
      pppppppuStack_778 = local_510;
      uVar6 = FUN_00ac0530(&local_780);
      pppppppuVar29 = local_79c;
joined_r0x00a93068:
      if (pppppppuVar29 != (ushort *******)0x0) {
        thunk_FUN_016d3fb4(local_798);
      }
      if (local_790 != (ushort *******)0x0) {
        thunk_FUN_016d3fb4(local_78c);
      }
      goto LAB_00a92d40;
    }
    FUN_006008c8(&local_98,unaff_r6,unaff_r7);
    pppppppuVar28 = local_90;
    pppppppuVar17 = local_94;
    FUN_00fb6cfc(&local_780,local_94,local_90,&DAT_00418eb8,1);
    local_73c = pppppppuVar28;
    local_740 = 0;
    local_738 = 1;
    FUN_016dd1aa(&local_518,&local_780,0x50);
    FUN_00a61d78(&local_2b0,&local_518);
    pppppppuVar16 = local_2ac;
    pppppppuVar28 = (ushort *******)0x0;
    if (local_2a8 != (ushort *******)0x0) {
      pppppppuVar28 = local_2ac + (int)local_2a8 * 2;
    }
    if (local_2a8 == (ushort *******)0x0 || pppppppuVar28 == (ushort *******)&DAT_00000008) {
      uVar6 = FUN_00ac0588("unexpected braa output format",0x1d);
      if (local_2b0 != (ushort *******)0x0) {
        thunk_FUN_016d3fb4(pppppppuVar16);
      }
joined_r0x00a92f14:
      if (((uint)local_98 & 0x7fffffff) != 0) {
        thunk_FUN_016d3fb4(pppppppuVar17);
      }
      goto joined_r0x00a93068;
    }
    lVar33 = FUN_010ceb84(pppppppuVar28[-2],pppppppuVar28[-1]);
    iVar14 = (int)((ulonglong)lVar33 >> 0x20);
    uVar22 = 0;
    if (lVar33 < 0) {
LAB_00a92f68:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar22,iVar14);
    }
    if (iVar14 == 0) {
      uVar6 = 1;
    }
    else {
      uVar22 = 1;
      uVar6 = FUN_0063f47c(iVar14,1);
      if (uVar6 == 0) goto LAB_00a92f68;
    }
    FUN_016dd1aa(uVar6,(int)lVar33,iVar14);
    if (local_2b0 != (ushort *******)0x0) {
      thunk_FUN_016d3fb4(pppppppuVar16);
    }
    if (iVar14 == 0) {
      local_2ac = (ushort *******)&DAT_0157d360;
      local_2b0 = (ushort *******)(param_2 + 3);
      FUN_00a9469c(&local_518,&local_2b0);
      local_780 = (ushort)local_518;
      uStack_77e = (undefined2)((uint)local_518 >> 0x10);
      uStack_77c = SUB42(local_514,0);
      uStack_77a = (undefined2)((uint)local_514 >> 0x10);
      pppppppuStack_778 = local_510;
      uVar6 = FUN_00ac0530(&local_780);
      goto joined_r0x00a92f14;
    }
    if (((uint)local_98 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(pppppppuVar17);
    }
    FUN_00a94668(&local_79c);
    iVar7 = param_2[0xb];
  }
  if (iVar7 != 0) {
    thunk_FUN_016d3fb4(param_2[0xc]);
  }
LAB_00a92d58:
  *param_1 = iVar14;
  param_1[1] = uVar6;
  param_1[2] = iVar14;
  *(undefined1 *)(param_2 + 5) = 1;
  return;
}


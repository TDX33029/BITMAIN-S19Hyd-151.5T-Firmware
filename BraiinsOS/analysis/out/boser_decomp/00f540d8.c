// FUN_00f540d8 @ 00f540d8 size=6792 calls_out=31 calls_in=0
// strings: max receivers | internal error: entered unreachable code: unexpected stage | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | IPv6 not supportedevent open/utils-rs/continuous-pcap/src/lib.rs:79event open/utils-rs/continuous-pcap/src/lib.rs:93

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00f540d8(int *******param_1,undefined4 param_2)

{
  code *pcVar1;
  char cVar2;
  int *******pppppppiVar3;
  int *****pppppiVar4;
  int *******pppppppiVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  int *****pppppiVar10;
  undefined4 uVar11;
  int ******ppppppiVar12;
  uint uVar13;
  int ****ppppiVar14;
  int *******pppppppiVar15;
  int ******ppppppiVar16;
  int ******ppppppiVar17;
  int ****ppppiVar18;
  int *******pppppppiVar19;
  int ******unaff_r9;
  bool bVar20;
  undefined8 uVar21;
  uint local_134;
  int *******local_130;
  int ******local_128;
  int *******local_124;
  uint local_11c;
  int ******local_110;
  uint local_10c;
  int *******local_108;
  int ******local_104;
  undefined4 local_100;
  undefined4 *******local_c0;
  int *******local_bc;
  uint *local_b8;
  undefined4 *******local_b0;
  int *******local_ac;
  uint *local_a8;
  undefined4 *******local_a0;
  int *******local_9c;
  uint *local_98;
  undefined4 *******local_90;
  int *******local_8c;
  uint *local_88;
  int ******local_80;
  int ******local_7c;
  undefined4 *******local_74;
  int *******local_70;
  uint *local_6c;
  int *******local_68;
  int ******local_64;
  undefined4 *******local_60;
  int *******local_5c;
  uint *local_58;
  int *******local_54;
  undefined4 *******local_50;
  uint *local_4c;
  int ******local_48;
  int *******local_44;
  undefined4 *******local_40;
  int *******local_3c;
  uint *local_38;
  undefined4 *******local_30;
  int *******local_2c;
  uint *local_28;
  
  if (param_1[4] != (int ******)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("internal error: entered unreachable code: unexpected stage",0x75,&DAT_01d2e13c);
  }
  uVar21 = FUN_019ec558(param_1[2],param_1[3]);
  uVar11 = (undefined4)((ulonglong)uVar21 >> 0x20);
  pppppppiVar3 = param_1 + 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(char *)(param_1 + 0x16)) {
  case '\0':
    param_1[0x14] = param_1[0x12];
    param_1[0x15] = param_1[0x13];
    ppppppiVar12 = (int ******)param_1[0x13][2];
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c19024);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c19024);
  case '\x03':
    pppppppiVar15 = param_1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(char *)(param_1 + 0x11)) {
    case '\0':
      pppppppiVar5 = (int *******)param_1[10];
      goto LAB_00f54404;
    case '\x01':
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01d29fe0);
    case '\x02':
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01d29fe0);
    case '\x03':
      goto switchD_00f5418c_caseD_3;
    }
  }
  do {
    pppppiVar4 = *ppppppiVar12;
    bVar20 = (bool)hasExclusiveAccess(ppppppiVar12);
  } while (!bVar20);
  *ppppppiVar12 = (int *****)((int)pppppiVar4 + 1);
  if ((int)pppppiVar4 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf543f8);
    (*pcVar1)();
  }
  pppppppiVar15 = (int *******)(ppppppiVar12 + 4);
  if (*(char *)pppppppiVar15 == '\0') {
    bVar20 = (bool)hasExclusiveAccess(pppppppiVar15);
    if (bVar20) {
      *(char *)pppppppiVar15 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_00f541c0;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0164fba8(pppppppiVar15);
LAB_00f541c0:
  FUN_0165098c(pppppppiVar15);
  pppppiVar4 = ppppppiVar12[10];
  if (pppppiVar4 == (int *****)0x0) {
    *(undefined1 *)(ppppppiVar12 + 0xb) = 0;
  }
  else {
    if (pppppiVar4 == (int *****)0x3fffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("max receivers",0x1b,&DAT_01d2a510);
    }
    if (pppppiVar4 == (int *****)0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_0130739c(&DAT_00570520,8,&DAT_01d2a520);
    }
  }
  ppppppiVar16 = (int ******)ppppppiVar12[6];
  ppppppiVar17 = (int ******)ppppppiVar12[7];
  ppppppiVar12[10] = (int *****)((int)pppppiVar4 + 1);
  FUN_01650a90(pppppppiVar15);
  if (*(char *)pppppppiVar15 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar20 = (bool)hasExclusiveAccess(pppppppiVar15);
      if (bVar20) {
        *(char *)pppppppiVar15 = '\0';
        goto LAB_00f54258;
      }
    } while (*(char *)pppppppiVar15 == '\x01');
  }
  ClearExclusiveLocal();
  FUN_0164f86c(pppppppiVar15);
LAB_00f54258:
  param_1[8] = ppppppiVar12;
  *pppppppiVar3 = ppppppiVar16;
  param_1[7] = ppppppiVar17;
LAB_00f55bd8:
  do {
    *(char *)(param_1 + 0x11) = '\0';
    param_1[10] = (int ******)pppppppiVar3;
    pppppppiVar5 = pppppppiVar3;
LAB_00f54404:
    param_1[0xb] = (int ******)pppppppiVar5;
    FUN_01bed93e(param_1 + 0xc,0,0x11);
switchD_00f5418c_caseD_3:
    uVar6 = FUN_019ec670(param_2);
    uVar13 = 0;
    if ((uVar6 & 0xff) != 2) {
      pppppppiVar15 = (int *******)((uVar6 & 0xffffff) >> 0x10);
      uVar13 = (uVar6 & 0xffffff) >> 8;
      if ((uVar6 & 1) != 0) goto LAB_00f54f14;
    }
    FUN_012cb134(&local_110,param_1[0xb],param_1 + 0xc,param_2);
    pppppppiVar5 = local_108;
    if (local_110 == (int ******)0x3 && local_10c == 0) {
      local_11c = 0;
      uVar6 = 1;
      uVar13 = (uint)*(byte *)((int)local_108 + 0x27);
      local_124 = (int *******)0x0;
      if ((uVar13 != 3) && (uVar6 = 0, uVar13 != 2)) {
        local_11c = *(uint *)((int)local_108 + 0x1a);
        local_124 = *(int ********)((int)local_108 + 0x1e);
        unaff_r9 = (int ******)(uint)*(byte *)((int)local_108 + 0x26);
        local_130 = *(int ********)((int)local_108 + 0x22);
        local_134 = (uint)*(ushort *)(local_108 + 5);
        local_128 = *(int *******)((int)local_108 + 0x16);
      }
      pppppppiVar19 = local_108 + 4;
      DataMemoryBarrier(0xb);
      do {
        ppppppiVar12 = *pppppppiVar19;
        bVar20 = (bool)hasExclusiveAccess(pppppppiVar19);
      } while (!bVar20);
      *pppppppiVar19 = (int ******)((int)ppppppiVar12 + -1);
      DataMemoryBarrier(0xb);
      if (ppppppiVar12 == (int ******)0x1) {
        *(char *)((int)local_108 + 0x27) = '\x03';
      }
      FUN_01650a90(local_108);
      if (*(char *)pppppppiVar5 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar20 = (bool)hasExclusiveAccess(pppppppiVar5);
          if (bVar20) {
            *(char *)pppppppiVar5 = '\0';
            goto LAB_00f5458c;
          }
        } while (*(char *)pppppppiVar5 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_0164f86c(pppppppiVar5);
LAB_00f5458c:
      unaff_r9 = (int ******)((uint)unaff_r9 & 0xff | uVar13 << 8);
      uVar13 = 0;
    }
    else if (local_110 == (int ******)0x0) {
      uVar6 = 2;
    }
    else {
      local_124 = (int *******)0x0;
      if (local_110 != (int ******)0x1) {
        local_130 = local_108;
        unaff_r9 = local_104;
      }
      local_11c = (uint)(local_110 != (int ******)0x1);
      uVar6 = 1;
      uVar13 = 0;
    }
    FUN_019edbc4(uVar13,pppppppiVar15);
    if (uVar6 == 2) {
LAB_00f54f14:
      *(char *)(param_1 + 0x16) = '\x03';
      *(char *)(param_1 + 0x11) = '\x03';
      FUN_019ec558((int)uVar21,uVar11);
      return 1;
    }
    FUN_009cdcac(param_1 + 0xb);
    *(char *)(param_1 + 0x11) = '\x01';
    if ((uVar6 & 1) == 0) {
      if (((uint)unaff_r9 & 0xffff) >> 8 == 2) {
        FUN_012d73c0(param_1[0x14][2]);
      }
      else {
        local_10c = local_11c;
        uVar13 = local_10c;
        local_110 = local_128;
        ppppppiVar12 = local_110;
        local_108 = local_124;
        if (((uint)local_128 & 1) == 0) {
          local_110._1_3_ = (undefined3)((uint)local_128 >> 8);
          local_10c._0_1_ = (undefined1)local_11c;
          local_80 = (int ******)CONCAT13((undefined1)local_10c,local_110._1_3_);
          pppppiVar4 = param_1[0x14][2];
          local_7c = (int ******)(local_134 & 0xffff);
          local_110 = ppppppiVar12;
          local_10c = uVar13;
          if (((uint)unaff_r9 >> 8 & 1) == 0) {
            uVar9 = FUN_012e310c(pppppiVar4 + 0x22);
            pppppppiVar15 = (int *******)(pppppiVar4 + 0x23);
            ppppppiVar12 = (int ******)pppppiVar4[0x25];
            ppppiVar18 = pppppiVar4[0x24];
            if (ppppppiVar12 != (int ******)0x0) {
              ppppiVar14 = ppppiVar18 + 1;
              iVar7 = (int)ppppppiVar12 << 3;
              do {
                ppppppiVar16 = (int ******)ppppiVar14[-1];
                bVar20 = ppppppiVar16 == local_80;
                if (bVar20) {
                  ppppppiVar16 = (int ******)*ppppiVar14;
                }
                if (bVar20 && ppppppiVar16 == local_7c) {
                  FUN_009dd354();
                  goto LAB_00f55bd8;
                }
                ppppiVar14 = ppppiVar14 + 2;
                iVar7 = iVar7 + -8;
              } while (iVar7 != 0);
            }
            if (((DAT_01d50f88 < 2) &&
                ((DAT_01d4cf18 - 1 < 2 ||
                 ((DAT_01d4cf18 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4cf10), cVar2 != '\0')))))) &&
               (iVar7 = FUN_01aaa278(DAT_01d4cf10), iVar7 != 0)) {
              if (*(uint *)(DAT_01d4cf10 + 0x20) == 0) {
LAB_00f55d0c:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce3ae0);
              }
              local_54 = &local_110;
              local_108 = *(int ********)(DAT_01d4cf10 + 0x24);
              local_50 = &local_68;
              local_104 = *(int *******)(DAT_01d4cf10 + 0x28);
              local_6c = (uint *)(DAT_01d4cf10 + 0x1c);
              local_110 = (int ******)*local_6c;
              local_74 = &local_54;
              local_70 = (int *******)&DAT_00000001;
              local_64 = (int ******)&local_48;
              local_100 = 0;
              local_4c = (uint *)&DAT_01d2ea4c;
              local_68 = (int *******)&DAT_0059aadb;
              local_44 = (int *******)FUN_012e8d5c;
              local_48 = (int ******)&local_80;
              local_10c = *(uint *)(DAT_01d4cf10 + 0x20);
              FUN_01aaaecc(DAT_01d4cf10,&local_74);
              iVar7 = DAT_01d4cf10;
              if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                local_3c = *(int ********)(DAT_01d4cf10 + 0x14);
                local_38 = *(uint **)(DAT_01d4cf10 + 0x18);
                local_40 = (undefined4 *******)&SUB_00000004;
                DataMemoryBarrier(0xb);
                pppppppiVar19 = DAT_01d4edc8;
                pppppppiVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pppppppiVar19 = (int *******)&DAT_01cfc5e0;
                  pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar8 = (*(code *)pppppppiVar19[3])(pppppppiVar5,&local_40);
                if (iVar8 != 0) {
                  local_30 = local_40;
                  local_2c = local_3c;
                  local_28 = local_38;
                  FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar19[4],&local_30,&local_74);
                }
              }
            }
            else {
              iVar7 = DAT_01d4cf10;
              if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                local_5c = *(int ********)(DAT_01d4cf10 + 0x14);
                local_58 = *(uint **)(DAT_01d4cf10 + 0x18);
                local_60 = (undefined4 *******)&SUB_00000004;
                DataMemoryBarrier(0xb);
                pppppppiVar19 = DAT_01d4edc8;
                pppppppiVar5 = DAT_01d4edc4;
                if (DAT_01d51174 != 2) {
                  pppppppiVar19 = (int *******)&DAT_01cfc5e0;
                  pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
                }
                iVar8 = (*(code *)pppppppiVar19[3])(pppppppiVar5,&local_60);
                if (iVar8 != 0) {
                  if (*(uint *)(DAT_01d4cf10 + 0x20) == 0) goto LAB_00f55d0c;
                  local_40 = &local_110;
                  local_104 = *(int *******)(DAT_01d4cf10 + 0x28);
                  local_3c = &local_48;
                  local_54 = (int *******)&local_40;
                  local_108 = *(int ********)(DAT_01d4cf10 + 0x24);
                  local_100 = 0;
                  local_50 = (undefined4 *******)&DAT_00000001;
                  local_38 = (uint *)&DAT_01d2ea4c;
                  local_44 = (int *******)&local_74;
                  local_48 = (int ******)&DAT_0059aadb;
                  local_70 = (int *******)FUN_012e8d5c;
                  local_74 = &local_80;
                  local_30 = local_60;
                  local_2c = local_5c;
                  local_28 = local_58;
                  local_110 = *(int *******)(DAT_01d4cf10 + 0x1c);
                  local_10c = *(uint *)(DAT_01d4cf10 + 0x20);
                  local_4c = (uint *)(DAT_01d4cf10 + 0x1c);
                  FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar19[4],&local_30,&local_54);
                }
              }
            }
            ppppppiVar17 = local_7c;
            ppppppiVar16 = local_80;
            if (ppppppiVar12 == *pppppppiVar15) {
              FUN_012671ec(pppppppiVar15);
              ppppiVar18 = pppppiVar4[0x24];
            }
            ppppiVar18[(int)ppppppiVar12 * 2] = (int ***)ppppppiVar16;
            (ppppiVar18 + (int)ppppppiVar12 * 2)[1] = (int ***)ppppppiVar17;
            pppppiVar4[0x25] = (int ****)((int)ppppppiVar12 + 1);
            pppppiVar10 = pppppiVar4 + 0x2a;
            DataMemoryBarrier(0xb);
            do {
              bVar20 = (bool)hasExclusiveAccess(pppppiVar10);
            } while (!bVar20);
            *pppppiVar10 = (int ****)((int)*pppppiVar10 + 2);
            FUN_009dd354(uVar9);
            iVar7 = 0;
            do {
              FUN_019e03e8((int)pppppiVar4 + iVar7 + 8);
              iVar7 = iVar7 + 0x10;
            } while (iVar7 != 0x80);
          }
          else {
            uVar9 = FUN_012e310c(pppppiVar4 + 0x22);
            if (pppppiVar4[0x25] == (int ****)0x0) {
LAB_00f54a00:
              FUN_009dd354();
            }
            else {
              pppppppiVar15 = (int *******)pppppiVar4[0x24];
              iVar7 = (int)pppppiVar4[0x25] << 3;
              ppppiVar18 = (int ****)0x0;
              while ((pppppppiVar15[(int)ppppiVar18 * 2] != local_80 ||
                     (pppppppiVar15[(int)ppppiVar18 * 2 + 1] != local_7c))) {
                ppppiVar18 = (int ****)((int)ppppiVar18 + 1);
                iVar7 = iVar7 + -8;
                if (iVar7 == 0) goto LAB_00f54a00;
              }
              if ((DAT_01d50f88 < 2) &&
                 (((DAT_01d4cf24 - 1 < 2 ||
                   ((DAT_01d4cf24 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4cf1c), cVar2 != '\0')))) &&
                  (iVar7 = FUN_01aaa278(DAT_01d4cf1c), iVar7 != 0)))) {
                if (*(uint *)(DAT_01d4cf1c + 0x20) == 0) {
LAB_00f55da8:
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce3af0);
                }
                pppppppiVar15 = *(int ********)(DAT_01d4cf1c + 0x24);
                local_104 = *(int *******)(DAT_01d4cf1c + 0x28);
                local_50 = &local_68;
                local_6c = (uint *)(DAT_01d4cf1c + 0x1c);
                local_110 = (int ******)*local_6c;
                local_54 = &local_110;
                local_70 = (int *******)&DAT_00000001;
                local_64 = (int ******)&local_48;
                local_74 = &local_54;
                local_48 = (int ******)&local_80;
                local_100 = 0;
                local_4c = (uint *)&DAT_01d2ea4c;
                local_68 = (int *******)&DAT_0059ac77;
                local_44 = (int *******)FUN_012e8d5c;
                local_10c = *(uint *)(DAT_01d4cf1c + 0x20);
                local_108 = pppppppiVar15;
                FUN_01aaaecc(DAT_01d4cf1c,&local_74);
                iVar7 = DAT_01d4cf1c;
                if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                  local_3c = *(int ********)(DAT_01d4cf1c + 0x14);
                  local_38 = *(uint **)(DAT_01d4cf1c + 0x18);
                  local_40 = (undefined4 *******)&SUB_00000004;
                  DataMemoryBarrier(0xb);
                  pppppppiVar19 = DAT_01d4edc8;
                  pppppppiVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pppppppiVar19 = (int *******)&DAT_01cfc5e0;
                    pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  pppppppiVar15 = (int *******)&local_40;
                  iVar8 = (*(code *)pppppppiVar19[3])(pppppppiVar5,pppppppiVar15);
                  if (iVar8 != 0) {
                    local_30 = local_40;
                    local_2c = local_3c;
                    local_28 = local_38;
                    FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar19[4],&local_30,&local_74);
                  }
                }
              }
              else {
                iVar7 = DAT_01d4cf1c;
                if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
                  local_5c = *(int ********)(DAT_01d4cf1c + 0x14);
                  local_58 = *(uint **)(DAT_01d4cf1c + 0x18);
                  local_60 = (undefined4 *******)&SUB_00000004;
                  DataMemoryBarrier(0xb);
                  pppppppiVar19 = DAT_01d4edc8;
                  pppppppiVar5 = DAT_01d4edc4;
                  if (DAT_01d51174 != 2) {
                    pppppppiVar19 = (int *******)&DAT_01cfc5e0;
                    pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
                  }
                  pppppppiVar15 = (int *******)&local_60;
                  iVar8 = (*(code *)pppppppiVar19[3])(pppppppiVar5,pppppppiVar15);
                  if (iVar8 != 0) {
                    if (*(uint *)(DAT_01d4cf1c + 0x20) == 0) goto LAB_00f55da8;
                    local_3c = &local_48;
                    pppppppiVar15 = *(int ********)(DAT_01d4cf1c + 0x24);
                    local_104 = *(int *******)(DAT_01d4cf1c + 0x28);
                    local_40 = &local_110;
                    local_54 = (int *******)&local_40;
                    local_100 = 0;
                    local_50 = (undefined4 *******)&DAT_00000001;
                    local_44 = (int *******)&local_74;
                    local_38 = (uint *)&DAT_01d2ea4c;
                    local_48 = (int ******)&DAT_0059ac77;
                    local_70 = (int *******)FUN_012e8d5c;
                    local_74 = &local_80;
                    local_30 = local_60;
                    local_2c = local_5c;
                    local_28 = local_58;
                    local_110 = *(int *******)(DAT_01d4cf1c + 0x1c);
                    local_10c = *(uint *)(DAT_01d4cf1c + 0x20);
                    local_108 = pppppppiVar15;
                    local_4c = (uint *)(DAT_01d4cf1c + 0x1c);
                    FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar19[4],&local_30,&local_54);
                  }
                }
              }
              ppppiVar14 = pppppiVar4[0x25];
              if (ppppiVar14 <= ppppiVar18) {
                    /* WARNING: Subroutine does not return */
                FUN_0066651c(ppppiVar18,ppppiVar14,&DAT_01ce3b00);
              }
              FUN_01bed864(pppppiVar4[0x24] + (int)ppppiVar18 * 2,
                           pppppiVar4[0x24] + (int)ppppiVar18 * 2 + 2,
                           ((int)ppppiVar14 + ~(uint)ppppiVar18) * 8);
              pppppiVar4[0x25] = (int ****)((int)ppppiVar14 - 1);
              DataMemoryBarrier(0xb);
              pppppiVar10 = pppppiVar4 + 0x2a;
              do {
                bVar20 = (bool)hasExclusiveAccess(pppppiVar10);
              } while (!bVar20);
              *pppppiVar10 = (int ****)((int)*pppppiVar10 + 2);
              FUN_009dd354(uVar9);
              iVar7 = 0;
              do {
                FUN_019e03e8((int)pppppiVar4 + iVar7 + 8);
                iVar7 = iVar7 + 0x10;
              } while (iVar7 != 0x80);
            }
          }
        }
        else if (((uint)unaff_r9 >> 8 & 1) == 0) {
          local_68 = (int *******)
                     FUN_00667978("IPv6 not supportedevent open/utils-rs/continuous-pcap/src/lib.rs:79event open/utils-rs/continuous-pcap/src/lib.rs:93"
                                  ,0x12);
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d4ca24 - 1 < 2 ||
               ((DAT_01d4ca24 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ca1c), cVar2 != '\0')))))) &&
             (iVar7 = FUN_01aaa278(DAT_01d4ca1c), iVar7 != 0)) {
            if (*(uint *)(DAT_01d4ca1c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19034);
            }
            local_50 = &local_48;
            local_108 = *(int ********)(DAT_01d4ca1c + 0x24);
            local_104 = *(int *******)(DAT_01d4ca1c + 0x28);
            local_58 = (uint *)(DAT_01d4ca1c + 0x1c);
            local_110 = (int ******)*local_58;
            pppppppiVar15 = (int *******)&DAT_01d2ea4c;
            local_54 = &local_110;
            local_60 = &local_54;
            local_100 = 0;
            local_5c = (int *******)&DAT_00000001;
            local_44 = (int *******)&local_74;
            local_74 = &local_68;
            local_4c = (uint *)&DAT_01d2ea4c;
            local_48 = (int ******)&DAT_0057c53c;
            local_70 = (int *******)FUN_00667a08;
            local_10c = *(uint *)(DAT_01d4ca1c + 0x20);
            FUN_01aaaecc(DAT_01d4ca1c,&local_60);
            iVar7 = DAT_01d4ca1c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_3c = *(int ********)(DAT_01d4ca1c + 0x14);
              local_38 = *(uint **)(DAT_01d4ca1c + 0x18);
              local_40 = (undefined4 *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pppppppiVar15 = DAT_01d4edc8;
              pppppppiVar5 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppppiVar15 = (int *******)&DAT_01cfc5e0;
                pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppppiVar15[3])(pppppppiVar5,&local_40);
              if (iVar8 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar15[4],&local_30,&local_60);
              }
            }
          }
          else {
            iVar7 = DAT_01d4ca1c;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_bc = *(int ********)(DAT_01d4ca1c + 0x14);
              local_b8 = *(uint **)(DAT_01d4ca1c + 0x18);
              local_c0 = (undefined4 *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pppppppiVar5 = DAT_01d4edc8;
              pppppppiVar15 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppppiVar5 = (int *******)&DAT_01cfc5e0;
                pppppppiVar15 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppppiVar5[3])(pppppppiVar15,&local_c0);
              if (iVar8 != 0) {
                if (*(uint *)(DAT_01d4ca1c + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19034);
                }
                local_3c = (int *******)&local_74;
                local_108 = *(int ********)(DAT_01d4ca1c + 0x24);
                local_104 = *(int *******)(DAT_01d4ca1c + 0x28);
                local_40 = &local_110;
                local_54 = (int *******)&local_40;
                local_100 = 0;
                local_50 = (undefined4 *******)&DAT_00000001;
                local_70 = (int *******)&local_60;
                local_60 = &local_68;
                local_38 = (uint *)&DAT_01d2ea4c;
                local_74 = (undefined4 *******)&DAT_0057c53c;
                local_5c = (int *******)FUN_00667a08;
                local_30 = local_c0;
                local_2c = local_bc;
                local_28 = local_b8;
                local_110 = *(int *******)(DAT_01d4ca1c + 0x1c);
                local_10c = *(uint *)(DAT_01d4ca1c + 0x20);
                local_4c = (uint *)(DAT_01d4ca1c + 0x1c);
                FUN_01aaa328(iVar7,pppppppiVar15,pppppppiVar5[4],&local_30,&local_54);
              }
            }
          }
          (*(code *)**local_68)();
        }
        else {
          local_68 = (int *******)
                     FUN_00667978("IPv6 not supportedevent open/utils-rs/continuous-pcap/src/lib.rs:79event open/utils-rs/continuous-pcap/src/lib.rs:93"
                                  ,0x12);
          if (((DAT_01d50f88 < 5) &&
              ((DAT_01d4ca48 - 1 < 2 ||
               ((DAT_01d4ca48 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ca40), cVar2 != '\0')))))) &&
             (iVar7 = FUN_01aaa278(DAT_01d4ca40), iVar7 != 0)) {
            if (*(uint *)(DAT_01d4ca40 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19044);
            }
            local_50 = &local_48;
            local_108 = *(int ********)(DAT_01d4ca40 + 0x24);
            local_104 = *(int *******)(DAT_01d4ca40 + 0x28);
            local_58 = (uint *)(DAT_01d4ca40 + 0x1c);
            local_110 = (int ******)*local_58;
            pppppppiVar15 = (int *******)&DAT_01d2ea4c;
            local_54 = &local_110;
            local_60 = &local_54;
            local_100 = 0;
            local_5c = (int *******)&DAT_00000001;
            local_44 = (int *******)&local_74;
            local_74 = &local_68;
            local_4c = (uint *)&DAT_01d2ea4c;
            local_48 = (int ******)&DAT_005b6a90;
            local_70 = (int *******)FUN_00667a08;
            local_10c = *(uint *)(DAT_01d4ca40 + 0x20);
            FUN_01aaaecc(DAT_01d4ca40,&local_60);
            iVar7 = DAT_01d4ca40;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_3c = *(int ********)(DAT_01d4ca40 + 0x14);
              local_38 = *(uint **)(DAT_01d4ca40 + 0x18);
              local_40 = (undefined4 *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pppppppiVar15 = DAT_01d4edc8;
              pppppppiVar5 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppppiVar15 = (int *******)&DAT_01cfc5e0;
                pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppppiVar15[3])(pppppppiVar5,&local_40);
              if (iVar8 != 0) {
                local_30 = local_40;
                local_2c = local_3c;
                local_28 = local_38;
                FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar15[4],&local_30,&local_60);
              }
            }
          }
          else {
            iVar7 = DAT_01d4ca40;
            if ((DAT_01d51ae9 == '\0') && (DAT_01d51b00 != 0)) {
              local_ac = *(int ********)(DAT_01d4ca40 + 0x14);
              local_a8 = *(uint **)(DAT_01d4ca40 + 0x18);
              local_b0 = (undefined4 *******)&DAT_00000001;
              DataMemoryBarrier(0xb);
              pppppppiVar5 = DAT_01d4edc8;
              pppppppiVar15 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pppppppiVar5 = (int *******)&DAT_01cfc5e0;
                pppppppiVar15 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar8 = (*(code *)pppppppiVar5[3])(pppppppiVar15,&local_b0);
              if (iVar8 != 0) {
                if (*(uint *)(DAT_01d4ca40 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                  FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19044);
                }
                local_3c = (int *******)&local_74;
                local_108 = *(int ********)(DAT_01d4ca40 + 0x24);
                local_104 = *(int *******)(DAT_01d4ca40 + 0x28);
                local_40 = &local_110;
                local_54 = (int *******)&local_40;
                local_100 = 0;
                local_50 = (undefined4 *******)&DAT_00000001;
                local_70 = (int *******)&local_60;
                local_60 = &local_68;
                local_38 = (uint *)&DAT_01d2ea4c;
                local_74 = (undefined4 *******)&DAT_005b6a90;
                local_5c = (int *******)FUN_00667a08;
                local_30 = local_b0;
                local_2c = local_ac;
                local_28 = local_a8;
                local_110 = *(int *******)(DAT_01d4ca40 + 0x1c);
                local_10c = *(uint *)(DAT_01d4ca40 + 0x20);
                local_4c = (uint *)(DAT_01d4ca40 + 0x1c);
                FUN_01aaa328(iVar7,pppppppiVar15,pppppppiVar5[4],&local_30,&local_54);
              }
            }
          }
          (*(code *)**local_68)();
        }
      }
      goto LAB_00f55bd8;
    }
    if ((local_11c & 1) == 0) {
      if ((DAT_01d50f88 < 3) &&
         (((DAT_01d4ca3c - 1 < 2 ||
           ((DAT_01d4ca3c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ca34), cVar2 != '\0')))) &&
          (iVar7 = FUN_01aaa278(DAT_01d4ca34), iVar7 != 0)))) {
        if (*(uint *)(DAT_01d4ca34 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19054);
        }
        local_3c = (int *******)&local_60;
        local_108 = *(int ********)(DAT_01d4ca34 + 0x24);
        local_104 = *(int *******)(DAT_01d4ca34 + 0x28);
        local_4c = (uint *)(DAT_01d4ca34 + 0x1c);
        local_110 = (int ******)*local_4c;
        local_40 = &local_110;
        local_54 = (int *******)&local_40;
        local_100 = 0;
        local_50 = (undefined4 *******)&DAT_00000001;
        local_38 = (uint *)&DAT_01d2ea4c;
        local_5c = (int *******)&DAT_00000041;
        local_60 = (undefined4 *******)&DAT_0056c348;
        local_10c = *(uint *)(DAT_01d4ca34 + 0x20);
        FUN_01aaaecc(DAT_01d4ca34,&local_54);
        iVar7 = DAT_01d4ca34;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_2c = *(int ********)(DAT_01d4ca34 + 0x14);
          local_28 = *(uint **)(DAT_01d4ca34 + 0x18);
          local_30 = (undefined4 *******)&DAT_00000003;
          DataMemoryBarrier(0xb);
          pppppppiVar5 = DAT_01d4edc8;
          pppppppiVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pppppppiVar5 = (int *******)&DAT_01cfc5e0;
            pppppppiVar15 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)pppppppiVar5[3])(pppppppiVar15,&local_30);
          if (iVar8 != 0) {
            FUN_01aaa328(iVar7,pppppppiVar15,pppppppiVar5[4],&local_30,&local_54);
          }
        }
      }
      else {
        iVar7 = DAT_01d4ca34;
        if ((DAT_01d51ae9 == '\0') && (2 < DAT_01d51b00)) {
          local_8c = *(int ********)(DAT_01d4ca34 + 0x14);
          local_88 = *(uint **)(DAT_01d4ca34 + 0x18);
          local_90 = (undefined4 *******)&DAT_00000003;
          DataMemoryBarrier(0xb);
          pppppppiVar5 = DAT_01d4edc8;
          pppppppiVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pppppppiVar5 = (int *******)&DAT_01cfc5e0;
            pppppppiVar15 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar8 = (*(code *)pppppppiVar5[3])(pppppppiVar15,&local_90);
          if (iVar8 != 0) {
            if (*(uint *)(DAT_01d4ca34 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19054);
            }
            local_3c = (int *******)&local_60;
            local_108 = *(int ********)(DAT_01d4ca34 + 0x24);
            local_104 = *(int *******)(DAT_01d4ca34 + 0x28);
            local_40 = &local_110;
            local_54 = (int *******)&local_40;
            local_100 = 0;
            local_50 = (undefined4 *******)&DAT_00000001;
            local_5c = (int *******)&DAT_00000041;
            local_38 = (uint *)&DAT_01d2ea4c;
            local_60 = (undefined4 *******)&DAT_0056c348;
            local_30 = local_90;
            local_2c = local_8c;
            local_28 = local_88;
            local_110 = *(int *******)(DAT_01d4ca34 + 0x1c);
            local_10c = *(uint *)(DAT_01d4ca34 + 0x20);
            local_4c = (uint *)(DAT_01d4ca34 + 0x1c);
            FUN_01aaa328(iVar7,pppppppiVar15,pppppppiVar5[4],&local_30,&local_54);
          }
        }
      }
      FUN_012d73c0(param_1[0x14][2]);
      FUN_00d35adc(pppppppiVar3);
      ppppppiVar12 = param_1[0x15];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar4 = *ppppppiVar12;
        bVar20 = (bool)hasExclusiveAccess(ppppppiVar12);
      } while (!bVar20);
      *ppppppiVar12 = (int *****)((int)pppppiVar4 + -1);
      if (pppppiVar4 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_01182478(param_1[0x15]);
      }
      ppppppiVar12 = param_1[0x14];
      DataMemoryBarrier(0xb);
      do {
        pppppiVar4 = *ppppppiVar12;
        bVar20 = (bool)hasExclusiveAccess(ppppppiVar12);
      } while (!bVar20);
      *ppppppiVar12 = (int *****)((int)pppppiVar4 + -1);
      if (pppppiVar4 == (int *****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_01181abc(param_1[0x14]);
      }
      *(char *)(param_1 + 0x16) = '\x01';
      FUN_019ec558((int)uVar21,uVar11);
      local_110 = (int ******)0x2;
      FUN_00f3240c(param_1,&local_110);
      return 0;
    }
    local_68 = local_130;
    local_64 = unaff_r9;
    if (((DAT_01d50f88 < 4) &&
        ((DAT_01d4ca30 - 1 < 2 ||
         ((DAT_01d4ca30 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4ca28), cVar2 != '\0')))))) &&
       (iVar7 = FUN_01aaa278(DAT_01d4ca28), iVar7 != 0)) {
      if (*(uint *)(DAT_01d4ca28 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19064);
      }
      local_50 = &local_48;
      local_108 = *(int ********)(DAT_01d4ca28 + 0x24);
      local_104 = *(int *******)(DAT_01d4ca28 + 0x28);
      local_58 = (uint *)(DAT_01d4ca28 + 0x1c);
      local_110 = (int ******)*local_58;
      pppppppiVar15 = (int *******)&DAT_01d2ea4c;
      local_54 = &local_110;
      local_60 = &local_54;
      local_100 = 0;
      local_5c = (int *******)&DAT_00000001;
      local_44 = (int *******)&local_74;
      local_74 = &local_68;
      local_4c = (uint *)&DAT_01d2ea4c;
      local_48 = (int ******)&DAT_00584db8;
      local_70 = (int *******)FUN_012fd074;
      local_10c = *(uint *)(DAT_01d4ca28 + 0x20);
      FUN_01aaaecc(DAT_01d4ca28,&local_60);
      iVar7 = DAT_01d4ca28;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_3c = *(int ********)(DAT_01d4ca28 + 0x14);
        local_38 = *(uint **)(DAT_01d4ca28 + 0x18);
        local_40 = (undefined4 *******)0x2;
        DataMemoryBarrier(0xb);
        pppppppiVar15 = DAT_01d4edc8;
        pppppppiVar5 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppppiVar15 = (int *******)&DAT_01cfc5e0;
          pppppppiVar5 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppppiVar15[3])(pppppppiVar5,&local_40);
        if (iVar8 != 0) {
          local_30 = local_40;
          local_2c = local_3c;
          local_28 = local_38;
          FUN_01aaa328(iVar7,pppppppiVar5,pppppppiVar15[4],&local_30,&local_60);
        }
      }
    }
    else {
      iVar7 = DAT_01d4ca28;
      if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
        local_9c = *(int ********)(DAT_01d4ca28 + 0x14);
        local_98 = *(uint **)(DAT_01d4ca28 + 0x18);
        local_a0 = (undefined4 *******)0x2;
        DataMemoryBarrier(0xb);
        pppppppiVar5 = DAT_01d4edc8;
        pppppppiVar15 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pppppppiVar5 = (int *******)&DAT_01cfc5e0;
          pppppppiVar15 = (int *******)"InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar8 = (*(code *)pppppppiVar5[3])(pppppppiVar15,&local_a0);
        if (iVar8 != 0) {
          if (*(uint *)(DAT_01d4ca28 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c19064);
          }
          local_3c = (int *******)&local_74;
          local_108 = *(int ********)(DAT_01d4ca28 + 0x24);
          local_104 = *(int *******)(DAT_01d4ca28 + 0x28);
          local_40 = &local_110;
          local_54 = (int *******)&local_40;
          local_100 = 0;
          local_50 = (undefined4 *******)&DAT_00000001;
          local_70 = (int *******)&local_60;
          local_60 = &local_68;
          local_38 = (uint *)&DAT_01d2ea4c;
          local_74 = (undefined4 *******)&DAT_00584db8;
          local_5c = (int *******)FUN_012fd074;
          local_30 = local_a0;
          local_2c = local_9c;
          local_28 = local_98;
          local_110 = *(int *******)(DAT_01d4ca28 + 0x1c);
          local_10c = *(uint *)(DAT_01d4ca28 + 0x20);
          local_4c = (uint *)(DAT_01d4ca28 + 0x1c);
          FUN_01aaa328(iVar7,pppppppiVar15,pppppppiVar5[4],&local_30,&local_54);
        }
      }
    }
  } while( true );
}


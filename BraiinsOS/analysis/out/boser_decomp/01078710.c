// FUN_01078710 @ 01078710 size=3836 calls_out=36 calls_in=4
// strings: /proc/mounts | \134g | rpc_pipefs | sysfs | rootfs | cgroup

/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_01078710(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined1 uVar1;
  uint *****pppppuVar2;
  int *piVar3;
  uint *****pppppuVar4;
  uint *****pppppuVar5;
  undefined4 *puVar6;
  uint *****pppppuVar7;
  uint *****pppppuVar8;
  int *piVar9;
  undefined8 *puVar10;
  bool bVar11;
  uint uVar12;
  int iVar13;
  char *pcVar14;
  uint *****pppppuVar15;
  undefined1 uVar16;
  uint uVar17;
  int iVar18;
  bool bVar19;
  undefined1 *puVar20;
  undefined4 uVar21;
  uint uVar22;
  undefined4 uVar23;
  uint *****pppppuVar24;
  uint *****pppppuVar25;
  int *piVar26;
  uint *****pppppuVar27;
  uint *****pppppuVar28;
  uint *****pppppuVar29;
  uint ****ppppuVar30;
  uint *****pppppuVar31;
  uint *****pppppuVar32;
  uint *****unaff_r10;
  double dVar33;
  undefined8 uVar34;
  ulonglong uVar35;
  ulonglong uVar36;
  uint *****local_234;
  uint *****local_230;
  undefined1 local_22c;
  uint *****local_228;
  uint *****local_224;
  int local_1f4;
  uint *****local_1ec;
  uint *****local_1d8;
  uint *****local_1cc;
  uint *****local_1c8;
  int local_1c4;
  int local_1c0;
  int local_1bc;
  uint *****local_1b8;
  uint *****local_1b4;
  undefined4 local_1b0;
  int local_1ac;
  int local_1a8;
  uint *****local_198;
  undefined8 local_180;
  undefined4 local_178;
  undefined4 local_174;
  uint *****local_170;
  uint *****local_16c;
  uint *****local_168;
  uint ****local_160;
  int local_15c;
  uint ****local_158;
  uint *****local_150;
  uint *****local_14c;
  uint *****local_148;
  uint ****local_140;
  uint *****local_13c;
  uint *****local_138;
  undefined4 local_134;
  uint *****local_130;
  uint local_12c;
  undefined1 local_128;
  uint *****local_124;
  uint *****local_120;
  undefined2 local_11c;
  uint *****local_118;
  undefined8 local_110;
  int local_108;
  int local_104;
  undefined4 local_100;
  int local_fc;
  uint *****local_f8;
  uint *****local_f4;
  uint *****local_f0;
  uint *****local_ec;
  uint *****local_e8;
  uint *****local_e4;
  uint *****local_e0;
  uint *****pppppuStack_dc;
  uint *****pppppuStack_d8;
  undefined4 local_d4;
  uint *****local_d0;
  int *local_cc;
  uint *****local_c8;
  uint *****local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint *****local_b8;
  uint *****local_b4;
  uint *****local_b0;
  uint *****local_a8;
  uint *****local_a4;
  uint *****local_a0;
  uint *****local_9c;
  uint *****local_98;
  code *local_94;
  undefined8 *local_90;
  code *local_8c;
  uint *****local_48;
  uint *****local_44;
  uint *****local_40;
  
  local_178 = param_1;
  local_174 = param_2;
  FUN_019ac8ac(&local_a8,param_1,param_2);
  pppppuVar29 = local_a0;
  pppppuVar15 = local_a4;
  if (local_a8 == (uint *****)&DAT_80000000) {
    FUN_019afae4(&local_170,param_1,param_2);
    FUN_0187266c(pppppuVar15,pppppuVar29);
  }
  else {
    local_170 = local_a8;
    local_16c = local_a4;
    local_168 = local_a0;
  }
  local_15c = thunk_FUN_01be5118(0x80);
  if (local_15c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(8,0x80);
  }
  local_160 = (uint ****)0x2;
  FUN_019cab6c(&local_a8,"/proc/mounts",0xc,0x4001);
  if (local_a8 == (uint *****)&DAT_80000000) {
    FUN_0069d8a4((uint)local_a4 & 0xff,local_a0);
    pppppuVar15 = (uint *****)&DAT_00000001;
    pppppuVar29 = (uint *****)0x0;
    pppppuVar25 = (uint *****)0x0;
  }
  else {
    pppppuVar15 = local_a4;
    pppppuVar29 = local_a0;
    pppppuVar25 = local_a8;
  }
  local_158 = (uint ****)0x0;
  pppppuVar28 = (uint *****)&local_a8;
  FUN_019adfac(pppppuVar28,&DAT_0056a868,0x10);
  if (local_a8 == (uint *****)&DAT_00000001) {
    local_b8 = (uint *****)&DAT_00000001;
    local_b4 = local_a4;
    local_148 = (uint *****)0x0;
    local_b0 = local_a0;
    local_14c = (uint *****)&SUB_00000004;
    local_150 = (uint *****)0x0;
    FUN_019bd120(&local_b8);
  }
  else {
    local_b0 = (uint *****)CONCAT31(local_b0._1_3_,local_a0._0_1_);
    local_b4 = local_a4;
    local_b8 = (uint *****)0x0;
    local_cc = (int *)CONCAT31(local_cc._1_3_,local_a0._0_1_);
    local_d0 = local_a4;
    FUN_019c6f9c(&local_140,&local_d0);
    if (local_140 == (uint ****)0x80000000) {
      local_148 = (uint *****)0x0;
      local_14c = (uint *****)&SUB_00000004;
      local_150 = (uint *****)0x0;
      DataMemoryBarrier(0xb);
      do {
        ppppuVar30 = *local_d0;
        bVar11 = (bool)hasExclusiveAccess(local_d0);
      } while (!bVar11);
      *local_d0 = (uint ****)((int)ppppuVar30 - 1);
      if (ppppuVar30 == (uint ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(local_d0);
      }
    }
    else {
      pppppuVar27 = (uint *****)thunk_FUN_01be5118(0x30);
      if (pppppuVar27 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00664620(4,0x30);
      }
      unaff_r10 = (uint *****)&local_48;
      *pppppuVar27 = local_140;
      pppppuVar27[1] = (uint ****)local_13c;
      pppppuVar27[2] = (uint ****)local_138;
      iVar18 = 0xc;
      local_40 = (uint *****)&DAT_00000001;
      local_48 = (uint *****)&SUB_00000004;
      local_c0 = CONCAT31(local_c0._1_3_,local_cc._0_1_);
      local_c4 = local_d0;
      local_44 = pppppuVar27;
      while (pppppuVar31 = local_40, FUN_019c6f9c(pppppuVar28,&local_c4),
            local_a8 != (uint *****)&DAT_80000000) {
        if (pppppuVar31 == local_48) {
          FUN_006520b4(unaff_r10,pppppuVar31,1,4,0xc);
          pppppuVar27 = local_44;
        }
        puVar6 = (undefined4 *)((int)pppppuVar27 + iVar18);
        local_40 = (uint *****)((int)pppppuVar31 + 1);
        iVar18 = iVar18 + 0xc;
        *puVar6 = local_a8;
        puVar6[1] = local_a4;
        puVar6[2] = local_a0;
      }
      DataMemoryBarrier(0xb);
      do {
        ppppuVar30 = *local_c4;
        bVar11 = (bool)hasExclusiveAccess(local_c4);
      } while (!bVar11);
      *local_c4 = (uint ****)((int)ppppuVar30 - 1);
      if (ppppuVar30 == (uint ****)0x1) {
        DataMemoryBarrier(0xb);
        FUN_019ad05c(local_c4);
      }
      local_150 = local_48;
      local_14c = local_44;
      local_148 = local_40;
    }
  }
  local_118 = (uint *****)&local_150;
  local_11c = 0;
  local_124 = (uint *****)0x0;
  local_134 = 0;
  pppppuVar7 = (uint *****)((int)pppppuVar15 + -2);
  local_128 = 1;
  local_198 = (uint *****)&DAT_0000000a;
  local_12c = 10;
  bVar11 = false;
  local_140 = (uint ****)0xa;
  pppppuVar31 = (uint *****)0x0;
  local_1d8 = (uint *****)0x0;
  pppppuVar27 = (uint *****)0x0;
  local_13c = pppppuVar15;
  local_138 = pppppuVar29;
  local_130 = pppppuVar29;
  local_120 = pppppuVar29;
  uVar16 = 0;
LAB_01078a88:
  if (!bVar11) {
    bVar11 = false;
    local_1c4 = local_1ac;
    local_1c0 = local_1f4;
    local_1bc = local_1a8;
    pppppuVar24 = local_1d8;
    pppppuVar32 = pppppuVar31;
    local_1cc = local_198;
    local_1c8 = unaff_r10;
    local_1b8 = pppppuVar28;
    local_1b4 = pppppuVar27;
    uVar1 = uVar16;
LAB_01078ad8:
    pppppuVar31 = pppppuVar32;
    pppppuVar28 = pppppuVar24;
    local_198 = pppppuVar15;
    if (pppppuVar32 <= pppppuVar29) {
      uVar22 = local_12c & 0xff;
      do {
        uVar17 = (int)pppppuVar29 - (int)pppppuVar32;
        puVar20 = (undefined1 *)((int)pppppuVar15 + (int)pppppuVar32);
        if (uVar17 < 8) {
          uVar12 = 0;
          if (uVar17 == 0) {
            uVar35 = 0;
          }
          else {
            do {
              if (puVar20[uVar12] == '\n') {
                uVar35 = CONCAT44(uVar12,1);
                goto LAB_01078b40;
              }
              uVar12 = uVar12 + 1;
            } while (uVar17 != uVar12);
            uVar35 = (ulonglong)uVar17 << 0x20;
          }
        }
        else {
          uVar35 = FUN_01307168(10,puVar20);
        }
LAB_01078b40:
        iVar18 = (int)(uVar35 >> 0x20);
        if ((uVar35 & 1) == 0) {
          pppppuVar31 = pppppuVar29;
          break;
        }
        pppppuVar8 = (uint *****)((int)pppppuVar32 + iVar18);
        pppppuVar32 = (uint *****)((int)pppppuVar8 + 1);
        pppppuVar31 = pppppuVar32;
        if ((pppppuVar8 < pppppuVar29) && ((byte)puVar20[iVar18] == uVar22)) {
          bVar19 = false;
          pppppuVar8 = pppppuVar32;
          local_1d8 = pppppuVar32;
          local_1b4 = pppppuVar32;
          goto LAB_01078b94;
        }
      } while (pppppuVar32 <= pppppuVar29);
    }
    bVar19 = true;
    uVar1 = 1;
    bVar11 = true;
    pppppuVar32 = pppppuVar29;
    pppppuVar8 = pppppuVar24;
    if (pppppuVar29 == pppppuVar24) goto LAB_01079384;
LAB_01078b94:
    iVar18 = (int)pppppuVar32 - (int)pppppuVar24;
    if ((iVar18 == 0) || (((undefined1 *)((int)pppppuVar15 + -1))[(int)pppppuVar32] != '\n')) {
      iVar13 = iVar18;
    }
    else {
      iVar13 = iVar18 + -1;
      if ((iVar13 != 0) &&
         (local_198 = pppppuVar7, *(char *)((int)pppppuVar7 + (int)pppppuVar32) == '\r')) {
        iVar13 = iVar18 + -2;
      }
    }
    if ((undefined1 *)((int)pppppuVar15 + (int)pppppuVar24) == (undefined1 *)0x0) goto LAB_01079384;
    uVar34 = FUN_0073498c((undefined1 *)((int)pppppuVar15 + (int)pppppuVar24),iVar13);
    local_a4 = (uint *****)((ulonglong)uVar34 >> 0x20);
    local_a0 = (uint *****)uVar34;
    local_8c = (code *)CONCAT22(local_8c._2_2_,1);
    local_94 = (code *)((int)local_a0 + (int)local_a4);
    local_90 = (undefined8 *)0x0;
    local_a8 = (uint *****)0x0;
    local_9c = local_a4;
    local_98 = local_a0;
    uVar35 = FUN_013182f8(&local_a8);
    uVar34 = FUN_013182f8(&local_a8);
    if ((int)uVar34 == 0) {
      uVar34 = 1;
    }
    FUN_019c63ec(&local_48,(int)uVar34,(int)((ulonglong)uVar34 >> 0x20),"\\134g",0x5c);
    pppppuVar32 = local_44;
    FUN_019c63ec(&local_b8,local_44,local_40,&DAT_0056e53c,0x20);
    pppppuVar28 = local_b4;
    FUN_019c63ec(&local_c4,local_b4,local_b0,&DAT_0056f908,9);
    uVar21 = local_c0;
    FUN_019c63ec(&local_d0,local_c0,local_bc,&DAT_0056f1d8,10);
    FUN_0134bd64(local_c4,uVar21);
    FUN_0134bd64(local_b8,pppppuVar28);
    FUN_0134bd64(local_48,pppppuVar32);
    if ((int)uVar35 == 0) {
      uVar35 = 1;
    }
    unaff_r10 = (uint *****)(uVar35 >> 0x20);
    uVar21 = (undefined4)uVar35;
    uVar36 = FUN_013182f8(&local_a8);
    pppppuVar28 = local_c8;
    piVar3 = local_cc;
    pppppuVar32 = local_d0;
    if ((int)uVar36 == 0) {
      uVar36 = ZEXT48(&DAT_00000001);
    }
    local_198 = (uint *****)(uVar36 >> 0x20);
    piVar26 = (int *)uVar36;
    switch(local_198) {
    case (uint *****)0x3:
      uVar23 = 3;
      pcVar14 = "nfs";
      goto LAB_01078e84;
    case (uint *****)0x4:
      if (((*piVar26 != 0x636f7270) && (*piVar26 != 0x73666963)) && (*piVar26 != 0x3473666e))
      goto switchD_01078d3c_caseD_9;
      break;
    case (uint *****)0x5:
      uVar23 = 5;
      pcVar14 = "sysfs";
      goto LAB_01078e84;
    case (uint *****)0x6:
      iVar18 = thunk_FUN_01bed842(piVar26,"rootfs",6);
      if (iVar18 != 0) {
        iVar18 = thunk_FUN_01bed842(piVar26,"cgroup",6);
        if (iVar18 != 0) {
          uVar23 = 6;
          pcVar14 = "pstore";
          goto LAB_01078e84;
        }
      }
      break;
    case (uint *****)0x7:
      iVar18 = thunk_FUN_01bed842(piVar26,"cgroup2",7);
      if (iVar18 != 0) {
        uVar23 = 7;
        pcVar14 = "iso9660";
        goto LAB_01078e84;
      }
      break;
    case (uint *****)0x8:
      iVar18 = thunk_FUN_01bed842(piVar26,&DAT_00570300,8);
      if (iVar18 != 0) {
        uVar23 = 8;
        pcVar14 = &DAT_00570478;
        goto LAB_01078e84;
      }
      break;
    default:
      goto switchD_01078d3c_caseD_9;
    case (uint *****)0xa:
      uVar23 = 10;
      pcVar14 = "rpc_pipefs";
LAB_01078e84:
      iVar18 = thunk_FUN_01bed842(piVar26,pcVar14,uVar23);
      if (iVar18 == 0) break;
switchD_01078d3c_caseD_9:
      if (pppppuVar28 < &SUB_00000004) goto LAB_01078e98;
      if (*piVar3 == 0x7379732f) break;
      if (pppppuVar28 == (uint *****)&SUB_00000004) {
        if (*piVar3 != 0x6e75722f) goto LAB_01078e98;
        break;
      }
      iVar18 = thunk_FUN_01bed842("/proc",piVar3,5);
      if (iVar18 == 0) break;
      if (*piVar3 == 0x6e75722f) {
        if (&DAT_00000009 < pppppuVar28) {
          iVar18 = thunk_FUN_01bed842("/run/media",piVar3,10);
          if (iVar18 == 0) goto LAB_01078e98;
        }
        break;
      }
LAB_01078e98:
      if (0x5ffffffff < uVar35) {
        iVar18 = thunk_FUN_01bed842("sunrpc",uVar21,6);
        if (iVar18 == 0) break;
      }
      pppppuVar2 = local_148;
      pppppuVar24 = local_14c;
      uVar23 = 0;
      if ((int)pppppuVar28 < 0) {
LAB_010795bc:
        local_11c = CONCAT11(uVar1,(undefined1)local_11c);
        local_124 = local_1b4;
                    /* WARNING: Subroutine does not return */
        FUN_00664620(uVar23,local_1ec);
      }
      if (pppppuVar28 == (uint *****)0x0) {
        local_1ec = (uint *****)&DAT_00000001;
        local_a8 = (uint *****)0x0;
      }
      else {
        uVar23 = 1;
        local_1ec = (uint *****)FUN_01298504(pppppuVar28,1);
        if (local_1ec == (uint *****)0x0) {
          local_1ec = pppppuVar28;
          goto LAB_010795bc;
        }
        local_a8 = pppppuVar28;
      }
      local_a4 = local_1ec;
      FUN_01bed4e2(local_1ec,piVar3,pppppuVar28);
      local_a0 = pppppuVar28;
      FUN_006666a0(&local_a8);
      pppppuVar5 = local_a4;
      pppppuVar4 = local_a8;
      *(undefined1 *)((int)local_a4 + (int)pppppuVar28) = 0;
      uVar34 = FUN_019c94fc(uVar21,unaff_r10);
      FUN_01bed93e(&local_a8,0,0x60);
      do {
        iVar18 = FUN_01bead2a(pppppuVar5,&local_a8);
        if (-1 < iVar18) {
          if (iVar18 == 0) {
            uVar22 = (uint)(ZEXT48(local_a8) * ZEXT48(local_9c));
            local_1f4 = (int)(ZEXT48(local_a0) * ZEXT48(local_a8));
            uVar12 = (uint)(ZEXT48(local_a0) * ZEXT48(local_a8) >> 0x20);
            local_1a8 = uVar12 + uVar22;
            uVar17 = (uint)(ZEXT48(local_a8) * ZEXT48(local_8c));
            if ((int)(ZEXT48(local_a8) * ZEXT48(local_9c) >> 0x20) != 0 || CARRY4(uVar12,uVar22)) {
              local_1a8 = -1;
              local_1f4 = -1;
            }
            uVar23 = (undefined4)(ZEXT48(local_90) * ZEXT48(local_a8));
            uVar22 = (uint)(ZEXT48(local_90) * ZEXT48(local_a8) >> 0x20);
            local_1ac = uVar22 + uVar17;
            if ((int)(ZEXT48(local_a8) * ZEXT48(local_8c) >> 0x20) != 0 || CARRY4(uVar22,uVar17)) {
              local_1ac = -1;
              uVar23 = 0xffffffff;
            }
            if (local_1f4 != 0 || local_1a8 != 0) {
              FUN_019afae4(&local_48,piVar3,pppppuVar28);
              local_22c = 0;
              if (pppppuVar2 == (uint *****)0x0) goto LAB_010791dc;
              iVar18 = (int)pppppuVar2 * 0xc;
              pppppuVar24 = pppppuVar24 + 1;
              goto LAB_0107919c;
            }
          }
          break;
        }
        piVar9 = (int *)FUN_01be3244();
      } while (*piVar9 == 4);
      uVar34 = CONCAT44(local_1b8,3);
      local_198 = local_1cc;
      local_1ac = local_1c4;
      local_1a8 = local_1bc;
      local_1f4 = local_1c0;
      unaff_r10 = local_1c8;
      goto LAB_01079094;
    }
    FUN_0134bd64(pppppuVar32,piVar3);
    goto LAB_01078fb8;
  }
LAB_0107939c:
  FUN_019c71c4(&local_150);
  FUN_0134bd64(pppppuVar25,pppppuVar15);
  iVar18 = local_15c;
  pppppuVar29 = local_168;
  pppppuVar15 = local_16c;
  local_a8 = (uint *****)local_160;
  local_a4 = (uint *****)local_15c;
  local_a0 = (uint *****)local_158;
  if (local_158 != (uint ****)0x0) {
    local_198 = (uint *****)((int)local_158 * 0x40);
    pppppuVar25 = (uint *****)0x0;
    do {
      pppppuVar27 = (uint *****)(iVar18 + (int)pppppuVar25);
      iVar13 = FUN_019afb44(pppppuVar15,pppppuVar29,pppppuVar27[0xd],pppppuVar27[0xe]);
      if (iVar13 != 0) {
        puVar20 = (undefined1 *)((int)local_198 + (-0x40 - (int)pppppuVar25));
        if (puVar20 != (undefined1 *)0x0) {
          ppppuVar30 = pppppuVar27[0xe];
          pppppuVar25 = pppppuVar27 + 0x1e;
          uVar22 = (uint)puVar20 >> 6;
          do {
            iVar18 = FUN_019afb44(pppppuVar15,pppppuVar29,pppppuVar25[-1],*pppppuVar25);
            if ((iVar18 != 0) && (ppppuVar30 <= *pppppuVar25)) {
              pppppuVar27 = pppppuVar25 + -0xe;
              ppppuVar30 = *pppppuVar25;
            }
            pppppuVar25 = pppppuVar25 + 0x10;
            uVar22 = uVar22 - 1;
            iVar18 = 0;
          } while (uVar22 != 0);
        }
        pppppuVar28 = (uint *****)pppppuVar27[4];
        local_198 = (uint *****)pppppuVar27[5];
        bVar11 = false;
        goto LAB_0107946c;
      }
      pppppuVar25 = pppppuVar25 + 0x10;
      pppppuVar28 = pppppuVar27;
    } while (local_198 != pppppuVar25);
  }
  iVar18 = FUN_01079b94(&local_178,&local_170);
  bVar11 = true;
LAB_0107946c:
  FUN_01079b44(&local_a8);
  FUN_019bb7e0(local_170,local_16c);
  if (!bVar11) {
    dVar33 = (double)FUN_01bf0e80(param_3,param_4);
    dVar33 = dVar33 * 1.05;
    local_48 = pppppuVar28;
    local_44 = local_198;
    local_180 = FUN_01bf0b64(SUB84(dVar33,0),(int)((ulonglong)dVar33 >> 0x20));
    iVar18 = 0;
    if (dVar33 < 0.0) {
      local_180 = 0;
    }
    if (1.844674407370955e+19 < dVar33) {
      local_180 = 0xffffffffffffffff;
    }
    pppppuVar15 = (uint *****)((ulonglong)local_180 >> 0x20);
    if (local_198 <= pppppuVar15 &&
        (uint)((uint *****)local_180 <= pppppuVar28) <= (uint)((int)local_198 - (int)pppppuVar15)) {
      FUN_006643f0(&local_110,param_1,param_2);
      local_90 = &local_180;
      local_8c = FUN_012fd074;
      local_9c = (uint *****)FUN_012fd074;
      local_a0 = (uint *****)&local_48;
      local_94 = FUN_013025ec;
      local_98 = (uint *****)&DAT_00570588;
      local_a4 = (uint *****)&LAB_012b97d8;
      local_a8 = (uint *****)&local_110;
      FUN_00664898(&local_140,&DAT_0058f636,&local_a8);
      if ((uint ***)local_110 != (uint ***)0x80000000) {
        FUN_019bb7e0((uint ***)local_110,local_110._4_4_);
      }
      local_a8 = (uint *****)local_140;
      local_a4 = local_13c;
      local_a0 = local_138;
      iVar18 = FUN_006679ac(&local_a8);
    }
  }
  return iVar18;
LAB_0107919c:
  do {
    if ((uint *****)pppppuVar24[1] == unaff_r10) {
      iVar13 = thunk_FUN_01bed842(*pppppuVar24,uVar21,unaff_r10);
      if (iVar13 == 0) {
        local_22c = 1;
        goto LAB_010791dc;
      }
    }
    pppppuVar24 = pppppuVar24 + 3;
    iVar18 = iVar18 + -0xc;
  } while (iVar18 != 0);
  local_22c = 0;
LAB_010791dc:
  local_230 = (uint *****)0x0;
  if ((longlong)uVar35 < 0) {
LAB_010795f0:
    local_11c = CONCAT11(uVar1,(undefined1)local_11c);
    local_124 = local_1b4;
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_230,local_224);
  }
  local_1b8 = (uint *****)0x0;
  if (unaff_r10 == (uint *****)0x0) {
    local_224 = (uint *****)&DAT_00000001;
  }
  else {
    local_230 = (uint *****)&DAT_00000001;
    local_224 = (uint *****)FUN_01298504(unaff_r10,1);
    if (local_224 == (uint *****)0x0) {
      local_224 = unaff_r10;
      goto LAB_010795f0;
    }
    local_230 = unaff_r10;
  }
  FUN_01bed4e2(local_224,uVar21,unaff_r10);
  if ((longlong)uVar36 < 0) {
LAB_0107961c:
    local_11c = CONCAT11(uVar1,(undefined1)local_11c);
    local_124 = local_1b4;
                    /* WARNING: Subroutine does not return */
    FUN_00664620(local_1b8,local_228);
  }
  if (local_198 == (uint *****)0x0) {
    local_228 = (uint *****)&DAT_00000001;
    local_234 = (uint *****)0x0;
  }
  else {
    local_228 = (uint *****)FUN_01298504(local_198,1);
    if (local_228 == (uint *****)0x0) {
      local_1b8 = (uint *****)0x1;
      local_228 = local_198;
      goto LAB_0107961c;
    }
    local_234 = local_198;
  }
  FUN_01bed4e2(local_228,piVar26,local_198);
  local_b8 = local_48;
  local_b4 = local_44;
  local_b0 = local_40;
  local_1b0 = uVar23;
LAB_01079094:
  pppppuVar28 = (uint *****)((ulonglong)uVar34 >> 0x20);
  FUN_0134bd64(pppppuVar4,pppppuVar5);
  FUN_0134bd64(pppppuVar32,piVar3);
  ppppuVar30 = local_158;
  if ((int)uVar34 != 3) goto LAB_010792a0;
  local_1cc = local_198;
  local_1c4 = local_1ac;
  local_1bc = local_1a8;
  local_1c8 = unaff_r10;
  local_1c0 = local_1f4;
  local_1b8 = pppppuVar28;
LAB_01078fb8:
  pppppuVar24 = pppppuVar8;
  pppppuVar28 = pppppuVar8;
  local_198 = pppppuVar15;
  pppppuVar32 = pppppuVar31;
  if (bVar19) {
LAB_01079384:
    local_11c = CONCAT11(uVar16,(undefined1)local_11c);
    local_124 = pppppuVar27;
    goto LAB_0107939c;
  }
  goto LAB_01078ad8;
LAB_010792a0:
  local_e0 = local_b8;
  pppppuStack_dc = local_b4;
  pppppuStack_d8 = local_b0;
  local_104 = local_1a8;
  local_100 = local_1b0;
  local_fc = local_1ac;
  local_d4 = CONCAT31(local_d4._1_3_,local_22c);
  local_e4 = local_198;
  local_e8 = local_228;
  local_ec = local_234;
  local_f4 = local_224;
  local_f8 = local_230;
  local_108 = local_1f4;
  local_f0 = unaff_r10;
  local_110 = uVar34;
  if (local_158 == local_160) {
    FUN_007024c0(&local_160);
  }
  puVar10 = (undefined8 *)(local_15c + (int)ppppuVar30 * 0x40);
  *puVar10 = local_110;
  *(int *)(puVar10 + 1) = local_108;
  *(int *)((int)puVar10 + 0xc) = local_104;
  *(undefined4 *)(puVar10 + 2) = local_100;
  *(int *)((int)puVar10 + 0x14) = local_fc;
  *(uint ******)(puVar10 + 3) = local_f8;
  *(uint ******)((int)puVar10 + 0x1c) = local_f4;
  *(uint ******)(puVar10 + 4) = local_f0;
  *(uint ******)((int)puVar10 + 0x24) = local_ec;
  *(uint ******)(puVar10 + 5) = local_e8;
  *(uint ******)((int)puVar10 + 0x2c) = local_e4;
  *(uint ******)(puVar10 + 6) = local_e0;
  *(uint ******)((int)puVar10 + 0x34) = pppppuStack_dc;
  *(uint ******)(puVar10 + 7) = pppppuStack_d8;
  *(undefined4 *)((int)puVar10 + 0x3c) = local_d4;
  local_158 = (uint ****)((int)ppppuVar30 + 1);
  pppppuVar27 = local_1b4;
  uVar16 = uVar1;
  goto LAB_01078a88;
}


// FUN_0164a20c @ 0164a20c size=5680 calls_out=22 calls_in=1
// strings: time is already frozen

/* WARNING: Removing unreachable block (ram,0x0164a3dc) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0164a20c(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  code *pcVar2;
  undefined1 uVar3;
  char cVar4;
  undefined4 *****pppppuVar5;
  undefined4 *puVar6;
  undefined4 ****ppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 ****ppppuVar9;
  int *piVar10;
  int *piVar11;
  int *piVar12;
  int iVar13;
  undefined4 ****ppppuVar14;
  undefined4 uVar15;
  undefined4 ****ppppuVar16;
  undefined4 ****ppppuVar17;
  undefined4 *****pppppuVar18;
  int *piVar19;
  undefined4 *puVar20;
  int *piVar21;
  undefined4 *****pppppuVar22;
  int *piVar23;
  int iVar24;
  int iVar25;
  char *pcVar26;
  undefined4 ***pppuVar27;
  undefined4 *extraout_r12;
  bool bVar28;
  bool bVar29;
  uint local_1d8;
  undefined4 *****local_1d4;
  undefined4 *local_1cc;
  undefined4 ****local_1c0;
  int *local_180;
  uint uStack_17c;
  int iStack_178;
  undefined4 *local_174;
  undefined4 ****local_170;
  int *local_16c;
  undefined4 *****local_168;
  int *local_164;
  undefined4 *****local_160;
  uint local_15c;
  undefined4 ****local_158;
  int *piStack_154;
  undefined4 *****pppppuStack_150;
  uint uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 *****local_140;
  undefined4 *local_13c;
  undefined1 *local_138;
  undefined4 local_134;
  undefined4 local_130;
  undefined4 ***local_128;
  int *piStack_124;
  undefined4 ****ppppuStack_120;
  int *piStack_11c;
  uint local_118;
  int iStack_114;
  undefined4 *puStack_110;
  undefined4 *puStack_10c;
  undefined4 ****local_108;
  int *local_104;
  undefined4 *****local_100;
  int *local_fc;
  undefined4 *****local_f8;
  uint local_f4;
  undefined4 ****local_f0;
  int *local_ec;
  undefined4 *****local_e8;
  uint local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 *****local_98;
  undefined4 *local_94;
  undefined4 ****local_90;
  int *local_8c;
  undefined4 *****local_88;
  uint uStack_84;
  undefined4 ****local_80;
  int *piStack_7c;
  undefined4 *****pppppuStack_78;
  uint uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 ****local_68;
  int *piStack_64;
  undefined4 *****pppppuStack_60;
  uint uStack_5c;
  undefined1 *puStack_58;
  uint local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  uint uStack_44;
  uint local_40;
  undefined1 *puStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if ((char)param_2[1] != '\0') {
    pppuVar27 = (undefined4 ***)*param_2;
    piVar11 = (int *)FUN_016d371a(0x80000);
    if ((int)piVar11 < 0) {
      puVar20 = (undefined4 *)FUN_016d2bc8();
      uVar15 = *puVar20;
    }
    else {
      piVar12 = (int *)FUN_016d37b4(0,0x80800);
      if ((int)piVar12 < 0) {
        puVar20 = (undefined4 *)FUN_016d2bc8();
        uVar15 = *puVar20;
      }
      else {
        local_108 = (undefined4 ****)0x80002001;
        local_fc = (int *)0x0;
        local_100 = (undefined4 *****)0x0;
        iVar13 = FUN_016d3742(piVar11,1,piVar12,&local_108);
        if ((iVar13 < 0) ||
           (ppppuVar14 = (undefined4 ****)FUN_016d2d0c(piVar11,0x406,3),
           ppppuVar14 == (undefined4 ****)0xffffffff)) {
          puVar20 = (undefined4 *)FUN_016d2bc8();
          uVar15 = *puVar20;
          FUN_016dffb2(piVar12);
        }
        else {
          uVar1 = (int)pppuVar27 * 0x10;
          bVar29 = (undefined4 ***)0xffffffe < pppuVar27;
          bVar28 = pppuVar27 == (undefined4 ***)0xfffffff;
          uVar15 = 0;
          if (pppuVar27 < (undefined4 ***)0x10000000) {
            bVar29 = 0x7ffffff7 < uVar1;
            bVar28 = uVar1 == 0x7ffffff8;
          }
          if (bVar29 && !bVar28) {
LAB_0164a2c4:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar15,uVar1);
          }
          if (uVar1 == 0) {
            piVar19 = (int *)&DAT_00000008;
            pppuVar27 = (undefined4 ***)0x0;
          }
          else {
            piVar19 = (int *)thunk_FUN_016d4a50(uVar1);
            if (piVar19 == (int *)0x0) {
              uVar15 = 8;
              goto LAB_0164a2c4;
            }
          }
          local_100 = (undefined4 *****)0x0;
          local_f8 = (undefined4 *****)((uint)local_f8 & 0xffffff00);
          local_108 = (undefined4 ****)pppuVar27;
          local_104 = piVar19;
          local_fc = piVar11;
          local_f4 = thunk_FUN_016d4a50(0x40);
          uStack_17c = (uint)local_f8;
          local_180 = local_fc;
          if (local_f4 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(4,0x40);
          }
          local_164 = (int *)((uint)local_164 & 0xffffff00);
          local_168 = (undefined4 *****)0x0;
          local_16c = (int *)0x0;
          local_170 = (undefined4 ****)0x0;
          local_f8 = (undefined4 *****)0x10;
          local_fc = (int *)((uint)local_fc & 0xffffff00);
          local_100 = (undefined4 *****)0x0;
          local_f0 = (undefined4 ****)0x0;
          local_ec = (int *)0x0;
          local_e8 = (undefined4 *****)0x0;
          local_e4 = local_e4 & 0xffffff00;
          local_1c0 = (undefined4 ****)0x0;
          DataMemoryBarrier(0xb);
          local_108 = ppppuVar14;
          local_104 = piVar12;
          if (DAT_018d90e8 != 0) {
            FUN_016449a0();
          }
          iStack_178 = FUN_016d2d0c(DAT_018d90dc,0x406,3);
          if (iStack_178 == -1) {
            puVar20 = (undefined4 *)FUN_016d2bc8();
            uVar15 = *puVar20;
          }
          else {
            local_134 = 0;
            local_138 = (undefined1 *)0x1;
            local_140 = (undefined4 *****)0x80002001;
            iVar13 = FUN_016d3742(ppppuVar14,1,iStack_178,&local_140);
            if (-1 < iVar13) {
              puVar20 = (undefined4 *)thunk_FUN_016d4a50(8);
              if (puVar20 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00600874(4,8);
              }
              local_1d4 = &local_100;
              local_168 = (undefined4 *****)0x0;
              *puVar20 = 1;
              piVar11 = puVar20 + 1;
              *piVar11 = 1;
              local_164 = local_180;
              local_160 = (undefined4 *****)uStack_17c;
              do {
                iVar13 = *piVar11;
                while (iVar13 != -1) {
                  local_170 = (undefined4 ****)pppuVar27;
                  local_16c = piVar19;
                  local_15c = iStack_178;
                  local_158 = (undefined4 ****)puVar20;
                  if (iVar13 < 0) {
                    local_13c = &DAT_0157d360;
                    local_140 = (undefined4 *****)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478(&DAT_00590e71,&local_140,&DAT_018ae278);
                  }
                  iVar25 = *piVar11;
                  if (iVar25 == iVar13) {
                    bVar28 = false;
                    bVar29 = (bool)hasExclusiveAccess(piVar11);
                    if (bVar29) {
                      *piVar11 = iVar13 + 1;
                      DataMemoryBarrier(0xb);
                      bVar28 = true;
                    }
                  }
                  else {
                    bVar28 = false;
                    ClearExclusiveLocal();
                  }
                  iVar13 = iVar25;
                  if (bVar28) {
                    piVar11 = puVar20 + 1;
                    goto LAB_0164b5d0;
                  }
                }
                HintYield();
              } while( true );
            }
            puVar20 = (undefined4 *)FUN_016d2bc8();
            uVar15 = *puVar20;
            FUN_016dffb2(iStack_178);
          }
          if (pppuVar27 != (undefined4 ***)0x0) {
            thunk_FUN_016d3fb4(piVar19);
          }
          FUN_016dffb2(local_180);
          FUN_016dffb2(ppppuVar14);
          ppppuVar14 = local_f0;
          uVar1 = local_f4;
          if (local_f0 != (undefined4 ****)0x0) {
            iVar13 = 0;
            do {
              piVar19 = *(int **)(uVar1 + iVar13 * 4);
              iVar25 = iVar13 + 1;
              DataMemoryBarrier(0xb);
              do {
                iVar24 = *piVar19;
                bVar28 = (bool)hasExclusiveAccess(piVar19);
              } while (!bVar28);
              *piVar19 = iVar24 + -1;
              if (iVar24 == 1) {
                DataMemoryBarrier(0xb);
                FUN_01659660(*(undefined4 *)(uVar1 + iVar13 * 4));
              }
              iVar13 = iVar25;
            } while ((undefined4 ****)iVar25 != ppppuVar14);
          }
          if (local_f8 != (undefined4 *****)0x0) {
            thunk_FUN_016d3fb4(local_f4);
          }
          piVar11 = local_104;
        }
      }
      FUN_016dffb2(piVar11);
    }
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = uVar15;
    return;
  }
  local_1c0 = (undefined4 ****)0x164a2d4;
  piVar19 = (int *)thunk_FUN_016d4a50(0x14);
  if (piVar19 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x14);
  }
  *(undefined1 *)(piVar19 + 4) = 0;
  *piVar19 = 1;
  piVar19[1] = 1;
  piVar19[2] = 0;
  piVar19[3] = 0;
  do {
    iVar13 = *piVar19;
    bVar28 = (bool)hasExclusiveAccess(piVar19);
  } while (!bVar28);
  *piVar19 = iVar13 + 1;
  if (iVar13 < 0) {
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0xfdee,0x164b854);
    (*pcVar2)();
  }
  ppppuVar14 = (undefined4 ****)0xffffffff;
  pppuVar27 = (undefined4 ***)0x80000000;
  local_1cc = (undefined4 *)0x0;
  piVar11 = piVar19;
  puVar20 = extraout_r12;
LAB_0164a328:
  piVar10 = piStack_7c;
  ppppuVar9 = local_80;
  uVar1 = uStack_84;
  pppppuVar8 = local_88;
  piVar12 = local_8c;
  ppppuVar7 = local_90;
  puVar6 = local_94;
  pppppuVar5 = local_98;
  uVar3 = *(undefined1 *)((int)param_2 + 6);
  cVar4 = *(char *)((int)param_2 + 7);
  FUN_015f3b0c(&local_108,1);
  local_f8 = local_100;
  pppppuVar18 = &local_100;
  local_dc = CONCAT31(local_dc._1_3_,uVar3);
  local_f0 = local_108;
  local_100 = (undefined4 *****)local_108;
  local_fc = local_104;
  local_ec = local_104;
  local_104 = (int *)0x0;
  local_108 = (undefined4 ****)0x0;
  local_e0 = 0;
  local_e8 = local_f8;
  if (cVar4 == '\0') {
LAB_0164a5b4:
    local_170 = local_108;
    local_16c = local_104;
    local_168 = local_100;
    local_164 = local_fc;
    local_160 = local_f8;
    local_15c = local_f4;
    local_158 = local_f0;
    piStack_154 = local_ec;
    pppppuStack_150 = local_e8;
    uStack_14c = local_e4;
    uStack_148 = local_e0;
    uStack_144 = local_dc;
    local_fc = local_180;
    local_f8 = (undefined4 *****)uStack_17c;
    local_f4 = iStack_178;
    local_f0 = (undefined4 ****)local_174;
    local_108 = (undefined4 ****)pppuVar27;
    local_104 = piVar19;
    local_100 = (undefined4 *****)local_1c0;
    local_ec = puVar20;
    if (*(char *)((int)param_2 + 5) == '\0') {
      uVar15 = 2;
      ppppuVar16 = (undefined4 ****)&DAT_3b9aca00;
    }
    else {
      FUN_0165a9a4(&local_98,&local_170);
      ppppuVar16 = local_90;
      local_1d4 = local_98;
      local_1d8 = (uint)local_94;
      pppppuVar18 = (undefined4 *****)thunk_FUN_016d4a50(0xc60);
      if (pppppuVar18 == (undefined4 *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(8,0xc60);
      }
      pppppuVar18[0x106] = (undefined4 ****)0x1;
      uVar15 = 0;
      pppppuVar18[0x18a] = (undefined4 ****)0x2;
      pppppuVar18[0x20e] = (undefined4 ****)0x3;
      pppppuVar18[0x80] = (undefined4 ****)0x0;
      pppppuVar18[0x81] = (undefined4 ****)0x0;
      pppppuVar18[0x104] = (undefined4 ****)0x0;
      pppppuVar18[0x105] = (undefined4 ****)0x0;
      pppppuVar18[0x188] = (undefined4 ****)0x0;
      pppppuVar18[0x189] = (undefined4 ****)0x0;
      pppppuVar18[0x20c] = (undefined4 ****)0x0;
      pppppuVar18[0x20d] = (undefined4 ****)0x0;
      pppppuVar18[0x290] = (undefined4 ****)0x0;
      pppppuVar18[0x291] = (undefined4 ****)0x0;
      pppppuVar18[0x314] = (undefined4 ****)0x0;
      pppppuVar18[0x315] = (undefined4 ****)0x0;
      pppppuVar18[0x292] = (undefined4 ****)0x4;
      pppppuVar18[0x316] = (undefined4 ****)0x5;
      pppppuVar18[0x78] = (undefined4 ****)0x0;
      pppppuVar18[0x79] = (undefined4 ****)0x0;
      pppppuVar18[0x7a] = (undefined4 ****)0x0;
      pppppuVar18[0x7b] = (undefined4 ****)0x0;
      pppppuVar18[0x7c] = (undefined4 ****)0x0;
      pppppuVar18[0x7d] = (undefined4 ****)0x0;
      pppppuVar18[0x7e] = (undefined4 ****)0x0;
      pppppuVar18[0x7f] = (undefined4 ****)0x0;
      pppppuVar18[0x70] = (undefined4 ****)0x0;
      pppppuVar18[0x71] = (undefined4 ****)0x0;
      pppppuVar18[0x72] = (undefined4 ****)0x0;
      pppppuVar18[0x73] = (undefined4 ****)0x0;
      pppppuVar18[0x74] = (undefined4 ****)0x0;
      pppppuVar18[0x75] = (undefined4 ****)0x0;
      pppppuVar18[0x76] = (undefined4 ****)0x0;
      pppppuVar18[0x77] = (undefined4 ****)0x0;
      pppppuVar18[0x68] = (undefined4 ****)0x0;
      pppppuVar18[0x69] = (undefined4 ****)0x0;
      pppppuVar18[0x6a] = (undefined4 ****)0x0;
      pppppuVar18[0x6b] = (undefined4 ****)0x0;
      pppppuVar18[0x6c] = (undefined4 ****)0x0;
      pppppuVar18[0x6d] = (undefined4 ****)0x0;
      pppppuVar18[0x6e] = (undefined4 ****)0x0;
      pppppuVar18[0x6f] = (undefined4 ****)0x0;
      pppppuVar18[0x60] = (undefined4 ****)0x0;
      pppppuVar18[0x61] = (undefined4 ****)0x0;
      pppppuVar18[0x62] = (undefined4 ****)0x0;
      pppppuVar18[99] = (undefined4 ****)0x0;
      pppppuVar18[100] = (undefined4 ****)0x0;
      pppppuVar18[0x65] = (undefined4 ****)0x0;
      pppppuVar18[0x66] = (undefined4 ****)0x0;
      pppppuVar18[0x67] = (undefined4 ****)0x0;
      pppppuVar18[0x58] = (undefined4 ****)0x0;
      pppppuVar18[0x59] = (undefined4 ****)0x0;
      pppppuVar18[0x5a] = (undefined4 ****)0x0;
      pppppuVar18[0x5b] = (undefined4 ****)0x0;
      pppppuVar18[0x5c] = (undefined4 ****)0x0;
      pppppuVar18[0x5d] = (undefined4 ****)0x0;
      pppppuVar18[0x5e] = (undefined4 ****)0x0;
      pppppuVar18[0x5f] = (undefined4 ****)0x0;
      pppppuVar18[0x50] = (undefined4 ****)0x0;
      pppppuVar18[0x51] = (undefined4 ****)0x0;
      pppppuVar18[0x52] = (undefined4 ****)0x0;
      pppppuVar18[0x53] = (undefined4 ****)0x0;
      pppppuVar18[0x54] = (undefined4 ****)0x0;
      pppppuVar18[0x55] = (undefined4 ****)0x0;
      pppppuVar18[0x56] = (undefined4 ****)0x0;
      pppppuVar18[0x57] = (undefined4 ****)0x0;
      pppppuVar18[0x48] = (undefined4 ****)0x0;
      pppppuVar18[0x49] = (undefined4 ****)0x0;
      pppppuVar18[0x4a] = (undefined4 ****)0x0;
      pppppuVar18[0x4b] = (undefined4 ****)0x0;
      pppppuVar18[0x4c] = (undefined4 ****)0x0;
      pppppuVar18[0x4d] = (undefined4 ****)0x0;
      pppppuVar18[0x4e] = (undefined4 ****)0x0;
      pppppuVar18[0x4f] = (undefined4 ****)0x0;
      pppppuVar18[0x40] = (undefined4 ****)0x0;
      pppppuVar18[0x41] = (undefined4 ****)0x0;
      pppppuVar18[0x42] = (undefined4 ****)0x0;
      pppppuVar18[0x43] = (undefined4 ****)0x0;
      pppppuVar18[0x44] = (undefined4 ****)0x0;
      pppppuVar18[0x45] = (undefined4 ****)0x0;
      pppppuVar18[0x46] = (undefined4 ****)0x0;
      pppppuVar18[0x47] = (undefined4 ****)0x0;
      pppppuVar18[0x38] = (undefined4 ****)0x0;
      pppppuVar18[0x39] = (undefined4 ****)0x0;
      pppppuVar18[0x3a] = (undefined4 ****)0x0;
      pppppuVar18[0x3b] = (undefined4 ****)0x0;
      pppppuVar18[0x3c] = (undefined4 ****)0x0;
      pppppuVar18[0x3d] = (undefined4 ****)0x0;
      pppppuVar18[0x3e] = (undefined4 ****)0x0;
      pppppuVar18[0x3f] = (undefined4 ****)0x0;
      pppppuVar18[0x30] = (undefined4 ****)0x0;
      pppppuVar18[0x31] = (undefined4 ****)0x0;
      pppppuVar18[0x32] = (undefined4 ****)0x0;
      pppppuVar18[0x33] = (undefined4 ****)0x0;
      pppppuVar18[0x34] = (undefined4 ****)0x0;
      pppppuVar18[0x35] = (undefined4 ****)0x0;
      pppppuVar18[0x36] = (undefined4 ****)0x0;
      pppppuVar18[0x37] = (undefined4 ****)0x0;
      pppppuVar18[0x28] = (undefined4 ****)0x0;
      pppppuVar18[0x29] = (undefined4 ****)0x0;
      pppppuVar18[0x2a] = (undefined4 ****)0x0;
      pppppuVar18[0x2b] = (undefined4 ****)0x0;
      pppppuVar18[0x2c] = (undefined4 ****)0x0;
      pppppuVar18[0x2d] = (undefined4 ****)0x0;
      pppppuVar18[0x2e] = (undefined4 ****)0x0;
      pppppuVar18[0x2f] = (undefined4 ****)0x0;
      pppppuVar18[0x20] = (undefined4 ****)0x0;
      pppppuVar18[0x21] = (undefined4 ****)0x0;
      pppppuVar18[0x22] = (undefined4 ****)0x0;
      pppppuVar18[0x23] = (undefined4 ****)0x0;
      pppppuVar18[0x24] = (undefined4 ****)0x0;
      pppppuVar18[0x25] = (undefined4 ****)0x0;
      pppppuVar18[0x26] = (undefined4 ****)0x0;
      pppppuVar18[0x27] = (undefined4 ****)0x0;
      pppppuVar18[0x18] = (undefined4 ****)0x0;
      pppppuVar18[0x19] = (undefined4 ****)0x0;
      pppppuVar18[0x1a] = (undefined4 ****)0x0;
      pppppuVar18[0x1b] = (undefined4 ****)0x0;
      pppppuVar18[0x1c] = (undefined4 ****)0x0;
      pppppuVar18[0x1d] = (undefined4 ****)0x0;
      pppppuVar18[0x1e] = (undefined4 ****)0x0;
      pppppuVar18[0x1f] = (undefined4 ****)0x0;
      pppppuVar18[0x10] = (undefined4 ****)0x0;
      pppppuVar18[0x11] = (undefined4 ****)0x0;
      pppppuVar18[0x12] = (undefined4 ****)0x0;
      pppppuVar18[0x13] = (undefined4 ****)0x0;
      pppppuVar18[0x14] = (undefined4 ****)0x0;
      pppppuVar18[0x15] = (undefined4 ****)0x0;
      pppppuVar18[0x16] = (undefined4 ****)0x0;
      pppppuVar18[0x17] = (undefined4 ****)0x0;
      pppppuVar18[8] = (undefined4 ****)0x0;
      pppppuVar18[9] = (undefined4 ****)0x0;
      pppppuVar18[10] = (undefined4 ****)0x0;
      pppppuVar18[0xb] = (undefined4 ****)0x0;
      pppppuVar18[0xc] = (undefined4 ****)0x0;
      pppppuVar18[0xd] = (undefined4 ****)0x0;
      pppppuVar18[0xe] = (undefined4 ****)0x0;
      pppppuVar18[0xf] = (undefined4 ****)0x0;
      *pppppuVar18 = (undefined4 ****)0x0;
      pppppuVar18[1] = (undefined4 ****)0x0;
      pppppuVar18[2] = (undefined4 ****)0x0;
      pppppuVar18[3] = (undefined4 ****)0x0;
      pppppuVar18[4] = (undefined4 ****)0x0;
      pppppuVar18[5] = (undefined4 ****)0x0;
      pppppuVar18[6] = (undefined4 ****)0x0;
      pppppuVar18[7] = (undefined4 ****)0x0;
      pppppuVar18[0x82] = (undefined4 ****)0x0;
      pppppuVar18[0x84] = (undefined4 ****)0x0;
      pppppuVar18[0x85] = (undefined4 ****)0x0;
      pppppuVar18[0x86] = (undefined4 ****)0x0;
      pppppuVar18[0x87] = (undefined4 ****)0x0;
      pppppuVar18[0x88] = (undefined4 ****)0x0;
      pppppuVar18[0x89] = (undefined4 ****)0x0;
      pppppuVar18[0x8a] = (undefined4 ****)0x0;
      pppppuVar18[0x8b] = (undefined4 ****)0x0;
      pppppuVar18[0x8c] = (undefined4 ****)0x0;
      pppppuVar18[0x8d] = (undefined4 ****)0x0;
      pppppuVar18[0x8e] = (undefined4 ****)0x0;
      pppppuVar18[0x8f] = (undefined4 ****)0x0;
      pppppuVar18[0x90] = (undefined4 ****)0x0;
      pppppuVar18[0x91] = (undefined4 ****)0x0;
      pppppuVar18[0x92] = (undefined4 ****)0x0;
      pppppuVar18[0x93] = (undefined4 ****)0x0;
      pppppuVar18[0x94] = (undefined4 ****)0x0;
      pppppuVar18[0x95] = (undefined4 ****)0x0;
      pppppuVar18[0x96] = (undefined4 ****)0x0;
      pppppuVar18[0x97] = (undefined4 ****)0x0;
      pppppuVar18[0x98] = (undefined4 ****)0x0;
      pppppuVar18[0x99] = (undefined4 ****)0x0;
      pppppuVar18[0x9a] = (undefined4 ****)0x0;
      pppppuVar18[0x9b] = (undefined4 ****)0x0;
      pppppuVar18[0x9c] = (undefined4 ****)0x0;
      pppppuVar18[0x9d] = (undefined4 ****)0x0;
      pppppuVar18[0x9e] = (undefined4 ****)0x0;
      pppppuVar18[0x9f] = (undefined4 ****)0x0;
      pppppuVar18[0xa0] = (undefined4 ****)0x0;
      pppppuVar18[0xa1] = (undefined4 ****)0x0;
      pppppuVar18[0xa2] = (undefined4 ****)0x0;
      pppppuVar18[0xa3] = (undefined4 ****)0x0;
      pppppuVar18[0xa4] = (undefined4 ****)0x0;
      pppppuVar18[0xa5] = (undefined4 ****)0x0;
      pppppuVar18[0xa6] = (undefined4 ****)0x0;
      pppppuVar18[0xa7] = (undefined4 ****)0x0;
      pppppuVar18[0xa8] = (undefined4 ****)0x0;
      pppppuVar18[0xa9] = (undefined4 ****)0x0;
      pppppuVar18[0xaa] = (undefined4 ****)0x0;
      pppppuVar18[0xab] = (undefined4 ****)0x0;
      pppppuVar18[0xac] = (undefined4 ****)0x0;
      pppppuVar18[0xad] = (undefined4 ****)0x0;
      pppppuVar18[0xae] = (undefined4 ****)0x0;
      pppppuVar18[0xaf] = (undefined4 ****)0x0;
      pppppuVar18[0xb0] = (undefined4 ****)0x0;
      pppppuVar18[0xb1] = (undefined4 ****)0x0;
      pppppuVar18[0xb2] = (undefined4 ****)0x0;
      pppppuVar18[0xb3] = (undefined4 ****)0x0;
      pppppuVar18[0xb4] = (undefined4 ****)0x0;
      pppppuVar18[0xb5] = (undefined4 ****)0x0;
      pppppuVar18[0xb6] = (undefined4 ****)0x0;
      pppppuVar18[0xb7] = (undefined4 ****)0x0;
      pppppuVar18[0xb8] = (undefined4 ****)0x0;
      pppppuVar18[0xb9] = (undefined4 ****)0x0;
      pppppuVar18[0xba] = (undefined4 ****)0x0;
      pppppuVar18[0xbb] = (undefined4 ****)0x0;
      pppppuVar18[0xbc] = (undefined4 ****)0x0;
      pppppuVar18[0xbd] = (undefined4 ****)0x0;
      pppppuVar18[0xbe] = (undefined4 ****)0x0;
      pppppuVar18[0xbf] = (undefined4 ****)0x0;
      pppppuVar18[0xc0] = (undefined4 ****)0x0;
      pppppuVar18[0xc1] = (undefined4 ****)0x0;
      pppppuVar18[0xc2] = (undefined4 ****)0x0;
      pppppuVar18[0xc3] = (undefined4 ****)0x0;
      pppppuVar18[0xc4] = (undefined4 ****)0x0;
      pppppuVar18[0xc5] = (undefined4 ****)0x0;
      pppppuVar18[0xc6] = (undefined4 ****)0x0;
      pppppuVar18[199] = (undefined4 ****)0x0;
      pppppuVar18[200] = (undefined4 ****)0x0;
      pppppuVar18[0xc9] = (undefined4 ****)0x0;
      pppppuVar18[0xca] = (undefined4 ****)0x0;
      pppppuVar18[0xcb] = (undefined4 ****)0x0;
      pppppuVar18[0xcc] = (undefined4 ****)0x0;
      pppppuVar18[0xcd] = (undefined4 ****)0x0;
      pppppuVar18[0xce] = (undefined4 ****)0x0;
      pppppuVar18[0xcf] = (undefined4 ****)0x0;
      pppppuVar18[0xd0] = (undefined4 ****)0x0;
      pppppuVar18[0xd1] = (undefined4 ****)0x0;
      pppppuVar18[0xd2] = (undefined4 ****)0x0;
      pppppuVar18[0xd3] = (undefined4 ****)0x0;
      pppppuVar18[0xd4] = (undefined4 ****)0x0;
      pppppuVar18[0xd5] = (undefined4 ****)0x0;
      pppppuVar18[0xd6] = (undefined4 ****)0x0;
      pppppuVar18[0xd7] = (undefined4 ****)0x0;
      pppppuVar18[0xd8] = (undefined4 ****)0x0;
      pppppuVar18[0xd9] = (undefined4 ****)0x0;
      pppppuVar18[0xda] = (undefined4 ****)0x0;
      pppppuVar18[0xdb] = (undefined4 ****)0x0;
      pppppuVar18[0xdc] = (undefined4 ****)0x0;
      pppppuVar18[0xdd] = (undefined4 ****)0x0;
      pppppuVar18[0xde] = (undefined4 ****)0x0;
      pppppuVar18[0xdf] = (undefined4 ****)0x0;
      pppppuVar18[0xe0] = (undefined4 ****)0x0;
      pppppuVar18[0xe1] = (undefined4 ****)0x0;
      pppppuVar18[0xe2] = (undefined4 ****)0x0;
      pppppuVar18[0xe3] = (undefined4 ****)0x0;
      pppppuVar18[0xe4] = (undefined4 ****)0x0;
      pppppuVar18[0xe5] = (undefined4 ****)0x0;
      pppppuVar18[0xe6] = (undefined4 ****)0x0;
      pppppuVar18[0xe7] = (undefined4 ****)0x0;
      pppppuVar18[0xe8] = (undefined4 ****)0x0;
      pppppuVar18[0xe9] = (undefined4 ****)0x0;
      pppppuVar18[0xea] = (undefined4 ****)0x0;
      pppppuVar18[0xeb] = (undefined4 ****)0x0;
      pppppuVar18[0xec] = (undefined4 ****)0x0;
      pppppuVar18[0xed] = (undefined4 ****)0x0;
      pppppuVar18[0xee] = (undefined4 ****)0x0;
      pppppuVar18[0xef] = (undefined4 ****)0x0;
      pppppuVar18[0xf0] = (undefined4 ****)0x0;
      pppppuVar18[0xf1] = (undefined4 ****)0x0;
      pppppuVar18[0xf2] = (undefined4 ****)0x0;
      pppppuVar18[0xf3] = (undefined4 ****)0x0;
      pppppuVar18[0xf4] = (undefined4 ****)0x0;
      pppppuVar18[0xf5] = (undefined4 ****)0x0;
      pppppuVar18[0xf6] = (undefined4 ****)0x0;
      pppppuVar18[0xf7] = (undefined4 ****)0x0;
      pppppuVar18[0xf8] = (undefined4 ****)0x0;
      pppppuVar18[0xf9] = (undefined4 ****)0x0;
      pppppuVar18[0xfa] = (undefined4 ****)0x0;
      pppppuVar18[0xfb] = (undefined4 ****)0x0;
      pppppuVar18[0xfc] = (undefined4 ****)0x0;
      pppppuVar18[0xfd] = (undefined4 ****)0x0;
      pppppuVar18[0xfe] = (undefined4 ****)0x0;
      pppppuVar18[0xff] = (undefined4 ****)0x0;
      pppppuVar18[0x100] = (undefined4 ****)0x0;
      pppppuVar18[0x101] = (undefined4 ****)0x0;
      pppppuVar18[0x102] = (undefined4 ****)0x0;
      pppppuVar18[0x103] = (undefined4 ****)0x0;
      pppppuVar18[0x108] = (undefined4 ****)0x0;
      pppppuVar18[0x109] = (undefined4 ****)0x0;
      pppppuVar18[0x10a] = (undefined4 ****)0x0;
      pppppuVar18[0x10b] = (undefined4 ****)0x0;
      pppppuVar18[0x10c] = (undefined4 ****)0x0;
      pppppuVar18[0x10d] = (undefined4 ****)0x0;
      pppppuVar18[0x10e] = (undefined4 ****)0x0;
      pppppuVar18[0x10f] = (undefined4 ****)0x0;
      pppppuVar18[0x110] = (undefined4 ****)0x0;
      pppppuVar18[0x111] = (undefined4 ****)0x0;
      pppppuVar18[0x112] = (undefined4 ****)0x0;
      pppppuVar18[0x113] = (undefined4 ****)0x0;
      pppppuVar18[0x114] = (undefined4 ****)0x0;
      pppppuVar18[0x115] = (undefined4 ****)0x0;
      pppppuVar18[0x116] = (undefined4 ****)0x0;
      pppppuVar18[0x117] = (undefined4 ****)0x0;
      pppppuVar18[0x118] = (undefined4 ****)0x0;
      pppppuVar18[0x119] = (undefined4 ****)0x0;
      pppppuVar18[0x11a] = (undefined4 ****)0x0;
      pppppuVar18[0x11b] = (undefined4 ****)0x0;
      pppppuVar18[0x11c] = (undefined4 ****)0x0;
      pppppuVar18[0x11d] = (undefined4 ****)0x0;
      pppppuVar18[0x11e] = (undefined4 ****)0x0;
      pppppuVar18[0x11f] = (undefined4 ****)0x0;
      pppppuVar18[0x120] = (undefined4 ****)0x0;
      pppppuVar18[0x121] = (undefined4 ****)0x0;
      pppppuVar18[0x122] = (undefined4 ****)0x0;
      pppppuVar18[0x123] = (undefined4 ****)0x0;
      pppppuVar18[0x124] = (undefined4 ****)0x0;
      pppppuVar18[0x125] = (undefined4 ****)0x0;
      pppppuVar18[0x126] = (undefined4 ****)0x0;
      pppppuVar18[0x127] = (undefined4 ****)0x0;
      pppppuVar18[0x128] = (undefined4 ****)0x0;
      pppppuVar18[0x129] = (undefined4 ****)0x0;
      pppppuVar18[0x12a] = (undefined4 ****)0x0;
      pppppuVar18[299] = (undefined4 ****)0x0;
      pppppuVar18[300] = (undefined4 ****)0x0;
      pppppuVar18[0x12d] = (undefined4 ****)0x0;
      pppppuVar18[0x12e] = (undefined4 ****)0x0;
      pppppuVar18[0x12f] = (undefined4 ****)0x0;
      pppppuVar18[0x130] = (undefined4 ****)0x0;
      pppppuVar18[0x131] = (undefined4 ****)0x0;
      pppppuVar18[0x132] = (undefined4 ****)0x0;
      pppppuVar18[0x133] = (undefined4 ****)0x0;
      pppppuVar18[0x134] = (undefined4 ****)0x0;
      pppppuVar18[0x135] = (undefined4 ****)0x0;
      pppppuVar18[0x136] = (undefined4 ****)0x0;
      pppppuVar18[0x137] = (undefined4 ****)0x0;
      pppppuVar18[0x138] = (undefined4 ****)0x0;
      pppppuVar18[0x139] = (undefined4 ****)0x0;
      pppppuVar18[0x13a] = (undefined4 ****)0x0;
      pppppuVar18[0x13b] = (undefined4 ****)0x0;
      pppppuVar18[0x13c] = (undefined4 ****)0x0;
      pppppuVar18[0x13d] = (undefined4 ****)0x0;
      pppppuVar18[0x13e] = (undefined4 ****)0x0;
      pppppuVar18[0x13f] = (undefined4 ****)0x0;
      pppppuVar18[0x140] = (undefined4 ****)0x0;
      pppppuVar18[0x141] = (undefined4 ****)0x0;
      pppppuVar18[0x142] = (undefined4 ****)0x0;
      pppppuVar18[0x143] = (undefined4 ****)0x0;
      pppppuVar18[0x144] = (undefined4 ****)0x0;
      pppppuVar18[0x145] = (undefined4 ****)0x0;
      pppppuVar18[0x146] = (undefined4 ****)0x0;
      pppppuVar18[0x147] = (undefined4 ****)0x0;
      pppppuVar18[0x148] = (undefined4 ****)0x0;
      pppppuVar18[0x149] = (undefined4 ****)0x0;
      pppppuVar18[0x14a] = (undefined4 ****)0x0;
      pppppuVar18[0x14b] = (undefined4 ****)0x0;
      pppppuVar18[0x14c] = (undefined4 ****)0x0;
      pppppuVar18[0x14d] = (undefined4 ****)0x0;
      pppppuVar18[0x14e] = (undefined4 ****)0x0;
      pppppuVar18[0x14f] = (undefined4 ****)0x0;
      pppppuVar18[0x150] = (undefined4 ****)0x0;
      pppppuVar18[0x151] = (undefined4 ****)0x0;
      pppppuVar18[0x152] = (undefined4 ****)0x0;
      pppppuVar18[0x153] = (undefined4 ****)0x0;
      pppppuVar18[0x154] = (undefined4 ****)0x0;
      pppppuVar18[0x155] = (undefined4 ****)0x0;
      pppppuVar18[0x156] = (undefined4 ****)0x0;
      pppppuVar18[0x157] = (undefined4 ****)0x0;
      pppppuVar18[0x158] = (undefined4 ****)0x0;
      pppppuVar18[0x159] = (undefined4 ****)0x0;
      pppppuVar18[0x15a] = (undefined4 ****)0x0;
      pppppuVar18[0x15b] = (undefined4 ****)0x0;
      pppppuVar18[0x15c] = (undefined4 ****)0x0;
      pppppuVar18[0x15d] = (undefined4 ****)0x0;
      pppppuVar18[0x15e] = (undefined4 ****)0x0;
      pppppuVar18[0x15f] = (undefined4 ****)0x0;
      pppppuVar18[0x160] = (undefined4 ****)0x0;
      pppppuVar18[0x161] = (undefined4 ****)0x0;
      pppppuVar18[0x162] = (undefined4 ****)0x0;
      pppppuVar18[0x163] = (undefined4 ****)0x0;
      pppppuVar18[0x164] = (undefined4 ****)0x0;
      pppppuVar18[0x165] = (undefined4 ****)0x0;
      pppppuVar18[0x166] = (undefined4 ****)0x0;
      pppppuVar18[0x167] = (undefined4 ****)0x0;
      pppppuVar18[0x168] = (undefined4 ****)0x0;
      pppppuVar18[0x169] = (undefined4 ****)0x0;
      pppppuVar18[0x16a] = (undefined4 ****)0x0;
      pppppuVar18[0x16b] = (undefined4 ****)0x0;
      pppppuVar18[0x16c] = (undefined4 ****)0x0;
      pppppuVar18[0x16d] = (undefined4 ****)0x0;
      pppppuVar18[0x16e] = (undefined4 ****)0x0;
      pppppuVar18[0x16f] = (undefined4 ****)0x0;
      pppppuVar18[0x170] = (undefined4 ****)0x0;
      pppppuVar18[0x171] = (undefined4 ****)0x0;
      pppppuVar18[0x172] = (undefined4 ****)0x0;
      pppppuVar18[0x173] = (undefined4 ****)0x0;
      pppppuVar18[0x174] = (undefined4 ****)0x0;
      pppppuVar18[0x175] = (undefined4 ****)0x0;
      pppppuVar18[0x176] = (undefined4 ****)0x0;
      pppppuVar18[0x177] = (undefined4 ****)0x0;
      pppppuVar18[0x178] = (undefined4 ****)0x0;
      pppppuVar18[0x179] = (undefined4 ****)0x0;
      pppppuVar18[0x17a] = (undefined4 ****)0x0;
      pppppuVar18[0x17b] = (undefined4 ****)0x0;
      pppppuVar18[0x17c] = (undefined4 ****)0x0;
      pppppuVar18[0x17d] = (undefined4 ****)0x0;
      pppppuVar18[0x17e] = (undefined4 ****)0x0;
      pppppuVar18[0x17f] = (undefined4 ****)0x0;
      pppppuVar18[0x180] = (undefined4 ****)0x0;
      pppppuVar18[0x181] = (undefined4 ****)0x0;
      pppppuVar18[0x182] = (undefined4 ****)0x0;
      pppppuVar18[0x183] = (undefined4 ****)0x0;
      pppppuVar18[0x184] = (undefined4 ****)0x0;
      pppppuVar18[0x185] = (undefined4 ****)0x0;
      pppppuVar18[0x186] = (undefined4 ****)0x0;
      pppppuVar18[0x187] = (undefined4 ****)0x0;
      pppppuVar18[0x18c] = (undefined4 ****)0x0;
      pppppuVar18[0x18d] = (undefined4 ****)0x0;
      pppppuVar18[0x18e] = (undefined4 ****)0x0;
      pppppuVar18[399] = (undefined4 ****)0x0;
      pppppuVar18[400] = (undefined4 ****)0x0;
      pppppuVar18[0x191] = (undefined4 ****)0x0;
      pppppuVar18[0x192] = (undefined4 ****)0x0;
      pppppuVar18[0x193] = (undefined4 ****)0x0;
      pppppuVar18[0x194] = (undefined4 ****)0x0;
      pppppuVar18[0x195] = (undefined4 ****)0x0;
      pppppuVar18[0x196] = (undefined4 ****)0x0;
      pppppuVar18[0x197] = (undefined4 ****)0x0;
      pppppuVar18[0x198] = (undefined4 ****)0x0;
      pppppuVar18[0x199] = (undefined4 ****)0x0;
      pppppuVar18[0x19a] = (undefined4 ****)0x0;
      pppppuVar18[0x19b] = (undefined4 ****)0x0;
      pppppuVar18[0x19c] = (undefined4 ****)0x0;
      pppppuVar18[0x19d] = (undefined4 ****)0x0;
      pppppuVar18[0x19e] = (undefined4 ****)0x0;
      pppppuVar18[0x19f] = (undefined4 ****)0x0;
      pppppuVar18[0x1a0] = (undefined4 ****)0x0;
      pppppuVar18[0x1a1] = (undefined4 ****)0x0;
      pppppuVar18[0x1a2] = (undefined4 ****)0x0;
      pppppuVar18[0x1a3] = (undefined4 ****)0x0;
      pppppuVar18[0x1a4] = (undefined4 ****)0x0;
      pppppuVar18[0x1a5] = (undefined4 ****)0x0;
      pppppuVar18[0x1a6] = (undefined4 ****)0x0;
      pppppuVar18[0x1a7] = (undefined4 ****)0x0;
      pppppuVar18[0x1a8] = (undefined4 ****)0x0;
      pppppuVar18[0x1a9] = (undefined4 ****)0x0;
      pppppuVar18[0x1aa] = (undefined4 ****)0x0;
      pppppuVar18[0x1ab] = (undefined4 ****)0x0;
      pppppuVar18[0x1ac] = (undefined4 ****)0x0;
      pppppuVar18[0x1ad] = (undefined4 ****)0x0;
      pppppuVar18[0x1ae] = (undefined4 ****)0x0;
      pppppuVar18[0x1af] = (undefined4 ****)0x0;
      pppppuVar18[0x1b0] = (undefined4 ****)0x0;
      pppppuVar18[0x1b1] = (undefined4 ****)0x0;
      pppppuVar18[0x1b2] = (undefined4 ****)0x0;
      pppppuVar18[0x1b3] = (undefined4 ****)0x0;
      pppppuVar18[0x1b4] = (undefined4 ****)0x0;
      pppppuVar18[0x1b5] = (undefined4 ****)0x0;
      pppppuVar18[0x1b6] = (undefined4 ****)0x0;
      pppppuVar18[0x1b7] = (undefined4 ****)0x0;
      pppppuVar18[0x1b8] = (undefined4 ****)0x0;
      pppppuVar18[0x1b9] = (undefined4 ****)0x0;
      pppppuVar18[0x1ba] = (undefined4 ****)0x0;
      pppppuVar18[0x1bb] = (undefined4 ****)0x0;
      pppppuVar18[0x1bc] = (undefined4 ****)0x0;
      pppppuVar18[0x1bd] = (undefined4 ****)0x0;
      pppppuVar18[0x1be] = (undefined4 ****)0x0;
      pppppuVar18[0x1bf] = (undefined4 ****)0x0;
      pppppuVar18[0x1c0] = (undefined4 ****)0x0;
      pppppuVar18[0x1c1] = (undefined4 ****)0x0;
      pppppuVar18[0x1c2] = (undefined4 ****)0x0;
      pppppuVar18[0x1c3] = (undefined4 ****)0x0;
      pppppuVar18[0x1c4] = (undefined4 ****)0x0;
      pppppuVar18[0x1c5] = (undefined4 ****)0x0;
      pppppuVar18[0x1c6] = (undefined4 ****)0x0;
      pppppuVar18[0x1c7] = (undefined4 ****)0x0;
      pppppuVar18[0x1c8] = (undefined4 ****)0x0;
      pppppuVar18[0x1c9] = (undefined4 ****)0x0;
      pppppuVar18[0x1ca] = (undefined4 ****)0x0;
      pppppuVar18[0x1cb] = (undefined4 ****)0x0;
      pppppuVar18[0x1cc] = (undefined4 ****)0x0;
      pppppuVar18[0x1cd] = (undefined4 ****)0x0;
      pppppuVar18[0x1ce] = (undefined4 ****)0x0;
      pppppuVar18[0x1cf] = (undefined4 ****)0x0;
      pppppuVar18[0x1d0] = (undefined4 ****)0x0;
      pppppuVar18[0x1d1] = (undefined4 ****)0x0;
      pppppuVar18[0x1d2] = (undefined4 ****)0x0;
      pppppuVar18[0x1d3] = (undefined4 ****)0x0;
      pppppuVar18[0x1d4] = (undefined4 ****)0x0;
      pppppuVar18[0x1d5] = (undefined4 ****)0x0;
      pppppuVar18[0x1d6] = (undefined4 ****)0x0;
      pppppuVar18[0x1d7] = (undefined4 ****)0x0;
      pppppuVar18[0x1d8] = (undefined4 ****)0x0;
      pppppuVar18[0x1d9] = (undefined4 ****)0x0;
      pppppuVar18[0x1da] = (undefined4 ****)0x0;
      pppppuVar18[0x1db] = (undefined4 ****)0x0;
      pppppuVar18[0x1dc] = (undefined4 ****)0x0;
      pppppuVar18[0x1dd] = (undefined4 ****)0x0;
      pppppuVar18[0x1de] = (undefined4 ****)0x0;
      pppppuVar18[0x1df] = (undefined4 ****)0x0;
      pppppuVar18[0x1e0] = (undefined4 ****)0x0;
      pppppuVar18[0x1e1] = (undefined4 ****)0x0;
      pppppuVar18[0x1e2] = (undefined4 ****)0x0;
      pppppuVar18[0x1e3] = (undefined4 ****)0x0;
      pppppuVar18[0x1e4] = (undefined4 ****)0x0;
      pppppuVar18[0x1e5] = (undefined4 ****)0x0;
      pppppuVar18[0x1e6] = (undefined4 ****)0x0;
      pppppuVar18[0x1e7] = (undefined4 ****)0x0;
      pppppuVar18[0x1e8] = (undefined4 ****)0x0;
      pppppuVar18[0x1e9] = (undefined4 ****)0x0;
      pppppuVar18[0x1ea] = (undefined4 ****)0x0;
      pppppuVar18[0x1eb] = (undefined4 ****)0x0;
      pppppuVar18[0x1ec] = (undefined4 ****)0x0;
      pppppuVar18[0x1ed] = (undefined4 ****)0x0;
      pppppuVar18[0x1ee] = (undefined4 ****)0x0;
      pppppuVar18[0x1ef] = (undefined4 ****)0x0;
      pppppuVar18[0x1f0] = (undefined4 ****)0x0;
      pppppuVar18[0x1f1] = (undefined4 ****)0x0;
      pppppuVar18[0x1f2] = (undefined4 ****)0x0;
      pppppuVar18[499] = (undefined4 ****)0x0;
      pppppuVar18[500] = (undefined4 ****)0x0;
      pppppuVar18[0x1f5] = (undefined4 ****)0x0;
      pppppuVar18[0x1f6] = (undefined4 ****)0x0;
      pppppuVar18[0x1f7] = (undefined4 ****)0x0;
      pppppuVar18[0x1f8] = (undefined4 ****)0x0;
      pppppuVar18[0x1f9] = (undefined4 ****)0x0;
      pppppuVar18[0x1fa] = (undefined4 ****)0x0;
      pppppuVar18[0x1fb] = (undefined4 ****)0x0;
      pppppuVar18[0x1fc] = (undefined4 ****)0x0;
      pppppuVar18[0x1fd] = (undefined4 ****)0x0;
      pppppuVar18[0x1fe] = (undefined4 ****)0x0;
      pppppuVar18[0x1ff] = (undefined4 ****)0x0;
      pppppuVar18[0x200] = (undefined4 ****)0x0;
      pppppuVar18[0x201] = (undefined4 ****)0x0;
      pppppuVar18[0x202] = (undefined4 ****)0x0;
      pppppuVar18[0x203] = (undefined4 ****)0x0;
      pppppuVar18[0x204] = (undefined4 ****)0x0;
      pppppuVar18[0x205] = (undefined4 ****)0x0;
      pppppuVar18[0x206] = (undefined4 ****)0x0;
      pppppuVar18[0x207] = (undefined4 ****)0x0;
      pppppuVar18[0x208] = (undefined4 ****)0x0;
      pppppuVar18[0x209] = (undefined4 ****)0x0;
      pppppuVar18[0x20a] = (undefined4 ****)0x0;
      pppppuVar18[0x20b] = (undefined4 ****)0x0;
      pppppuVar18[0x210] = (undefined4 ****)0x0;
      pppppuVar18[0x211] = (undefined4 ****)0x0;
      pppppuVar18[0x212] = (undefined4 ****)0x0;
      pppppuVar18[0x213] = (undefined4 ****)0x0;
      pppppuVar18[0x214] = (undefined4 ****)0x0;
      pppppuVar18[0x215] = (undefined4 ****)0x0;
      pppppuVar18[0x216] = (undefined4 ****)0x0;
      pppppuVar18[0x217] = (undefined4 ****)0x0;
      pppppuVar18[0x218] = (undefined4 ****)0x0;
      pppppuVar18[0x219] = (undefined4 ****)0x0;
      pppppuVar18[0x21a] = (undefined4 ****)0x0;
      pppppuVar18[0x21b] = (undefined4 ****)0x0;
      pppppuVar18[0x21c] = (undefined4 ****)0x0;
      pppppuVar18[0x21d] = (undefined4 ****)0x0;
      pppppuVar18[0x21e] = (undefined4 ****)0x0;
      pppppuVar18[0x21f] = (undefined4 ****)0x0;
      pppppuVar18[0x220] = (undefined4 ****)0x0;
      pppppuVar18[0x221] = (undefined4 ****)0x0;
      pppppuVar18[0x222] = (undefined4 ****)0x0;
      pppppuVar18[0x223] = (undefined4 ****)0x0;
      pppppuVar18[0x224] = (undefined4 ****)0x0;
      pppppuVar18[0x225] = (undefined4 ****)0x0;
      pppppuVar18[0x226] = (undefined4 ****)0x0;
      pppppuVar18[0x227] = (undefined4 ****)0x0;
      pppppuVar18[0x228] = (undefined4 ****)0x0;
      pppppuVar18[0x229] = (undefined4 ****)0x0;
      pppppuVar18[0x22a] = (undefined4 ****)0x0;
      pppppuVar18[0x22b] = (undefined4 ****)0x0;
      pppppuVar18[0x22c] = (undefined4 ****)0x0;
      pppppuVar18[0x22d] = (undefined4 ****)0x0;
      pppppuVar18[0x22e] = (undefined4 ****)0x0;
      pppppuVar18[0x22f] = (undefined4 ****)0x0;
      pppppuVar18[0x230] = (undefined4 ****)0x0;
      pppppuVar18[0x231] = (undefined4 ****)0x0;
      pppppuVar18[0x232] = (undefined4 ****)0x0;
      pppppuVar18[0x233] = (undefined4 ****)0x0;
      pppppuVar18[0x234] = (undefined4 ****)0x0;
      pppppuVar18[0x235] = (undefined4 ****)0x0;
      pppppuVar18[0x236] = (undefined4 ****)0x0;
      pppppuVar18[0x237] = (undefined4 ****)0x0;
      pppppuVar18[0x238] = (undefined4 ****)0x0;
      pppppuVar18[0x239] = (undefined4 ****)0x0;
      pppppuVar18[0x23a] = (undefined4 ****)0x0;
      pppppuVar18[0x23b] = (undefined4 ****)0x0;
      pppppuVar18[0x23c] = (undefined4 ****)0x0;
      pppppuVar18[0x23d] = (undefined4 ****)0x0;
      pppppuVar18[0x23e] = (undefined4 ****)0x0;
      pppppuVar18[0x23f] = (undefined4 ****)0x0;
      pppppuVar18[0x240] = (undefined4 ****)0x0;
      pppppuVar18[0x241] = (undefined4 ****)0x0;
      pppppuVar18[0x242] = (undefined4 ****)0x0;
      pppppuVar18[0x243] = (undefined4 ****)0x0;
      pppppuVar18[0x244] = (undefined4 ****)0x0;
      pppppuVar18[0x245] = (undefined4 ****)0x0;
      pppppuVar18[0x246] = (undefined4 ****)0x0;
      pppppuVar18[0x247] = (undefined4 ****)0x0;
      pppppuVar18[0x248] = (undefined4 ****)0x0;
      pppppuVar18[0x249] = (undefined4 ****)0x0;
      pppppuVar18[0x24a] = (undefined4 ****)0x0;
      pppppuVar18[0x24b] = (undefined4 ****)0x0;
      pppppuVar18[0x24c] = (undefined4 ****)0x0;
      pppppuVar18[0x24d] = (undefined4 ****)0x0;
      pppppuVar18[0x24e] = (undefined4 ****)0x0;
      pppppuVar18[0x24f] = (undefined4 ****)0x0;
      pppppuVar18[0x250] = (undefined4 ****)0x0;
      pppppuVar18[0x251] = (undefined4 ****)0x0;
      pppppuVar18[0x252] = (undefined4 ****)0x0;
      pppppuVar18[0x253] = (undefined4 ****)0x0;
      pppppuVar18[0x254] = (undefined4 ****)0x0;
      pppppuVar18[0x255] = (undefined4 ****)0x0;
      pppppuVar18[0x256] = (undefined4 ****)0x0;
      pppppuVar18[599] = (undefined4 ****)0x0;
      pppppuVar18[600] = (undefined4 ****)0x0;
      pppppuVar18[0x259] = (undefined4 ****)0x0;
      pppppuVar18[0x25a] = (undefined4 ****)0x0;
      pppppuVar18[0x25b] = (undefined4 ****)0x0;
      pppppuVar18[0x25c] = (undefined4 ****)0x0;
      pppppuVar18[0x25d] = (undefined4 ****)0x0;
      pppppuVar18[0x25e] = (undefined4 ****)0x0;
      pppppuVar18[0x25f] = (undefined4 ****)0x0;
      pppppuVar18[0x260] = (undefined4 ****)0x0;
      pppppuVar18[0x261] = (undefined4 ****)0x0;
      pppppuVar18[0x262] = (undefined4 ****)0x0;
      pppppuVar18[0x263] = (undefined4 ****)0x0;
      pppppuVar18[0x264] = (undefined4 ****)0x0;
      pppppuVar18[0x265] = (undefined4 ****)0x0;
      pppppuVar18[0x266] = (undefined4 ****)0x0;
      pppppuVar18[0x267] = (undefined4 ****)0x0;
      pppppuVar18[0x268] = (undefined4 ****)0x0;
      pppppuVar18[0x269] = (undefined4 ****)0x0;
      pppppuVar18[0x26a] = (undefined4 ****)0x0;
      pppppuVar18[0x26b] = (undefined4 ****)0x0;
      pppppuVar18[0x26c] = (undefined4 ****)0x0;
      pppppuVar18[0x26d] = (undefined4 ****)0x0;
      pppppuVar18[0x26e] = (undefined4 ****)0x0;
      pppppuVar18[0x26f] = (undefined4 ****)0x0;
      pppppuVar18[0x270] = (undefined4 ****)0x0;
      pppppuVar18[0x271] = (undefined4 ****)0x0;
      pppppuVar18[0x272] = (undefined4 ****)0x0;
      pppppuVar18[0x273] = (undefined4 ****)0x0;
      pppppuVar18[0x274] = (undefined4 ****)0x0;
      pppppuVar18[0x275] = (undefined4 ****)0x0;
      pppppuVar18[0x276] = (undefined4 ****)0x0;
      pppppuVar18[0x277] = (undefined4 ****)0x0;
      pppppuVar18[0x278] = (undefined4 ****)0x0;
      pppppuVar18[0x279] = (undefined4 ****)0x0;
      pppppuVar18[0x27a] = (undefined4 ****)0x0;
      pppppuVar18[0x27b] = (undefined4 ****)0x0;
      pppppuVar18[0x27c] = (undefined4 ****)0x0;
      pppppuVar18[0x27d] = (undefined4 ****)0x0;
      pppppuVar18[0x27e] = (undefined4 ****)0x0;
      pppppuVar18[0x27f] = (undefined4 ****)0x0;
      pppppuVar18[0x280] = (undefined4 ****)0x0;
      pppppuVar18[0x281] = (undefined4 ****)0x0;
      pppppuVar18[0x282] = (undefined4 ****)0x0;
      pppppuVar18[0x283] = (undefined4 ****)0x0;
      pppppuVar18[0x284] = (undefined4 ****)0x0;
      pppppuVar18[0x285] = (undefined4 ****)0x0;
      pppppuVar18[0x286] = (undefined4 ****)0x0;
      pppppuVar18[0x287] = (undefined4 ****)0x0;
      pppppuVar18[0x288] = (undefined4 ****)0x0;
      pppppuVar18[0x289] = (undefined4 ****)0x0;
      pppppuVar18[0x28a] = (undefined4 ****)0x0;
      pppppuVar18[0x28b] = (undefined4 ****)0x0;
      pppppuVar18[0x28c] = (undefined4 ****)0x0;
      pppppuVar18[0x28d] = (undefined4 ****)0x0;
      pppppuVar18[0x28e] = (undefined4 ****)0x0;
      pppppuVar18[0x28f] = (undefined4 ****)0x0;
      pppppuVar18[0x294] = (undefined4 ****)0x0;
      pppppuVar18[0x295] = (undefined4 ****)0x0;
      pppppuVar18[0x296] = (undefined4 ****)0x0;
      pppppuVar18[0x297] = (undefined4 ****)0x0;
      pppppuVar18[0x298] = (undefined4 ****)0x0;
      pppppuVar18[0x299] = (undefined4 ****)0x0;
      pppppuVar18[0x29a] = (undefined4 ****)0x0;
      pppppuVar18[0x29b] = (undefined4 ****)0x0;
      pppppuVar18[0x29c] = (undefined4 ****)0x0;
      pppppuVar18[0x29d] = (undefined4 ****)0x0;
      pppppuVar18[0x29e] = (undefined4 ****)0x0;
      pppppuVar18[0x29f] = (undefined4 ****)0x0;
      pppppuVar18[0x2a0] = (undefined4 ****)0x0;
      pppppuVar18[0x2a1] = (undefined4 ****)0x0;
      pppppuVar18[0x2a2] = (undefined4 ****)0x0;
      pppppuVar18[0x2a3] = (undefined4 ****)0x0;
      pppppuVar18[0x2a4] = (undefined4 ****)0x0;
      pppppuVar18[0x2a5] = (undefined4 ****)0x0;
      pppppuVar18[0x2a6] = (undefined4 ****)0x0;
      pppppuVar18[0x2a7] = (undefined4 ****)0x0;
      pppppuVar18[0x2a8] = (undefined4 ****)0x0;
      pppppuVar18[0x2a9] = (undefined4 ****)0x0;
      pppppuVar18[0x2aa] = (undefined4 ****)0x0;
      pppppuVar18[0x2ab] = (undefined4 ****)0x0;
      pppppuVar18[0x2ac] = (undefined4 ****)0x0;
      pppppuVar18[0x2ad] = (undefined4 ****)0x0;
      pppppuVar18[0x2ae] = (undefined4 ****)0x0;
      pppppuVar18[0x2af] = (undefined4 ****)0x0;
      pppppuVar18[0x2b0] = (undefined4 ****)0x0;
      pppppuVar18[0x2b1] = (undefined4 ****)0x0;
      pppppuVar18[0x2b2] = (undefined4 ****)0x0;
      pppppuVar18[0x2b3] = (undefined4 ****)0x0;
      pppppuVar18[0x2b4] = (undefined4 ****)0x0;
      pppppuVar18[0x2b5] = (undefined4 ****)0x0;
      pppppuVar18[0x2b6] = (undefined4 ****)0x0;
      pppppuVar18[0x2b7] = (undefined4 ****)0x0;
      pppppuVar18[0x2b8] = (undefined4 ****)0x0;
      pppppuVar18[0x2b9] = (undefined4 ****)0x0;
      pppppuVar18[0x2ba] = (undefined4 ****)0x0;
      pppppuVar18[699] = (undefined4 ****)0x0;
      pppppuVar18[700] = (undefined4 ****)0x0;
      pppppuVar18[0x2bd] = (undefined4 ****)0x0;
      pppppuVar18[0x2be] = (undefined4 ****)0x0;
      pppppuVar18[0x2bf] = (undefined4 ****)0x0;
      pppppuVar18[0x2c0] = (undefined4 ****)0x0;
      pppppuVar18[0x2c1] = (undefined4 ****)0x0;
      pppppuVar18[0x2c2] = (undefined4 ****)0x0;
      pppppuVar18[0x2c3] = (undefined4 ****)0x0;
      pppppuVar18[0x2c4] = (undefined4 ****)0x0;
      pppppuVar18[0x2c5] = (undefined4 ****)0x0;
      pppppuVar18[0x2c6] = (undefined4 ****)0x0;
      pppppuVar18[0x2c7] = (undefined4 ****)0x0;
      pppppuVar18[0x2c8] = (undefined4 ****)0x0;
      pppppuVar18[0x2c9] = (undefined4 ****)0x0;
      pppppuVar18[0x2ca] = (undefined4 ****)0x0;
      pppppuVar18[0x2cb] = (undefined4 ****)0x0;
      pppppuVar18[0x2cc] = (undefined4 ****)0x0;
      pppppuVar18[0x2cd] = (undefined4 ****)0x0;
      pppppuVar18[0x2ce] = (undefined4 ****)0x0;
      pppppuVar18[0x2cf] = (undefined4 ****)0x0;
      pppppuVar18[0x2d0] = (undefined4 ****)0x0;
      pppppuVar18[0x2d1] = (undefined4 ****)0x0;
      pppppuVar18[0x2d2] = (undefined4 ****)0x0;
      pppppuVar18[0x2d3] = (undefined4 ****)0x0;
      pppppuVar18[0x2d4] = (undefined4 ****)0x0;
      pppppuVar18[0x2d5] = (undefined4 ****)0x0;
      pppppuVar18[0x2d6] = (undefined4 ****)0x0;
      pppppuVar18[0x2d7] = (undefined4 ****)0x0;
      pppppuVar18[0x2d8] = (undefined4 ****)0x0;
      pppppuVar18[0x2d9] = (undefined4 ****)0x0;
      pppppuVar18[0x2da] = (undefined4 ****)0x0;
      pppppuVar18[0x2db] = (undefined4 ****)0x0;
      pppppuVar18[0x2dc] = (undefined4 ****)0x0;
      pppppuVar18[0x2dd] = (undefined4 ****)0x0;
      pppppuVar18[0x2de] = (undefined4 ****)0x0;
      pppppuVar18[0x2df] = (undefined4 ****)0x0;
      pppppuVar18[0x2e0] = (undefined4 ****)0x0;
      pppppuVar18[0x2e1] = (undefined4 ****)0x0;
      pppppuVar18[0x2e2] = (undefined4 ****)0x0;
      pppppuVar18[0x2e3] = (undefined4 ****)0x0;
      pppppuVar18[0x2e4] = (undefined4 ****)0x0;
      pppppuVar18[0x2e5] = (undefined4 ****)0x0;
      pppppuVar18[0x2e6] = (undefined4 ****)0x0;
      pppppuVar18[0x2e7] = (undefined4 ****)0x0;
      pppppuVar18[0x2e8] = (undefined4 ****)0x0;
      pppppuVar18[0x2e9] = (undefined4 ****)0x0;
      pppppuVar18[0x2ea] = (undefined4 ****)0x0;
      pppppuVar18[0x2eb] = (undefined4 ****)0x0;
      pppppuVar18[0x2ec] = (undefined4 ****)0x0;
      pppppuVar18[0x2ed] = (undefined4 ****)0x0;
      pppppuVar18[0x2ee] = (undefined4 ****)0x0;
      pppppuVar18[0x2ef] = (undefined4 ****)0x0;
      pppppuVar18[0x2f0] = (undefined4 ****)0x0;
      pppppuVar18[0x2f1] = (undefined4 ****)0x0;
      pppppuVar18[0x2f2] = (undefined4 ****)0x0;
      pppppuVar18[0x2f3] = (undefined4 ****)0x0;
      pppppuVar18[0x2f4] = (undefined4 ****)0x0;
      pppppuVar18[0x2f5] = (undefined4 ****)0x0;
      pppppuVar18[0x2f6] = (undefined4 ****)0x0;
      pppppuVar18[0x2f7] = (undefined4 ****)0x0;
      pppppuVar18[0x2f8] = (undefined4 ****)0x0;
      pppppuVar18[0x2f9] = (undefined4 ****)0x0;
      pppppuVar18[0x2fa] = (undefined4 ****)0x0;
      pppppuVar18[0x2fb] = (undefined4 ****)0x0;
      pppppuVar18[0x2fc] = (undefined4 ****)0x0;
      pppppuVar18[0x2fd] = (undefined4 ****)0x0;
      pppppuVar18[0x2fe] = (undefined4 ****)0x0;
      pppppuVar18[0x2ff] = (undefined4 ****)0x0;
      pppppuVar18[0x300] = (undefined4 ****)0x0;
      pppppuVar18[0x301] = (undefined4 ****)0x0;
      pppppuVar18[0x302] = (undefined4 ****)0x0;
      pppppuVar18[0x303] = (undefined4 ****)0x0;
      pppppuVar18[0x304] = (undefined4 ****)0x0;
      pppppuVar18[0x305] = (undefined4 ****)0x0;
      pppppuVar18[0x306] = (undefined4 ****)0x0;
      pppppuVar18[0x307] = (undefined4 ****)0x0;
      pppppuVar18[0x308] = (undefined4 ****)0x0;
      pppppuVar18[0x309] = (undefined4 ****)0x0;
      pppppuVar18[0x30a] = (undefined4 ****)0x0;
      pppppuVar18[0x30b] = (undefined4 ****)0x0;
      pppppuVar18[0x30c] = (undefined4 ****)0x0;
      pppppuVar18[0x30d] = (undefined4 ****)0x0;
      pppppuVar18[0x30e] = (undefined4 ****)0x0;
      pppppuVar18[0x30f] = (undefined4 ****)0x0;
      pppppuVar18[0x310] = (undefined4 ****)0x0;
      pppppuVar18[0x311] = (undefined4 ****)0x0;
      pppppuVar18[0x312] = (undefined4 ****)0x0;
      pppppuVar18[0x313] = (undefined4 ****)0x0;
      local_130 = 0;
      local_134 = 0;
      local_138 = (undefined1 *)0x0;
      local_13c = (undefined4 *)0x0;
    }
    local_40 = (uint)local_13c;
    puStack_3c = local_138;
    uStack_38 = local_134;
    uStack_34 = local_130;
    pppppuStack_60 = pppppuVar5;
    uStack_5c = (uint)puVar6;
    puStack_58 = (undefined1 *)ppppuVar7;
    local_54 = (uint)piVar12;
    iStack_50 = (int)pppppuVar8;
    uStack_4c = uVar1;
    uStack_48 = ppppuVar9;
    uStack_44 = (uint)piVar10;
    local_98 = (undefined4 *****)local_170;
    local_94 = local_16c;
    local_90 = local_168;
    local_8c = local_164;
    local_88 = local_160;
    uStack_84 = local_15c;
    local_80 = local_158;
    piStack_7c = piStack_154;
    pppppuStack_78 = pppppuStack_150;
    uStack_74 = uStack_14c;
    uStack_70 = uStack_148;
    uStack_6c = uStack_144;
    local_128 = local_108;
    piStack_124 = local_104;
    ppppuStack_120 = local_100;
    piStack_11c = local_fc;
    local_118 = (uint)local_f8;
    iStack_114 = local_f4;
    puStack_110 = local_f0;
    puStack_10c = local_ec;
    local_68 = ppppuVar14;
    piStack_64 = piVar11;
    FUN_016dd1aa((uint)&local_108 | 4,&local_98,0x68);
    *param_1 = uVar15;
    param_1[1] = local_128;
    param_1[2] = piStack_124;
    param_1[3] = ppppuStack_120;
    param_1[4] = piStack_11c;
    param_1[5] = local_118;
    param_1[6] = iStack_114;
    param_1[7] = puStack_110;
    param_1[8] = puStack_10c;
    FUN_016dd1aa(param_1 + 9,&local_108,0x6c);
    param_1[0x30] = local_1cc;
    param_1[0x2c] = local_1d4;
    param_1[0x2d] = local_1d8;
    param_1[0x2e] = ppppuVar16;
    *(undefined2 *)(param_1 + 0x2a) = 0;
    param_1[0x24] = 0;
    param_1[0x25] = 0;
    param_1[0x26] = 0;
    param_1[0x27] = 0;
    param_1[0x28] = pppppuVar18;
    return;
  }
  bVar28 = (bool)hasExclusiveAccess(&local_108);
  local_108 = (undefined4 ****)(uint)bVar28;
  if (!bVar28) {
    FUN_01280da8(&local_108);
  }
  else {
    DataMemoryBarrier(0xb);
  }
  FUN_0128236c(&local_108);
  pppppuVar22 = local_e8;
  piVar21 = local_ec;
  ppppuVar16 = local_f0;
  if ((char)local_dc == '\0') {
    uVar15 = 0x71;
    pcVar26 = 
    "`time::pause()` requires the `current_thread` Tokio runtime. This is the default Runtime used by `#[tokio::test]."
    ;
  }
  else {
    DataMemoryBarrier(0xb);
    DAT_018dd938 = 1;
    if (local_e8 != (undefined4 *****)&DAT_3b9aca00) {
      FUN_015f3b0c(&local_98);
      local_140 = local_98;
      local_13c = local_94;
      local_138 = (undefined1 *)local_90;
      local_170 = ppppuVar16;
      local_16c = piVar21;
      local_168 = pppppuVar22;
      FUN_015f3c24(&local_98,&local_140,&local_170);
      piVar21 = local_8c;
      ppppuVar16 = local_90;
      if (((uint)local_98 & 1) != 0) {
        ppppuVar16 = (undefined4 ****)0x0;
        piVar21 = (int *)0x0;
      }
      ppppuVar17 = (undefined4 ****)((int)local_100 + (int)ppppuVar16);
      piVar23 = (int *)((int)local_fc +
                       (uint)CARRY4((uint)local_100,(uint)ppppuVar16) + (int)piVar21);
      if ((int)piVar21 < 0 !=
          (int)(((uint)local_fc ^ (uint)piVar23) & ~((uint)local_fc ^ (uint)piVar21)) < 0) {
LAB_0164a534:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
      }
      pppppuVar22 = local_f8;
      if (((uint)local_98 & 1) == 0) {
        pppppuVar22 = (undefined4 *****)((int)local_f8 + (int)local_88);
      }
      if (&DAT_3b9aca00 <= pppppuVar22) {
        bVar28 = (undefined4 ****)0xfffffffe < ppppuVar17;
        ppppuVar17 = (undefined4 ****)((int)ppppuVar17 + 1);
        piVar21 = (int *)((int)piVar23 + (uint)bVar28);
        if ((int)(((uint)piVar23 ^ (uint)piVar21) & ~(uint)piVar23) < 0) goto LAB_0164a534;
        pppppuVar22 = pppppuVar22 + -250000000;
        piVar23 = piVar21;
      }
      local_e8 = (undefined4 *****)&DAT_3b9aca00;
      local_100 = (undefined4 *****)ppppuVar17;
      local_fc = piVar23;
      local_f8 = pppppuVar22;
      FUN_01282570(&local_108);
      if ((char)local_108 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar28 = (bool)hasExclusiveAccess(&local_108);
          if (bVar28) {
            local_108 = (undefined4 ****)((uint)local_108 & 0xffffff00);
            goto LAB_0164a5b4;
          }
        } while (((uint)local_108 & 0xff) == 1);
      }
      ClearExclusiveLocal();
      FUN_01280a5c(&local_108);
      goto LAB_0164a5b4;
    }
    uVar15 = 0x16;
    pcVar26 = "time is already frozen";
  }
  FUN_01282570(&local_108);
  if ((char)local_108 == '\x01') {
    DataMemoryBarrier(0xb);
    do {
      bVar28 = (bool)hasExclusiveAccess(&local_108);
      if (bVar28) {
        local_108 = (undefined4 ****)((uint)local_108 & 0xffffff00);
        goto LAB_0164b810;
      }
    } while (((uint)local_108 & 0xff) == 1);
  }
  ClearExclusiveLocal();
  FUN_01280a5c(&local_108);
LAB_0164b810:
  local_94 = &DAT_0157d360;
  local_98 = &local_170;
  local_170 = (undefined4 ****)pcVar26;
  local_16c = (int *)uVar15;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_00590e71,&local_98,&DAT_018ad324);
LAB_0164b5d0:
  iVar13 = *piVar11;
  while (iVar13 != -1) {
    if (iVar13 < 0) {
      local_16c = &DAT_0157d360;
      local_170 = (undefined4 ****)&DAT_018ae270;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_00590e71,&local_170,&DAT_018ae278);
    }
    iVar25 = *piVar11;
    if (iVar25 == iVar13) {
      bVar28 = false;
      bVar29 = (bool)hasExclusiveAccess(piVar11);
      if (bVar29) {
        *piVar11 = iVar13 + 1;
        DataMemoryBarrier(0xb);
        bVar28 = true;
      }
    }
    else {
      bVar28 = false;
      ClearExclusiveLocal();
    }
    iVar13 = iVar25;
    if (bVar28) {
      local_98 = local_100;
      local_94 = local_fc;
      local_90 = local_f8;
      local_8c = (int *)local_f4;
      local_88 = (undefined4 *****)local_f0;
      uStack_84 = (uint)local_ec;
      local_80 = local_e8;
      piStack_7c = (int *)local_e4;
      piVar11 = local_104;
      local_1cc = puVar20;
      local_174 = puVar20;
      goto LAB_0164a328;
    }
  }
  HintYield();
  goto LAB_0164b5d0;
}


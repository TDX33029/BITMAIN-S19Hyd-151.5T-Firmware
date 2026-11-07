// FUN_014af5b8 @ 014af5b8 size=3652 calls_out=22 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_014af5b8(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint ****ppppuVar9;
  undefined2 *puVar10;
  uint uVar11;
  uint *****pppppuVar12;
  uint *****pppppuVar13;
  uint *puVar14;
  uint *****pppppuVar15;
  uint *****pppppuVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  undefined4 *puVar20;
  uint ****ppppuVar21;
  uint *****pppppuVar22;
  char cVar23;
  uint *****pppppuVar24;
  uint uVar25;
  uint *****pppppuVar26;
  uint ***pppuVar27;
  uint *****pppppuVar28;
  uint uVar29;
  bool bVar30;
  undefined8 uVar31;
  int local_194;
  int local_158;
  uint local_14c;
  uint *****local_148;
  uint *****pppppuStack_144;
  uint *****pppppuStack_140;
  uint *****local_13c;
  uint *****local_138;
  uint *****local_134;
  undefined4 local_130;
  uint *****local_128;
  uint *****pppppuStack_124;
  uint *****pppppuStack_120;
  uint *****pppppuStack_11c;
  uint *****pppppuStack_118;
  uint *****pppppuStack_114;
  undefined1 local_110;
  char local_10f;
  undefined2 local_10e;
  uint *****local_108;
  uint *****pppppuStack_104;
  uint *****pppppuStack_100;
  uint *****local_fc;
  uint *****pppppuStack_f8;
  uint *****pppppuStack_f4;
  undefined4 local_f0;
  uint *****local_e8;
  uint *****pppppuStack_e4;
  uint *****pppppuStack_e0;
  uint *****pppppuStack_dc;
  uint *****pppppuStack_d8;
  uint *****pppppuStack_d4;
  undefined1 local_d0;
  uint *****local_c8;
  uint *****pppppuStack_c4;
  uint *****pppppuStack_c0;
  uint *****local_bc;
  uint *****local_b8;
  uint *****local_b4;
  uint *****pppppuStack_b0;
  undefined2 local_9c;
  undefined1 local_9a;
  uint *****local_98;
  uint ****local_94;
  uint ****local_90;
  uint ****ppppuStack_8c;
  undefined2 local_84;
  undefined1 local_82;
  uint *****local_80;
  uint *****local_7c;
  uint *****local_78;
  uint *****local_74;
  uint *****local_70;
  uint *****local_6c;
  uint *****local_68;
  uint *****local_64;
  uint *****pppppuStack_60;
  uint *****pppppuStack_5c;
  uint *****local_58;
  uint ***pppuStack_54;
  char local_4b;
  undefined1 local_2c;
  
  puVar4 = param_1 + 0x10;
  if ((*(char *)(param_3 + 2) == '\x02') && (param_1[0xf] != 0)) {
    uVar5 = FUN_014c854c(*puVar4,param_1[0x11],param_1[0x12],param_1[0x13],param_2);
    uVar8 = uVar5 >> 0x19;
    iVar19 = param_1[0xc];
    uVar25 = param_1[0xd];
    local_14c = 0;
    while( true ) {
      uVar5 = uVar25 & uVar5;
      uVar29 = *(uint *)(iVar19 + uVar5);
      uVar6 = uVar29 ^ uVar8 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        iVar7 = FUN_014c953c(param_2,iVar19 + -0x24 +
                                     (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                             (uVar6 >> 8 & 0xff) << 0x10 |
                                                             (uVar6 >> 0x10 & 0xff) << 8 |
                                                             uVar6 >> 0x18) >> 3) & uVar25) * -0x24)
        ;
        uVar6 = uVar6 - 1 & uVar6;
        if (iVar7 != 0) {
          FUN_014217b4(param_3 + 3);
          FUN_014952b4(param_3);
          goto LAB_014b0308;
        }
      }
      if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) break;
      local_14c = local_14c + 4;
      uVar5 = uVar5 + local_14c;
    }
  }
  local_148 = (uint *****)*param_3;
  pppppuStack_144 = (uint *****)param_3[1];
  pppppuStack_140 = (uint *****)param_3[2];
  local_13c = (uint *****)param_3[3];
  local_138 = (uint *****)param_3[4];
  local_134 = (uint *****)param_3[5];
  local_130 = (uint *****)param_3[6];
  pppppuVar16 = (uint *****)(param_3 + 3);
  if (param_1[0x17] != 0) {
    uVar8 = FUN_014c854c(param_1[0x18],param_1[0x19],param_1[0x1a],param_1[0x1b],param_2);
    pppppuVar16 = (uint *****)param_1[0x14];
    uVar5 = param_1[0x15];
    local_14c = (uVar8 >> 0x19) * 0x1010101;
    local_158 = 0;
    while( true ) {
      uVar8 = uVar5 & uVar8;
      uVar25 = *(uint *)((int)pppppuVar16 + uVar8);
      uVar6 = ~(uVar25 ^ local_14c) & 0x80808080 & (uVar25 ^ local_14c) + 0xfefefeff;
      while (uVar6 != 0) {
        uVar29 = uVar8 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                        (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar5;
        iVar19 = FUN_014c953c(param_2,pppppuVar16 + uVar29 * -10 + -10);
        uVar6 = uVar6 - 1 & uVar6;
        if (iVar19 != 0) {
          goto LAB_014af81c;
        }
      }
      if ((uVar25 & 0x80808080 & uVar25 << 1) != 0) break;
      local_158 = local_158 + 4;
      uVar8 = uVar8 + local_158;
    }
  }
  goto LAB_014afbb4;
LAB_014aff38:
  if (param_1[0xe] == 0) {
    FUN_01491944(piVar17,puVar4);
    uVar25 = (uint)local_80 & 0xff;
  }
  local_9a = *(undefined1 *)(puVar10 + 1);
  local_9c = *puVar10;
  if (uVar25 != 3) {
    puVar14 = (uint *)*piVar17;
    uVar8 = param_1[0xd];
    uVar29 = uVar8 & uVar5;
    uVar6 = *(uint *)((int)puVar14 + uVar29) & 0x80808080;
    if (uVar6 == 0) {
      iVar19 = 4;
      do {
        uVar29 = uVar29 + iVar19;
        iVar19 = iVar19 + 4;
        uVar29 = uVar29 & uVar8;
        uVar6 = *(uint *)((int)puVar14 + uVar29) & 0x80808080;
      } while (uVar6 == 0);
    }
    uVar6 = uVar29 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar8;
    uVar29 = (uint)*(char *)((int)puVar14 + uVar6);
    if (-1 < (int)uVar29) {
      uVar6 = *puVar14 & 0x80808080;
      uVar6 = LZCOUNT((*puVar14 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      uVar29 = (uint)*(byte *)((int)puVar14 + (uVar6 >> 3));
      uVar6 = uVar6 >> 3;
    }
    param_1[0xe] = param_1[0xe] - (uVar29 & 1);
    bVar3 = (byte)(uVar5 >> 0x19);
    *(byte *)((int)puVar14 + uVar6) = bVar3;
    *(byte *)((int)puVar14 + (uVar6 - 4 & uVar8) + 4) = bVar3;
    pppppuVar24 = (uint *****)(puVar14 + uVar6 * -9);
    pppppuVar24[-3] = (uint ****)0x0;
    pppppuVar24[-1] = (uint ****)0x0;
    iVar19 = param_1[0xf];
    *(undefined2 *)((int)pppppuVar24 + -0x23) = local_9c;
    *(char *)(pppppuVar24 + -9) = (char)uVar25;
    *(undefined1 *)((int)pppppuVar24 + -0x21) = local_9a;
    pppppuVar24[-8] = (uint ****)pppppuVar16;
    pppppuVar24[-7] = (uint ****)local_78;
    pppppuVar24[-6] = (uint ****)local_74;
    pppppuVar24[-5] = (uint ****)local_70;
    pppppuVar24[-4] = (uint ****)local_6c;
    pppppuVar24[-2] = (uint ****)0x8;
    param_1[0xf] = iVar19 + 1;
    pppppuVar16 = pppppuVar24;
    local_98 = local_74;
    local_84 = local_9c;
    local_82 = local_9a;
  }
LAB_014b0094:
  pppppuVar13 = local_b8;
  pppppuVar24 = local_bc;
  if (pppppuVar16[-1] < (uint ****)param_1[0x20]) {
    local_70 = local_c8;
    local_6c = pppppuStack_c4;
    local_68 = pppppuStack_c0;
    local_64 = local_bc;
    pppppuStack_60 = local_b8;
    pppppuStack_5c = local_b4;
    local_58 = pppppuStack_b0;
    ppppuVar21 = pppppuVar16[-1];
    local_80 = pppppuVar26;
    local_7c = pppppuVar15;
    local_78 = pppppuVar28;
    if (ppppuVar21 == pppppuVar16[-3]) {
      FUN_0148d604(pppppuVar16 + -3);
    }
    ppppuVar9 = pppppuVar16[-2] + (int)ppppuVar21 * 0xc;
    *ppppuVar9 = (uint ***)local_80;
    ppppuVar9[1] = (uint ***)local_7c;
    ppppuVar9[2] = (uint ***)local_78;
    ppppuVar9[3] = (uint ***)local_74;
    ppppuVar9[4] = (uint ***)local_70;
    ppppuVar9[5] = (uint ***)local_6c;
    ppppuVar9[6] = (uint ***)local_68;
    ppppuVar9[7] = (uint ***)local_64;
    ppppuVar9[8] = (uint ***)pppppuStack_60;
    ppppuVar9[9] = (uint ***)pppppuStack_5c;
    ppppuVar9[10] = (uint ***)local_58;
    ppppuVar9[0xb] = pppuStack_54;
    pppppuVar16[-1] = (uint ****)((int)ppppuVar21 + 1);
    piVar17 = param_1 + 0x21;
    if ((*piVar17 == 0) &&
       (pppppuVar16 = (uint *****)param_1[2], pppppuVar16 != (uint *****)&DAT_3b9aca00)) {
      pppppuVar15 = (uint *****)*param_1;
      pppppuVar28 = (uint *****)param_1[1];
      bVar30 = pppppuVar16 == (uint *****)0x0 &&
               (pppppuVar15 == (uint *****)0x0 && pppppuVar28 == (uint *****)0x0);
      pppppuVar26 = pppppuStack_5c;
      if (pppppuVar16 != (uint *****)0x0 ||
          (pppppuVar15 != (uint *****)0x0 || pppppuVar28 != (uint *****)0x0)) {
        pppppuVar26 = (uint *****)param_1[0x1e];
        bVar30 = pppppuVar26 == (uint *****)0x0;
      }
      if (!bVar30) {
        do {
          ppppuVar21 = *pppppuVar26;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar26);
        } while (!bVar30);
        *pppppuVar26 = (uint ****)((int)ppppuVar21 + 1);
        if ((int)ppppuVar21 < 0) {
LAB_014b03c0:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x14b03c0);
          (*pcVar1)();
        }
        pppppuVar24 = (uint *****)param_1[0x1f];
        bVar30 = pppppuVar15 != (uint *****)0x0 || pppppuVar28 != (uint *****)0x0;
        if (pppppuVar15 == (uint *****)0x0 && pppppuVar28 == (uint *****)0x0) {
          bVar30 = (uint *****)0x55d4a80 < pppppuVar16;
        }
        if (!bVar30) {
          pppppuVar15 = (uint *****)0x0;
          pppppuVar28 = (uint *****)0x0;
          pppppuVar16 = (uint *****)0x55d4a80;
        }
        uVar31 = FUN_014b0940();
        pppppuVar13 = (uint *****)((ulonglong)uVar31 >> 0x20);
        local_98 = pppppuVar13;
        FUN_01449e44(piVar17);
        *piVar17 = (int)uVar31;
        do {
          ppppuVar21 = *pppppuVar26;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar26);
        } while (!bVar30);
        *pppppuVar26 = (uint ****)((int)ppppuVar21 + 1);
        if ((int)ppppuVar21 < 0) goto LAB_014b03c0;
        local_64 = (uint *****)FUN_014a53a8(param_4);
        local_2c = 0;
        local_80 = pppppuVar15;
        local_7c = pppppuVar28;
        local_78 = pppppuVar16;
        local_70 = pppppuVar26;
        local_6c = pppppuVar24;
        local_68 = pppppuVar13;
        FUN_0149ff90(param_1[0x1c],param_1[0x1d],&local_80);
        DataMemoryBarrier(0xb);
        do {
          ppppuVar21 = *pppppuVar26;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar26);
        } while (!bVar30);
        *pppppuVar26 = (uint ****)((int)ppppuVar21 - 1);
        if (ppppuVar21 == (uint ****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(pppppuVar26,pppppuVar24);
        }
      }
    }
    goto LAB_014b0168;
  }
  if (local_bc != (uint *****)0x0) {
    ppppuVar21 = *local_b8;
    if (ppppuVar21 != (uint ****)0x0) {
      (*(code *)ppppuVar21)(local_bc,ppppuVar21,DAT_018dd947);
    }
    if (pppppuVar13[1] != (uint ****)0x0) {
      thunk_FUN_016d3fb4(pppppuVar24);
    }
  }
  DataMemoryBarrier(0xb);
  do {
    ppppuVar21 = *local_b4;
    bVar30 = (bool)hasExclusiveAccess(local_b4);
  } while (!bVar30);
  *local_b4 = (uint ****)((int)ppppuVar21 - 1);
  if (ppppuVar21 == (uint ****)0x1) {
    DataMemoryBarrier(0xb);
    FUN_00784894(local_b4);
  }
  FUN_014952b4(&local_c8);
LAB_014b0308:
  if (*param_2 < 2) goto LAB_014b0330;
  piVar17 = *(int **)(param_2 + 4);
  (**(code **)(*piVar17 + 0x10))(piVar17 + 3,piVar17[1],piVar17[2]);
  goto LAB_014b0328;
  while (local_130._1_1_ != '\x02') {
LAB_014af81c:
    if (pppppuVar16[uVar29 * -10 + -1] == (uint ****)0x0) goto LAB_014afb28;
    pppppuVar16[uVar29 * -10 + -1] = (uint ****)((int)pppppuVar16[uVar29 * -10 + -1] - 1);
    ppppuVar9 = (uint ****)((int)pppppuVar16[uVar29 * -10 + -2] + 1);
    pppppuVar26 = (uint *****)pppppuVar16[uVar29 * -10 + -3][(int)pppppuVar16[uVar29 * -10 + -2]];
    ppppuVar21 = (uint ****)((int)ppppuVar9 - (int)pppppuVar16[uVar29 * -10 + -4]);
    if (ppppuVar9 < pppppuVar16[uVar29 * -10 + -4]) {
      ppppuVar21 = ppppuVar9;
    }
    pppppuVar16[uVar29 * -10 + -2] = ppppuVar21;
    DataMemoryBarrier(0xb);
    local_c8 = pppppuVar26;
    if (*(char *)(pppppuVar26 + 0x10) != '\0') {
      FUN_014b07f4(&local_c8);
      goto LAB_014af81c;
    }
    cVar23 = local_130._1_1_;
    bVar30 = local_130._1_1_ == '\x02';
    local_130._0_2_ = CONCAT11(2,(undefined1)local_130);
    if (bVar30) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_004090ba,0x12,&DAT_018a5cf8);
    }
    local_128 = local_148;
    pppppuStack_124 = pppppuStack_144;
    pppppuStack_120 = pppppuStack_140;
    pppppuStack_11c = local_13c;
    pppppuStack_118 = local_138;
    pppppuStack_114 = local_134;
    local_110 = (undefined1)local_130;
    local_10e = local_130._2_2_;
    local_10f = cVar23;
    FUN_0147598c(&local_80,&local_128);
    pppppuVar15 = (uint *****)&local_80;
    if (local_4b != '\x02') {
      local_148 = local_80;
      pppppuStack_144 = local_7c;
      pppppuStack_140 = local_78;
      local_13c = local_74;
      local_138 = local_70;
      local_134 = local_6c;
      local_130 = local_68;
      pppppuVar15 = (uint *****)&local_64;
    }
    local_108 = (uint *****)*pppppuVar15;
    pppppuStack_104 = (uint *****)pppppuVar15[1];
    pppppuStack_100 = (uint *****)pppppuVar15[2];
    local_fc = (uint *****)pppppuVar15[3];
    pppppuStack_f8 = (uint *****)pppppuVar15[4];
    pppppuStack_f4 = (uint *****)pppppuVar15[5];
    ppppuVar21 = pppppuVar15[6];
    DataMemoryBarrier(0xb);
    local_f0 = ppppuVar21;
    local_80 = pppppuVar26;
    if (*(char *)(pppppuVar26 + 0x10) == '\0') {
      pppppuVar15 = pppppuVar26 + 9;
      DataMemoryBarrier(0xb);
      do {
        cVar23 = *(char *)pppppuVar15;
        bVar30 = (bool)hasExclusiveAccess(pppppuVar15);
      } while (!bVar30);
      *(char *)pppppuVar15 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar23 != '\0') goto LAB_014af930;
      if (*(char *)((int)pppppuVar26 + 0x21) != '\x02') {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
      }
      cVar23 = '\x02';
      pppppuVar26[2] = (uint ****)local_108;
      pppppuVar26[3] = (uint ****)pppppuStack_104;
      pppppuVar26[4] = (uint ****)pppppuStack_100;
      pppppuVar26[5] = (uint ****)local_fc;
      pppppuVar26[6] = (uint ****)pppppuStack_f8;
      pppppuVar26[7] = (uint ****)pppppuStack_f4;
      pppppuVar26[8] = ppppuVar21;
      DataMemoryBarrier(0xb);
      *(undefined1 *)(pppppuVar26 + 9) = 0;
      DataMemoryBarrier(0xb);
      DataMemoryBarrier(0xb);
      if (*(char *)(pppppuVar26 + 0x10) != '\0') {
        DataMemoryBarrier(0xb);
        do {
          cVar2 = *(char *)pppppuVar15;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar15);
        } while (!bVar30);
        *(char *)pppppuVar15 = '\x01';
        DataMemoryBarrier(0xb);
        if (cVar2 == '\0') {
          cVar23 = *(char *)((int)pppppuVar26 + 0x21);
          *(undefined1 *)((int)pppppuVar26 + 0x21) = 2;
          if (cVar23 == '\x02') {
            DataMemoryBarrier(0xb);
            *(char *)pppppuVar15 = '\0';
            cVar23 = '\x02';
            DataMemoryBarrier(0xb);
          }
          else {
            local_e8 = (uint *****)pppppuVar26[2];
            pppppuStack_e4 = (uint *****)pppppuVar26[3];
            pppppuStack_e0 = (uint *****)pppppuVar26[4];
            pppppuStack_dc = (uint *****)pppppuVar26[5];
            pppppuStack_d8 = (uint *****)pppppuVar26[6];
            pppppuStack_d4 = (uint *****)pppppuVar26[7];
            local_d0 = *(undefined1 *)(pppppuVar26 + 8);
            DataMemoryBarrier(0xb);
            *(char *)pppppuVar15 = '\0';
            DataMemoryBarrier(0xb);
            local_14c = (uint)*(ushort *)((int)pppppuVar26 + 0x22);
          }
        }
      }
    }
    else {
LAB_014af930:
      local_f0._1_1_ = (char)((uint)ppppuVar21 >> 8);
      local_f0._0_1_ = SUB41(ppppuVar21,0);
      local_d0 = (undefined1)local_f0;
      local_14c = (uint)ppppuVar21 >> 0x10;
      local_e8 = local_108;
      pppppuStack_e4 = pppppuStack_104;
      pppppuStack_e0 = pppppuStack_100;
      pppppuStack_dc = local_fc;
      pppppuStack_d8 = pppppuStack_f8;
      pppppuStack_d4 = pppppuStack_f4;
      cVar23 = local_f0._1_1_;
    }
    FUN_014b07f4(&local_80);
    pppppuVar15 = local_138;
    pppppuVar26 = local_13c;
    if (cVar23 != '\x02') {
      if (local_130._1_1_ != '\x02') {
        if (local_13c != (uint *****)0x0) {
          if (*local_138 != (uint ****)0x0) {
            (*(code *)*local_138)(local_13c);
          }
          if (pppppuVar15[1] != (uint ****)0x0) {
            thunk_FUN_016d3fb4(pppppuVar26);
          }
        }
        DataMemoryBarrier(0xb);
        do {
          ppppuVar21 = *local_134;
          bVar30 = (bool)hasExclusiveAccess(local_134);
        } while (!bVar30);
        *local_134 = (uint ****)((int)ppppuVar21 - 1);
        if (ppppuVar21 == (uint ****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_00784894(local_134);
        }
        FUN_014952b4(&local_148);
      }
      local_148 = local_e8;
      pppppuStack_144 = pppppuStack_e4;
      pppppuStack_140 = pppppuStack_e0;
      local_13c = pppppuStack_dc;
      local_138 = pppppuStack_d8;
      local_134 = pppppuStack_d4;
      local_130._0_2_ = CONCAT11(cVar23,local_d0);
      local_130 = (uint *****)CONCAT22((short)local_14c,(undefined2)local_130);
      goto LAB_014af81c;
    }
  }
  pppppuVar26 = pppppuVar16 + uVar29 * -10 + -1;
  pppppuVar16 = (uint *****)&local_80;
  if (*pppppuVar26 == (uint ****)0x0) {
LAB_014afb28:
    FUN_01492b74(&local_80,param_1 + 0x14,param_2);
    pppppuVar15 = local_7c;
    pppppuVar26 = local_80;
    pppppuVar16 = (uint *****)&local_80;
    if (local_80 != (uint *****)&DAT_80000000) {
      iVar19 = 0;
      if (local_74 == (uint *****)0x0) {
        pppppuVar16 = (uint *****)0x0;
        pppppuVar28 = (uint *****)0x0;
      }
      else {
        pppppuVar16 = (uint *****)((int)local_78 - (int)local_80);
        if (local_78 < local_80) {
          pppppuVar16 = local_78;
        }
        if ((uint *****)((int)local_80 - (int)pppppuVar16) < local_74) {
          iVar19 = (int)local_74 - ((int)local_80 - (int)pppppuVar16);
          pppppuVar28 = local_80;
        }
        else {
          pppppuVar28 = (uint *****)((int)pppppuVar16 + (int)local_74);
        }
      }
      FUN_014ef91c(local_7c + (int)pppppuVar16,(int)pppppuVar28 - (int)pppppuVar16);
      FUN_014ef91c(pppppuVar15,iVar19);
      pppppuVar16 = pppppuVar15;
      if (pppppuVar26 != (uint *****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar15);
      }
    }
  }
LAB_014afbb4:
  if (local_130._1_1_ != '\x02') {
    local_c8 = local_148;
    pppppuStack_c4 = pppppuStack_144;
    pppppuStack_c0 = pppppuStack_140;
    local_bc = local_13c;
    local_b8 = local_138;
    local_b4 = local_134;
    pppppuStack_b0 = local_130;
    if (param_1[0x1e] == 0) {
      FUN_015f3b0c(&local_80,1);
    }
    else {
      (**(code **)(param_1[0x1f] + 0x14))
                (&local_80,param_1[0x1e] + (*(int *)(param_1[0x1f] + 8) - 1U & 0xfffffff8) + 8);
    }
    pppppuVar28 = local_78;
    pppppuVar15 = local_7c;
    pppppuVar26 = local_80;
    uVar8 = (uint)*param_2;
    if (uVar8 == 0) {
      uVar5 = 0;
    }
    else if (uVar8 == 1) {
      uVar5 = (uint)param_2[1] << 8;
    }
    else {
      puVar20 = *(undefined4 **)(param_2 + 4);
      pppppuVar16 = (uint *****)thunk_FUN_016d4a50(0x10);
      if (pppppuVar16 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      (**(code **)*puVar20)(&local_98,puVar20 + 3,puVar20[1],puVar20[2]);
      *pppppuVar16 = (uint ****)local_98;
      pppppuVar16[1] = local_94;
      pppppuVar16[2] = local_90;
      pppppuVar16[3] = ppppuStack_8c;
      uVar5 = 0;
    }
    local_80 = (uint *****)(uVar5 | uVar8);
    local_7c = pppppuVar16;
    (*(code *)**(undefined4 **)(param_2 + 8))
              (&local_78,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
    uVar5 = FUN_014c854c(*puVar4,param_1[0x11],param_1[0x12],param_1[0x13],&local_80);
    pppppuVar13 = local_70;
    pppppuVar24 = local_74;
    pppppuVar16 = local_7c;
    puVar10 = (undefined2 *)((uint)&local_80 | 1);
    local_194 = 0;
    piVar17 = param_1 + 0xc;
    uVar25 = (uint)local_80 & 0xff;
    uVar8 = uVar5;
    do {
      uVar8 = param_1[0xd] & uVar8;
      uVar29 = *(uint *)(*piVar17 + uVar8);
      uVar6 = uVar29 ^ (uVar5 >> 0x19) * 0x1010101;
      for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        pppppuVar22 = (uint *****)
                      (*piVar17 +
                      (uVar8 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                              (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                      param_1[0xd]) * -0x24);
        if (*(char *)(pppppuVar22 + -9) == '\x01') {
          if (uVar25 == 1) {
            if ((uint)*(byte *)((int)pppppuVar22 + -0x23) == ((uint)local_80 >> 8 & 0xff)) {
LAB_014afe34:
              if ((uint *****)pppppuVar22[-5] == local_70) {
                pppppuVar12 = (uint *****)0x0;
                do {
                  if (local_70 == pppppuVar12) {
                    if (1 < uVar25) {
                      (*(code *)(*local_7c)[4])(local_7c + 3,local_7c[1],local_7c[2]);
                      thunk_FUN_016d3fb4(pppppuVar16);
                    }
                    (*(code *)local_78[4])(&local_6c,pppppuVar24,pppppuVar13);
                    pppppuVar16 = pppppuVar22;
                    goto LAB_014b0094;
                  }
                  uVar11 = (uint)*(byte *)((int)local_74 + (int)pppppuVar12);
                  uVar18 = (uint)*(byte *)((int)pppppuVar22[-6] + (int)pppppuVar12);
                  pppppuVar12 = (uint *****)((int)pppppuVar12 + 1);
                  if (uVar11 - 0x41 < 0x1a) {
                    uVar11 = uVar11 | 0x20;
                  }
                  if (uVar18 - 0x41 < 0x1a) {
                    uVar18 = uVar18 | 0x20;
                  }
                } while (uVar18 == uVar11);
              }
            }
          }
          else {
LAB_014afe80:
            if (uVar25 == 0) {
LAB_014b0368:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
            }
          }
        }
        else {
          if (*(char *)(pppppuVar22 + -9) != '\x02') goto LAB_014b0368;
          if (uVar25 != 2) goto LAB_014afe80;
          ppppuVar21 = (uint ****)pppppuVar22[-8][2];
          if (ppppuVar21 == local_7c[2]) {
            pppuVar27 = pppppuVar22[-8][1];
            ppppuVar9 = local_7c[1];
            do {
              if (ppppuVar21 == (uint ****)0x0) goto LAB_014afe34;
              uVar11 = (uint)*(byte *)ppppuVar9;
              ppppuVar21 = (uint ****)((int)ppppuVar21 - 1);
              uVar18 = (uint)*(byte *)pppuVar27;
              if (uVar11 - 0x41 < 0x1a) {
                uVar11 = uVar11 | 0x20;
              }
              if (uVar18 - 0x41 < 0x1a) {
                uVar18 = uVar18 | 0x20;
              }
              pppuVar27 = (uint ***)((int)pppuVar27 + 1);
              ppppuVar9 = (uint ****)((int)ppppuVar9 + 1);
            } while (uVar18 == uVar11);
          }
        }
      }
      if ((uVar29 & 0x80808080 & uVar29 << 1) != 0) goto LAB_014aff38;
      local_194 = local_194 + 4;
      uVar8 = uVar8 + local_194;
    } while( true );
  }
LAB_014b0168:
  if (1 < *param_2) {
    piVar17 = *(int **)(param_2 + 4);
    (**(code **)(*piVar17 + 0x10))(piVar17 + 3,piVar17[1],piVar17[2]);
LAB_014b0328:
    thunk_FUN_016d3fb4(piVar17);
  }
LAB_014b0330:
  (**(code **)(*(int *)(param_2 + 8) + 0x10))
            (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  return;
}


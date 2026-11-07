// FUN_0144a224 @ 0144a224 size=3440 calls_out=20 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0144a224(undefined4 *param_1,byte *param_2,undefined4 *param_3,undefined4 param_4)

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
  uint *****pppppuVar11;
  uint *****pppppuVar12;
  uint *puVar13;
  uint *****pppppuVar14;
  uint *****pppppuVar15;
  int *piVar16;
  uint uVar17;
  int iVar18;
  uint uVar19;
  uint ****ppppuVar20;
  undefined4 *puVar21;
  uint *****pppppuVar22;
  uint *****pppppuVar23;
  uint *****pppppuVar24;
  char cVar25;
  uint uVar26;
  uint *****pppppuVar27;
  uint uVar28;
  uint ***pppuVar29;
  bool bVar30;
  undefined8 uVar31;
  int local_194;
  int local_150;
  uint *****local_148;
  uint *****pppppuStack_144;
  uint *****pppppuStack_140;
  uint *****local_13c;
  uint *****pppppuStack_138;
  uint *****pppppuStack_134;
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
  uint *****pppppuStack_b8;
  uint *****pppppuStack_b4;
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
    uVar5 = FUN_01441568(*puVar4,param_1[0x11],param_1[0x12],param_1[0x13],param_2);
    uVar19 = uVar5 >> 0x19;
    iVar18 = param_1[0xc];
    uVar26 = param_1[0xd];
    local_150 = 0;
    while( true ) {
      uVar5 = uVar26 & uVar5;
      uVar28 = *(uint *)(iVar18 + uVar5);
      uVar6 = uVar28 ^ uVar19 * 0x1010101;
      uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff;
      while (uVar6 != 0) {
        iVar7 = FUN_014c953c(param_2,iVar18 + -0x24 +
                                     (uVar5 + ((uint)LZCOUNT(uVar6 << 0x18 |
                                                             (uVar6 >> 8 & 0xff) << 0x10 |
                                                             (uVar6 >> 0x10 & 0xff) << 8 |
                                                             uVar6 >> 0x18) >> 3) & uVar26) * -0x24)
        ;
        uVar6 = uVar6 - 1 & uVar6;
        if (iVar7 != 0) {
          FUN_014491b0(param_3);
          goto LAB_0144aea0;
        }
      }
      if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) break;
      local_150 = local_150 + 4;
      uVar5 = uVar5 + local_150;
    }
  }
  local_148 = (uint *****)*param_3;
  pppppuStack_144 = (uint *****)param_3[1];
  pppppuStack_140 = (uint *****)param_3[2];
  local_13c = (uint *****)param_3[3];
  pppppuStack_138 = (uint *****)param_3[4];
  pppppuStack_134 = (uint *****)param_3[5];
  local_130 = (uint *****)param_3[6];
  pppppuVar15 = (uint *****)(param_3 + 3);
  if (param_1[0x17] != 0) {
    uVar5 = FUN_01441568(param_1[0x18],param_1[0x19],param_1[0x1a],param_1[0x1b],param_2);
    uVar19 = uVar5 >> 0x19;
    pppppuVar15 = (uint *****)param_1[0x14];
    uVar26 = param_1[0x15];
    local_150 = 0;
    while( true ) {
      uVar5 = uVar26 & uVar5;
      uVar6 = *(uint *)((int)pppppuVar15 + uVar5);
      uVar28 = uVar6 ^ uVar19 * 0x1010101;
      uVar28 = ~uVar28 & 0x80808080 & uVar28 + 0xfefefeff;
      while (uVar28 != 0) {
        uVar8 = uVar5 + ((uint)LZCOUNT(uVar28 << 0x18 | (uVar28 >> 8 & 0xff) << 0x10 |
                                       (uVar28 >> 0x10 & 0xff) << 8 | uVar28 >> 0x18) >> 3) & uVar26
        ;
        iVar18 = FUN_014c953c(param_2,pppppuVar15 + uVar8 * -10 + -10);
        uVar28 = uVar28 - 1 & uVar28;
        if (iVar18 != 0) {
          goto LAB_0144a464;
        }
      }
      if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
      local_150 = local_150 + 4;
      uVar5 = uVar5 + local_150;
    }
  }
  goto LAB_0144a7d0;
LAB_0144ab48:
  if (param_1[0xe] == 0) {
    FUN_0142accc(piVar16,puVar4);
    uVar26 = (uint)local_80 & 0xff;
  }
  local_9c = *puVar10;
  local_9a = *(undefined1 *)(puVar10 + 1);
  if (uVar26 == 3) {
    pppppuVar22 = pppppuVar15;
  }
  else {
    puVar13 = (uint *)*piVar16;
    uVar19 = param_1[0xd];
    uVar28 = uVar19 & uVar5;
    uVar6 = *(uint *)((int)puVar13 + uVar28) & 0x80808080;
    if (uVar6 == 0) {
      iVar18 = 4;
      do {
        uVar28 = uVar28 + iVar18;
        iVar18 = iVar18 + 4;
        uVar28 = uVar28 & uVar19;
        uVar6 = *(uint *)((int)puVar13 + uVar28) & 0x80808080;
      } while (uVar6 == 0);
    }
    uVar6 = uVar28 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) & uVar19;
    uVar28 = (uint)*(char *)((int)puVar13 + uVar6);
    if (-1 < (int)uVar28) {
      uVar6 = *puVar13 & 0x80808080;
      uVar6 = LZCOUNT((*puVar13 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                      (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
      uVar28 = (uint)*(byte *)((int)puVar13 + (uVar6 >> 3));
      uVar6 = uVar6 >> 3;
    }
    param_1[0xe] = param_1[0xe] - (uVar28 & 1);
    bVar3 = (byte)(uVar5 >> 0x19);
    *(byte *)((int)puVar13 + uVar6) = bVar3;
    *(byte *)((int)puVar13 + (uVar6 - 4 & uVar19) + 4) = bVar3;
    pppppuVar22 = (uint *****)(puVar13 + uVar6 * -9);
    pppppuVar22[-3] = (uint ****)0x0;
    pppppuVar22[-1] = (uint ****)0x0;
    iVar18 = param_1[0xf];
    *(char *)(pppppuVar22 + -9) = (char)uVar26;
    *(undefined2 *)((int)pppppuVar22 + -0x23) = local_9c;
    *(undefined1 *)((int)pppppuVar22 + -0x21) = local_9a;
    pppppuVar22[-8] = (uint ****)pppppuVar15;
    pppppuVar22[-7] = (uint ****)local_78;
    pppppuVar22[-6] = (uint ****)local_74;
    pppppuVar22[-5] = (uint ****)local_70;
    pppppuVar22[-4] = (uint ****)local_6c;
    pppppuVar22[-2] = (uint ****)0x8;
    param_1[0xf] = iVar18 + 1;
    local_98 = local_74;
    local_84 = local_9c;
    local_82 = local_9a;
  }
LAB_0144aca0:
  if (pppppuVar22[-1] < (uint ****)param_1[0x20]) {
    local_70 = local_c8;
    local_6c = pppppuStack_c4;
    local_68 = pppppuStack_c0;
    local_64 = local_bc;
    pppppuStack_60 = pppppuStack_b8;
    pppppuStack_5c = pppppuStack_b4;
    local_58 = pppppuStack_b0;
    ppppuVar20 = pppppuVar22[-1];
    local_80 = pppppuVar23;
    local_7c = pppppuVar14;
    local_78 = pppppuVar27;
    if (ppppuVar20 == pppppuVar22[-3]) {
      FUN_0148d604(pppppuVar22 + -3);
    }
    ppppuVar9 = pppppuVar22[-2] + (int)ppppuVar20 * 0xc;
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
    pppppuVar22[-1] = (uint ****)((int)ppppuVar20 + 1);
    piVar16 = param_1 + 0x21;
    if ((*piVar16 == 0) &&
       (pppppuVar15 = (uint *****)param_1[2], pppppuVar15 != (uint *****)&DAT_3b9aca00)) {
      pppppuVar14 = (uint *****)*param_1;
      pppppuVar27 = (uint *****)param_1[1];
      bVar30 = pppppuVar15 == (uint *****)0x0 &&
               (pppppuVar14 == (uint *****)0x0 && pppppuVar27 == (uint *****)0x0);
      pppppuVar23 = pppppuStack_5c;
      if (pppppuVar15 != (uint *****)0x0 ||
          (pppppuVar14 != (uint *****)0x0 || pppppuVar27 != (uint *****)0x0)) {
        pppppuVar23 = (uint *****)param_1[0x1e];
        bVar30 = pppppuVar23 == (uint *****)0x0;
      }
      if (!bVar30) {
        do {
          ppppuVar20 = *pppppuVar23;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar23);
        } while (!bVar30);
        *pppppuVar23 = (uint ****)((int)ppppuVar20 + 1);
        if ((int)ppppuVar20 < 0) {
LAB_0144af58:
                    /* WARNING: Does not return */
          pcVar1 = (code *)software_udf(0xfdee,0x144af58);
          (*pcVar1)();
        }
        pppppuVar24 = (uint *****)param_1[0x1f];
        bVar30 = pppppuVar14 != (uint *****)0x0 || pppppuVar27 != (uint *****)0x0;
        if (pppppuVar14 == (uint *****)0x0 && pppppuVar27 == (uint *****)0x0) {
          bVar30 = (uint *****)0x55d4a80 < pppppuVar15;
        }
        if (!bVar30) {
          pppppuVar14 = (uint *****)0x0;
          pppppuVar27 = (uint *****)0x0;
          pppppuVar15 = (uint *****)0x55d4a80;
        }
        uVar31 = FUN_014b0940();
        pppppuVar12 = (uint *****)((ulonglong)uVar31 >> 0x20);
        local_98 = pppppuVar12;
        FUN_01449e44(piVar16);
        *piVar16 = (int)uVar31;
        do {
          ppppuVar20 = *pppppuVar23;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar23);
        } while (!bVar30);
        *pppppuVar23 = (uint ****)((int)ppppuVar20 + 1);
        if ((int)ppppuVar20 < 0) goto LAB_0144af58;
        local_64 = (uint *****)FUN_014a53a8(param_4);
        local_2c = 0;
        local_80 = pppppuVar14;
        local_7c = pppppuVar27;
        local_78 = pppppuVar15;
        local_70 = pppppuVar23;
        local_6c = pppppuVar24;
        local_68 = pppppuVar12;
        FUN_01421fbc(param_1[0x1c],param_1[0x1d],&local_80);
        DataMemoryBarrier(0xb);
        do {
          ppppuVar20 = *pppppuVar23;
          bVar30 = (bool)hasExclusiveAccess(pppppuVar23);
        } while (!bVar30);
        *pppppuVar23 = (uint ****)((int)ppppuVar20 - 1);
        if (ppppuVar20 == (uint ****)0x1) {
          DataMemoryBarrier(0xb);
          FUN_0089ddfc(pppppuVar23,pppppuVar24);
        }
      }
    }
    goto LAB_0144ad6c;
  }
  FUN_014491b0(&local_c8,(uint ****)param_1[0x20],DAT_018dd947);
LAB_0144aea0:
  if (*param_2 < 2) goto LAB_0144aec8;
  piVar16 = *(int **)(param_2 + 4);
  (**(code **)(*piVar16 + 0x10))(piVar16 + 3,piVar16[1],piVar16[2]);
  goto LAB_0144aec0;
  while (local_130._1_1_ != '\x02') {
LAB_0144a464:
    if (pppppuVar15[uVar8 * -10 + -1] == (uint ****)0x0) goto LAB_0144a744;
    pppppuVar15[uVar8 * -10 + -1] = (uint ****)((int)pppppuVar15[uVar8 * -10 + -1] - 1);
    ppppuVar9 = (uint ****)((int)pppppuVar15[uVar8 * -10 + -2] + 1);
    pppppuVar23 = (uint *****)pppppuVar15[uVar8 * -10 + -3][(int)pppppuVar15[uVar8 * -10 + -2]];
    ppppuVar20 = (uint ****)((int)ppppuVar9 - (int)pppppuVar15[uVar8 * -10 + -4]);
    if (ppppuVar9 < pppppuVar15[uVar8 * -10 + -4]) {
      ppppuVar20 = ppppuVar9;
    }
    pppppuVar15[uVar8 * -10 + -2] = ppppuVar20;
    DataMemoryBarrier(0xb);
    local_c8 = pppppuVar23;
    if (*(char *)(pppppuVar23 + 0x10) != '\0') {
      FUN_01449570(&local_c8);
      goto LAB_0144a464;
    }
    cVar25 = local_130._1_1_;
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
    pppppuStack_118 = pppppuStack_138;
    pppppuStack_114 = pppppuStack_134;
    local_110 = (undefined1)local_130;
    local_10e = local_130._2_2_;
    local_10f = cVar25;
    FUN_0142bdd8(&local_80,&local_128);
    pppppuVar14 = (uint *****)&local_80;
    if (local_4b != '\x02') {
      local_148 = local_80;
      pppppuStack_144 = local_7c;
      pppppuStack_140 = local_78;
      local_13c = local_74;
      pppppuStack_138 = local_70;
      pppppuStack_134 = local_6c;
      local_130 = local_68;
      pppppuVar14 = (uint *****)&local_64;
    }
    local_108 = (uint *****)*pppppuVar14;
    pppppuStack_104 = (uint *****)pppppuVar14[1];
    pppppuStack_100 = (uint *****)pppppuVar14[2];
    local_fc = (uint *****)pppppuVar14[3];
    pppppuStack_f8 = (uint *****)pppppuVar14[4];
    pppppuStack_f4 = (uint *****)pppppuVar14[5];
    ppppuVar20 = pppppuVar14[6];
    DataMemoryBarrier(0xb);
    local_f0._0_1_ = SUB41(ppppuVar20,0);
    local_f0._1_1_ = (char)((uint)ppppuVar20 >> 8);
    local_f0._2_2_ = (ushort)((uint)ppppuVar20 >> 0x10);
    local_f0 = ppppuVar20;
    local_80 = pppppuVar23;
    cVar25 = local_f0._1_1_;
    if (*(char *)(pppppuVar23 + 0x10) == '\0') {
      pppppuVar14 = pppppuVar23 + 9;
      DataMemoryBarrier(0xb);
      do {
        cVar2 = *(char *)pppppuVar14;
        bVar30 = (bool)hasExclusiveAccess(pppppuVar14);
      } while (!bVar30);
      *(char *)pppppuVar14 = '\x01';
      DataMemoryBarrier(0xb);
      if (cVar2 == '\0') {
        if (*(char *)((int)pppppuVar23 + 0x21) != '\x02') {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00566930,0x20,&DAT_018a5d08);
        }
        pppppuVar23[2] = (uint ****)local_108;
        pppppuVar23[3] = (uint ****)pppppuStack_104;
        pppppuVar23[4] = (uint ****)pppppuStack_100;
        pppppuVar23[5] = (uint ****)local_fc;
        pppppuVar23[6] = (uint ****)pppppuStack_f8;
        pppppuVar23[7] = (uint ****)pppppuStack_f4;
        pppppuVar23[8] = ppppuVar20;
        DataMemoryBarrier(0xb);
        *(undefined1 *)(pppppuVar23 + 9) = 0;
        DataMemoryBarrier(0xb);
        DataMemoryBarrier(0xb);
        if (*(char *)(pppppuVar23 + 0x10) != '\0') {
          DataMemoryBarrier(0xb);
          do {
            cVar25 = *(char *)pppppuVar14;
            bVar30 = (bool)hasExclusiveAccess(pppppuVar14);
          } while (!bVar30);
          *(char *)pppppuVar14 = '\x01';
          DataMemoryBarrier(0xb);
          if (cVar25 == '\0') {
            cVar25 = *(char *)((int)pppppuVar23 + 0x21);
            uVar19 = (uint)*(ushort *)((int)pppppuVar23 + 0x22);
            *(undefined1 *)((int)pppppuVar23 + 0x21) = 2;
            if (cVar25 == '\x02') {
              DataMemoryBarrier(0xb);
              *(char *)pppppuVar14 = '\0';
              cVar25 = '\x02';
              DataMemoryBarrier(0xb);
              uVar19 = uVar6;
            }
            else {
              local_e8 = (uint *****)pppppuVar23[2];
              pppppuStack_e4 = (uint *****)pppppuVar23[3];
              pppppuStack_e0 = (uint *****)pppppuVar23[4];
              pppppuStack_dc = (uint *****)pppppuVar23[5];
              pppppuStack_d8 = (uint *****)pppppuVar23[6];
              pppppuStack_d4 = (uint *****)pppppuVar23[7];
              local_d0 = *(undefined1 *)(pppppuVar23 + 8);
              DataMemoryBarrier(0xb);
              *(char *)pppppuVar14 = '\0';
              DataMemoryBarrier(0xb);
            }
            goto LAB_0144a644;
          }
        }
        cVar25 = '\x02';
        uVar19 = uVar6;
      }
      else {
        local_d0 = (undefined1)local_f0;
        uVar19 = (uint)local_f0._2_2_;
        local_e8 = local_108;
        pppppuStack_e4 = pppppuStack_104;
        pppppuStack_e0 = pppppuStack_100;
        pppppuStack_dc = local_fc;
        pppppuStack_d8 = pppppuStack_f8;
        pppppuStack_d4 = pppppuStack_f4;
      }
    }
    else {
      local_d0 = (undefined1)local_f0;
      uVar19 = (uint)local_f0._2_2_;
      local_e8 = local_108;
      pppppuStack_e4 = pppppuStack_104;
      pppppuStack_e0 = pppppuStack_100;
      pppppuStack_dc = local_fc;
      pppppuStack_d8 = pppppuStack_f8;
      pppppuStack_d4 = pppppuStack_f4;
    }
LAB_0144a644:
    FUN_01449570(&local_80);
    uVar6 = uVar19;
    if (cVar25 != '\x02') {
      if (local_130._1_1_ != '\x02') {
        FUN_014491b0(&local_148);
      }
      local_148 = local_e8;
      pppppuStack_144 = pppppuStack_e4;
      pppppuStack_140 = pppppuStack_e0;
      local_13c = pppppuStack_dc;
      pppppuStack_138 = pppppuStack_d8;
      pppppuStack_134 = pppppuStack_d4;
      local_130._0_2_ = CONCAT11(cVar25,local_d0);
      local_130 = (uint *****)CONCAT22((short)uVar19,(undefined2)local_130);
      goto LAB_0144a464;
    }
  }
  pppppuVar23 = pppppuVar15 + uVar8 * -10 + -1;
  pppppuVar15 = (uint *****)&local_80;
  if (*pppppuVar23 == (uint ****)0x0) {
LAB_0144a744:
    FUN_0142b76c(&local_80,param_1 + 0x14,param_2);
    pppppuVar14 = local_7c;
    pppppuVar23 = local_80;
    pppppuVar15 = (uint *****)&local_80;
    if (local_80 != (uint *****)&DAT_80000000) {
      iVar18 = 0;
      if (local_74 == (uint *****)0x0) {
        pppppuVar15 = (uint *****)0x0;
        pppppuVar27 = (uint *****)0x0;
      }
      else {
        pppppuVar15 = (uint *****)((int)local_78 - (int)local_80);
        if (local_78 < local_80) {
          pppppuVar15 = local_78;
        }
        if ((uint *****)((int)local_80 - (int)pppppuVar15) < local_74) {
          iVar18 = (int)local_74 - ((int)local_80 - (int)pppppuVar15);
          pppppuVar27 = local_80;
        }
        else {
          pppppuVar27 = (uint *****)((int)pppppuVar15 + (int)local_74);
        }
      }
      FUN_014564ec(local_7c + (int)pppppuVar15,(int)pppppuVar27 - (int)pppppuVar15);
      FUN_014564ec(pppppuVar14,iVar18);
      pppppuVar15 = pppppuVar14;
      if (pppppuVar23 != (uint *****)0x0) {
        thunk_FUN_016d3fb4(pppppuVar14);
      }
    }
  }
LAB_0144a7d0:
  if (local_130._1_1_ != '\x02') {
    local_c8 = local_148;
    pppppuStack_c4 = pppppuStack_144;
    pppppuStack_c0 = pppppuStack_140;
    local_bc = local_13c;
    pppppuStack_b8 = pppppuStack_138;
    pppppuStack_b4 = pppppuStack_134;
    pppppuStack_b0 = local_130;
    if (param_1[0x1e] == 0) {
      FUN_015f3b0c(&local_80,1);
    }
    else {
      (**(code **)(param_1[0x1f] + 0x14))
                (&local_80,param_1[0x1e] + (*(int *)(param_1[0x1f] + 8) - 1U & 0xfffffff8) + 8);
    }
    pppppuVar27 = local_78;
    pppppuVar14 = local_7c;
    pppppuVar23 = local_80;
    uVar19 = (uint)*param_2;
    if (uVar19 == 0) {
      uVar5 = 0;
    }
    else if (uVar19 == 1) {
      uVar5 = (uint)param_2[1] << 8;
    }
    else {
      puVar21 = *(undefined4 **)(param_2 + 4);
      pppppuVar15 = (uint *****)thunk_FUN_016d4a50(0x10);
      if (pppppuVar15 == (uint *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600874(4,0x10);
      }
      (**(code **)*puVar21)(&local_98,puVar21 + 3,puVar21[1],puVar21[2]);
      *pppppuVar15 = (uint ****)local_98;
      pppppuVar15[1] = local_94;
      pppppuVar15[2] = local_90;
      pppppuVar15[3] = ppppuStack_8c;
      uVar5 = 0;
    }
    local_80 = (uint *****)(uVar5 | uVar19);
    local_7c = pppppuVar15;
    (*(code *)**(undefined4 **)(param_2 + 8))
              (&local_78,param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),
               *(undefined4 *)(param_2 + 0x10));
    uVar5 = FUN_01441568(*puVar4,param_1[0x11],param_1[0x12],param_1[0x13],&local_80);
    pppppuVar12 = local_70;
    pppppuVar24 = local_74;
    pppppuVar15 = local_7c;
    puVar10 = (undefined2 *)((uint)&local_80 | 1);
    local_194 = 0;
    piVar16 = param_1 + 0xc;
    uVar26 = (uint)local_80 & 0xff;
    uVar19 = uVar5;
    do {
      uVar19 = param_1[0xd] & uVar19;
      uVar28 = *(uint *)(*piVar16 + uVar19);
      uVar6 = uVar28 ^ (uVar5 >> 0x19) * 0x1010101;
      for (uVar6 = ~uVar6 & 0x80808080 & uVar6 + 0xfefefeff; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6)
      {
        pppppuVar22 = (uint *****)
                      (*piVar16 +
                      (uVar19 + ((uint)LZCOUNT(uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                                               (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18) >> 3) &
                      param_1[0xd]) * -0x24);
        if (*(char *)(pppppuVar22 + -9) == '\x01') {
          if (uVar26 == 1) {
            if ((uint)*(byte *)((int)pppppuVar22 + -0x23) == ((uint)local_80 >> 8 & 0xff)) {
LAB_0144aa50:
              if ((uint *****)pppppuVar22[-5] == local_70) {
                pppppuVar11 = (uint *****)0x0;
                do {
                  if (local_70 == pppppuVar11) {
                    if (1 < uVar26) {
                      (*(code *)(*local_7c)[4])(local_7c + 3,local_7c[1],local_7c[2]);
                      thunk_FUN_016d3fb4(pppppuVar15);
                    }
                    (*(code *)local_78[4])(&local_6c,pppppuVar24,pppppuVar12);
                    goto LAB_0144aca0;
                  }
                  uVar8 = (uint)*(byte *)((int)local_74 + (int)pppppuVar11);
                  uVar17 = (uint)*(byte *)((int)pppppuVar22[-6] + (int)pppppuVar11);
                  pppppuVar11 = (uint *****)((int)pppppuVar11 + 1);
                  if (uVar8 - 0x41 < 0x1a) {
                    uVar8 = uVar8 | 0x20;
                  }
                  if (uVar17 - 0x41 < 0x1a) {
                    uVar17 = uVar17 | 0x20;
                  }
                } while (uVar17 == uVar8);
              }
            }
          }
          else {
LAB_0144aa9c:
            if (uVar26 == 0) {
LAB_0144af00:
                    /* WARNING: Subroutine does not return */
              FUN_00faa464(&DAT_00419463,0x28,&DAT_0188452c);
            }
          }
        }
        else {
          if (*(char *)(pppppuVar22 + -9) != '\x02') goto LAB_0144af00;
          if (uVar26 != 2) goto LAB_0144aa9c;
          ppppuVar20 = (uint ****)pppppuVar22[-8][2];
          if (ppppuVar20 == local_7c[2]) {
            ppppuVar9 = local_7c[1];
            pppuVar29 = pppppuVar22[-8][1];
            do {
              if (ppppuVar20 == (uint ****)0x0) goto LAB_0144aa50;
              uVar8 = (uint)*(byte *)ppppuVar9;
              ppppuVar20 = (uint ****)((int)ppppuVar20 - 1);
              uVar17 = (uint)*(byte *)pppuVar29;
              if (uVar8 - 0x41 < 0x1a) {
                uVar8 = uVar8 | 0x20;
              }
              if (uVar17 - 0x41 < 0x1a) {
                uVar17 = uVar17 | 0x20;
              }
              ppppuVar9 = (uint ****)((int)ppppuVar9 + 1);
              pppuVar29 = (uint ***)((int)pppuVar29 + 1);
            } while (uVar17 == uVar8);
          }
        }
      }
      if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) goto LAB_0144ab48;
      local_194 = local_194 + 4;
      uVar19 = uVar19 + local_194;
    } while( true );
  }
LAB_0144ad6c:
  if (1 < *param_2) {
    piVar16 = *(int **)(param_2 + 4);
    (**(code **)(*piVar16 + 0x10))(piVar16 + 3,piVar16[1],piVar16[2]);
LAB_0144aec0:
    thunk_FUN_016d3fb4(piVar16);
  }
LAB_0144aec8:
  (**(code **)(*(int *)(param_2 + 8) + 0x10))
            (param_2 + 0x14,*(undefined4 *)(param_2 + 0xc),*(undefined4 *)(param_2 + 0x10));
  return;
}


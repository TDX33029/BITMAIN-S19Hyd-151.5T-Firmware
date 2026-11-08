// FUN_00c7c448 @ 00c7c448 size=2532 calls_out=26 calls_in=2
// strings: 

undefined4 FUN_00c7c448(undefined4 *param_1,undefined4 param_2)

{
  code *pcVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  undefined1 uVar4;
  undefined1 uVar5;
  undefined1 uVar6;
  undefined1 uVar7;
  char cVar8;
  int iVar9;
  int *piVar10;
  uint uVar11;
  float *pfVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  int iVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  undefined4 extraout_r1;
  undefined4 uVar23;
  undefined4 extraout_r1_00;
  undefined4 uVar24;
  undefined4 uVar25;
  uint uVar26;
  undefined1 *puVar27;
  int iVar28;
  uint *puVar29;
  undefined4 uVar30;
  uint uVar31;
  int *piVar32;
  double *pdVar33;
  undefined **ppuVar34;
  int iVar35;
  double *pdVar36;
  bool bVar37;
  bool bVar38;
  bool bVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  undefined4 uVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  undefined4 uVar45;
  float fVar46;
  undefined4 local_288;
  undefined4 local_284;
  undefined4 local_280;
  undefined4 local_27c;
  undefined4 local_278;
  int local_264;
  int local_22c;
  uint local_21c;
  uint local_1fc;
  uint local_1f4;
  float local_1e8;
  int iStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined4 local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 uStack_1cc;
  float *local_198;
  undefined **local_194;
  double *local_190;
  undefined1 *local_18c;
  undefined4 local_188;
  undefined4 local_184;
  undefined4 local_180;
  undefined4 local_17c;
  undefined4 local_178;
  undefined1 local_174;
  uint local_170;
  undefined4 local_16c;
  undefined4 local_168;
  undefined4 local_164;
  undefined4 local_160;
  undefined4 local_15c;
  undefined4 local_158;
  undefined1 local_154;
  float *local_153;
  undefined3 uStack_14f;
  undefined4 local_14c;
  undefined4 local_148;
  undefined1 local_144;
  int local_140;
  float local_13c;
  uint local_138;
  undefined4 local_134;
  undefined4 uStack_130;
  int local_12c;
  int local_128;
  int local_124;
  int local_120;
  undefined4 local_11c;
  float *local_118;
  undefined **ppuStack_114;
  double *pdStack_110;
  undefined1 *puStack_10c;
  undefined4 local_108;
  undefined4 uStack_104;
  undefined4 uStack_100;
  undefined4 uStack_fc;
  float local_f8;
  int iStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  int local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  uint local_cc;
  uint local_c8;
  uint local_c4;
  int *local_c0;
  int *local_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined1 local_ac;
  undefined1 local_ab;
  undefined1 local_aa;
  undefined1 local_a9;
  float local_a8;
  float **local_a4;
  undefined4 local_a0;
  float *local_9c;
  undefined *local_98;
  float **local_94;
  float *local_90;
  undefined **local_8c;
  double *local_88;
  undefined1 *local_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  float *pfStack_70;
  undefined **ppuStack_6c;
  double *local_68;
  
  pdVar33 = (double *)*param_1;
  if (pdVar33 == (double *)0x0) {
    return 1;
  }
  uVar7 = *(undefined1 *)(pdVar33 + 4);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(uVar7) {
  case 0:
    uVar7 = 3;
    if (*(undefined1 **)(*(int *)(pdVar33 + 3) + 0x10) == &DAT_3b9aca00)
    goto switchD_00c7c48c_caseD_3;
    FUN_016dd52c(pdVar33,*(int *)(pdVar33 + 3),0x18);
    FUN_015f3b0c(&local_90,1);
    pfStack_70 = local_90;
    ppuStack_6c = local_8c;
    local_68 = local_88;
    FUN_015f3c24(&local_90,pdVar33 + 1,&pfStack_70);
    puVar27 = local_84;
    pdVar36 = local_88;
    uVar23 = local_80;
    if (((uint)local_90 & 1) != 0) {
      uVar23 = 0;
      pdVar36 = (double *)0x0;
      puVar27 = (undefined1 *)0x0;
    }
    FUN_01656eb8(&local_198,extraout_r1,pdVar36,puVar27,uVar23,&DAT_01874540);
    FUN_016dd1aa(&local_1e8,&local_198,0x50);
    FUN_016dd1aa(pdVar33 + 5,&local_1e8,0x50);
  case 4:
    iVar9 = FUN_01657fc4(pdVar33 + 5,param_2);
    if (iVar9 == 0) {
      FUN_00a07b4c(pdVar33 + 5);
      piVar10 = *(int **)(**(int **)((int)pdVar33 + 0x1c) + 0x338);
      uVar23 = *(undefined4 *)(**(int **)((int)pdVar33 + 0x1c) + 0x33c);
      do {
        iVar9 = *piVar10;
        bVar37 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar37);
      *piVar10 = iVar9 + 1;
      if (iVar9 < 0) {
LAB_00c7ce94:
                    /* WARNING: Does not return */
        pcVar1 = (code *)software_udf(0xfdee,0xc7ce94);
        (*pcVar1)();
      }
      piVar32 = piVar10 + 0x65;
      do {
        bVar37 = (bool)hasExclusiveAccess(piVar32);
      } while (!bVar37);
      *piVar32 = *piVar32 + 1;
      *(int **)((int)pdVar33 + 100) = piVar10;
      *(undefined4 *)(pdVar33 + 0xd) = uVar23;
      while( true ) {
        piVar10 = (int *)((int)pdVar33 + 100);
        *(int **)(pdVar33 + 5) = piVar10;
        *(undefined1 *)(pdVar33 + 0xc) = 0;
LAB_00c7c678:
        iVar9 = *piVar10;
        *(undefined1 *)((int)pdVar33 + 0x3d) = 0;
        *(int *)((int)pdVar33 + 0x34) = iVar9 + 8;
        *(int **)(pdVar33 + 7) = piVar10 + 1;
switchD_00c7c59c_caseD_3:
        cVar8 = FUN_00d3ecd4((undefined *)((int)pdVar33 + 0x2c),param_2);
        if (cVar8 == '\x02') break;
        if (*(char *)((int)pdVar33 + 0x3d) == '\x04') {
          FUN_0163bdc0(pdVar33 + 8);
          if (*(int *)(pdVar33 + 10) != 0) {
            (**(code **)(*(int *)(pdVar33 + 10) + 0xc))(*(undefined4 *)((int)pdVar33 + 0x54));
          }
          *(undefined1 *)((int)pdVar33 + 0x3c) = 0;
        }
        *(undefined1 *)(pdVar33 + 0xc) = 1;
        if (cVar8 != '\0') goto LAB_00c7cdb0;
        iVar9 = *(int *)((int)pdVar33 + 100);
        puVar29 = (uint *)(iVar9 + 0x98);
        uVar11 = *(uint *)(iVar9 + 0x98);
        if ((uVar11 < 0xfffffff0) && ((uVar11 & 8) == 0)) {
          if (*puVar29 != uVar11) {
            ClearExclusiveLocal();
            goto LAB_00c7c734;
          }
          bVar37 = (bool)hasExclusiveAccess(puVar29);
          if (!bVar37) goto LAB_00c7c734;
          *puVar29 = uVar11 + 0x10;
          DataMemoryBarrier(0xb);
        }
        else {
LAB_00c7c734:
          FUN_0127d66c(puVar29);
        }
        FUN_0128236c(puVar29);
        uVar11 = (uint)puVar29 | 1;
        FUN_0128236c(uVar11);
        DataMemoryBarrier(0xb);
        *(uint *)(pdVar33 + 0xd) = *(uint *)(iVar9 + 400) & 0xfffffffe;
        pfVar12 = *(float **)(iVar9 + 0xa0);
        if (pfVar12 == (float *)&SUB_00000002) {
          FUN_01282570(puVar29);
          FUN_01282570(uVar11);
          DataMemoryBarrier(0xb);
          do {
            uVar11 = *puVar29;
            bVar37 = (bool)hasExclusiveAccess(puVar29);
          } while (!bVar37);
          *puVar29 = uVar11 - 0x10;
          if ((uVar11 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar29);
          }
        }
        else {
          uVar23 = *(undefined4 *)(iVar9 + 0xec);
          uVar13 = *(undefined4 *)(iVar9 + 0xb8);
          uVar14 = *(undefined4 *)(iVar9 + 0xbc);
          uVar15 = *(undefined4 *)(iVar9 + 0xc0);
          uVar7 = *(undefined1 *)(iVar9 + 0xc4);
          ppuVar34 = *(undefined ***)(iVar9 + 0xa4);
          pdVar36 = *(double **)(iVar9 + 0xa8);
          puVar27 = *(undefined1 **)(iVar9 + 0xac);
          uVar24 = *(undefined4 *)(iVar9 + 0xb0);
          uVar25 = *(undefined4 *)(iVar9 + 0xb4);
          uVar40 = *(undefined4 *)(iVar9 + 0xcc);
          uVar41 = *(undefined4 *)(iVar9 + 0xd0);
          bVar37 = *(char *)(iVar9 + 0xe4) != '\0';
          uVar42 = *(undefined4 *)(iVar9 + 0xd4);
          uVar43 = *(undefined4 *)(iVar9 + 0xd8);
          uVar44 = *(undefined4 *)(iVar9 + 0xdc);
          uVar45 = *(undefined4 *)(iVar9 + 0xe0);
          if (!bVar37) {
            ppuStack_6c._0_3_ = (undefined3)((uint)*(undefined4 *)(iVar9 + 0xe8) >> 8);
            pfStack_70 = *(float **)(iVar9 + 0xe5);
          }
          uVar31 = *(uint *)(iVar9 + 0x174);
          uVar16 = 0;
          bVar39 = 0x3ffffffe < uVar31;
          bVar38 = uVar31 == 0x3fffffff;
          uVar26 = *(uint *)(iVar9 + 200);
          if (uVar31 < 0x40000000) {
            uVar26 = uVar31 << 2;
            bVar39 = 0x7ffffffb < uVar26;
            bVar38 = uVar26 == 0x7ffffffc;
            local_21c = *(uint *)(iVar9 + 200);
            local_1f4 = uVar31;
          }
          if (bVar39 && !bVar38) {
LAB_00c7c858:
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(uVar16,local_1fc);
          }
          uVar2 = *(undefined1 *)(iVar9 + 0xf4);
          uVar30 = *(undefined4 *)(iVar9 + 0x170);
          uVar16 = *(undefined4 *)(iVar9 + 0xf0);
          local_1fc = 4;
          uVar31 = 0;
          if (uVar26 != 0) {
            local_1fc = thunk_FUN_016d4a50(uVar26);
            if (local_1fc == 0) {
              uVar16 = 4;
              local_1fc = uVar26;
              goto LAB_00c7c858;
            }
            uVar31 = local_1f4;
          }
          FUN_016dd1aa(local_1fc,uVar30,uVar26);
          uVar26 = *(uint *)(iVar9 + 0x100);
          uVar30 = 0xb;
          uVar17 = *(undefined4 *)(iVar9 + 0x180);
          uVar18 = *(undefined4 *)(iVar9 + 0x184);
          bVar38 = (1 << (uVar26 & 0xff) & 0xbU) == 0;
          iVar28 = *(int *)(iVar9 + 0xf8);
          fVar46 = *(float *)(iVar9 + 0xfc);
          if (bVar38) {
            local_284 = *(undefined4 *)(iVar9 + 0x104);
            uVar30 = *(undefined4 *)(iVar9 + 0x108);
          }
          iVar19 = *(int *)(iVar9 + 0x10c);
          uVar3 = *(undefined1 *)(iVar9 + 0x18c);
          if (bVar38) {
            local_288 = uVar30;
          }
          if (iVar19 == 4) {
            iVar35 = *(int *)(iVar9 + 0x118);
            uVar30 = *(undefined4 *)(iVar9 + 0x114);
            local_22c = 1;
            if ((iVar35 != 0) && (local_22c = thunk_FUN_016d4a50(iVar35), local_22c == 0)) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(1,iVar35);
            }
            FUN_016dd1aa(local_22c,uVar30,iVar35);
            uVar30 = extraout_r1_00;
            local_264 = iVar35;
          }
          else {
            iVar35 = *(int *)(iVar9 + 0x110);
            local_22c = *(int *)(iVar9 + 0x114);
            local_280 = *(undefined4 *)(iVar9 + 0x11c);
            local_264 = *(int *)(iVar9 + 0x118);
          }
          iVar20 = *(int *)(iVar9 + 0x160);
          uVar4 = *(undefined1 *)(iVar9 + 399);
          uVar5 = *(undefined1 *)(iVar9 + 0x18e);
          uVar21 = 0;
          if (iVar20 != 0) {
            uVar21 = *(undefined4 *)(iVar9 + 0x164);
            uVar30 = *(undefined4 *)(iVar9 + 0x168);
          }
          piVar10 = *(int **)(iVar9 + 0x178);
          uVar6 = *(undefined1 *)(iVar9 + 0x18d);
          if (iVar20 != 0) {
            local_27c = uVar30;
            local_278 = uVar21;
          }
          do {
            iVar22 = *piVar10;
            bVar38 = (bool)hasExclusiveAccess(piVar10);
          } while (!bVar38);
          *piVar10 = iVar22 + 1;
          if (iVar22 < 0) goto LAB_00c7ce94;
          piVar32 = *(int **)(iVar9 + 0x17c);
          do {
            iVar22 = *piVar32;
            bVar38 = (bool)hasExclusiveAccess(piVar32);
          } while (!bVar38);
          *piVar32 = iVar22 + 1;
          if (iVar22 < 0) goto LAB_00c7ce94;
          FUN_00c5b354(&local_198,iVar9 + 0x120);
          local_90 = local_198;
          local_8c = local_194;
          local_88 = local_190;
          local_84 = local_18c;
          local_80 = local_188;
          uStack_7c = local_184;
          uStack_78 = local_180;
          uStack_74 = local_17c;
          FUN_00c5b354(&local_1e8,iVar9 + 0x140);
          local_f8 = local_1e8;
          iStack_f4 = iStack_1e4;
          uStack_f0 = uStack_1e0;
          uStack_ec = uStack_1dc;
          local_e8 = local_1d8;
          uStack_e4 = uStack_1d4;
          uStack_e0 = uStack_1d0;
          uStack_dc = uStack_1cc;
          local_134 = local_284;
          uStack_130 = local_288;
          local_c4 = local_1f4;
          local_11c = local_280;
          local_120 = local_264;
          local_124 = local_22c;
          local_153 = pfStack_70;
          uStack_14f = ppuStack_6c._0_3_;
          local_b0 = *(undefined4 *)(iVar9 + 0x188);
          local_118 = local_90;
          ppuStack_114 = local_8c;
          pdStack_110 = local_88;
          puStack_10c = local_84;
          local_108 = local_80;
          uStack_104 = uStack_7c;
          uStack_100 = uStack_78;
          uStack_fc = uStack_74;
          local_170 = local_21c;
          local_d4 = local_278;
          local_d0 = local_27c;
          local_198 = pfVar12;
          local_194 = ppuVar34;
          local_190 = pdVar36;
          local_18c = puVar27;
          local_188 = uVar24;
          local_184 = uVar25;
          local_180 = uVar13;
          local_17c = uVar14;
          local_178 = uVar15;
          local_174 = uVar7;
          local_16c = uVar40;
          local_168 = uVar41;
          local_164 = uVar42;
          local_160 = uVar43;
          local_15c = uVar44;
          local_158 = uVar45;
          local_154 = bVar37;
          local_14c = uVar23;
          local_148 = uVar16;
          local_144 = uVar2;
          local_140 = iVar28;
          local_13c = fVar46;
          local_138 = uVar26;
          local_12c = iVar19;
          local_128 = iVar35;
          local_d8 = iVar20;
          local_cc = uVar31;
          local_c8 = local_1fc;
          local_c0 = piVar10;
          local_bc = piVar32;
          local_b8 = uVar17;
          local_b4 = uVar18;
          local_ac = uVar3;
          local_ab = uVar6;
          local_aa = uVar5;
          local_a9 = uVar4;
          if ((iVar28 != 0) && (local_a8 = fVar46, *pdVar33 < (double)fVar46)) {
            if ((DAT_018d9130 < 3) &&
               (((DAT_018da13c - 1 < 2 ||
                 ((DAT_018da13c != 0 && (cVar8 = FUN_0169ac90(&DAT_018da134), cVar8 != '\0')))) &&
                (iVar9 = FUN_016949d8(DAT_018da134), iVar9 != 0)))) {
              local_9c = (float *)(DAT_018da134 + 0x1c);
              local_1e8 = *local_9c;
              iStack_1e4 = *(int *)(DAT_018da134 + 0x20);
              if (iStack_1e4 == 0) {
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01874550);
              }
              ppuStack_6c = &local_98;
              uStack_1e0 = *(undefined4 *)(DAT_018da134 + 0x24);
              uStack_1dc = *(undefined4 *)(DAT_018da134 + 0x28);
              pfStack_70 = &local_1e8;
              local_a4 = &pfStack_70;
              local_a0 = 1;
              local_90 = &local_a8;
              local_1d8 = 0;
              local_68 = (double *)&DAT_018abb78;
              local_98 = &DAT_00355b8c;
              local_84 = &LAB_00fb1f30;
              local_8c = (undefined **)&LAB_00fb1efc;
              local_94 = &local_90;
              local_88 = pdVar33;
              FUN_00c7eecc(&local_a4);
            }
            FUN_00ac8e24(&local_198);
            FUN_01282570(puVar29);
            FUN_01282570(uVar11);
            DataMemoryBarrier(0xb);
            do {
              uVar11 = *puVar29;
              bVar37 = (bool)hasExclusiveAccess(puVar29);
            } while (!bVar37);
            *puVar29 = uVar11 - 0x10;
            if ((uVar11 & 0xfffffff2) == 0x12) {
              FUN_0127d34c(puVar29);
            }
LAB_00c7cdb0:
            iVar9 = *(int *)((int)pdVar33 + 100);
            piVar10 = (int *)(iVar9 + 0x194);
            do {
              iVar28 = *piVar10;
              bVar37 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar37);
            *piVar10 = iVar28 + -1;
            if (iVar28 == 1) {
              FUN_0163b708(iVar9 + 0x88);
            }
            piVar10 = *(int **)((int)pdVar33 + 100);
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar10;
              bVar37 = (bool)hasExclusiveAccess(piVar10);
            } while (!bVar37);
            *piVar10 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f17d0(*(undefined4 *)((int)pdVar33 + 100));
            }
            *(undefined1 *)(pdVar33 + 4) = 1;
            FUN_00ceb900(*param_1);
            *param_1 = 0;
            return 0;
          }
          FUN_00ac8e24(&local_198);
          FUN_01282570(puVar29);
          FUN_01282570(uVar11);
          DataMemoryBarrier(0xb);
          do {
            uVar11 = *puVar29;
            bVar37 = (bool)hasExclusiveAccess(puVar29);
          } while (!bVar37);
          *puVar29 = uVar11 - 0x10;
          if ((uVar11 & 0xfffffff2) == 0x12) {
            FUN_0127d34c(puVar29);
          }
        }
      }
      *(undefined1 *)(pdVar33 + 0xc) = 3;
      uVar7 = 5;
    }
    else {
      uVar7 = 4;
    }
  case 3:
switchD_00c7c48c_caseD_3:
    *(undefined1 *)(pdVar33 + 4) = uVar7;
    return 1;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01874530);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01874530);
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(pdVar33 + 0xc)) {
    case 0:
      piVar10 = *(int **)(pdVar33 + 5);
      goto LAB_00c7c678;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018acd5c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018acd5c);
    case 3:
      goto switchD_00c7c59c_caseD_3;
    }
  }
}


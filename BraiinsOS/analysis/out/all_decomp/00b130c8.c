// FUN_00b130c8 @ 00b130c8 size=4056 calls_out=40 calls_in=0
// strings: BUG: empty setupx-xss-protection | assertion failed: min <= maxmnamernameserialretryexpire | BUG: impossible

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b130c8(undefined4 *param_1,int **param_2,undefined4 param_3)

{
  longlong lVar1;
  int **ppiVar2;
  int **ppiVar3;
  int **ppiVar4;
  undefined1 uVar5;
  char cVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  uint uVar11;
  int ****ppppiVar12;
  int iVar13;
  char *pcVar14;
  int iVar15;
  int ***pppiVar16;
  int iVar17;
  undefined *puVar18;
  undefined *puVar19;
  int *piVar20;
  int *piVar21;
  int *piVar22;
  undefined4 uVar23;
  int iVar24;
  int iVar25;
  uint *puVar26;
  int iVar27;
  int iVar28;
  int **ppiVar29;
  int **ppiVar30;
  int **ppiVar31;
  int *piVar32;
  int iVar33;
  uint uVar34;
  int **unaff_r11;
  bool bVar35;
  uint in_fpscr;
  double dVar36;
  longlong lVar37;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  longlong lVar46;
  undefined8 uVar47;
  ulonglong uVar48;
  undefined1 auStack_218 [8];
  undefined1 *local_210;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined1 local_1fc;
  int **local_1f8;
  int **local_1f4;
  int **local_1f0;
  int **local_1ec;
  int **local_1e8;
  int **ppiStack_1e4;
  int **ppiStack_1e0;
  int **ppiStack_1dc;
  int **ppiStack_1d8;
  int **ppiStack_1d4;
  int **local_168;
  int **local_164;
  int **local_160;
  int **local_15c;
  int **local_158;
  int **local_154;
  int **local_150;
  int **local_14c;
  int local_148;
  int local_144;
  int local_140;
  int local_13c;
  undefined *local_e8;
  undefined4 uStack_e4;
  undefined4 uStack_e0;
  int **local_d8;
  int **ppiStack_d4;
  int **ppiStack_d0;
  int **ppiStack_cc;
  int **ppiStack_c8;
  int **ppiStack_c4;
  int ***local_c0;
  undefined **local_bc;
  undefined *local_b8;
  undefined4 local_b4;
  int ***local_b0;
  undefined4 local_ac;
  undefined *local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined *local_98;
  int ****local_94;
  undefined4 local_90;
  int **local_8c;
  int ***local_88;
  code *local_84;
  undefined4 uStack_80;
  undefined4 local_7c;
  int ****local_78;
  int ***local_74;
  int ***local_70;
  undefined4 local_6c;
  
  ppiVar31 = param_2;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 10)) {
  case 0:
    piVar22 = param_2[1];
    param_2[2] = *param_2;
    FUN_009a7ebc(&local_168,(*param_2)[0x15e] + 8);
    param_2[3] = (int *)(2 - (int)local_168);
    param_2[4] = (int *)local_164;
    if (local_150 != (int **)0x0) {
      thunk_FUN_016d3fb4(local_14c);
    }
    puVar10 = (undefined4 *)(local_140 + 4);
    for (iVar13 = local_13c; iVar13 != 0; iVar13 = iVar13 + -1) {
      if (puVar10[-1] != 0) {
        thunk_FUN_016d3fb4(*puVar10);
      }
      puVar10 = puVar10 + 6;
    }
    if (local_144 != 0) {
      thunk_FUN_016d3fb4(local_140);
    }
    piVar20 = param_2[2];
    dVar36 = -0.0;
    dVar43 = *(double *)(piVar20 + 0x9e);
    dVar40 = *(double *)(piVar20 + 0xa0);
    local_160 = (int **)*piVar22;
    local_15c = (int **)piVar22[1];
    local_148 = piVar22[2];
    in_fpscr = in_fpscr & 0xfffffff;
    if (local_160 == (int **)0x0) {
      local_148 = 0;
    }
    local_168 = (int **)(uint)(local_160 != (int **)0x0);
    piVar32 = param_2[3];
    iVar13 = piVar20[0x76];
    local_154 = (int **)0x0;
    iVar28 = piVar20[0x74];
    lVar37 = ZEXT48(param_2[4]) << 0x20;
    dVar38 = *(double *)(piVar20 + 0x6a);
    dVar39 = *(double *)(piVar20 + 0x6c);
    dVar41 = *(double *)(piVar20 + 0x6e);
    local_164 = (int **)0x0;
    local_158 = local_168;
    local_150 = local_160;
    local_14c = local_15c;
    while( true ) {
      uVar47 = FUN_00c3901c(&local_168);
      iVar25 = (int)((ulonglong)uVar47 >> 0x20);
      if ((int)uVar47 == 0 || iVar25 == 0) break;
      iVar27 = *(int *)(iVar25 + 0x28);
      if (iVar27 == 0) {
        uVar8 = 0x2d;
        puVar18 = &DAT_0186ac08;
        puVar19 = &DAT_0034ae54;
LAB_00b13e3c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa478(puVar19,uVar8,puVar18);
      }
      dVar42 = *(double *)(iVar25 + 0x18);
      iVar33 = 0;
      iVar25 = *(int *)(iVar25 + 0x24);
      lVar1 = 0;
      do {
        iVar7 = iVar25 + iVar33 * 0x18;
        iVar17 = *(int *)(iVar7 + 0x14);
        if (iVar17 == 0) {
          uVar8 = 0x39;
          puVar19 = &DAT_0034ae25;
          puVar18 = &DAT_0186aba8;
          goto LAB_00b13e3c;
        }
        iVar24 = iVar17 << 2;
        iVar15 = 0;
        puVar26 = *(uint **)(iVar7 + 0x10);
        uVar34 = 0;
        do {
          if (*(uint *)(iVar7 + 8) <= *puVar26) {
            uVar8 = 0x13;
            pcVar14 = &DAT_0034ae41;
            puVar19 = &DAT_0186abb8;
            goto LAB_00b13b1c;
          }
          uVar11 = *(uint *)(*(int *)(iVar7 + 4) + *puVar26 * 4);
          puVar26 = puVar26 + 1;
          bVar35 = CARRY4(uVar34,uVar11);
          uVar34 = uVar34 + uVar11;
          iVar15 = iVar15 + (uint)bVar35;
          iVar24 = iVar24 + -4;
        } while (iVar24 != 0);
        lVar46 = FUN_01846088(uVar34,iVar15,iVar17,0);
        lVar1 = lVar46 + lVar1;
        iVar33 = iVar33 + 1;
      } while (iVar33 != iVar27);
      uVar8 = FUN_01846088((int)lVar1,(int)((ulonglong)lVar1 >> 0x20),iVar27,0);
      iVar25 = (int)((ulonglong)lVar37 >> 0x20);
      if (piVar32 == (int *)0x2) {
        lVar37 = CONCAT44(iVar25,0x42700000);
        iVar25 = *(int *)(iVar13 + 0xbc);
      }
      else {
        iVar27 = iVar25;
        if (piVar32 != (int *)0x1) {
          iVar27 = iVar28;
        }
        lVar37 = CONCAT44(iVar27,iVar25);
        iVar25 = *(int *)(iVar13 + 0xbc);
      }
      if (iVar25 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01879bd0);
      }
      uVar23 = *(undefined4 *)(iVar13 + 0xb8);
      uVar9 = FUN_018462e8(uVar23);
      in_fpscr = in_fpscr & 0xfffffff;
      if (NAN(dVar43)) {
        if (!NAN(dVar40)) {
LAB_00b140a4:
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_01883e60)
          ;
        }
      }
      else if (dVar40 <= dVar43) {
        if (dVar40 <= dVar43) goto LAB_00b140a4;
        goto LAB_00b140c0;
      }
      dVar44 = (double)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
      dVar42 = dVar42 / dVar44;
      dVar44 = (double)VectorUnsignedToFloat(uVar8,(byte)(in_fpscr >> 0x16) & 3);
      dVar45 = (double)VectorUnsignedToFloat(uVar23,(byte)(in_fpscr >> 0x16) & 3);
      dVar42 = (dVar39 + dVar38 * (dVar44 / 1000000.0)) * (dVar41 * (double)(float)lVar37 + 1.0) *
               dVar42 * dVar42 * dVar45;
      if (NAN(dVar42)) {
        if (!NAN(dVar40)) {
          dVar42 = dVar40;
        }
LAB_00b13484:
        dVar44 = dVar42;
      }
      else {
        dVar44 = dVar43;
        if (!NAN(dVar43)) {
          if (dVar42 < dVar43) {
            uVar34 = in_fpscr | (uint)(dVar42 < dVar43) << 0x1f;
            in_fpscr = uVar34 | (uint)(NAN(dVar42) || NAN(dVar43)) << 0x1c;
            if ((byte)(uVar34 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00b13488;
          }
          else {
            uVar34 = in_fpscr | (uint)(dVar42 < dVar43) << 0x1f;
            in_fpscr = uVar34 | (uint)(NAN(dVar42) || NAN(dVar43)) << 0x1c;
            if ((byte)(uVar34 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_00b140c0;
          }
          uVar34 = in_fpscr & 0xfffffff;
          in_fpscr = uVar34;
          if (!NAN(dVar40)) {
            uVar11 = uVar34 | (uint)(dVar42 == dVar40) << 0x1e;
            in_fpscr = uVar11 | (uint)(dVar40 <= dVar42) << 0x1d;
            if (!(!(bool)((byte)(in_fpscr >> 0x1d) & 1) || SUB41(uVar11 >> 0x1e,0))) {
              uVar34 = uVar34 | (uint)(dVar42 < dVar40) << 0x1f;
              in_fpscr = uVar34 | (uint)(NAN(dVar42) || NAN(dVar40)) << 0x1c;
              dVar44 = dVar40;
              if ((byte)(uVar34 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_00b140c0:
                uVar8 = 0xf;
                pcVar14 = "BUG: impossible";
                puVar19 = &DAT_0187f728;
LAB_00b13b1c:
                    /* WARNING: Subroutine does not return */
                FUN_00fb74b8(pcVar14,uVar8,puVar19);
              }
              goto LAB_00b13488;
            }
          }
          goto LAB_00b13484;
        }
      }
LAB_00b13488:
      dVar36 = dVar36 + dVar44;
    }
    piVar20 = param_2[2];
    local_160 = (int **)*piVar22;
    local_15c = (int **)piVar22[1];
    iVar13 = piVar22[2];
    local_148 = 0;
    if (local_160 != (int **)0x0) {
      local_148 = iVar13;
    }
    local_168 = (int **)(uint)(local_160 != (int **)0x0);
    local_154 = (int **)0x0;
    local_164 = (int **)0x0;
    local_158 = local_168;
    local_150 = local_160;
    local_14c = local_15c;
    uVar47 = FUN_00c3901c(&local_168);
    piVar22 = (int *)((ulonglong)uVar47 >> 0x20);
    if ((int)uVar47 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: empty setupx-xss-protection",0x10,&DAT_01874068);
    }
    piVar32 = (int *)piVar22[1];
    piVar21 = (int *)piVar22[2];
    iVar25 = piVar22[4];
    iVar28 = piVar22[5];
    dVar40 = (double)VectorUnsignedToFloat(iVar13,(byte)(in_fpscr >> 0x16) & 3);
    param_2[0xe] = (int *)*piVar22;
    *(undefined1 *)(param_2 + 0x17) = 0;
    param_2[0x16] = piVar20 + 0xa2;
    param_2[0xc] = param_2[3];
    param_2[0xd] = param_2[4];
    param_2[0xf] = piVar32;
    *(char *)(param_2 + 0x13) = (char)iVar28;
    param_2[0x12] = (int *)(iVar25 + 1);
    param_2[0x10] = piVar21;
    *(double *)(param_2 + 0x14) = dVar36 * (1.0 / dVar40);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f740);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f740);
  case 4:
    goto LAB_00b13198;
  case 5:
    goto switchD_00b130f0_caseD_5;
  case 6:
    goto switchD_00b130f0_caseD_6;
  }
  FUN_00b233d8(&local_168,param_2 + 0xc);
  if (local_168 == (int **)&SUB_00000002) {
    *param_1 = 0xf;
    uVar5 = 3;
    goto LAB_00b1400c;
  }
  if (((uint)local_168 & 1) == 0) {
    param_2[6] = (int *)local_160;
    param_2[7] = (int *)local_15c;
    ppiVar29 = param_2 + 5;
    *ppiVar29 = (int *)local_164;
    FUN_00c71120(&local_168,param_2[2] + 0xa2,ppiVar29,&DAT_00564370);
    if (local_168 == (int **)&SUB_00000002) {
      do {
        ppiVar31 = local_164;
        local_b4 = 0x1372d217;
        piVar22 = *local_164;
        local_b8 = (undefined *)0xb3fc8df6;
        local_bc = (undefined **)0xd3c165cc;
        local_15c = (int **)0x1372d217;
        local_c0 = (int ***)0x65fc0b7b;
        local_160 = (int **)0xb3fc8df6;
        local_164 = (int **)0xd3c165cc;
        local_168 = (int **)0x65fc0b7b;
        puVar10 = (undefined4 *)(*(code *)piVar22[4])(ppiVar31,&local_168);
        if (puVar10 == (undefined4 *)0x0) {
          ppiVar29 = (int **)&DAT_0000000d;
          goto LAB_00b13fe4;
        }
        local_168 = (int **)*puVar10;
        local_164 = (int **)puVar10[1];
        local_160 = (int **)puVar10[2];
        local_15c = (int **)puVar10[3];
        local_158 = (int **)puVar10[4];
        local_154 = (int **)puVar10[5];
        local_150 = (int **)puVar10[6];
        local_14c = (int **)puVar10[7];
        (*(code *)(*ppiVar31)[5])(ppiVar31,&local_c0);
        local_1f8 = local_160;
        local_1f4 = local_15c;
        local_1f0 = local_158;
        local_1ec = local_154;
        local_1e8 = local_150;
        ppiStack_1e4 = local_14c;
        if (local_168 == (int **)&DAT_0000000e) {
          ppiVar29 = (int **)&DAT_0000000d;
          ppiVar31 = local_164;
          goto LAB_00b13fe4;
        }
      } while (local_168 == (int **)&DAT_0000000d);
      local_d8 = local_160;
      ppiStack_d4 = local_15c;
      ppiStack_d0 = local_158;
      ppiStack_cc = local_154;
      ppiStack_c8 = local_150;
      ppiStack_c4 = local_14c;
      ppiVar29 = local_168;
      ppiVar31 = local_164;
    }
    else {
      local_204 = 0x3fe33333;
      param_2[8] = (int *)local_168;
      param_2[9] = (int *)local_164;
      unaff_r11 = (int **)0x0;
      local_208 = 0x33333333;
      ppiVar30 = local_164;
      if (((uint)local_168 & 1) != 0) {
        ppiVar30 = (int **)&DAT_00000001;
      }
      local_200 = *(undefined4 *)(param_2[2][0x81] + 0xbc);
      local_210 = &DAT_3b9aca00;
      local_1fc = 0;
      FUN_00c70b60(&local_168,param_2[2][0x123],ppiVar29,auStack_218,ppiVar30);
      ppiVar30 = (int **)&DAT_00000007;
      if (&DAT_00000007 < local_168) {
        ppiVar30 = local_168;
      }
      if (local_164 != (int **)0x0) {
        ppiVar30 = local_168;
      }
      piVar22 = *(int **)(param_2[2][0x81] + 0xb8);
      param_2[0xc] = (int *)ppiVar30;
      param_2[0xd] = (int *)local_164;
      param_2[0x1a] = (int *)0x80000002;
      ppiVar30 = local_160;
      if (local_164 == (int **)0x0 && (int **)(uint)(&DAT_00000006 < local_168) <= local_164) {
        ppiVar30 = (int **)0x0;
      }
      param_2[0x2c] = param_2[2];
      param_2[0x18] = (int *)&DAT_3b9aca00;
      *(undefined1 *)(param_2 + 0x30) = 0;
      param_2[0x2d] = (int *)ppiVar29;
      *(undefined1 *)(param_2 + 0x13) = 0;
      param_2[0x10] = (int *)0x47ae147b;
      param_2[0x11] = (int *)0x3fa47ae1;
      param_2[0x12] = piVar22;
      param_2[0xe] = (int *)ppiVar30;
LAB_00b13198:
      FUN_00b15538(&local_168,param_2 + 0xc);
      if (local_168 == (int **)0x3 && local_164 == (int **)0x0) {
        *param_1 = 0xf;
        uVar5 = 4;
        goto LAB_00b1400c;
      }
      FUN_016dd1aa(&local_1f8,&local_168,0x90);
      FUN_00b1545c(param_2 + 0xc);
      if (local_1f8 == (int **)&SUB_00000002 && local_1f4 == (int **)0x0) {
        if (local_1f0 == (int **)&DAT_0000000a) {
          local_8c = local_1ec;
          if ((DAT_018d9130 < 4) &&
             (((DAT_018da178 - 1 < 2 ||
               ((DAT_018da178 != 0 && (cVar6 = FUN_0169ac90(&DAT_018da170), cVar6 != '\0')))) &&
              (iVar13 = FUN_016949d8(DAT_018da170), iVar13 != 0)))) {
            local_70 = (int ***)(DAT_018da170 + 0x1c);
            if (*(int ***)(DAT_018da170 + 0x20) == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186f750);
            }
            local_160 = *(int ***)(DAT_018da170 + 0x24);
            local_15c = *(int ***)(DAT_018da170 + 0x28);
            local_bc = &local_98;
            local_78 = &local_c0;
            local_74 = (int ***)0x1;
            local_94 = &local_88;
            local_88 = &local_8c;
            local_158 = (int **)0x0;
            local_b8 = &DAT_018abb78;
            local_98 = &DAT_0034e972;
            local_84 = FUN_00604528;
            local_168 = *local_70;
            local_164 = *(int ***)(DAT_018da170 + 0x20);
            local_c0 = &local_168;
            FUN_00b237d0(&local_78);
          }
          (*(code *)**local_8c)();
          iVar13 = 1;
          if (local_1f0 != (int **)&DAT_0000000a) goto LAB_00b13ca4;
          goto LAB_00b13cb0;
        }
        local_d8 = local_1e8;
        ppiStack_d4 = ppiStack_1e4;
        ppiStack_d0 = ppiStack_1e0;
        ppiStack_cc = ppiStack_1dc;
        ppiStack_c8 = ppiStack_1d8;
        ppiStack_c4 = ppiStack_1d4;
        ppiVar29 = local_1f0;
        ppiVar31 = local_1ec;
      }
      else {
        FUN_016dd1aa(&local_168,&local_1f8,0x90);
        uVar34 = *(uint *)(param_2[2][0x81] + 0xbc);
        if (uVar34 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0);
        }
        uVar11 = *(uint *)(param_2[2][0x81] + 0xb8);
        local_b8 = local_e8;
        if (local_e8 == (undefined *)0x0) {
          uStack_e0 = 0;
        }
        local_a8 = local_e8;
        uStack_a4 = uStack_e4;
        local_c0 = (int ***)(uint)(local_e8 != (undefined *)0x0);
        local_ac = 0;
        local_b4 = uStack_e4;
        local_bc = (undefined **)0x0;
        local_b0 = local_c0;
        uStack_a0 = uStack_e0;
        iVar13 = FUN_018462e8(uVar11,uVar34);
        unaff_r11 = (int **)0x0;
        while( true ) {
          uVar47 = FUN_00c38db8(&local_c0);
          if ((undefined4 *)uVar47 == (undefined4 *)0x0) break;
          iVar28 = 0;
          if (uVar34 <= uVar11) {
            iVar28 = 0;
            iVar25 = 0;
            do {
              dVar36 = (double)FUN_00c6ef68((int)((ulonglong)uVar47 >> 0x20),iVar25);
              iVar25 = iVar25 + 1;
              if (dVar36 < 0.3) {
                iVar28 = iVar28 + 1;
              }
            } while (iVar13 != iVar25);
          }
          DataMemoryBarrier(0xb);
          if (DAT_018d8068 == 0) {
            local_8c = (int **)*(undefined4 *)uVar47;
            ppppiVar12 = (int ****)thunk_FUN_016d4a50(0xc);
            if (ppppiVar12 == (int ****)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,0xc);
            }
            local_88 = &local_8c;
            local_84 = (code *)&DAT_00f5c97c;
            FUN_00600d2c(&local_78,&DAT_00590e71,&local_88);
            *ppppiVar12 = (int ***)local_78;
            ppppiVar12[1] = local_74;
            ppppiVar12[2] = local_70;
            local_90 = 1;
            local_98 = (undefined *)0x1;
            local_94 = ppppiVar12;
            piVar22 = (int *)thunk_FUN_016d4a50(8);
            if (piVar22 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4(4,8);
            }
            pppiVar16 = ppppiVar12[2];
            *piVar22 = (int)ppppiVar12[1];
            piVar22[1] = (int)pppiVar16;
            FUN_009b564c(&local_88,DAT_018d7fc8 + 8,piVar22,1);
            if (local_88 != (int ***)&DAT_00000005) {
              local_6c = local_7c;
              local_78 = (int ****)local_88;
              local_74 = (int ***)local_84;
              local_70 = (int ***)uStack_80;
                    /* WARNING: Subroutine does not return */
              FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_78,&DAT_01869dec,&DAT_01886b2c);
            }
            do {
              bVar35 = (bool)hasExclusiveAccess(local_84 + 8);
            } while (!bVar35);
            *(int *)(local_84 + 8) = iVar28;
            *(int *)(local_84 + 0xc) = 0;
            DataMemoryBarrier(0xb);
            do {
              iVar25 = *(int *)local_84;
              bVar35 = (bool)hasExclusiveAccess(local_84);
            } while (!bVar35);
            *(int *)local_84 = iVar25 + -1;
            if (iVar25 == 1) {
              DataMemoryBarrier(0xb);
              FUN_012c0df4();
            }
            thunk_FUN_016d3fb4(piVar22);
            if (*ppppiVar12 != (int ***)0x0) {
              thunk_FUN_016d3fb4(ppppiVar12[1]);
            }
            thunk_FUN_016d3fb4(ppppiVar12);
          }
          unaff_r11 = (int **)(iVar28 + (int)unaff_r11);
        }
        FUN_00ad1570(&local_168);
        iVar13 = 0;
        if (unaff_r11 != (int **)0x0) {
          iVar13 = 2;
        }
        if ((local_1f8 == (int **)&SUB_00000002 && local_1f4 == (int **)0x0) &&
           (local_1f0 != (int **)&DAT_0000000a)) {
LAB_00b13ca4:
          FUN_00ad20e4(&local_1f0);
        }
LAB_00b13cb0:
        ppiVar29 = (int **)&DAT_0000000e;
        if (iVar13 != 0) {
          if (iVar13 == 1) {
            piVar22 = param_2[2];
            ppiVar29 = (int **)thunk_FUN_016d4a50(0xf);
            if (ppiVar29 == (int **)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600af4();
            }
            *(undefined4 *)((int)ppiVar29 + 0xb) = 0x746e6572;
            ppiVar29[2] = (int *)0x72727563;
            ppiVar29[1] = (int *)0x7265766f;
            *ppiVar29 = (int *)0x20555350;
            local_164 = (int **)&DAT_0000000f;
            local_15c = (int **)&DAT_0000000f;
            local_168 = (int **)&DAT_0000000b;
            local_160 = ppiVar29;
            FUN_00d56b40(piVar22,&local_168);
            *(undefined2 *)((int)param_2 + 0xa9) = 0;
            param_2[0x29] = param_2[2] + 0xa2;
switchD_00b130f0_caseD_5:
            iVar13 = FUN_00af05fc(param_2 + 0xb,param_3);
            if (iVar13 != 0) {
              *param_1 = 0xf;
              uVar5 = 5;
              goto LAB_00b1400c;
            }
            ppiVar29 = (int **)&DAT_0000000e;
            if (((*(char *)((int)param_2 + 0xa9) == '\x03') && (*(char *)(param_2 + 0x28) == '\x03')
                ) && (*(char *)((int)param_2 + 0x9d) == '\x03')) {
              FUN_00accc50(param_2 + 0xc);
            }
          }
          else {
            param_2[0xb] = (int *)unaff_r11;
            uVar48 = FUN_007143c8();
            piVar22 = (int *)uVar48;
            cVar6 = *(char *)((int)piVar22 + 0x55);
            if ((((uVar48 & 0x100000000) == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
               (iVar13 = FUN_015bf3f8(), iVar13 == 0)) {
              *(undefined1 *)(piVar22 + 1) = 1;
            }
            DataMemoryBarrier(0xb);
            do {
              iVar13 = *piVar22;
              bVar35 = (bool)hasExclusiveAccess(piVar22);
            } while (!bVar35);
            *piVar22 = 0;
            if (iVar13 == 2) {
              FUN_016d6968(0xf0,piVar22,0x81,1);
            }
            if (cVar6 == '\0') {
              piVar22 = param_2[2];
              iVar13 = piVar22[0x81];
              if ((*(int *)(iVar13 + 0x40) != 6) ||
                 (iVar13 = thunk_FUN_016dd50a(*(undefined4 *)(iVar13 + 0x3c),&DAT_0034e995,6),
                 iVar13 != 0)) {
                local_bc = (undefined **)&LAB_00fac484;
                local_c0 = (int ***)(param_2 + 0xb);
                FUN_00b238a0(&local_1f8,&local_c0);
                local_164 = local_1f8;
                local_160 = local_1f4;
                local_15c = local_1f0;
                local_168 = (int **)&DAT_0000000b;
                FUN_00d56b40(piVar22,&local_168);
                *(undefined2 *)((int)param_2 + 0xad) = 0;
                param_2[0x2a] = param_2[2] + 0xa2;
switchD_00b130f0_caseD_6:
                iVar13 = FUN_00af05fc(param_2 + 0xc,param_3);
                if (iVar13 != 0) {
                  *param_1 = 0xf;
                  uVar5 = 6;
                  goto LAB_00b1400c;
                }
                ppiVar29 = (int **)&DAT_0000000e;
                if (((*(char *)((int)param_2 + 0xad) == '\x03') &&
                    (*(char *)(param_2 + 0x29) == '\x03')) &&
                   (*(char *)((int)param_2 + 0xa1) == '\x03')) {
                  FUN_00accc50(param_2 + 0xd);
                }
              }
            }
          }
          goto LAB_00b13fe4;
        }
      }
    }
LAB_00b13fe4:
    FUN_00c48cbc(param_2 + 5);
    local_168 = ppiVar29;
    local_164 = ppiVar31;
    ppiVar31 = local_d8;
    ppiVar29 = ppiStack_d4;
    ppiVar30 = ppiStack_d0;
    ppiVar2 = ppiStack_cc;
    ppiVar3 = ppiStack_c8;
    ppiVar4 = ppiStack_c4;
  }
  else {
    do {
      ppiVar31 = local_164;
      local_b4 = 0x1372d217;
      piVar22 = *local_164;
      local_b8 = (undefined *)0xb3fc8df6;
      local_bc = (undefined **)0xd3c165cc;
      local_15c = (int **)0x1372d217;
      local_c0 = (int ***)0x65fc0b7b;
      local_160 = (int **)0xb3fc8df6;
      local_164 = (int **)0xd3c165cc;
      local_168 = (int **)0x65fc0b7b;
      puVar10 = (undefined4 *)(*(code *)piVar22[4])(ppiVar31,&local_168);
      local_164 = ppiVar31;
      if (puVar10 == (undefined4 *)0x0) {
LAB_00b13af8:
        local_168 = (int **)&DAT_0000000d;
        ppiVar31 = local_d8;
        ppiVar29 = ppiStack_d4;
        ppiVar30 = ppiStack_d0;
        ppiVar2 = ppiStack_cc;
        ppiVar3 = ppiStack_c8;
        ppiVar4 = ppiStack_c4;
        break;
      }
      local_168 = (int **)*puVar10;
      local_164 = (int **)puVar10[1];
      local_160 = (int **)puVar10[2];
      local_15c = (int **)puVar10[3];
      local_158 = (int **)puVar10[4];
      local_154 = (int **)puVar10[5];
      local_150 = (int **)puVar10[6];
      local_14c = (int **)puVar10[7];
      (*(code *)(*ppiVar31)[5])(ppiVar31,&local_c0);
      local_1f8 = local_160;
      local_1f4 = local_15c;
      local_1f0 = local_158;
      local_1ec = local_154;
      local_1e8 = local_150;
      ppiStack_1e4 = local_14c;
      if (local_168 == (int **)&DAT_0000000e) goto LAB_00b13af8;
      ppiVar31 = local_1f8;
      ppiVar29 = local_1f4;
      ppiVar30 = local_1f0;
      ppiVar2 = local_1ec;
      ppiVar3 = local_1e8;
      ppiVar4 = ppiStack_1e4;
    } while (local_168 == (int **)&DAT_0000000d);
  }
  ppiStack_c4 = ppiVar4;
  ppiStack_c8 = ppiVar3;
  ppiStack_cc = ppiVar2;
  ppiStack_d0 = ppiVar30;
  ppiStack_d4 = ppiVar29;
  local_d8 = ppiVar31;
  *param_1 = local_168;
  param_1[1] = local_164;
  param_1[2] = local_d8;
  param_1[3] = ppiStack_d4;
  param_1[4] = ppiStack_d0;
  param_1[5] = ppiStack_cc;
  param_1[6] = ppiStack_c8;
  param_1[7] = ppiStack_c4;
  uVar5 = 1;
LAB_00b1400c:
  *(undefined1 *)(param_2 + 10) = uVar5;
  return;
}


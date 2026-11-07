// FUN_00b15538 @ 00b15538 size=2324 calls_out=15 calls_in=2
// strings: BUG: impossible | BUG: impossible | BUG: empty setupx-xss-protection

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b15538(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  char cVar1;
  bool bVar2;
  longlong lVar3;
  undefined1 uVar4;
  undefined *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  int *piVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  int iVar13;
  char *pcVar14;
  undefined4 uVar15;
  undefined *puVar16;
  int iVar17;
  uint *puVar18;
  int iVar19;
  undefined4 uVar20;
  uint uVar21;
  int iVar22;
  int *piVar23;
  int iVar24;
  int *piVar25;
  undefined4 *puVar26;
  int *piVar27;
  int iVar28;
  bool bVar29;
  uint in_fpscr;
  double unaff_d8;
  double dVar30;
  double dVar31;
  double dVar32;
  undefined8 uVar33;
  longlong lVar34;
  undefined4 local_3e8;
  undefined4 uStack_3e4;
  undefined4 uStack_3e0;
  undefined4 uStack_3dc;
  undefined4 local_3d8;
  undefined4 uStack_3d4;
  undefined4 uStack_3d0;
  undefined4 uStack_3cc;
  undefined4 local_3c8;
  undefined4 uStack_3c4;
  undefined4 uStack_3c0;
  undefined4 uStack_3bc;
  undefined4 uStack_3b8;
  undefined4 uStack_3b4;
  undefined4 local_3b0;
  undefined4 uStack_3ac;
  undefined4 uStack_3a8;
  undefined4 uStack_3a4;
  int *local_210;
  int *local_20c;
  int *local_208;
  int *local_204;
  int *local_200;
  int *local_1fc;
  int *local_1f8;
  int *local_1f4;
  int *local_1f0;
  int *local_1ec;
  undefined1 auStack_1e8 [104];
  undefined1 auStack_180 [104];
  int *local_118;
  int *piStack_114;
  int *piStack_110;
  int *piStack_10c;
  int *piStack_108;
  int *piStack_104;
  int *local_100;
  int *piStack_fc;
  int *piStack_f8;
  int *piStack_f4;
  int *piStack_f0;
  int *piStack_ec;
  undefined1 auStack_e8 [104];
  int *local_80;
  int *piStack_7c;
  int *piStack_78;
  int *piStack_74;
  int *local_70;
  int *piStack_6c;
  int *piStack_68;
  int *piStack_64;
  int *piStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  
  puVar11 = param_2 + 0x2a;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x24)) {
  case 0:
    local_1ec = (int *)param_2[0x20];
    puVar26 = (undefined4 *)param_2[0x21];
    param_2[0x22] = local_1ec;
    param_2[0x23] = puVar26;
    param_2[0x12] = *param_2;
    param_2[0x13] = param_2[1];
    param_2[0x14] = param_2[2];
    param_2[0x15] = param_2[3];
    param_2[0x16] = param_2[4];
    param_2[0x17] = param_2[5];
    param_2[0x18] = param_2[6];
    param_2[0x19] = param_2[7];
    param_2[0x26] = param_2[0xe];
    param_2[0x27] = param_2[0xf];
    param_2[0x28] = param_2[0x10];
    *(undefined1 *)((int)param_2 + 0x91) = 1;
    param_2[0x29] = param_2[0x11];
    param_2[0x1a] = param_2[8];
    param_2[0x1b] = param_2[9];
    param_2[0x1c] = param_2[10];
    param_2[0x1d] = param_2[0xb];
    param_2[0x1e] = param_2[0xc];
    param_2[0x1f] = param_2[0xd];
    local_208 = (int *)*puVar26;
    local_204 = (int *)puVar26[1];
    local_1f0 = (int *)puVar26[2];
    if (local_208 == (int *)0x0) {
      local_1f0 = (int *)0x0;
    }
    local_210 = (int *)(uint)(local_208 != (int *)0x0);
    local_1fc = (int *)0x0;
    local_20c = (int *)0x0;
    local_200 = local_210;
    local_1f8 = local_208;
    local_1f4 = local_204;
    uVar33 = FUN_00c3901c(&local_210);
    piVar10 = local_1ec;
    iVar22 = (int)((ulonglong)uVar33 >> 0x20);
    bVar2 = (int)uVar33 != 0;
    if (bVar2 && iVar22 != 0) {
      uVar12 = 0x2d;
      iVar24 = *(int *)(iVar22 + 0x28);
      puVar16 = &DAT_0186ac08;
      puVar5 = &DAT_0034ae54;
      if (iVar24 != 0) {
        iVar28 = 0;
        dVar30 = *(double *)(iVar22 + 0x18);
        lVar3 = 0;
        iVar6 = *(int *)(iVar22 + 0x24);
        uVar12 = 0x13;
        do {
          iVar7 = iVar6 + iVar28 * 0x18;
          iVar17 = *(int *)(iVar7 + 0x14);
          if (iVar17 == 0) goto LAB_00b15dec;
          iVar19 = iVar17 << 2;
          iVar13 = 0;
          puVar18 = *(uint **)(iVar7 + 0x10);
          uVar8 = 0;
          do {
            if (*(uint *)(iVar7 + 8) <= *puVar18) goto LAB_00b15944;
            uVar21 = *(uint *)(*(int *)(iVar7 + 4) + *puVar18 * 4);
            puVar18 = puVar18 + 1;
            bVar29 = CARRY4(uVar8,uVar21);
            uVar8 = uVar8 + uVar21;
            iVar13 = iVar13 + (uint)bVar29;
            iVar19 = iVar19 + -4;
          } while (iVar19 != 0);
          lVar34 = FUN_01846088(uVar8,iVar13,iVar17,0);
          lVar3 = lVar34 + lVar3;
          iVar28 = iVar28 + 1;
        } while (iVar28 != iVar24);
        iVar6 = piVar10[0x76];
        iVar28 = *(int *)(iVar6 + 0xbc);
        if (iVar28 == 0) {
LAB_00b15e64:
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0);
        }
        uVar15 = FUN_01846088((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),iVar24,0);
        uVar20 = *(undefined4 *)(iVar6 + 0xb8);
        uVar9 = FUN_018462e8(uVar20,iVar28);
        dVar31 = (double)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
        dVar32 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
        dVar30 = dVar30 / dVar31;
        local_80 = local_210;
        piStack_7c = local_20c;
        piStack_78 = local_208;
        piStack_74 = local_204;
        local_70 = local_200;
        piStack_6c = local_1fc;
        piStack_68 = local_1f8;
        piStack_64 = local_1f4;
        piStack_60 = local_1f0;
        dVar31 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
        unaff_d8 = dVar30 * dVar30 * dVar31 *
                   (*(double *)(piVar10 + 0x6c) + (dVar32 / 1000000.0) * *(double *)(piVar10 + 0x6a)
                   ) * (*(double *)(piVar10 + 0x6e) * (double)(float)piVar10[0x74] + 1.0);
        do {
          while( true ) {
            while( true ) {
              while( true ) {
                uVar33 = FUN_00c3901c(&local_80);
                iVar24 = (int)((ulonglong)uVar33 >> 0x20);
                if ((int)uVar33 == 0 || iVar24 == 0) goto LAB_00b1596c;
                iVar6 = *(int *)(iVar24 + 0x28);
                if (iVar6 == 0) {
                  uVar12 = 0x2d;
                  puVar5 = &DAT_0034ae54;
                  puVar16 = &DAT_0186ac08;
                  goto LAB_00b15e04;
                }
                dVar30 = *(double *)(iVar24 + 0x18);
                iVar28 = 0;
                iVar24 = *(int *)(iVar24 + 0x24);
                lVar3 = 0;
                do {
                  iVar7 = iVar24 + iVar28 * 0x18;
                  iVar17 = *(int *)(iVar7 + 0x14);
                  if (iVar17 == 0) goto LAB_00b15dec;
                  iVar19 = iVar17 << 2;
                  iVar13 = 0;
                  puVar18 = *(uint **)(iVar7 + 0x10);
                  uVar8 = 0;
                  do {
                    if (*(uint *)(iVar7 + 8) <= *puVar18) goto LAB_00b15944;
                    uVar21 = *(uint *)(*(int *)(iVar7 + 4) + *puVar18 * 4);
                    puVar18 = puVar18 + 1;
                    bVar29 = CARRY4(uVar8,uVar21);
                    uVar8 = uVar8 + uVar21;
                    iVar13 = iVar13 + (uint)bVar29;
                    iVar19 = iVar19 + -4;
                  } while (iVar19 != 0);
                  lVar34 = FUN_01846088(uVar8,iVar13,iVar17,0);
                  lVar3 = lVar34 + lVar3;
                  iVar28 = iVar28 + 1;
                } while (iVar28 != iVar6);
                iVar24 = piVar10[0x76];
                iVar28 = *(int *)(iVar24 + 0xbc);
                if (iVar28 == 0) goto LAB_00b15e64;
                uVar15 = FUN_01846088((int)lVar3,(int)((ulonglong)lVar3 >> 0x20),iVar6,0);
                uVar20 = *(undefined4 *)(iVar24 + 0xb8);
                uVar9 = FUN_018462e8(uVar20,iVar28);
                dVar31 = (double)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x16) & 3);
                dVar32 = (double)VectorUnsignedToFloat(uVar15,(byte)(in_fpscr >> 0x16) & 3);
                dVar30 = dVar30 / dVar31;
                in_fpscr = in_fpscr & 0xfffffff;
                dVar31 = (double)VectorUnsignedToFloat(uVar20,(byte)(in_fpscr >> 0x16) & 3);
                dVar30 = dVar30 * dVar30 * dVar31 *
                         (*(double *)(piVar10 + 0x6c) +
                         (dVar32 / 1000000.0) * *(double *)(piVar10 + 0x6a)) *
                         (*(double *)(piVar10 + 0x6e) * (double)(float)piVar10[0x74] + 1.0);
                if (!NAN(unaff_d8)) break;
                if (!NAN(dVar30)) {
                  dVar30 = unaff_d8;
                }
                unaff_d8 = dVar30;
              }
              pcVar14 = "BUG: impossible";
              puVar5 = &DAT_0187f728;
              if (!NAN(dVar30)) break;
              unaff_d8 = dVar30;
            }
            uVar8 = in_fpscr | (uint)(unaff_d8 == dVar30) << 0x1e;
            uVar21 = uVar8 | (uint)(dVar30 <= unaff_d8) << 0x1d;
            if ((bool)((byte)(uVar21 >> 0x1d) & 1) && !SUB41(uVar8 >> 0x1e,0)) break;
            in_fpscr = uVar21;
            unaff_d8 = dVar30;
          }
          uVar8 = in_fpscr | (uint)(unaff_d8 < dVar30) << 0x1f;
          in_fpscr = uVar8 | (uint)(NAN(unaff_d8) || NAN(dVar30)) << 0x1c;
        } while ((byte)(uVar8 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1));
        uVar12 = 0xf;
        goto LAB_00b15958;
      }
      goto LAB_00b15e04;
    }
LAB_00b1596c:
    piVar10 = (int *)FUN_00c70f88(&DAT_0034e7f3,0x28);
    if (bVar2 && iVar22 != 0) {
      (**(code **)*piVar10)(piVar10);
      local_1fc = (int *)0x0;
      local_20c = (int *)0x0;
      uVar12 = param_2[0x22];
      puVar26 = (undefined4 *)param_2[0x23];
      local_208 = (int *)*puVar26;
      local_204 = (int *)puVar26[1];
      local_1f0 = (int *)puVar26[2];
      if (local_208 == (int *)0x0) {
        local_1f0 = (int *)0x0;
      }
      local_210 = (int *)(uint)(local_208 != (int *)0x0);
      local_200 = local_210;
      local_1f8 = local_208;
      local_1f4 = local_204;
      uVar33 = FUN_00c3901c(&local_210);
      puVar26 = (undefined4 *)((ulonglong)uVar33 >> 0x20);
      if ((int)uVar33 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: empty setupx-xss-protection",0x10,&DAT_01874068);
      }
      uVar15 = *puVar26;
      uVar9 = puVar26[1];
      uVar20 = puVar26[2];
      iVar22 = puVar26[4];
      uVar4 = *(undefined1 *)(puVar26 + 5);
      *(undefined2 *)(param_2 + 0xeb) = 0;
      *(double *)(param_2 + 0x2c) = unaff_d8;
      *(undefined1 *)((int)param_2 + 0x3ae) = 0;
      param_2[0x2e] = uVar15;
      *puVar11 = 1;
      param_2[0x2b] = 0;
      param_2[0x2f] = uVar9;
      param_2[0xe2] = uVar12;
      *(undefined1 *)(param_2 + 0x33) = uVar4;
      param_2[0x32] = iVar22 + 1;
      param_2[0x30] = uVar20;
      goto switchD_00b15568_caseD_3;
    }
    do {
      local_4c = 0x1372d217;
      local_50 = 0xb3fc8df6;
      local_54 = 0xd3c165cc;
      local_58 = 0x65fc0b7b;
      local_204 = (int *)0x1372d217;
      local_208 = (int *)0xb3fc8df6;
      local_20c = (int *)0xd3c165cc;
      local_210 = (int *)0x65fc0b7b;
      puVar11 = (undefined4 *)(**(code **)(*piVar10 + 0x10))(piVar10,&local_210);
      if (puVar11 == (undefined4 *)0x0) goto LAB_00b15c1c;
      local_210 = (int *)*puVar11;
      local_20c = (int *)puVar11[1];
      local_208 = (int *)puVar11[2];
      local_204 = (int *)puVar11[3];
      local_200 = (int *)puVar11[4];
      local_1fc = (int *)puVar11[5];
      local_1f8 = (int *)puVar11[6];
      local_1f4 = (int *)puVar11[7];
      (**(code **)(*piVar10 + 0x14))(piVar10,&local_58);
      local_80 = local_208;
      piStack_7c = local_204;
      piStack_78 = local_200;
      piStack_74 = local_1fc;
      local_70 = local_1f8;
      piStack_6c = local_1f4;
      piVar10 = local_20c;
      if (local_210 == (int *)&DAT_0000000e) goto LAB_00b15c1c;
    } while (local_210 == (int *)&DAT_0000000d);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186f5d0);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186f5d0);
  case 3:
switchD_00b15568_caseD_3:
    FUN_00b11040(&local_210,puVar11);
    piVar25 = local_1f8;
    piVar10 = local_210;
    if (local_1f8 == (int *)0x3b9aca02) {
      uVar4 = 3;
      *param_1 = 3;
      param_1[1] = 0;
      goto LAB_00b15dd8;
    }
    FUN_00b10e24(puVar11);
    if (piVar25 != (int *)0x3b9aca01) {
      uVar12 = param_2[0x23];
      uVar15 = param_2[0x22];
      local_3e8 = param_2[0x12];
      uStack_3e4 = param_2[0x13];
      uStack_3e0 = param_2[0x14];
      uStack_3dc = param_2[0x15];
      local_3d8 = param_2[0x16];
      uStack_3d4 = param_2[0x17];
      uStack_3d0 = param_2[0x18];
      uStack_3cc = param_2[0x19];
      local_3b0 = param_2[0x26];
      uStack_3ac = param_2[0x27];
      uStack_3a8 = param_2[0x28];
      uStack_3a4 = param_2[0x29];
      *(undefined1 *)((int)param_2 + 0x91) = 0;
      local_3c8 = param_2[0x1a];
      uStack_3c4 = param_2[0x1b];
      uStack_3c0 = param_2[0x1c];
      uStack_3bc = param_2[0x1d];
      uStack_3b8 = param_2[0x1e];
      uStack_3b4 = param_2[0x1f];
      FUN_016dd1aa(param_2 + 0x26,&local_3e8,0x1d8);
      param_2[0x9c] = uVar15;
      *(undefined1 *)(param_2 + 0xa3) = 0;
      param_2[0x9d] = uVar12;
      goto switchD_00b15568_caseD_4;
    }
    do {
      local_4c = 0x1372d217;
      local_50 = 0xb3fc8df6;
      local_54 = 0xd3c165cc;
      local_58 = 0x65fc0b7b;
      local_204 = (int *)0x1372d217;
      local_208 = (int *)0xb3fc8df6;
      local_20c = (int *)0xd3c165cc;
      local_210 = (int *)0x65fc0b7b;
      puVar11 = (undefined4 *)(**(code **)(*piVar10 + 0x10))(piVar10,&local_210);
      if (puVar11 == (undefined4 *)0x0) goto LAB_00b15c1c;
      local_210 = (int *)*puVar11;
      local_20c = (int *)puVar11[1];
      local_208 = (int *)puVar11[2];
      local_204 = (int *)puVar11[3];
      local_200 = (int *)puVar11[4];
      local_1fc = (int *)puVar11[5];
      local_1f8 = (int *)puVar11[6];
      local_1f4 = (int *)puVar11[7];
      (**(code **)(*piVar10 + 0x14))(piVar10,&local_58);
      local_80 = local_208;
      piStack_7c = local_204;
      piStack_78 = local_200;
      piStack_74 = local_1fc;
      local_70 = local_1f8;
      piStack_6c = local_1f4;
      piVar10 = local_20c;
      if (local_210 == (int *)&DAT_0000000e) goto LAB_00b15c1c;
    } while (local_210 == (int *)&DAT_0000000d);
    break;
  case 4:
switchD_00b15568_caseD_4:
    FUN_00b18640(&local_210,param_2 + 0x26,param_3);
    piVar10 = local_204;
    piVar25 = local_208;
    piVar23 = local_20c;
    piVar27 = local_210;
    if (local_210 == (int *)0x3 && local_20c == (int *)0x0) {
      *param_1 = 3;
      param_1[1] = 0;
      uVar4 = 4;
      goto LAB_00b15dd8;
    }
    local_118 = local_200;
    piStack_114 = local_1fc;
    piStack_110 = local_1f8;
    piStack_10c = local_1f4;
    piStack_108 = local_1f0;
    piStack_104 = local_1ec;
    FUN_016dd1aa(auStack_180,auStack_1e8,0x68);
    FUN_00b17ed8(param_2 + 0x26);
    if (piVar27 == (int *)&SUB_00000002 && piVar23 == (int *)0x0) {
      local_100 = local_118;
      piStack_fc = piStack_114;
      piStack_f8 = piStack_110;
      piStack_f4 = piStack_10c;
      piStack_f0 = piStack_108;
      piStack_ec = piStack_104;
      goto LAB_00b15d48;
    }
    FUN_016dd1aa(auStack_e8,auStack_180,0x68);
    local_100 = local_118;
    piStack_fc = piStack_114;
    piStack_f8 = piStack_110;
    piStack_f4 = piStack_10c;
    piStack_f0 = piStack_108;
    piStack_ec = piStack_104;
    *(undefined1 *)((int)param_2 + 0x91) = 0;
    goto LAB_00b15db4;
  }
  local_100 = local_208;
  piStack_fc = local_204;
  piStack_f8 = local_200;
  piStack_f4 = local_1fc;
  piStack_f0 = local_1f8;
  piStack_ec = local_1f4;
  piVar25 = local_210;
  piVar10 = local_20c;
  local_80 = local_208;
  piStack_7c = local_204;
  piStack_78 = local_200;
  piStack_74 = local_1fc;
  local_70 = local_1f8;
  piStack_6c = local_1f4;
LAB_00b15d48:
  cVar1 = *(char *)((int)param_2 + 0x91);
  goto joined_r0x00b15c2c;
LAB_00b15944:
  pcVar14 = &DAT_0034ae41;
  puVar5 = &DAT_0186abb8;
LAB_00b15958:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(pcVar14,uVar12,puVar5);
LAB_00b15dec:
  uVar12 = 0x39;
  puVar5 = &DAT_0034ae25;
  puVar16 = &DAT_0186aba8;
LAB_00b15e04:
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(puVar5,uVar12,puVar16);
LAB_00b15c1c:
  piVar25 = (int *)&DAT_0000000d;
  cVar1 = *(char *)((int)param_2 + 0x91);
joined_r0x00b15c2c:
  if (((cVar1 != '\0') && (-0x7ffffffe < (int)param_2[0x26])) && (param_2[0x26] != 0)) {
    thunk_FUN_016d3fb4(param_2[0x27]);
  }
  piVar23 = (int *)0x0;
  piVar27 = (int *)&SUB_00000002;
  *(undefined1 *)((int)param_2 + 0x91) = 0;
LAB_00b15db4:
  param_1[1] = piVar23;
  param_1[2] = piVar25;
  param_1[3] = piVar10;
  *param_1 = piVar27;
  FUN_016dd1aa(param_1 + 4,&local_100,0x80);
  uVar4 = 1;
LAB_00b15dd8:
  *(undefined1 *)(param_2 + 0x24) = uVar4;
  return;
}


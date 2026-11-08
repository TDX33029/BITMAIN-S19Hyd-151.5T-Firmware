// FUN_00cfa9b8 @ 00cfa9b8 size=4508 calls_out=26 calls_in=2
// strings: BUG: impossible | BUG: impossible

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00cfb9dc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00cfa9b8(double *param_1,int param_2,int *param_3,uint *param_4,int *param_5)

{
  short sVar1;
  float fVar2;
  byte bVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  undefined4 *puVar15;
  undefined *puVar16;
  int iVar17;
  undefined4 uVar18;
  uint *puVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  undefined *puVar23;
  undefined4 *puVar24;
  int *piVar25;
  undefined4 *puVar26;
  uint *puVar27;
  bool bVar28;
  uint *puVar29;
  int iVar30;
  uint uVar31;
  undefined4 uVar32;
  uint uVar33;
  bool bVar34;
  bool bVar35;
  uint in_fpscr;
  uint uVar36;
  double in_d0;
  double in_d1;
  float fVar37;
  double unaff_d9;
  double dVar38;
  double dVar39;
  double dVar40;
  double dVar41;
  double dVar42;
  double dVar43;
  double dVar44;
  double dVar45;
  double dVar46;
  double dVar47;
  double dVar48;
  undefined8 uVar49;
  double local_158;
  double local_128;
  undefined4 *local_11c;
  double local_118;
  uint local_10c;
  int local_f8;
  uint uStack_f4;
  uint uStack_f0;
  int local_e8;
  uint uStack_e4;
  uint uStack_e0;
  int local_d8;
  uint uStack_d4;
  uint uStack_d0;
  int local_c8;
  uint local_c4;
  uint local_c0;
  uint local_bc [3];
  uint local_b0;
  uint local_ac;
  undefined4 local_a8;
  int local_a4;
  uint local_a0;
  uint local_9c;
  int local_98;
  uint uStack_94;
  uint local_90;
  uint *local_8c;
  uint local_88;
  uint local_84;
  uint local_80;
  uint *local_7c;
  undefined4 local_78;
  uint local_74;
  uint local_70;
  uint *local_6c;
  
  bVar34 = true;
  dVar47 = *(double *)(param_2 + 600);
  bVar35 = false;
  fVar37 = (float)param_5[1];
  iVar17 = *param_5;
  dVar38 = *(double *)(param_2 + 0x260);
  local_158 = (double)VectorUnsignedToFloat(param_3[1],(byte)(in_fpscr >> 0x16) & 3);
  uVar18 = *(undefined4 *)(param_2 + 0x204);
  local_158 = local_158 / 1000000.0;
  fVar2 = *(float *)(param_2 + 0x1d0);
  if (iVar17 != 0) {
    fVar2 = fVar37;
  }
  dVar40 = *(double *)(param_2 + 0x1a8);
  dVar41 = *(double *)(param_2 + 0x1b0);
  dVar42 = *(double *)(param_2 + 0x1b8);
  bVar4 = false;
  iVar5 = *(int *)(param_2 + 0x1d8);
  iVar6 = *param_3;
  dVar43 = *(double *)(param_3 + 2);
  local_118 = dVar47;
  while( true ) {
    uVar31 = in_fpscr & 0xfffffff;
    dVar44 = local_118 * 1.001;
    if (!NAN(dVar38)) break;
    uVar36 = uVar31 | (uint)NAN(dVar44) << 0x1c;
    if (SUB41(uVar36 >> 0x1c,0)) goto LAB_00cfaf68;
LAB_00cfaad8:
    if (bVar35) {
      dVar44 = ABS(unaff_d9 + -1.0);
      uVar31 = uVar36 & 0xfffffff | (uint)(dVar44 < in_d1) << 0x1f | (uint)(dVar44 == in_d1) << 0x1e
      ;
      uVar36 = uVar31 | (uint)(NAN(dVar44) || NAN(in_d1)) << 0x1c;
      bVar3 = (byte)(uVar31 >> 0x18);
      if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(uVar36 >> 0x1c) & 1)) goto LAB_00cfaf68;
    }
    dVar44 = (local_118 + dVar38) * 0.5;
    if (bVar34) {
      dVar44 = in_d0;
    }
    FUN_00cfbd90(SUB84(dVar44,0),&local_e8,param_2,param_4,param_5);
    FUN_00d00228(&local_8c,uVar18,&local_e8);
    uVar33 = local_84;
    puVar27 = (uint *)0x0;
    bVar34 = local_8c != (uint *)0x0;
    uVar31 = 0;
    if (bVar34) {
      uVar31 = local_84;
    }
    dVar39 = -0.0;
    puVar29 = local_8c;
    uVar21 = local_88;
    if (iVar6 == 0) {
      while (uVar31 != 0) {
        if (!bVar34) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (puVar27 == (uint *)0x0) {
          uVar22 = 0;
          puVar27 = puVar29;
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            puVar27 = (uint *)puVar27[0x2e];
          }
          puVar29 = (uint *)0x0;
          puVar7 = puVar27;
          if (*(short *)((int)puVar27 + 0xb6) == 0) goto LAB_00cfad50;
        }
        else {
          uVar22 = uVar21;
          puVar7 = puVar27;
          if (*(ushort *)((int)puVar27 + 0xb6) <= uVar21) {
LAB_00cfad50:
            do {
              puVar7 = (uint *)*puVar27;
              if (puVar7 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018aa004);
              }
              uVar22 = (uint)(ushort)puVar27[0x2d];
              puVar29 = (uint *)((int)puVar29 + 1);
              puVar27 = puVar7;
            } while (*(ushort *)((int)puVar7 + 0xb6) <= uVar22);
          }
        }
        if (puVar29 == (uint *)0x0) {
          uVar21 = uVar22 + 1;
          puVar27 = puVar7;
        }
        else {
          puVar19 = puVar7 + uVar22 + 0x2f;
          do {
            puVar27 = (uint *)*puVar19;
            puVar29 = (uint *)((int)puVar29 - 1);
            puVar19 = puVar27 + 0x2e;
          } while (puVar29 != (uint *)0x0);
          uVar21 = 0;
        }
        uVar8 = puVar7[uVar22 * 3 + 0xe];
        if (uVar8 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
        }
        uVar31 = uVar31 - 1;
        uVar11 = 0;
        iVar20 = 0;
        puVar29 = (uint *)puVar7[uVar22 * 3 + 0xd];
        uVar22 = uVar8;
        do {
          bVar34 = CARRY4(uVar11,*puVar29);
          uVar11 = uVar11 + *puVar29;
          iVar20 = iVar20 + (uint)bVar34;
          uVar22 = uVar22 - 1;
          puVar29 = puVar29 + 1;
        } while (uVar22 != 0);
        puVar29 = (uint *)0x0;
        uVar9 = FUN_01846088(uVar11,iVar20,uVar8,0);
        bVar34 = true;
        dVar45 = (double)VectorUnsignedToFloat(uVar9,(byte)(uVar36 >> 0x16) & 3);
        dVar39 = dVar39 + dVar45 / 1000000.0;
      }
      dVar45 = (double)VectorUnsignedToFloat(uVar33,(byte)(uVar36 >> 0x16) & 3);
      dVar39 = (dVar39 / dVar45) / local_158;
    }
    else {
      while (uVar31 != 0) {
        if (!bVar34) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa444(&DAT_018a9ff4);
        }
        if (puVar27 == (uint *)0x0) {
          puVar7 = (uint *)0x0;
          for (; uVar21 != 0; uVar21 = uVar21 - 1) {
            puVar29 = (uint *)puVar29[0x2e];
          }
          uVar21 = 0;
          puVar19 = puVar29;
          if (*(short *)((int)puVar29 + 0xb6) == 0) goto LAB_00cfabdc;
        }
        else {
          puVar7 = puVar29;
          puVar29 = puVar27;
          puVar19 = puVar27;
          if (*(ushort *)((int)puVar27 + 0xb6) <= uVar21) {
LAB_00cfabdc:
            do {
              puVar19 = (uint *)*puVar29;
              if (puVar19 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                FUN_00faa444(&DAT_018aa004);
              }
              uVar21 = (uint)(ushort)puVar29[0x2d];
              puVar7 = (uint *)((int)puVar7 + 1);
              puVar29 = puVar19;
            } while (*(ushort *)((int)puVar19 + 0xb6) <= uVar21);
          }
        }
        if (puVar7 == (uint *)0x0) {
          uVar33 = uVar21 + 1;
          puVar27 = puVar19;
        }
        else {
          puVar29 = puVar19 + uVar21 + 0x2f;
          do {
            puVar27 = (uint *)*puVar29;
            puVar7 = (uint *)((int)puVar7 - 1);
            puVar29 = puVar27 + 0x2e;
          } while (puVar7 != (uint *)0x0);
          uVar33 = 0;
        }
        uVar22 = puVar19[uVar21 * 3 + 0xe];
        if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
        }
        uVar31 = uVar31 - 1;
        uVar8 = 0;
        iVar20 = 0;
        puVar29 = (uint *)puVar19[uVar21 * 3 + 0xd];
        do {
          bVar34 = CARRY4(uVar8,*puVar29);
          uVar8 = uVar8 + *puVar29;
          iVar20 = iVar20 + (uint)bVar34;
          uVar22 = uVar22 - 1;
          puVar29 = puVar29 + 1;
        } while (uVar22 != 0);
        iVar30 = *(int *)(iVar5 + 0xbc);
        if (iVar30 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00faf2a4(&DAT_01879bd0,iVar20);
        }
        uVar9 = FUN_01846088();
        uVar32 = *(undefined4 *)(iVar5 + 0xb8);
        uVar10 = FUN_018462e8(uVar32,iVar30);
        bVar34 = true;
        dVar45 = (double)VectorUnsignedToFloat(uVar10,(byte)(uVar36 >> 0x16) & 3);
        dVar46 = (double)VectorUnsignedToFloat(uVar9,(byte)(uVar36 >> 0x16) & 3);
        dVar48 = (double)VectorUnsignedToFloat(uVar32,(byte)(uVar36 >> 0x16) & 3);
        dVar39 = dVar39 + (dVar44 / dVar45) * (dVar44 / dVar45) * dVar48 *
                          (dVar41 + (dVar46 / 1000000.0) * dVar40) * (dVar42 * (double)fVar2 + 1.0);
        puVar29 = (uint *)0x0;
        uVar21 = uVar33;
      }
      dVar39 = dVar39 / dVar43;
    }
    dVar45 = dVar44 / SQRT(dVar39);
    uVar31 = uVar36 & 0xfffffff | (uint)(dVar39 < 1.0) << 0x1f | (uint)(dVar39 == 1.0) << 0x1e;
    in_fpscr = uVar31 | (uint)NAN(dVar39) << 0x1c;
    bVar3 = (byte)(uVar31 >> 0x18);
    uVar9 = (undefined4)((ulonglong)dVar45 >> 0x20);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      FUN_016d5622(SUB84(dVar45,0),uVar9,SUB84(dVar38,0));
      dVar38 = dVar45;
      local_118 = dVar44;
      if (bVar35) goto LAB_00cfae98;
LAB_00cfaebc:
      if (bVar4) {
        FUN_00c481d4(&local_f8);
      }
      bVar28 = false;
      local_f8 = local_e8;
      uStack_f4 = uStack_e4;
      uStack_f0 = uStack_e0;
      bVar4 = true;
      unaff_d9 = dVar39;
      local_128 = dVar44;
    }
    else {
      FUN_016d5578(SUB84(dVar45,0),uVar9,SUB84(local_118,0));
      dVar38 = dVar44;
      local_118 = dVar45;
      if (!bVar35) goto LAB_00cfaebc;
LAB_00cfae98:
      bVar28 = true;
      dVar45 = ABS(dVar39 + -1.0);
      dVar46 = ABS(unaff_d9 + -1.0);
      uVar31 = in_fpscr & 0xfffffff | (uint)(dVar46 < dVar45) << 0x1f |
               (uint)(dVar46 == dVar45) << 0x1e;
      in_fpscr = uVar31 | (uint)(NAN(dVar46) || NAN(dVar45)) << 0x1c;
      bVar3 = (byte)(uVar31 >> 0x18);
      if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1))
      goto LAB_00cfaebc;
    }
    FUN_00c4849c(&local_8c);
    bVar35 = true;
    bVar34 = false;
    if (bVar28) {
      FUN_00c481d4(&local_e8);
    }
  }
  uVar36 = uVar31 | (uint)NAN(dVar44) << 0x1c;
  if ((!SUB41(uVar36 >> 0x1c,0)) &&
     (uVar36 = uVar31 | (uint)(dVar38 == dVar44) << 0x1e | (uint)(dVar44 <= dVar38) << 0x1d,
     bVar3 = (byte)(uVar36 >> 0x18), (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) {
    uVar31 = uVar31 | (uint)(dVar38 < dVar44) << 0x1f;
    uVar36 = uVar31 | (uint)(NAN(dVar38) || NAN(dVar44)) << 0x1c;
    if ((byte)(uVar31 >> 0x1f) != ((byte)(uVar36 >> 0x1c) & 1)) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
    }
    goto LAB_00cfaad8;
  }
LAB_00cfaf68:
  if (bVar4) {
    local_98 = local_f8;
    uStack_94 = uStack_f4;
    local_90 = uStack_f0;
  }
  else {
    uVar31 = *param_4;
    puVar27 = (uint *)param_4[2];
    if (uVar31 == 0) {
      puVar27 = (uint *)0x0;
    }
    puVar29 = (uint *)(uint)(uVar31 != 0);
    iVar5 = (int)puVar27 * 0xc;
    if (0xaaaaaaa < puVar27) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0);
    }
    uVar21 = param_4[1];
    uVar33 = 0;
    if (iVar5 == 0) {
      uVar22 = 4;
      puVar7 = (uint *)0x0;
    }
    else {
      uVar22 = thunk_FUN_016d4a50(iVar5);
      puVar7 = puVar27;
      if (uVar22 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar5);
      }
    }
    local_78 = 0;
    puVar12 = (undefined4 *)(uVar22 + 4);
    local_88 = 0;
    local_8c = puVar29;
    local_84 = uVar31;
    local_80 = uVar21;
    local_7c = puVar29;
    local_74 = uVar31;
    local_70 = uVar21;
    local_6c = puVar27;
    while( true ) {
      uVar49 = FUN_00c38c8c(&local_8c);
      puVar13 = (undefined4 *)uVar49;
      if (puVar13 == (undefined4 *)0x0) break;
      uVar18 = *puVar13;
      uVar33 = uVar33 + 1;
      uVar9 = *(undefined4 *)((ulonglong)uVar49 >> 0x20);
      *puVar12 = puVar13[1];
      puVar12[-1] = uVar18;
      puVar12[1] = uVar9;
      puVar12 = puVar12 + 3;
    }
    local_128 = in_d0;
    if (uVar33 == 0) {
      local_90 = 0;
      local_98 = 0;
      if (puVar7 != (uint *)0x0) {
        thunk_FUN_016d3fb4(uVar22);
      }
    }
    else {
      if (uVar33 != 1) {
        if (uVar33 < 0x15) {
          FUN_00b5dacc(uVar22,uVar33);
        }
        else {
          FUN_00cdaeb4(uVar22,uVar33);
        }
      }
      local_8c = puVar7;
      local_88 = uVar22;
      local_84 = uVar33;
      FUN_00c3c688(&local_98,&local_8c);
    }
  }
  uVar36 = uVar36 & 0xfffffff;
  local_d8 = local_98;
  uStack_d4 = uStack_94;
  uStack_d0 = local_90;
  dVar47 = dVar47 * 1.01;
  local_c8 = local_98;
  local_c4 = uStack_94;
  local_c0 = local_90;
  if (NAN(local_128)) {
    uVar31 = uVar36 | (uint)NAN(dVar47) << 0x1c;
    if (!SUB41(uVar31 >> 0x1c,0)) goto LAB_00cfafec;
  }
  else {
    uVar31 = uVar36 | (uint)NAN(dVar47) << 0x1c;
    if ((!SUB41(uVar31 >> 0x1c,0)) &&
       (uVar31 = uVar36 | (uint)(local_128 == dVar47) << 0x1e | (uint)(dVar47 <= local_128) << 0x1d,
       bVar3 = (byte)(uVar31 >> 0x18), (bool)(bVar3 >> 5 & 1) && !(bool)(bVar3 >> 6))) {
      if (local_128 < dVar47) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
      }
      goto LAB_00cfafec;
    }
  }
  uVar33 = *param_4;
  uVar18 = 0;
  uVar36 = param_4[2];
  if (uVar33 == 0) {
    uVar36 = 0;
  }
  puVar27 = (uint *)(uint)(uVar33 != 0);
  uVar21 = uVar36 * 4;
  bVar34 = 0x3ffffffe < uVar36;
  bVar35 = uVar36 == 0x3fffffff;
  if (uVar36 < 0x40000000) {
    bVar34 = 0x7ffffffb < uVar21;
    bVar35 = uVar21 == 0x7ffffffc;
  }
  if (bVar34 && !bVar35) {
LAB_00cfb248:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar18,uVar21);
  }
  uVar8 = param_4[1];
  uVar22 = 0;
  if (uVar21 == 0) {
    puVar12 = (undefined4 *)&DAT_00000004;
    uVar11 = 0;
  }
  else {
    puVar12 = (undefined4 *)thunk_FUN_016d4a50(uVar21);
    uVar11 = uVar36;
    if (puVar12 == (undefined4 *)0x0) {
      uVar18 = 4;
      goto LAB_00cfb248;
    }
  }
  local_78 = 0;
  local_88 = 0;
  local_8c = puVar27;
  local_84 = uVar33;
  local_80 = uVar8;
  local_7c = puVar27;
  local_74 = uVar33;
  local_70 = uVar8;
  local_6c = (uint *)uVar36;
  while (iVar5 = FUN_00c38c8c(&local_8c), iVar5 != 0) {
    puVar12[uVar22] = iVar5;
    uVar22 = uVar22 + 1;
  }
  if (uVar22 != 0) {
    if (uVar22 != 1) {
      if (uVar22 < 0x15) {
        FUN_00b5e990(puVar12,uVar22);
      }
      else {
        FUN_00cd6508(puVar12,uVar22);
      }
    }
    puVar13 = (undefined4 *)thunk_FUN_016d4a50(0x34);
    if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x34);
    }
    puVar24 = puVar12 + uVar22;
    bVar35 = false;
    local_10c = 0;
    uVar36 = 0;
    *(undefined2 *)((int)puVar13 + 0x32) = 0;
    *puVar13 = 0;
    puVar26 = puVar12;
    local_11c = puVar13;
    do {
      if (bVar35) {
        if (puVar27 == (uint *)0x0) goto LAB_00cfb50c;
        puVar14 = puVar26;
        if (puVar26 != puVar24) goto LAB_00cfb388;
LAB_00cfb3c8:
        uVar33 = (uint)*(ushort *)((int)puVar13 + 0x32);
        puVar29 = puVar27;
        puVar27 = (uint *)0x0;
        if (uVar33 < 0xb) goto LAB_00cfb33c;
LAB_00cfb3d8:
        uVar33 = 0;
        do {
          puVar13 = (undefined4 *)*puVar13;
          if (puVar13 == (undefined4 *)0x0) {
            puVar13 = (undefined4 *)thunk_FUN_016d4a50(100);
            if (puVar13 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
              FUN_00600874(4,100);
            }
            uVar33 = uVar36 + 1;
            puVar13[0xd] = local_11c;
            *(undefined2 *)((int)puVar13 + 0x32) = 0;
            *puVar13 = 0;
            if (0xfffffffe < uVar36) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af438);
            }
            *(undefined2 *)(local_11c + 0xc) = 0;
            *local_11c = puVar13;
            uVar36 = uVar33;
            local_11c = puVar13;
            goto LAB_00cfb444;
          }
          uVar33 = uVar33 + 1;
        } while (10 < *(ushort *)((int)puVar13 + 0x32));
LAB_00cfb444:
        puVar14 = (undefined4 *)thunk_FUN_016d4a50(0x34);
        if (puVar14 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(4,0x34);
        }
        *(undefined2 *)((int)puVar14 + 0x32) = 0;
        *puVar14 = 0;
        uVar21 = uVar33;
        while (uVar21 = uVar21 - 1, uVar21 != 0) {
          puVar15 = (undefined4 *)thunk_FUN_016d4a50(100);
          if (puVar15 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600874(4,100);
          }
          puVar15[0xd] = puVar14;
          *(undefined2 *)((int)puVar15 + 0x32) = 0;
          *puVar15 = 0;
          *(undefined2 *)(puVar14 + 0xc) = 0;
          *puVar14 = puVar15;
          puVar14 = puVar15;
        }
        uVar21 = (uint)*(ushort *)((int)puVar13 + 0x32);
        if (10 < uVar21) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464(&DAT_00565dd0,0x20,&DAT_018af428);
        }
        sVar1 = *(ushort *)((int)puVar13 + 0x32) + 1;
        *(short *)((int)puVar13 + 0x32) = sVar1;
        puVar13[uVar21 + 1] = puVar29;
        puVar13[uVar21 + 0xe] = puVar14;
        *(short *)(puVar14 + 0xc) = sVar1;
        *puVar14 = puVar13;
        if (uVar33 != 0) {
          do {
            uVar33 = uVar33 - 1;
            puVar13 = (undefined4 *)puVar13[*(ushort *)((int)puVar13 + 0x32) + 0xd];
          } while (uVar33 != 0);
        }
      }
      else {
        if (puVar26 == puVar24) {
LAB_00cfb50c:
          if (uVar11 != 0) {
            thunk_FUN_016d3fb4(puVar12);
          }
          if (uVar36 == 0) goto LAB_00cfb694;
          uVar33 = uVar36;
          puVar12 = local_11c;
          goto LAB_00cfb548;
        }
        puVar14 = puVar26 + 1;
        puVar27 = (uint *)*puVar26;
        puVar26 = puVar14;
        if (puVar14 == puVar24) goto LAB_00cfb3c8;
LAB_00cfb388:
        uVar33 = *puVar27;
        uVar21 = *(uint *)*puVar14;
        puVar7 = (uint *)*puVar14;
        puVar29 = puVar27;
        puVar26 = puVar14;
        while( true ) {
          puVar27 = puVar7;
          puVar26 = puVar26 + 1;
          if (uVar33 != uVar21) break;
          if (puVar26 == puVar24) goto LAB_00cfb3c8;
          uVar21 = *(uint *)*puVar26;
          puVar7 = (uint *)*puVar26;
          puVar29 = puVar27;
        }
        uVar33 = (uint)*(ushort *)((int)puVar13 + 0x32);
        if (10 < uVar33) goto LAB_00cfb3d8;
LAB_00cfb33c:
        *(short *)((int)puVar13 + 0x32) = (short)uVar33 + 1;
        puVar13[uVar33 + 1] = puVar29;
      }
      local_10c = local_10c + 1;
      bVar35 = true;
    } while( true );
  }
  local_10c = 0;
  if (uVar11 != 0) goto LAB_00cfb7e0;
  goto LAB_00cfb7e8;
  while( true ) {
    uVar33 = uVar33 - 1;
    puVar12 = puVar13;
    if (uVar33 == 0) break;
LAB_00cfb548:
    uVar21 = (uint)*(ushort *)((int)puVar12 + 0x32);
    if (uVar21 == 0) {
      uVar18 = 0x19;
      puVar16 = &DAT_004194a6;
      puVar23 = &DAT_018af418;
      goto LAB_00cfbb10;
    }
    puVar13 = (undefined4 *)puVar12[uVar21 + 0xd];
    uVar22 = (uint)*(ushort *)((int)puVar13 + 0x32);
    if (uVar22 < 5) {
      iVar5 = puVar12[uVar21 + 0xc];
      uVar8 = -uVar22 + 5;
      uVar11 = (uint)*(ushort *)(iVar5 + 0x32);
      if (uVar11 < uVar8) {
        uVar18 = 0x27;
        puVar16 = &DAT_004194e7;
        puVar23 = &DAT_018af458;
LAB_00cfbb10:
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(puVar16,uVar18,puVar23);
      }
      iVar30 = uVar11 - uVar8;
      *(short *)(iVar5 + 0x32) = (short)iVar30;
      puVar26 = puVar13 + 1;
      *(undefined2 *)((int)puVar13 + 0x32) = 5;
      FUN_016dd52c(puVar26 + uVar8,puVar26);
      iVar20 = iVar30 + 1;
      if (uVar11 - iVar20 != -uVar22 + 4) {
        uVar18 = 0x28;
        puVar16 = &DAT_004194bf;
        puVar23 = &DAT_018af448;
        goto LAB_00cfbb10;
      }
      FUN_016dd1aa(puVar26,iVar5 + 4 + iVar20 * 4,(uVar11 - iVar20) * 4);
      uVar18 = puVar12[uVar21];
      puVar12[uVar21] = *(undefined4 *)(iVar5 + 4 + iVar30 * 4);
      puVar13[uVar8] = uVar18;
      if (uVar33 == 1) break;
      puVar12 = puVar13 + 0xd;
      FUN_016dd52c(puVar12 + uVar8,puVar12,uVar22 * 4 + 4);
      FUN_016dd1aa(puVar12,iVar5 + iVar20 * 4 + 0x34,uVar8 * 4);
      puVar12 = (undefined4 *)puVar13[0xd];
      *(undefined2 *)(puVar12 + 0xc) = 0;
      *puVar12 = puVar13;
      puVar12 = (undefined4 *)puVar13[0xe];
      *(undefined2 *)(puVar12 + 0xc) = 1;
      *puVar12 = puVar13;
      puVar12 = (undefined4 *)puVar13[0xf];
      *(undefined2 *)(puVar12 + 0xc) = 2;
      *puVar12 = puVar13;
      puVar12 = (undefined4 *)puVar13[0x10];
      *(undefined2 *)(puVar12 + 0xc) = 3;
      *puVar12 = puVar13;
      puVar12 = (undefined4 *)puVar13[0x11];
      *(undefined2 *)(puVar12 + 0xc) = 4;
      *puVar12 = puVar13;
      puVar12 = (undefined4 *)puVar13[0x12];
      *puVar12 = puVar13;
      *(undefined2 *)(puVar12 + 0xc) = 5;
    }
  }
LAB_00cfb694:
  if (local_11c != (undefined4 *)0x0) {
    if (local_10c == 0) {
      local_10c = 0;
      if (uVar36 == 0) {
        puVar12 = local_11c;
      }
      else {
        do {
          puVar12 = (undefined4 *)local_11c[0xd];
          uVar36 = uVar36 - 1;
          local_11c = puVar12;
        } while (uVar36 != 0);
      }
    }
    else {
      puVar12 = (undefined4 *)0x0;
      uVar33 = local_10c;
LAB_00cfb6c0:
      do {
        if (puVar12 == (undefined4 *)0x0) {
          puVar13 = (undefined4 *)0x0;
          puVar12 = local_11c;
          for (; uVar36 != 0; uVar36 = uVar36 - 1) {
            puVar12 = (undefined4 *)puVar12[0xd];
          }
          uVar36 = 0;
          if (*(short *)((int)puVar12 + 0x32) != 0) goto LAB_00cfb6dc;
LAB_00cfb710:
          do {
            puVar26 = (undefined4 *)*puVar12;
            if (puVar26 == (undefined4 *)0x0) {
              thunk_FUN_016d3fb4();
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_018af358);
            }
            uVar36 = (uint)*(ushort *)(puVar12 + 0xc);
            thunk_FUN_016d3fb4();
            puVar13 = (undefined4 *)((int)puVar13 + 1);
            puVar12 = puVar26;
          } while (*(ushort *)((int)puVar26 + 0x32) <= uVar36);
        }
        else {
          puVar13 = local_11c;
          if (*(ushort *)((int)puVar12 + 0x32) <= uVar36) goto LAB_00cfb710;
LAB_00cfb6dc:
        }
        if (puVar13 == (undefined4 *)0x0) {
          uVar36 = uVar36 + 1;
          uVar33 = uVar33 - 1;
          local_11c = (undefined4 *)0x0;
          if (uVar33 == 0) break;
          goto LAB_00cfb6c0;
        }
        puVar26 = puVar12 + uVar36 + 0xe;
        do {
          puVar12 = (undefined4 *)*puVar26;
          puVar13 = (undefined4 *)((int)puVar13 + -1);
          puVar26 = puVar12 + 0xd;
        } while (puVar13 != (undefined4 *)0x0);
        uVar36 = 0;
        uVar33 = uVar33 - 1;
        local_11c = (undefined4 *)0x0;
      } while (uVar33 != 0);
    }
    puVar13 = (undefined4 *)*puVar12;
    puVar26 = puVar12;
    if ((undefined4 *)*puVar12 != (undefined4 *)0x0) {
      do {
        puVar12 = puVar13;
        thunk_FUN_016d3fb4(puVar26);
        puVar13 = (undefined4 *)*puVar12;
        puVar26 = puVar12;
      } while ((undefined4 *)*puVar12 != (undefined4 *)0x0);
    }
LAB_00cfb7e0:
    thunk_FUN_016d3fb4(puVar12);
  }
LAB_00cfb7e8:
  if (iVar6 != 0) {
    if (*(int *)(*(int *)(param_2 + 0x1d8) + 0xbc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faf2a4(&DAT_01879bd0);
    }
    uVar18 = *(undefined4 *)(*(int *)(param_2 + 0x1d8) + 0xb8);
    fVar2 = *(float *)(param_2 + 0x1d0);
    if (iVar17 != 0) {
      fVar2 = fVar37;
    }
    uVar9 = FUN_018462e8(uVar18);
    dVar38 = (double)VectorUnsignedToFloat(uVar9,(byte)(uVar31 >> 0x16) & 3);
    if (local_10c < 2) {
      local_10c = 1;
    }
    dVar41 = (double)VectorUnsignedToFloat(local_10c,(byte)(uVar31 >> 0x16) & 3);
    dVar40 = (local_128 / dVar38) * (local_128 / dVar38);
    dVar42 = (double)VectorUnsignedToFloat(uVar18,(byte)(uVar31 >> 0x16) & 3);
    dVar47 = dVar40 * (*(double *)(param_2 + 0x1b8) * (double)fVar2 + 1.0);
    dVar38 = dVar47;
    if (((ulonglong)dVar47 & 0x7ff0000000000000) == 0) {
      dVar38 = dVar40;
    }
    if (SUB84(dVar47,0) != 0 || ((ulonglong)dVar47 & 0xfffff00000000) != 0) {
      dVar47 = dVar38;
    }
    uVar33 = *(uint *)(*(int *)(param_2 + 0x204) + 0x44);
    dVar38 = (1.0 / *(double *)(param_2 + 0x1a8)) *
             (((1.0 / dVar41) * dVar43 * (1.0 / dVar42)) / dVar47 - *(double *)(param_2 + 0x1b0)) *
             1000000.0;
    uVar36 = (uint)(0.0 < dVar38) * (int)(longlong)dVar38;
    if (uVar36 < uVar33) {
      uVar36 = uVar33;
    }
    local_158 = (double)VectorUnsignedToFloat(uVar36,(byte)(uVar31 >> 0x16) & 3);
    local_158 = local_158 / 1000000.0;
  }
  uVar33 = local_c0;
  uVar36 = local_c4;
  iVar17 = local_c8;
  local_a8 = 0;
  local_bc[1] = 0;
  local_9c = 0;
  if (local_c8 != 0) {
    local_9c = local_c0;
  }
  dVar38 = -0.0;
  local_bc[0] = (uint)(local_c8 != 0);
  local_a0 = local_c4;
  local_a4 = local_c8;
  local_b0 = local_c4;
  local_bc[2] = local_c8;
  local_ac = local_bc[0];
  while( true ) {
    uVar49 = FUN_00c38ef8(local_bc);
    puVar12 = (undefined4 *)((ulonglong)uVar49 >> 0x20);
    if ((int)uVar49 == 0 || puVar12 == (undefined4 *)0x0) break;
    dVar47 = (double)VectorUnsignedToFloat(*puVar12,(byte)(uVar31 >> 0x16) & 3);
    dVar38 = dVar38 + dVar47 / 1000000.0;
  }
  uVar21 = uVar33;
  if (uVar33 < 2) {
    uVar21 = 1;
  }
  dVar47 = (double)VectorUnsignedToFloat(uVar21,(byte)(uVar31 >> 0x16) & 3);
  uVar31 = uVar31 & 0xfffffff | (uint)(local_158 < dVar38 / dVar47) << 0x1f;
  if (SUB41(uVar31 >> 0x1f,0)) {
    if (iVar17 == 0) {
      uVar33 = 0;
    }
    iVar5 = 0;
    bVar35 = iVar17 != 0;
    dVar40 = (double)VectorUnsignedToFloat
                               (*(undefined4 *)(*(int *)(param_2 + 0x204) + 0x44),
                                (byte)(uVar31 >> 0x16) & 3);
    while (uVar33 != 0) {
      if (!bVar35) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_0188d374);
      }
      if (iVar5 == 0) {
        iVar6 = 0;
        for (; uVar36 != 0; uVar36 = uVar36 - 1) {
          iVar17 = *(int *)(iVar17 + 0x8c);
        }
        uVar21 = 0;
        iVar20 = iVar17;
        if (*(short *)(iVar17 + 0x8a) == 0) goto LAB_00cfba54;
      }
      else {
        iVar6 = iVar17;
        iVar17 = iVar5;
        iVar20 = iVar5;
        uVar21 = uVar36;
        if (*(ushort *)(iVar5 + 0x8a) <= uVar36) {
LAB_00cfba54:
          do {
            iVar20 = *(int *)(iVar17 + 0x58);
            if (iVar20 == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_00faa444(&DAT_0188d364);
            }
            uVar21 = (uint)*(ushort *)(iVar17 + 0x88);
            iVar6 = iVar6 + 1;
            iVar17 = iVar20;
          } while (*(ushort *)(iVar20 + 0x8a) <= uVar21);
        }
      }
      if (iVar6 == 0) {
        uVar36 = uVar21 + 1;
        iVar5 = iVar20;
      }
      else {
        piVar25 = (int *)(iVar20 + uVar21 * 4 + 0x90);
        do {
          iVar5 = *piVar25;
          iVar6 = iVar6 + -1;
          piVar25 = (int *)(iVar5 + 0x8c);
        } while (iVar6 != 0);
        uVar36 = 0;
      }
      iVar20 = iVar20 + uVar21 * 4;
      uVar33 = uVar33 - 1;
      dVar41 = (double)VectorUnsignedToFloat
                                 (*(undefined4 *)(iVar20 + 0x5c),(byte)(uVar31 >> 0x16) & 3);
      dVar41 = (local_158 / (dVar38 / dVar47)) * (dVar41 / 1000000.0);
      FUN_016d5578(SUB84(dVar41,0),(int)((ulonglong)dVar41 >> 0x20),SUB84(dVar40 / 1000000.0,0));
      bVar35 = true;
      *(uint *)(iVar20 + 0x5c) =
           (uint)(0.0 < dVar41 * 1000000.0) * (int)(longlong)(dVar41 * 1000000.0);
      iVar17 = 0;
    }
  }
LAB_00cfafec:
  *param_1 = local_128;
  *(int *)(param_1 + 1) = local_d8;
  *(uint *)((int)param_1 + 0xc) = uStack_d4;
  *(uint *)(param_1 + 2) = uStack_d0;
  return;
}


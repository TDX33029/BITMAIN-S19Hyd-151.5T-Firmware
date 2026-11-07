// FUN_00b9fda0 @ 00b9fda0 size=1764 calls_out=11 calls_in=2
// strings: BUG: impossible | SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00b9ffa4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00b9fda0(undefined4 *param_1,uint *param_2)

{
  uint uVar1;
  byte bVar2;
  char cVar3;
  undefined4 uVar4;
  undefined *puVar5;
  uint uVar6;
  undefined1 *puVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  char *pcVar11;
  uint in_fpscr;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  double in_d0;
  double dVar15;
  double dVar16;
  double dVar17;
  double dVar18;
  undefined8 uVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  double dVar24;
  double dVar25;
  double dVar26;
  double dVar27;
  double local_138;
  undefined1 auStack_130 [12];
  undefined1 auStack_124 [12];
  double local_118;
  uint local_10c;
  double local_108;
  double local_100;
  double local_f8;
  undefined4 **local_f0;
  undefined4 local_ec;
  undefined4 *local_e8;
  undefined4 *local_e4;
  undefined **local_e0;
  undefined *local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 local_c8;
  undefined *local_c0;
  double **local_bc;
  double *local_b8;
  code *local_b4;
  double *local_b0;
  code *local_ac;
  double *local_a8;
  code *local_a4;
  double *local_a0;
  undefined1 *local_9c;
  undefined1 auStack_98 [12];
  undefined1 auStack_8c [12];
  double local_80 [2];
  undefined4 ***local_70;
  int local_6c;
  
  uVar13 = in_fpscr & 0xfffffff;
  if (NAN(in_d0)) {
    dVar23 = *(double *)(param_2 + 0xa0);
    uVar13 = uVar13 | (uint)NAN(dVar23 + 0.01) << 0x1c;
    if (SUB41(uVar13 >> 0x1c,0)) goto LAB_00b9fe44;
  }
  else {
    dVar23 = *(double *)(param_2 + 0x9e) + -0.01;
    if (NAN(dVar23)) {
LAB_00ba03c4:
      puVar7 = auStack_130;
      puVar5 = &DAT_0057fefb;
      local_80[0] = *(double *)(param_2 + 0x9e);
      goto LAB_00ba0368;
    }
    if (in_d0 <= dVar23) {
      uVar13 = uVar13 | (uint)(in_d0 < dVar23) << 0x1f;
      uVar12 = uVar13 | (uint)(NAN(in_d0) || NAN(dVar23)) << 0x1c;
      if ((byte)(uVar13 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) goto LAB_00ba03c4;
    }
    else {
      uVar13 = uVar13 | (uint)(in_d0 < dVar23) << 0x1f;
      uVar12 = uVar13 | (uint)(NAN(in_d0) || NAN(dVar23)) << 0x1c;
      if ((byte)(uVar13 >> 0x1f) != ((byte)(uVar12 >> 0x1c) & 1)) goto LAB_00b9fdfc;
    }
    dVar23 = *(double *)(param_2 + 0xa0);
    dVar24 = dVar23 + 0.01;
    uVar13 = uVar12 & 0xfffffff | (uint)NAN(dVar24) << 0x1c;
    if ((SUB41(uVar13 >> 0x1c,0)) ||
       (uVar13 = uVar12 & 0xfffffff | (uint)(in_d0 == dVar24) << 0x1e |
                 (uint)(dVar24 <= in_d0) << 0x1d, bVar2 = (byte)(uVar13 >> 0x18),
       !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6))) {
LAB_00b9fe44:
      if ((*param_2 & 1) != 0) {
        uVar19 = *(undefined8 *)(param_2 + 0x98);
        *param_1 = 0;
        *(undefined8 *)(param_1 + 2) = uVar19;
        return;
      }
      uVar12 = param_2[0x76];
      dVar23 = *(double *)(param_2 + 0x98);
      iVar10 = *(int *)(uVar12 + 0xbc);
      local_118 = dVar23;
      if (iVar10 == 0) {
LAB_00ba0480:
                    /* WARNING: Subroutine does not return */
        FUN_00faf2a4(&DAT_01879bd0);
      }
      uVar8 = *(undefined4 *)(uVar12 + 0xb8);
      dVar20 = *(double *)(param_2 + 0x6a);
      dVar25 = *(double *)(param_2 + 0x6c);
      dVar21 = *(double *)(param_2 + 0x6e) * (double)(float)param_2[0x74] + 1.0;
      dVar18 = *(double *)(param_2 + 2);
      dVar16 = *(double *)(param_2 + 4);
      local_138 = in_d0;
      uVar4 = FUN_018462e8(uVar8,iVar10);
      uVar6 = param_2[0x81];
      dVar22 = (double)VectorUnsignedToFloat(uVar8,(byte)(uVar13 >> 0x16) & 3);
      iVar9 = *(int *)(uVar6 + 0xbc);
      dVar17 = (double)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x16) & 3);
      dVar24 = dVar23;
      do {
        do {
          dVar15 = dVar24;
          dVar26 = (dVar15 / dVar17) * (dVar15 / dVar17);
          dVar24 = dVar26 * dVar21;
          dVar27 = dVar24;
          if (((ulonglong)dVar24 & 0x7ff0000000000000) == 0) {
            dVar27 = dVar26;
          }
          if (SUB84(dVar24,0) != 0 || ((ulonglong)dVar24 & 0xfffff00000000) != 0) {
            dVar24 = dVar27;
          }
          if (iVar9 == 0) goto LAB_00ba0480;
          dVar24 = (1.0 / dVar20) * ((in_d0 * (1.0 / dVar22)) / dVar24 - dVar25) * 1000000.0;
          uVar1 = (uint)(0.0 < dVar24) * (int)(longlong)dVar24;
          uVar4 = FUN_018462e8(*(undefined4 *)(uVar6 + 0xb8),iVar9);
          dVar27 = (double)VectorUnsignedToFloat(uVar1,(byte)(uVar13 >> 0x16) & 3);
          dVar24 = (double)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x16) & 3);
          dVar24 = ((dVar15 / dVar24 + dVar18 * (dVar27 - dVar16)) / (dVar18 * dVar18 + 1.0)) *
                   dVar24;
          uVar4 = (undefined4)((ulonglong)dVar24 >> 0x20);
          FUN_016d5578(SUB84(dVar24,0),uVar4,0xeb1c432d);
          uVar13 = uVar13 & 0xfffffff;
          uVar14 = uVar13 | (uint)NAN(dVar24 - dVar15) << 0x1c;
          if (!SUB41(uVar14 >> 0x1c,0)) {
            dVar27 = ABS(dVar24 - dVar15);
            if (dVar27 <= 0.0001) {
              uVar13 = uVar13 | (uint)(dVar27 < 0.0001) << 0x1f;
              uVar14 = uVar13 | (uint)NAN(dVar27) << 0x1c;
              if ((byte)(uVar13 >> 0x1f) != ((byte)(uVar14 >> 0x1c) & 1)) {
                dVar16 = *(double *)(param_2 + 0x96);
                local_10c = uVar1;
                local_108 = dVar15;
                FUN_016d5578(SUB84(dVar15,0),uVar4,SUB84(dVar16,0));
                FUN_016d5622(SUB84(dVar24,0),uVar4,SUB84(dVar23,0));
                uVar13 = uVar14 & 0xfffffff | (uint)(dVar24 == dVar15) << 0x1e;
                local_118 = dVar24;
                if (!SUB41(uVar13 >> 0x1e,0)) {
                  local_100 = dVar16;
                  local_f8 = dVar23;
                  if ((DAT_018d9130 < 4) && (DAT_018d9ac4 != '\0')) {
                    if (DAT_018d9ac4 == '\x01') {
LAB_00ba00e8:
                      DataMemoryBarrier(0xb);
                      pcVar11 = s_SetGloba_00414c05;
                      puVar5 = &DAT_018ae394;
                      if ((DAT_018dd984 == 2) &&
                         (pcVar11 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
                        pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                      }
                      iVar10 = (**(code **)(puVar5 + 0x14))(pcVar11,DAT_018d9abc);
                      if (iVar10 == 0) goto LAB_00ba026c;
                    }
                    else if (DAT_018d9ac4 != '\x02') {
                      cVar3 = FUN_0169ac90(&DAT_018d9abc);
                      if (cVar3 == '\0') goto LAB_00ba026c;
                      if (cVar3 != '\x02') goto LAB_00ba00e8;
                    }
                    local_6c = DAT_018d9abc;
                    if (*(int *)(DAT_018d9abc + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_01870e7c);
                    }
                    local_a8 = &local_100;
                    local_cc = *(undefined4 *)(DAT_018d9abc + 0x28);
                    local_a0 = &local_f8;
                    local_d4 = *(undefined4 *)(DAT_018d9abc + 0x20);
                    local_d0 = *(undefined4 *)(DAT_018d9abc + 0x24);
                    local_e8 = (undefined4 *)(DAT_018d9abc + 0x1c);
                    local_d8 = *local_e8;
                    local_b0 = &local_118;
                    local_bc = &local_b8;
                    local_b8 = &local_108;
                    local_c8 = 0;
                    local_c0 = &DAT_0034faac;
                    local_9c = &LAB_00fb1f30;
                    local_a4 = (code *)&LAB_00fb1f30;
                    local_ac = (code *)&LAB_00fb1f30;
                    local_b4 = (code *)&LAB_00fb1f30;
                    local_dc = &DAT_018abb78;
                    local_e0 = &local_c0;
                    local_e4 = &local_d8;
                    local_f0 = &local_e4;
                    local_70 = &local_f0;
                    local_ec = 1;
                    local_80[0] = 4.94065645841247e-324;
                    DataMemoryBarrier(0xb);
                    pcVar11 = s_SetGloba_00414c05;
                    puVar5 = &DAT_018ae394;
                    if ((DAT_018dd984 == 2) &&
                       (pcVar11 = DAT_018daa74, puVar5 = DAT_018daa78, DAT_018daa70 != 0)) {
                      pcVar11 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                    }
                    iVar10 = (**(code **)(puVar5 + 0x28))(pcVar11,local_80);
                    if (iVar10 != 0) {
                      (**(code **)(puVar5 + 0x2c))(pcVar11,local_80);
                    }
                  }
LAB_00ba026c:
                  iVar10 = *(int *)(uVar12 + 0xbc);
                }
                if (iVar10 == 0) goto LAB_00ba0480;
                uVar8 = *(undefined4 *)(uVar12 + 0xb8);
                uVar4 = FUN_018462e8(uVar8,iVar10);
                dVar23 = (double)VectorUnsignedToFloat(uVar4,(byte)(uVar13 >> 0x16) & 3);
                dVar24 = (local_118 / dVar23) * (local_118 / dVar23);
                dVar16 = (double)VectorUnsignedToFloat(uVar8,(byte)(uVar13 >> 0x16) & 3);
                dVar21 = dVar21 * dVar24;
                dVar23 = dVar21;
                if (((ulonglong)dVar21 & 0x7ff0000000000000) == 0) {
                  dVar23 = dVar24;
                }
                if (SUB84(dVar21,0) != 0 || ((ulonglong)dVar21 & 0xfffff00000000) != 0) {
                  dVar21 = dVar23;
                }
                dVar23 = (1.0 / dVar20) * ((local_138 * (1.0 / dVar16)) / dVar21 - dVar25) *
                         1000000.0;
                local_10c = (uint)(0.0 < dVar23) * (int)(longlong)dVar23;
                if (*(uint *)(uVar6 + 0x48) < local_10c) {
                  puVar7 = auStack_98;
                  local_b4 = FUN_00f5cdb8;
                  local_a8 = local_80;
                  local_b0 = (double *)&local_10c;
                  local_b8 = &local_118;
                  puVar5 = &DAT_0056de7a;
                  local_a4 = FUN_00f5c9c8;
                }
                else {
                  if (*(uint *)(uVar6 + 0x44) <= local_10c) {
                    *param_1 = 0;
                    *(double *)(param_1 + 2) = local_118;
                    return;
                  }
                  puVar7 = auStack_8c;
                  puVar5 = &DAT_00588647;
                  local_b0 = local_80;
                  local_b4 = FUN_00f5c9c8;
                  local_b8 = (double *)&local_10c;
                }
                local_80[0] = (double)CONCAT44(local_80[0]._4_4_,*(uint *)(uVar6 + 0x48));
                local_ac = FUN_00f5c9c8;
                FUN_00600d2c(puVar7,puVar5,&local_b8);
                goto LAB_00ba0388;
              }
            }
            else {
              uVar13 = uVar13 | (uint)(dVar27 < 0.0001) << 0x1f;
              uVar14 = uVar13 | (uint)NAN(dVar27) << 0x1c;
              if ((byte)(uVar13 >> 0x1f) != ((byte)(uVar14 >> 0x1c) & 1)) goto LAB_00ba03ac;
            }
          }
          uVar14 = uVar14 & 0xfffffff;
          uVar13 = uVar14 | (uint)NAN(dVar15) << 0x1c;
        } while ((SUB41(uVar13 >> 0x1c,0)) ||
                (uVar13 = uVar14 | (uint)(dVar24 == dVar15) << 0x1e |
                          (uint)(dVar15 <= dVar24) << 0x1d, bVar2 = (byte)(uVar13 >> 0x18),
                !(bool)(bVar2 >> 5 & 1) || (bool)(bVar2 >> 6)));
        uVar14 = uVar14 | (uint)(dVar24 < dVar15) << 0x1f;
        uVar13 = uVar14 | (uint)(NAN(dVar24) || NAN(dVar15)) << 0x1c;
        if ((byte)(uVar14 >> 0x1f) != ((byte)(uVar13 >> 0x1c) & 1)) {
LAB_00ba03ac:
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
        }
        dVar24 = (dVar24 + dVar15) * 0.5;
      } while( true );
    }
    if (in_d0 < dVar24) {
LAB_00b9fdfc:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f728);
    }
  }
  puVar7 = auStack_124;
  puVar5 = &DAT_0058f13a;
  local_80[0] = dVar23;
LAB_00ba0368:
  local_b4 = FUN_00f5c774;
  local_b0 = local_80;
  local_b8 = &local_138;
  local_ac = local_b4;
  FUN_00600d2c(puVar7,puVar5,&local_b8);
LAB_00ba0388:
  uVar4 = FUN_00c6b484(puVar7);
  *param_1 = 1;
  param_1[1] = uVar4;
  return;
}


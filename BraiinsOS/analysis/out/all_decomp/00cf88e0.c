// FUN_00cf88e0 @ 00cf88e0 size=2024 calls_out=22 calls_in=2
// strings: no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor | no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00cf8dcc */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00cf88e0(undefined4 *param_1,int param_2,uint *param_3,undefined4 param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint *puVar16;
  uint *puVar17;
  uint *puVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  bool bVar22;
  bool bVar23;
  uint in_fpscr;
  float fVar24;
  double in_d0;
  undefined4 uVar25;
  double dVar26;
  double dVar27;
  undefined8 uVar28;
  double dVar29;
  double dVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  uint local_120;
  undefined *local_108;
  uint local_100;
  int local_fc;
  uint *local_e0;
  int local_dc;
  int local_d4;
  undefined4 uStack_d0;
  undefined4 local_cc;
  uint local_c8;
  int iStack_c4;
  uint uStack_c0;
  uint local_b8;
  uint local_b4;
  undefined4 local_b0;
  uint *local_a8;
  int local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint local_98;
  int local_94;
  uint local_90;
  uint local_8c;
  uint local_88;
  undefined4 local_84;
  uint local_80;
  uint local_7c;
  uint local_78;
  uint *local_74;
  uint *local_70;
  undefined4 *local_6c;
  
  uVar1 = *param_3;
  uVar11 = param_3[2];
  if (uVar1 == 0) {
    uVar11 = 0;
  }
  uVar8 = (uint)(uVar1 != 0);
  uVar21 = uVar11 * 8;
  bVar23 = 0x1ffffffe < uVar11;
  bVar22 = uVar11 == 0x1fffffff;
  if (uVar11 < 0x20000000) {
    bVar23 = 0x7ffffffb < uVar21;
    bVar22 = uVar21 == 0x7ffffffc;
  }
  if (bVar23 && !bVar22) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  uVar2 = param_3[1];
  uVar14 = 0;
  if (uVar21 == 0) {
    iVar3 = 4;
    uVar7 = 0;
  }
  else {
    iVar3 = thunk_FUN_016d4a50(uVar21);
    uVar7 = uVar11;
    if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar21);
    }
  }
  local_84 = 0;
  local_94 = 0;
  local_98 = uVar8;
  local_90 = uVar1;
  local_8c = uVar2;
  local_88 = uVar8;
  local_80 = uVar1;
  local_7c = uVar2;
  local_78 = uVar11;
  while (puVar4 = (undefined4 *)FUN_00c38c8c(&local_98), puVar4 != (undefined4 *)0x0) {
    uVar5 = puVar4[1];
    puVar6 = (undefined4 *)(iVar3 + uVar14 * 8);
    *puVar6 = *puVar4;
    uVar14 = uVar14 + 1;
    puVar6[1] = uVar5;
  }
  if (uVar14 == 0) {
    local_a0 = 0;
    local_a8 = (uint *)0x0;
    if (uVar7 != 0) {
      thunk_FUN_016d3fb4(iVar3);
    }
  }
  else {
    if (uVar14 != 1) {
      if (uVar14 < 0x15) {
        FUN_00b5e248(iVar3,uVar14);
      }
      else {
        FUN_00cdb0b4(iVar3,uVar14);
      }
    }
    local_98 = uVar7;
    local_94 = iVar3;
    local_90 = uVar14;
    FUN_00c3f8d0(&local_a8,&local_98);
  }
  FUN_00cf91cc(*(undefined4 *)(param_2 + 0x1d0),&local_e0,*(undefined4 *)(param_2 + 0x20c),&local_a8
               ,param_4);
  FUN_00c48da8(&local_a8);
  uVar21 = uVar11 * 0x10;
  bVar23 = 0xffffffe < uVar11;
  bVar22 = uVar11 == 0xfffffff;
  uVar5 = 0;
  if (uVar11 < 0x10000000) {
    bVar23 = 0x7ffffff7 < uVar21;
    bVar22 = uVar21 == 0x7ffffff8;
  }
  if (!bVar23 || bVar22) {
    if (uVar21 == 0) {
      local_fc = 8;
      local_100 = 0;
    }
    else {
      local_fc = thunk_FUN_016d4a50(uVar21);
      local_100 = uVar11;
      if (local_fc == 0) {
        uVar5 = 8;
        goto LAB_00cf8a60;
      }
    }
    dVar26 = *(double *)(param_2 + 0x1a8);
    dVar27 = *(double *)(param_2 + 0x1b0);
    dVar29 = *(double *)(param_2 + 0x1b8);
    local_84 = 0;
    local_94 = 0;
    uVar14 = 0;
    local_98 = uVar8;
    local_90 = uVar1;
    local_8c = uVar2;
    local_88 = uVar8;
    local_80 = uVar1;
    local_7c = uVar2;
    local_78 = uVar11;
    while( true ) {
      uVar31 = FUN_00c38c8c(&local_98);
      puVar17 = (uint *)uVar31;
      if (puVar17 == (uint *)0x0) break;
      if (local_e0 == (uint *)0x0) {
LAB_00cf9078:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                     ,0x16,&DAT_01870b04);
      }
      uVar7 = *puVar17;
      uVar20 = puVar17[1];
      puVar17 = local_e0;
      iVar3 = local_dc;
      while( true ) {
        iVar12 = (uint)*(ushort *)((int)puVar17 + 0x8a) << 3;
        puVar18 = puVar17;
        uVar15 = 0xffffffff;
        do {
          uVar13 = uVar15;
          if (iVar12 == 0) {
            uVar15 = (uint)*(ushort *)((int)puVar17 + 0x8a);
            goto LAB_00cf8bf8;
          }
          uVar15 = *puVar18;
          uVar19 = puVar18[1];
          cVar9 = (uVar7 >= uVar15 && uVar7 != uVar15) - (uVar7 < uVar15);
          iVar12 = iVar12 + -8;
          if (uVar7 == uVar15) {
            cVar9 = (uVar20 >= uVar19 && uVar20 != uVar19) - (uVar20 < uVar19);
          }
          uVar15 = uVar13 + 1;
          puVar18 = puVar18 + 2;
        } while (cVar9 == '\x01');
        if (cVar9 == '\0') break;
LAB_00cf8bf8:
        if (iVar3 == 0) goto LAB_00cf9078;
        iVar3 = iVar3 + -1;
        puVar17 = (uint *)puVar17[uVar15 + 0x23];
      }
      dVar30 = (double)VectorUnsignedToFloat
                                 (*(undefined4 *)((ulonglong)uVar31 >> 0x20),
                                  (byte)(in_fpscr >> 0x16) & 3);
      fVar24 = (float)puVar17[uVar13 + 0x18];
      puVar17 = (uint *)(local_fc + uVar14 * 0x10);
      *puVar17 = uVar7;
      puVar17[1] = uVar20;
      *(double *)(puVar17 + 2) =
           (dVar27 + (dVar30 / 1000000.0) * dVar26) * (dVar29 * (double)fVar24 + 1.0);
      uVar14 = uVar14 + 1;
    }
    if (uVar14 == 0) {
      local_cc = 0;
      local_d4 = 0;
      if (local_100 != 0) {
        thunk_FUN_016d3fb4(local_fc);
      }
    }
    else {
      if (uVar14 != 1) {
        if (uVar14 < 0x15) {
          FUN_00b5d908(local_fc,uVar14);
        }
        else {
          FUN_00cdb1a8(local_fc,uVar14);
        }
      }
      local_94 = local_fc;
      local_98 = local_100;
      local_90 = uVar14;
      FUN_00c3e348(&local_d4,&local_98);
    }
    iVar3 = *(int *)(param_2 + 0x204);
    FUN_00cf9d50(&local_98,&local_d4,*(undefined4 *)(iVar3 + 0xbc));
    local_b0 = local_84;
    local_b8 = local_8c;
    local_c8 = local_98;
    iStack_c4 = local_94;
    uStack_c0 = local_90;
    local_9c = *(undefined4 *)(iVar3 + 0xbc);
    local_6c = &local_9c;
    local_70 = &local_b8;
    local_74 = &local_c8;
    local_84 = 0;
    local_80 = local_d4;
    local_7c = uStack_d0;
    local_78 = local_cc;
    if (local_d4 == 0) {
      local_78 = 0;
    }
    local_94 = 0;
    local_90 = local_d4;
    local_8c = uStack_d0;
    local_98 = (uint)(local_d4 != 0);
    local_b4 = local_88;
    local_88 = local_98;
    FUN_00c3ff64(&local_a8,&local_98);
    if (uVar21 == 0) {
      local_120 = 0;
      local_fc = 8;
    }
    else {
      local_fc = thunk_FUN_016d4a50(uVar21);
      local_120 = uVar11;
      if (local_fc == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,uVar21);
      }
    }
    puVar17 = local_a8;
    uVar21 = 0;
    uVar31 = *(undefined8 *)(param_2 + 0x1e8);
    dVar26 = *(double *)(param_2 + 0x1f0);
    uVar28 = *(undefined8 *)(param_2 + 0x1f8);
    local_84 = 0;
    local_94 = 0;
    local_108 = &DAT_01870b14;
    local_98 = uVar8;
    local_90 = uVar1;
    local_8c = uVar2;
    local_88 = uVar8;
    local_80 = uVar1;
    local_7c = uVar2;
    local_78 = uVar11;
    do {
      uVar32 = FUN_00c38c8c(&local_98);
      puVar18 = (uint *)uVar32;
      if (puVar18 == (uint *)0x0) {
        if (uVar21 == 0) {
          param_1[2] = 0;
          *param_1 = 0;
          if (local_120 != 0) {
            thunk_FUN_016d3fb4(local_fc);
          }
        }
        else {
          if (uVar21 != 1) {
            if (uVar21 < 0x15) {
              FUN_00b5d908(local_fc,uVar21);
            }
            else {
              FUN_00cdb3a8(local_fc,uVar21);
            }
          }
          local_94 = local_fc;
          local_98 = local_120;
          local_90 = uVar21;
          FUN_00c3e348(param_1,&local_98);
        }
        FUN_00c44ec8(&local_a8);
        FUN_00c48f0c(&local_b8);
        FUN_00c48338(&local_c8);
        FUN_00c48338(&local_d4);
        FUN_00c481d4(&local_e0);
        return;
      }
      if (puVar17 == (uint *)0x0) {
LAB_00cf90a0:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8("no entry found for keyUnretrievablepointerInvalidPercentEncodingInvalidArrayIndexNoSuchAnchoranchorInvalidAnchor"
                     ,0x16,local_108);
      }
      uVar11 = *puVar18;
      uVar1 = puVar18[1];
      uVar5 = *(undefined4 *)((ulonglong)uVar32 >> 0x20);
      puVar18 = puVar17;
      iVar3 = local_a4;
      while( true ) {
        uVar8 = 0xffffffff;
        iVar12 = (uint)*(ushort *)((int)puVar18 + 0x166) << 3;
        puVar16 = puVar18;
        do {
          if (iVar12 == 0) {
            uVar8 = (uint)*(ushort *)((int)puVar18 + 0x166);
            goto LAB_00cf8ed4;
          }
          uVar2 = puVar16[1];
          uVar14 = *puVar16;
          cVar9 = (uVar11 >= uVar14 && uVar11 != uVar14) - (uVar11 < uVar14);
          iVar12 = iVar12 + -8;
          if (uVar11 == uVar14) {
            cVar9 = (uVar1 >= uVar2 && uVar1 != uVar2) - (uVar1 < uVar2);
          }
          uVar8 = uVar8 + 1;
          puVar16 = puVar16 + 2;
        } while (cVar9 == '\x01');
        if (cVar9 == '\0') break;
LAB_00cf8ed4:
        if (iVar3 == 0) goto LAB_00cf90a0;
        iVar3 = iVar3 + -1;
        puVar18 = (uint *)puVar18[uVar8 + 0x5a];
      }
      if (local_e0 == (uint *)0x0) {
LAB_00cf9094:
        local_108 = &DAT_01870b24;
        goto LAB_00cf90a0;
      }
      puVar16 = local_e0;
      iVar3 = local_dc;
      while( true ) {
        iVar12 = (uint)*(ushort *)((int)puVar16 + 0x8a) << 3;
        puVar10 = puVar16;
        uVar2 = 0xffffffff;
        do {
          uVar14 = uVar2;
          if (iVar12 == 0) {
            uVar2 = (uint)*(ushort *)((int)puVar16 + 0x8a);
            goto LAB_00cf8f88;
          }
          uVar2 = puVar10[1];
          uVar7 = *puVar10;
          cVar9 = (uVar11 >= uVar7 && uVar11 != uVar7) - (uVar11 < uVar7);
          iVar12 = iVar12 + -8;
          if (uVar11 == uVar7) {
            cVar9 = (uVar1 >= uVar2 && uVar1 != uVar2) - (uVar1 < uVar2);
          }
          uVar2 = uVar14 + 1;
          puVar10 = puVar10 + 2;
        } while (cVar9 == '\x01');
        if (cVar9 == '\0') break;
LAB_00cf8f88:
        if (iVar3 == 0) goto LAB_00cf9094;
        iVar3 = iVar3 + -1;
        puVar16 = (uint *)puVar16[uVar2 + 0x23];
      }
      dVar27 = in_d0 / ((*(double *)(puVar18 + uVar8 * 6 + 0x16) +
                        *(double *)(puVar18 + uVar8 * 6 + 0x18)) *
                       (*(double *)(puVar18 + uVar8 * 6 + 0x1a) +
                       1.0 / (*(double *)(puVar18 + uVar8 * 6 + 0x16) +
                             *(double *)(puVar18 + uVar8 * 6 + 0x18)))) + dVar26;
      uVar25 = (undefined4)((ulonglong)dVar27 >> 0x20);
      FUN_016d5578(SUB84(dVar27,0),uVar25,0xeb1c432d);
      FUN_016d5bf8(SUB84(dVar27,0),uVar25,(int)uVar31);
      dVar30 = (double)VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
      dVar29 = (double)(float)puVar16[uVar14 + 0x18];
      FUN_016d5bf8(SUB84(dVar29,0),(int)((ulonglong)dVar29 >> 0x20),(int)uVar28);
      puVar18 = (uint *)(local_fc + uVar21 * 0x10);
      *puVar18 = uVar11;
      uVar21 = uVar21 + 1;
      puVar18[1] = uVar1;
      *(double *)(puVar18 + 2) = (dVar29 * dVar27) / (dVar30 / 1000000.0);
    } while( true );
  }
LAB_00cf8a60:
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar5,uVar21);
}


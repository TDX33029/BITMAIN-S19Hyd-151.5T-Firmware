// FUN_00ba9810 @ 00ba9810 size=1684 calls_out=17 calls_in=1
// strings: assertion failed: min <= maxmnamernameserialretryexpire | BUG: empty setupx-xss-protection

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00ba9b78 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00ba9810(float param_1,undefined4 param_2,int param_3,int *param_4,uint param_5)

{
  undefined1 uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint *puVar14;
  undefined *puVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  uint uVar19;
  int iVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  int iVar24;
  uint uVar25;
  undefined1 *puVar26;
  int iVar27;
  bool bVar28;
  bool bVar29;
  uint in_fpscr;
  undefined4 uVar30;
  double dVar31;
  double dVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  double dVar36;
  double dVar37;
  double dVar38;
  undefined8 uVar39;
  uint local_c4;
  uint *local_b4;
  uint local_98;
  int iStack_94;
  uint uStack_90;
  uint local_88;
  int local_84;
  uint local_78;
  int *local_74;
  int local_70;
  int iStack_6c;
  uint uStack_68;
  uint uStack_64;
  uint local_60;
  int *local_5c;
  uint local_58;
  int local_54;
  uint local_50;
  uint local_4c;
  int local_48;
  int local_44;
  uint local_40;
  
  iVar20 = *param_4;
  uVar17 = param_4[2];
  if (iVar20 == 0) {
    uVar17 = 0;
  }
  uVar3 = (uint)(iVar20 != 0);
  uVar18 = uVar17 * 0x10;
  bVar29 = 0xffffffe < uVar17;
  bVar28 = uVar17 == 0xfffffff;
  if (uVar17 < 0x10000000) {
    bVar29 = 0x7ffffffb < uVar18;
    bVar28 = uVar18 == 0x7ffffffc;
  }
  if (bVar29 && !bVar28) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar4 = param_4[1];
  uVar19 = 0;
  if (uVar18 == 0) {
    iVar5 = 4;
    local_c4 = 0;
  }
  else {
    iVar5 = thunk_FUN_016d4a50(uVar18);
    local_c4 = uVar17;
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar18);
    }
  }
  iVar6 = *(int *)(param_3 + 0x204);
  iVar24 = *(int *)(param_3 + 0x56c);
  uVar18 = *(uint *)(param_3 + 0x570);
  uVar23 = *(uint *)(param_3 + 0x590);
  local_4c = 0;
  local_5c = (int *)0x0;
  local_60 = uVar3;
  local_58 = iVar20;
  local_54 = iVar4;
  local_50 = uVar3;
  local_48 = iVar20;
  local_44 = iVar4;
  local_40 = uVar17;
  while( true ) {
    uVar39 = FUN_00c3901c(&local_60);
    iVar27 = (int)((ulonglong)uVar39 >> 0x20);
    if ((undefined4 *)uVar39 == (undefined4 *)0x0) break;
    uVar21 = *(undefined4 *)uVar39;
    FUN_009d42ac(&local_78,*(undefined4 *)(iVar27 + 0x24),*(undefined4 *)(iVar27 + 0x28));
    iVar27 = local_70;
    piVar2 = local_74;
    if (local_70 == 0) {
      iVar27 = 0;
      local_b4 = (uint *)&DAT_00000004;
    }
    else {
      iVar11 = local_70 << 2;
      local_b4 = (uint *)thunk_FUN_016d4a50(iVar11);
      if (local_b4 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(4,iVar11);
      }
      iVar11 = iVar27;
      piVar13 = piVar2;
      puVar14 = local_b4;
      do {
        if ((param_5 & 1) == 0) {
          if (uVar18 <= uVar23) {
            puVar15 = &DAT_01870d6c;
            goto LAB_00ba9e68;
          }
          iVar22 = *(int *)(iVar24 + uVar23 * 4);
        }
        else {
          if (uVar18 <= uVar23) {
            puVar15 = &DAT_01870d7c;
LAB_00ba9e68:
                    /* WARNING: Subroutine does not return */
            FUN_00faa4a4(uVar23,uVar18,puVar15);
          }
          iVar22 = *(int *)(iVar24 + uVar23 * 4) * -5;
        }
        uVar25 = *(uint *)(iVar6 + 0x48);
        uVar8 = *(uint *)(iVar6 + 0x44);
        if (uVar25 < uVar8) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa464("assertion failed: min <= maxmnamernameserialretryexpire",0x1c,&DAT_01883e60)
          ;
        }
        uVar16 = iVar22 + *piVar13;
        if (uVar16 < uVar25) {
          uVar25 = uVar16;
        }
        if (uVar16 < uVar8) {
          uVar25 = uVar8;
        }
        iVar11 = iVar11 + -1;
        *puVar14 = uVar25;
        piVar13 = piVar13 + 1;
        puVar14 = puVar14 + 1;
      } while (iVar11 != 0);
    }
    if (local_78 != 0) {
      thunk_FUN_016d3fb4(piVar2);
    }
    puVar7 = (undefined4 *)(iVar5 + uVar19 * 0x10);
    *puVar7 = uVar21;
    uVar19 = uVar19 + 1;
    puVar7[1] = iVar27;
    puVar7[2] = local_b4;
    puVar7[3] = iVar27;
  }
  if (uVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01870d5c);
  }
  uVar18 = 0;
  iVar24 = 0;
  do {
    iVar27 = iVar5 + uVar18 * 0x10;
    iVar11 = *(int *)(iVar27 + 0xc);
    if (iVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0034ae54,0x2d,&DAT_0186ac88);
    }
    uVar23 = 0;
    iVar22 = 0;
    puVar14 = *(uint **)(iVar27 + 8);
    iVar27 = iVar11;
    do {
      bVar28 = CARRY4(uVar23,*puVar14);
      uVar23 = uVar23 + *puVar14;
      iVar22 = iVar22 + (uint)bVar28;
      iVar27 = iVar27 + -1;
      puVar14 = puVar14 + 1;
    } while (iVar27 != 0);
    iVar27 = FUN_01846088(uVar23,iVar22,iVar11,0);
    uVar18 = uVar18 + 1;
    iVar24 = iVar24 + iVar27;
  } while (uVar18 != uVar19);
  uVar21 = FUN_018462e8(iVar24,uVar19);
  dVar31 = *(double *)(param_3 + 0x578);
  if (*(int *)(param_3 + 0x558) == 0) {
    param_1 = *(float *)(param_3 + 0x1d0);
    iVar24 = *(int *)(param_3 + 0x1d8);
    iVar27 = *(int *)(iVar24 + 0xbc);
  }
  else {
    iVar24 = *(int *)(param_3 + 0x1d8);
    iVar27 = *(int *)(iVar24 + 0xbc);
  }
  if (iVar27 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  dVar32 = (double)VectorUnsignedToFloat(uVar19,(byte)(in_fpscr >> 0x16) & 3);
  dVar33 = (double)VectorUnsignedToFloat(uVar21,(byte)(in_fpscr >> 0x16) & 3);
  dVar36 = *(double *)(param_3 + 0x1a8);
  dVar37 = *(double *)(param_3 + 0x1b0);
  dVar35 = *(double *)(param_3 + 0x1b8) * (double)param_1 + 1.0;
  dVar38 = (double)VectorUnsignedToFloat
                             (*(undefined4 *)(iVar24 + 0xb8),(byte)(in_fpscr >> 0x16) & 3);
  uVar39 = *(undefined8 *)(param_3 + 600);
  dVar34 = dVar35;
  if (((ulonglong)dVar35 & 0x7ff0000000000000) == 0) {
    dVar34 = 1.0;
  }
  if (SUB84(dVar35,0) != 0 || ((ulonglong)dVar35 & 0xfffff00000000) != 0) {
    dVar35 = dVar34;
  }
  uVar21 = FUN_018462e8();
  dVar34 = (double)VectorUnsignedToFloat(uVar21,(byte)(in_fpscr >> 0x16) & 3);
  dVar34 = SQRT(((dVar31 / dVar32) * (1.0 / dVar38)) /
                ((dVar37 + (dVar33 / 1000000.0) * dVar36) * dVar35)) * dVar34;
  uVar21 = (undefined4)((ulonglong)dVar34 >> 0x20);
  uVar30 = SUB84(dVar34,0);
  FUN_016d5578(uVar30,uVar21,(int)uVar39);
  FUN_016d5622(uVar30,uVar21,(int)*(undefined8 *)(param_3 + 0x260));
  iVar24 = uVar19 * 0x38;
  uVar21 = 0;
  if (0x2492492 < uVar19) {
LAB_00ba9ba0:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar21,iVar24);
  }
  if (iVar24 == 0) {
    local_84 = 8;
    uVar18 = 0;
  }
  else {
    local_84 = thunk_FUN_016d4a50(iVar24);
    uVar18 = uVar19;
    if (local_84 == 0) {
      uVar21 = 8;
      goto LAB_00ba9ba0;
    }
  }
  puVar26 = (undefined1 *)(local_84 + 0x34);
  puVar14 = (uint *)(iVar5 + 0xc);
  uVar25 = 0;
  uVar23 = 0x7ff00000;
  local_88 = uVar18;
  while( true ) {
    uVar8 = *puVar14;
    uVar21 = 0;
    bVar29 = 0x3ffffffe < uVar8;
    bVar28 = uVar8 == 0x3fffffff;
    if (uVar8 < 0x40000000) {
      uVar23 = uVar8 << 2;
      bVar29 = 0x7ffffffb < uVar23;
      bVar28 = uVar23 == 0x7ffffffc;
    }
    if (bVar29 && !bVar28) break;
    uVar12 = puVar14[-1];
    uVar16 = puVar14[-3];
    if (uVar23 == 0) {
      uVar18 = 4;
      local_60 = 0;
    }
    else {
      uVar18 = thunk_FUN_016d4a50(uVar23,uVar12);
      if (uVar18 == 0) {
        uVar21 = 4;
        uVar18 = uVar23;
        break;
      }
      local_60 = uVar8;
    }
    local_5c = (int *)uVar18;
    FUN_016dd1aa(uVar18,uVar12,uVar23);
    local_58 = uVar8;
    FUN_00d635b0(uVar30,&local_78,iVar6 + 0x18,&local_60);
    local_4c = 0;
    local_5c = (int *)0x0;
    local_60 = uVar3;
    local_58 = iVar20;
    local_54 = iVar4;
    local_50 = uVar3;
    local_48 = iVar20;
    local_44 = iVar4;
    local_40 = uVar17;
    uVar39 = FUN_00c3901c(&local_60);
    puVar7 = (undefined4 *)((ulonglong)uVar39 >> 0x20);
    if ((int)uVar39 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("BUG: empty setupx-xss-protection",0x10,&DAT_01874068);
    }
    puVar14 = puVar14 + 4;
    uVar21 = *puVar7;
    uVar9 = puVar7[1];
    uVar10 = puVar7[2];
    iVar24 = puVar7[4];
    uVar1 = *(undefined1 *)(puVar7 + 5);
    local_60 = local_78;
    local_5c = local_74;
    local_58 = local_70;
    local_54 = iStack_6c;
    local_50 = uStack_68;
    local_4c = uStack_64;
    *(uint *)(puVar26 + -0x34) = local_78;
    *(int **)(puVar26 + -0x30) = local_74;
    *(int *)(puVar26 + -0x2c) = local_70;
    *(int *)(puVar26 + -0x28) = iStack_6c;
    *(uint *)(puVar26 + -0x24) = uStack_68;
    *(uint *)(puVar26 + -0x20) = uStack_64;
    *puVar26 = uVar1;
    *(int *)(puVar26 + -4) = iVar24 + 1;
    uVar25 = uVar25 + 1;
    *(undefined4 *)(puVar26 + -0x14) = uVar21;
    *(undefined4 *)(puVar26 + -0x10) = uVar9;
    *(undefined4 *)(puVar26 + -0xc) = uVar10;
    *(uint *)(puVar26 + -0x1c) = uVar16;
    puVar26 = puVar26 + 0x38;
    uVar23 = uStack_64;
    if (uVar19 == uVar25) {
      local_98 = local_88;
      iStack_94 = local_84;
      uStack_90 = uVar25;
      FUN_00c6fa14(param_2,&local_98);
      for (uVar17 = 0; uVar19 != uVar17; uVar17 = uVar17 + 1) {
        iVar20 = iVar5 + uVar17 * 0x10;
        if (*(int *)(iVar20 + 4) != 0) {
          thunk_FUN_016d3fb4(*(undefined4 *)(iVar20 + 8));
        }
      }
      if (local_c4 != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600af4(uVar21,uVar18);
}


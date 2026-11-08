// FUN_00d528e0 @ 00d528e0 size=7660 calls_out=38 calls_in=1
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00d54464 */
/* WARNING: Restarted to delay deadcode elimination for space: register */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00d528e0(int param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5)

{
  byte bVar1;
  longlong lVar2;
  double dVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  int iVar10;
  uint uVar11;
  undefined4 uVar12;
  uint *puVar13;
  uint *puVar14;
  int *piVar15;
  uint uVar16;
  undefined8 *puVar17;
  undefined4 *puVar18;
  undefined *puVar19;
  uint uVar20;
  uint *puVar21;
  undefined4 uVar22;
  int *piVar23;
  uint uVar24;
  undefined8 *puVar25;
  int iVar26;
  uint uVar27;
  uint uVar28;
  uint *puVar29;
  double *pdVar30;
  double *pdVar31;
  int extraout_r3;
  uint uVar32;
  uint uVar33;
  uint uVar34;
  uint uVar35;
  uint *puVar36;
  uint uVar37;
  int iVar38;
  int iVar39;
  uint uVar40;
  uint uVar41;
  int *piVar42;
  double *pdVar43;
  uint uVar44;
  uint uVar45;
  uint uVar46;
  uint uVar47;
  uint uVar48;
  int iVar49;
  uint uVar50;
  uint uVar51;
  double *pdVar52;
  int iVar53;
  undefined4 uVar54;
  uint uVar55;
  uint uVar56;
  undefined *puVar57;
  uint uVar58;
  uint uVar59;
  int *extraout_r12;
  uint uVar60;
  uint uVar61;
  uint uVar62;
  uint uVar63;
  bool bVar64;
  bool bVar65;
  uint in_fpscr;
  float fVar66;
  double in_d0;
  int extraout_s1;
  double dVar67;
  double dVar68;
  double dVar69;
  double dVar70;
  double dVar71;
  double dVar72;
  longlong lVar73;
  undefined8 uVar74;
  int *local_4dc;
  uint *local_414;
  uint *local_408;
  uint local_3dc;
  int iStack_3d4;
  uint *local_3cc;
  undefined1 auStack_3c8 [160];
  undefined1 auStack_328 [172];
  undefined4 local_27c;
  undefined4 local_278;
  undefined4 local_274;
  undefined1 auStack_270 [16];
  undefined4 local_260;
  undefined4 local_25c;
  undefined4 local_258;
  uint *local_24c;
  uint local_248;
  int local_244;
  undefined4 local_240;
  undefined4 local_234;
  undefined4 local_230;
  double local_210;
  uint *local_204;
  uint local_200;
  int local_1e8;
  int local_1d8;
  undefined8 local_1d0;
  uint local_1c8;
  uint local_1c4;
  uint local_1c0;
  uint local_1bc;
  int *local_1b8;
  uint local_1b4;
  uint uStack_1b0;
  uint uStack_1ac;
  uint uStack_1a8;
  undefined1 auStack_100 [48];
  int local_d0 [18];
  int *local_88;
  uint *local_84;
  int *local_80;
  undefined4 uStack_7c;
  int local_78;
  int local_74;
  int local_70;
  
  if (*(int *)(param_1 + 0x570) == 0) {
    FUN_00c49158(param_5,DAT_018dd947);
    return;
  }
  iVar4 = *(int *)(param_2 + 0x80);
  if (iVar4 == 0) {
LAB_00d55634:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003572cb,0x13,&DAT_01877948);
  }
  iVar49 = *(int *)(param_2 + 0x84);
  uVar5 = *(uint *)(*(int *)(param_1 + 0x56c) + 0x44);
  iVar6 = iVar4;
  iVar7 = iVar49;
LAB_00d52974:
  uVar20 = (uint)*(ushort *)(iVar6 + 0x712);
  uVar44 = 0xffffffff;
  iVar38 = uVar20 << 2;
  puVar21 = (uint *)(iVar6 + 0x6e4);
  do {
    if (iVar38 == 0) goto LAB_00d529cc;
    iVar38 = iVar38 + -4;
    uVar44 = uVar44 + 1;
    bVar64 = uVar5 < *puVar21;
    bVar65 = !bVar64 && uVar5 != *puVar21;
    puVar21 = puVar21 + 1;
  } while ((char)(bVar65 - bVar64) == '\x01');
  uVar20 = uVar44;
  if (bVar65 != bVar64) {
LAB_00d529cc:
    if (iVar7 != 0) goto code_r0x00d529d8;
    goto LAB_00d55634;
  }
  FUN_00d55e18(auStack_3c8,iVar6 + uVar44 * 0xa0);
  FUN_00d56080(auStack_328,param_1,param_2,auStack_3c8);
  iVar6 = param_5[1];
  iStack_3d4 = 0;
  local_278 = 8;
  uVar5 = *(uint *)(param_2 + 0x74);
  iVar53 = *param_5;
  uVar20 = *(uint *)(param_2 + 0x70);
  local_274 = 0;
  local_27c = 0;
  iVar7 = thunk_FUN_016de0ee();
  puVar21 = (uint *)(iVar7 + 0x2c0);
  fVar66 = *(float *)(param_1 + 0x1d0);
  iVar26 = *(int *)(param_1 + 0x204);
  dVar69 = *(double *)(param_1 + 0x1b8);
  iVar38 = *(int *)(param_1 + 0x5b8);
  iVar8 = *(int *)(param_1 + 0x5bc);
  puVar9 = *(undefined1 **)(param_1 + 0x5c0);
  iVar10 = *(int *)(param_1 + 0x1d8);
  dVar67 = *(double *)(param_1 + 0x1a8);
  dVar68 = *(double *)(param_1 + 0x1b0);
  puVar57 = &DAT_0186ac08;
  while( true ) {
    uVar44 = (uint)*(ushort *)(iVar4 + 0x712);
    uVar32 = 0xffffffff;
    iVar39 = uVar44 << 2;
    puVar36 = (uint *)(iVar4 + 0x6e4);
    do {
      if (iVar39 == 0) goto LAB_00d52bd8;
      iVar39 = iVar39 + -4;
      uVar32 = uVar32 + 1;
      bVar64 = *(uint *)(extraout_r3 + 0x44) < *puVar36;
      bVar65 = !bVar64 && *(uint *)(extraout_r3 + 0x44) != *puVar36;
      puVar36 = puVar36 + 1;
    } while ((char)(bVar65 - bVar64) == '\x01');
    uVar44 = uVar32;
    if (bVar65 == bVar64) break;
LAB_00d52bd8:
    if (iVar49 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(&DAT_003572cb,0x13,&DAT_01877958);
    }
    iVar49 = iVar49 + -1;
    iVar4 = *(int *)(iVar4 + uVar44 * 4 + 0x718);
  }
  FUN_00d55e18(auStack_270,iVar4 + uVar32 * 0xa0);
  uVar44 = local_248;
  dVar3 = local_210;
  local_3cc = local_204;
  uVar32 = local_200;
  if (iVar53 != 0) {
    while( true ) {
      uVar27 = (uint)*(ushort *)(iVar53 + 0x1ea);
      iVar4 = uVar27 << 2;
      iVar49 = 0x6f;
      do {
        iVar39 = iVar49;
        if (iVar4 == 0) goto LAB_00d52c6c;
        uVar33 = *(uint *)(iVar53 + iVar39 * 4);
        iVar4 = iVar4 + -4;
        bVar64 = *(uint *)(extraout_r3 + 0x44) < uVar33;
        bVar65 = !bVar64 && *(uint *)(extraout_r3 + 0x44) != uVar33;
        iVar49 = iVar39 + 1;
      } while ((char)(bVar65 - bVar64) == '\x01');
      if (bVar65 == bVar64) break;
      uVar27 = iVar39 - 0x6f;
LAB_00d52c6c:
      if (iVar6 == 0) goto joined_r0x00d52cbc;
      iVar6 = iVar6 + -1;
      iVar53 = *(int *)(iVar53 + uVar27 * 4 + 0x1f0);
    }
    iVar53 = iVar53 + (iVar39 + -0x6f) * 0x28;
    FUN_0184589c(*(undefined4 *)(iVar53 + 0x18),*(undefined4 *)(iVar53 + 0x1c));
    VectorUnsignedToFloat(*(undefined4 *)(iVar53 + 0x20),(byte)(in_fpscr >> 0x16) & 3);
    uVar44 = local_248;
    dVar3 = local_210;
    local_3cc = local_204;
    uVar32 = local_200;
  }
joined_r0x00d52cbc:
  if (uVar32 == 0) {
    uVar22 = 0x2d;
    puVar19 = &DAT_0034ae54;
LAB_00d553f8:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(puVar19,uVar22,puVar57);
  }
  lVar2 = 0;
  uVar27 = 0;
  local_204 = local_3cc;
  local_200 = uVar32;
  do {
    uVar33 = local_3cc[uVar27 * 6 + 5];
    if (uVar33 == 0) {
      uVar22 = 0x39;
      puVar19 = &DAT_0034ae25;
      puVar57 = &DAT_0186aba8;
      goto LAB_00d553f8;
    }
    iVar4 = uVar33 << 2;
    iVar6 = 0;
    puVar36 = (uint *)local_3cc[uVar27 * 6 + 4];
    uVar11 = 0;
    do {
      if (local_3cc[uVar27 * 6 + 2] <= *puVar36) {
        uVar22 = 0x13;
        puVar57 = &DAT_0034ae41;
        puVar19 = &DAT_0186abb8;
        goto LAB_00d55398;
      }
      uVar45 = *(uint *)(local_3cc[uVar27 * 6 + 1] + *puVar36 * 4);
      puVar36 = puVar36 + 1;
      bVar65 = CARRY4(uVar11,uVar45);
      uVar11 = uVar11 + uVar45;
      iVar6 = iVar6 + (uint)bVar65;
      iVar4 = iVar4 + -4;
    } while (iVar4 != 0);
    lVar73 = FUN_01846088(uVar11,iVar6,uVar33,0);
    lVar2 = lVar73 + lVar2;
    uVar27 = uVar27 + 1;
  } while (uVar27 != uVar32);
  iVar4 = *(int *)(iVar10 + 0xbc);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01879bd0);
  }
  uVar12 = FUN_01846088((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar32,0);
  uVar54 = *(undefined4 *)(iVar10 + 0xb8);
  puVar36 = (uint *)FUN_018462e8(uVar54,iVar4);
  iVar4 = local_244;
  DataMemoryBarrier(0xb);
  iVar6 = (int)((ulonglong)in_d0 >> 0x20);
  if (DAT_018d7d14 == 0) {
    uVar22 = 0x26;
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 != 0) {
      puVar57 = &DAT_0034cdde;
      puVar19 = &DAT_0186d400;
LAB_00d55398:
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8(puVar57,uVar22,puVar19);
    }
    local_78 = local_244;
    puVar13 = (uint *)thunk_FUN_016d4a50(0xc,0x26);
    if (puVar13 == (uint *)0x0) {
LAB_00d55514:
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0xc);
    }
    local_88 = &local_78;
    local_84 = &DAT_00f5c97c;
    FUN_00600d2c(&local_1d0,&DAT_00590e71,&local_88);
    *puVar13 = (uint)(uint *)local_1d0;
    puVar13[1] = (uint)local_1d0._4_4_;
    puVar13[2] = local_1c8;
    local_80 = (int *)0x1;
    local_88 = (int *)0x1;
    local_84 = puVar13;
    puVar14 = (uint *)thunk_FUN_016d4a50(8);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,8);
    }
    uVar32 = puVar13[2];
    *puVar14 = puVar13[1];
    puVar14[1] = uVar32;
    piVar15 = (int *)FUN_00a63b14(DAT_018d7d20,puVar14,1);
    do {
      bVar65 = (bool)hasExclusiveAccess(piVar15 + 2);
    } while (!bVar65);
    piVar15[2] = local_1d8;
    piVar15[3] = 0;
    DataMemoryBarrier(0xb);
    do {
      iVar49 = *piVar15;
      bVar65 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar65);
    *piVar15 = iVar49 + -1;
    if (iVar49 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
    thunk_FUN_016d3fb4(puVar14);
    if (*puVar13 != 0) {
      thunk_FUN_016d3fb4(puVar13[1]);
    }
    thunk_FUN_016d3fb4(puVar13);
    FUN_00c6f3f8(auStack_270,iVar26);
    DataMemoryBarrier(0xb);
    if (DAT_018d8068 != 0) {
      uVar22 = 0x26;
      puVar57 = &DAT_0034cdde;
      puVar19 = &DAT_0186d400;
      goto LAB_00d55398;
    }
    local_78 = iVar4;
    puVar13 = (uint *)thunk_FUN_016d4a50(0xc);
    if (puVar13 == (uint *)0x0) goto LAB_00d55514;
    local_88 = &local_78;
    local_84 = &DAT_00f5c97c;
    FUN_00600d2c(&local_1d0,&DAT_00590e71,&local_88);
    local_80 = (int *)0x1;
    local_88 = (int *)0x1;
    *puVar13 = (uint)(uint *)local_1d0;
    puVar13[1] = (uint)local_1d0._4_4_;
    puVar13[2] = local_1c8;
    local_84 = puVar13;
    puVar14 = (uint *)thunk_FUN_016d4a50(8);
    if (puVar14 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,8);
    }
    uVar32 = puVar13[2];
    *puVar14 = puVar13[1];
    puVar14[1] = uVar32;
    piVar15 = (int *)FUN_00a630d0(DAT_018d7d1c,puVar14,1);
    do {
      bVar65 = (bool)hasExclusiveAccess(piVar15 + 2);
    } while (!bVar65);
    piVar15[2] = SUB84(in_d0,0);
    piVar15[3] = iVar6;
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar15;
      bVar65 = (bool)hasExclusiveAccess(piVar15);
    } while (!bVar65);
    *piVar15 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0078fa50();
    }
    thunk_FUN_016d3fb4(puVar14);
    if (*puVar13 != 0) {
      thunk_FUN_016d3fb4(puVar13[1]);
    }
    thunk_FUN_016d3fb4(puVar13);
    local_3cc = puVar36;
  }
  dVar70 = (double)VectorUnsignedToFloat(puVar36,(byte)(in_fpscr >> 0x16) & 3);
  DataMemoryBarrier(0xb);
  dVar71 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  dVar72 = (double)VectorUnsignedToFloat(uVar54,(byte)(in_fpscr >> 0x16) & 3);
  if (DAT_018d8068 == 0) {
    uVar22 = SUB84((dVar3 / dVar70) * (dVar3 / dVar70) * dVar72 *
                   (dVar68 + (dVar71 / 1000000.0) * dVar67) * (dVar69 * (double)fVar66 + 1.0),0);
    in_d0 = (double)CONCAT44(iVar6,uVar22);
    FUN_009b16c0(uVar22,local_244,&DAT_0034990c,10);
  }
  if (puVar9 == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003575eb,0x30,&DAT_01877bd0);
  }
  iVar4 = *(int *)(local_1e8 + 0xc);
  iVar6 = *(int *)(local_1e8 + 0x10);
  if (*(char *)(iVar7 + 0x2d0) == '\0') {
    FUN_015f62e4(&local_88);
    *(uint *)(iVar7 + 0x2c8) = (uint)local_80;
    *(undefined4 *)(iVar7 + 0x2cc) = uStack_7c;
    *puVar21 = (uint)local_88;
    *(uint **)(iVar7 + 0x2c4) = local_84;
    *(undefined1 *)(iVar7 + 0x2d0) = 1;
  }
  local_1c0 = *puVar21;
  local_1bc = *(uint *)(iVar7 + 0x2c4);
  local_1b8 = *(int **)(iVar7 + 0x2c8);
  local_1b4 = *(uint *)(iVar7 + 0x2cc);
  *puVar21 = local_1c0 + 1;
  *(uint *)(iVar7 + 0x2c4) = local_1bc + (0xfffffffe < local_1c0);
  local_1c8 = 0;
  local_1c4 = 0;
  iVar7 = 0;
  local_1d0 = 2.79937397307392e-317;
  if (iVar6 == 0) {
    local_3dc = 0;
    local_414 = &DAT_005674cc;
    goto LAB_00d53628;
  }
LAB_00d53284:
  piVar15 = (int *)(iVar4 + iVar7 * 0x30);
  if ((*piVar15 == 2) && (piVar15[1] != 0)) {
    fVar66 = (float)piVar15[2];
    uVar27 = local_1b4 ^ 0x646f7261;
    uVar32 = (uint)local_1b8 ^ 0x6e646f6d;
    uVar61 = uVar32 + (local_1c0 ^ 0x70736575);
    uVar50 = uVar27 + (local_1bc ^ 0x736f6d65) + (uint)CARRY4(uVar32,local_1c0 ^ 0x70736575);
    uVar55 = (uVar27 << 0xd | uVar32 >> 0x13) ^ uVar50;
    uVar46 = (uVar32 << 0xd | uVar27 >> 0x13) ^ uVar61;
    local_3cc = (uint *)piVar15[3];
    uVar32 = (uint)local_1b8 ^ (uint)local_3cc ^ 0x79746573;
    uVar33 = uVar32 + (local_1c0 ^ 0x6e657261);
    uVar34 = (local_1b4 ^ 0x70656462) + (local_1bc ^ 0x6c796765) +
             (uint)CARRY4(uVar32,local_1c0 ^ 0x6e657261);
    uVar11 = (uVar32 << 0x10 | (local_1b4 ^ 0x70656462) >> 0x10) ^ uVar33;
    uVar45 = uVar34 + uVar55 + (uint)CARRY4(uVar33,uVar46);
    uVar34 = ((local_1b4 ^ 0x74656462) << 0x10 | uVar32 >> 0x10) ^ uVar34;
    uVar47 = uVar33 + uVar46 ^ (uVar46 << 0x11 | uVar55 >> 0xf);
    uVar27 = uVar34 + uVar61 + (uint)CARRY4(uVar11,uVar50);
    uVar32 = uVar11 + uVar50 ^ (uint)local_3cc;
    uVar61 = uVar45 ^ (uVar55 << 0x11 | uVar46 >> 0xf);
    uVar62 = uVar32 + uVar47;
    uVar55 = (uVar27 ^ 0x4000000) + uVar61 + (uint)CARRY4(uVar32,uVar47);
    uVar32 = uVar55 ^ (uVar61 << 0xd | uVar47 >> 0x13);
    uVar50 = (uVar11 << 0x15 | uVar34 >> 0xb) ^ uVar11 + uVar50;
    uVar45 = uVar45 ^ 0xff;
    uVar47 = uVar62 ^ (uVar47 << 0xd | uVar61 >> 0x13);
    uVar27 = (uVar34 << 0x15 | uVar11 >> 0xb) ^ uVar27;
    uVar11 = uVar50 + uVar45;
    uVar33 = uVar27 + uVar33 + uVar46 + (uint)CARRY4(uVar50,uVar45);
    uVar61 = uVar32 + uVar33 + (uint)CARRY4(uVar47,uVar11);
    uVar34 = uVar61 ^ (uVar32 << 0x11 | uVar47 >> 0xf);
    uVar46 = uVar47 + uVar11 ^ (uVar47 << 0x11 | uVar32 >> 0xf);
    uVar32 = (uVar50 << 0x10 | uVar27 >> 0x10) ^ uVar11;
    uVar33 = (uVar27 << 0x10 | uVar50 >> 0x10) ^ uVar33;
    uVar45 = uVar32 + uVar55;
    uVar50 = uVar33 + uVar62 + (uint)CARRY4(uVar32,uVar55);
    uVar62 = uVar34 + uVar50 + (uint)CARRY4(uVar46,uVar45);
    uVar27 = (uVar34 << 0xd | uVar46 >> 0x13) ^ uVar62;
    uVar55 = (uVar46 << 0xd | uVar34 >> 0x13) ^ uVar46 + uVar45;
    uVar50 = (uVar33 << 0x15 | uVar32 >> 0xb) ^ uVar50;
    uVar32 = (uVar32 << 0x15 | uVar33 >> 0xb) ^ uVar45;
    uVar33 = uVar32 + uVar61;
    uVar34 = uVar50 + uVar47 + uVar11 + (uint)CARRY4(uVar32,uVar61);
    uVar61 = uVar27 + uVar34 + (uint)CARRY4(uVar55,uVar33);
    uVar34 = (uVar50 << 0x10 | uVar32 >> 0x10) ^ uVar34;
    uVar32 = (uVar32 << 0x10 | uVar50 >> 0x10) ^ uVar33;
    uVar11 = uVar32 + uVar62;
    uVar50 = (uVar27 << 0x11 | uVar55 >> 0xf) ^ uVar61;
    uVar45 = uVar34 + uVar46 + uVar45 + (uint)CARRY4(uVar32,uVar62);
    uVar47 = (uVar34 << 0x15 | uVar32 >> 0xb) ^ uVar45;
    uVar34 = (uVar32 << 0x15 | uVar34 >> 0xb) ^ uVar11;
    uVar46 = uVar34 + uVar61;
    uVar32 = (uVar55 << 0x11 | uVar27 >> 0xf) ^ uVar55 + uVar33;
    uVar33 = uVar47 + uVar55 + uVar33 + (uint)CARRY4(uVar34,uVar61);
    uVar27 = (uVar32 << 0xd | uVar50 >> 0x13) ^ uVar32 + uVar11;
    uVar32 = (uVar50 << 0xd | uVar32 >> 0x13) ^ uVar50 + uVar45 + (uint)CARRY4(uVar32,uVar11);
    if (local_1c8 == 0) {
      FUN_00c4fe5c(&local_1d0,&local_1c0);
      piVar15 = extraout_r12;
    }
    bVar65 = false;
    iVar49 = 0;
    uVar27 = ((uVar47 >> 0x10 ^ uVar46) << 0x15 |
             ((uVar47 << 0x10 | uVar34 >> 0x10) ^ uVar33) >> 0xb) ^ (uVar27 << 0x11 | uVar32 >> 0xf)
             ^ uVar32 + uVar33 + (uint)CARRY4(uVar27,uVar46) ^ uVar27 + uVar46;
    uVar32 = uVar27;
    do {
      uVar32 = (uint)local_1d0._4_4_ & uVar32;
      uVar11 = *(uint *)((int)(uint *)local_1d0 + uVar32);
      uVar33 = uVar11 ^ (uVar27 >> 0x19) * 0x1010101;
      uVar33 = ~uVar33 & 0x80808080 & uVar33 + 0xfefefeff;
      while (uVar33 != 0) {
        uVar45 = uVar33 >> 8;
        uVar34 = uVar33 >> 0x10;
        uVar50 = uVar33 >> 0x18;
        uVar46 = uVar33 << 0x18;
        uVar33 = uVar33 - 1 & uVar33;
        piVar23 = (int *)(uVar32 + ((uint)LZCOUNT(uVar46 | (uVar45 & 0xff) << 0x10 |
                                                  (uVar34 & 0xff) << 8 | uVar50) >> 3) &
                         (uint)local_1d0._4_4_);
        if (local_3cc == (uint *)((uint *)local_1d0)[(int)piVar23 * -4 + -4]) {
          piVar15 = piVar23;
          goto LAB_00d5325c;
        }
      }
      uVar33 = uVar11 & 0x80808080;
      if (bVar65) {
LAB_00d53234:
        if ((uVar33 & uVar11 << 1) != 0) goto LAB_00d53558;
        bVar65 = true;
      }
      else {
        if (uVar33 != 0) {
          piVar15 = (int *)(uVar32 + ((uint)LZCOUNT((uVar11 & 0x80) << 0x18 |
                                                    (uVar33 >> 8 & 0xff) << 0x10 |
                                                    (uVar33 >> 0x10 & 0xff) << 8 | uVar33 >> 0x18)
                                     >> 3) & (uint)local_1d0._4_4_);
          goto LAB_00d53234;
        }
        bVar65 = false;
      }
      iVar49 = iVar49 + 4;
      uVar32 = iVar49 + uVar32;
    } while( true );
  }
  goto LAB_00d53278;
code_r0x00d529d8:
  iVar7 = iVar7 + -1;
  iVar6 = *(int *)(iVar6 + uVar20 * 4 + 0x718);
  goto LAB_00d52974;
LAB_00d53558:
  uVar32 = (uint)*(char *)((int)(uint *)local_1d0 + (int)piVar15);
  if (-1 < (int)uVar32) {
    uVar32 = *(uint *)local_1d0 & 0x80808080;
    uVar33 = LZCOUNT((*(uint *)local_1d0 & 0x80) << 0x18 | (uVar32 >> 8 & 0xff) << 0x10 |
                     (uVar32 >> 0x10 & 0xff) << 8 | uVar32 >> 0x18);
    uVar32 = (uint)*(byte *)((int)(uint *)local_1d0 + (uVar33 >> 3));
    piVar15 = (int *)(uVar33 >> 3);
  }
  bVar1 = (byte)(uVar27 >> 0x19);
  *(byte *)((int)(uint *)local_1d0 + (int)piVar15) = bVar1;
  *(byte *)((int)(uint *)local_1d0 + ((uint)local_1d0._4_4_ & (uint)(piVar15 + -1)) + 4) = bVar1;
  ((uint *)local_1d0)[(int)piVar15 * -4 + -4] = (uint)local_3cc;
  local_1c8 = local_1c8 - (uVar32 & 1);
  local_1c4 = local_1c4 + 1;
LAB_00d5325c:
  *(double *)((uint *)local_1d0 + (int)piVar15 * -4 + -2) = (double)fVar66;
LAB_00d53278:
  iVar7 = iVar7 + 1;
  if (iVar7 == iVar6) goto LAB_00d535e0;
  goto LAB_00d53284;
LAB_00d535e0:
  local_414 = (uint *)local_1d0;
  local_3dc = (uint)local_1d0._4_4_;
LAB_00d53628:
  uVar27 = local_1b4;
  uVar32 = local_1c4;
  local_74 = 8;
  piVar15 = local_1b8;
  local_78 = iStack_3d4;
  local_70 = iStack_3d4;
  if (uVar44 != 0) {
    local_408 = local_24c + uVar44 * 3;
    uVar45 = local_1b4 ^ 0x646f7261;
    uVar33 = (uint)local_1b8 ^ 0x6e646f6d;
    uVar11 = uVar33 + (local_1c0 ^ 0x70736575);
    uVar55 = uVar45 + (local_1bc ^ 0x736f6d65) + (uint)CARRY4(uVar33,local_1c0 ^ 0x70736575);
    uVar47 = (uVar45 << 0xd | uVar33 >> 0x13) ^ uVar55;
    uVar62 = (uVar33 << 0xd | uVar45 >> 0x13) ^ uVar11;
    uVar61 = local_1bc ^ 0x6c796765;
    uVar45 = local_1c0 ^ 0x6e657261;
    uVar34 = (uint)local_1b8 ^ 0x79746573;
    uVar50 = local_1b4 ^ 0x74656462;
    dVar68 = (double)FUN_01845f30(local_260,local_25c);
    dVar67 = (double)VectorUnsignedToFloat(local_258,(byte)(in_fpscr >> 0x16) & 3);
    uVar46 = *(uint *)(extraout_r3 + 0x44);
    dVar68 = dVar67 / 1000000000.0 + dVar68;
    uVar33 = 0;
    puVar21 = local_24c;
    dVar67 = in_d0;
    do {
      local_3cc = puVar21;
      fVar66 = 0.0;
      if (uVar32 != 0) {
        uVar16 = uVar33 ^ uVar34;
        uVar24 = uVar27 ^ 0x70656462;
        uVar35 = (uVar50 << 0x10 | uVar16 >> 0x10) ^ uVar24 + uVar61 + (uint)CARRY4(uVar16,uVar45);
        uVar48 = (uVar16 << 0x10 | uVar24 >> 0x10) ^ uVar16 + uVar45;
        uVar40 = uVar48 + uVar55 ^ uVar33;
        uVar37 = uVar35 + uVar11 + (uint)CARRY4(uVar48,uVar55);
        uVar56 = uVar16 + uVar45 + uVar62;
        uVar24 = uVar24 + uVar61 + uVar47 + (uint)CARRY4(uVar45,uVar62) +
                 (uint)CARRY4(uVar16,uVar45 + uVar62);
        uVar28 = uVar56 ^ (uVar62 << 0x11 | uVar47 >> 0xf);
        uVar16 = uVar24 ^ (uVar47 << 0x11 | uVar62 >> 0xf);
        uVar60 = uVar40 + uVar28;
        uVar24 = uVar24 ^ 0xff;
        uVar41 = uVar60 ^ (uVar28 << 0xd | uVar16 >> 0x13);
        uVar63 = (uVar37 ^ 0x4000000) + uVar16 + (uint)CARRY4(uVar40,uVar28);
        uVar16 = uVar63 ^ (uVar16 << 0xd | uVar28 >> 0x13);
        uVar40 = (uVar48 << 0x15 | uVar35 >> 0xb) ^ uVar48 + uVar55;
        uVar37 = (uVar35 << 0x15 | uVar48 >> 0xb) ^ uVar37;
        uVar51 = uVar40 + uVar24;
        uVar24 = uVar37 + uVar56 + (uint)CARRY4(uVar40,uVar24);
        uVar58 = uVar16 + uVar24 + (uint)CARRY4(uVar41,uVar51);
        uVar28 = uVar58 ^ (uVar16 << 0x11 | uVar41 >> 0xf);
        uVar56 = uVar41 + uVar51 ^ (uVar41 << 0x11 | uVar16 >> 0xf);
        uVar24 = (uVar37 << 0x10 | uVar40 >> 0x10) ^ uVar24;
        uVar16 = (uVar40 << 0x10 | uVar37 >> 0x10) ^ uVar51;
        uVar48 = uVar16 + uVar63;
        uVar60 = uVar24 + uVar60 + (uint)CARRY4(uVar16,uVar63);
        uVar59 = uVar28 + uVar60 + (uint)CARRY4(uVar56,uVar48);
        uVar40 = (uVar28 << 0xd | uVar56 >> 0x13) ^ uVar59;
        uVar35 = (uVar56 << 0xd | uVar28 >> 0x13) ^ uVar56 + uVar48;
        uVar60 = (uVar24 << 0x15 | uVar16 >> 0xb) ^ uVar60;
        uVar16 = (uVar16 << 0x15 | uVar24 >> 0xb) ^ uVar48;
        uVar63 = uVar16 + uVar58;
        uVar24 = uVar60 + uVar41 + uVar51 + (uint)CARRY4(uVar16,uVar58);
        uVar51 = uVar40 + uVar24 + (uint)CARRY4(uVar35,uVar63);
        uVar24 = (uVar60 << 0x10 | uVar16 >> 0x10) ^ uVar24;
        uVar37 = (uVar35 << 0x11 | uVar40 >> 0xf) ^ uVar35 + uVar63;
        uVar41 = (uVar16 << 0x10 | uVar60 >> 0x10) ^ uVar63;
        uVar16 = (uVar40 << 0x11 | uVar35 >> 0xf) ^ uVar51;
        uVar28 = uVar41 + uVar59;
        uVar48 = uVar24 + uVar56 + uVar48 + (uint)CARRY4(uVar41,uVar59);
        uVar40 = (uVar37 << 0xd | uVar16 >> 0x13) ^ uVar37 + uVar28;
        iVar4 = 0;
        uVar16 = (uVar16 << 0xd | uVar37 >> 0x13) ^ uVar16 + uVar48 + (uint)CARRY4(uVar37,uVar28);
        uVar48 = (uVar24 << 0x15 | uVar41 >> 0xb) ^ uVar48;
        uVar28 = (uVar41 << 0x15 | uVar24 >> 0xb) ^ uVar28;
        uVar37 = uVar28 + uVar51;
        uVar24 = uVar48 + uVar35 + uVar63 + (uint)CARRY4(uVar28,uVar51);
        uVar24 = ((uVar37 ^ uVar48 >> 0x10) << 0x15 |
                 ((uVar48 << 0x10 | uVar28 >> 0x10) ^ uVar24) >> 0xb) ^
                 (uVar40 << 0x11 | uVar16 >> 0xf) ^ uVar16 + uVar24 + (uint)CARRY4(uVar40,uVar37) ^
                 uVar40 + uVar37;
        uVar16 = uVar24 >> 0x19;
        while( true ) {
          uVar24 = local_3dc & uVar24;
          uVar28 = *(uint *)((int)local_414 + uVar24);
          uVar35 = uVar28 ^ uVar16 * 0x1010101;
          uVar35 = ~uVar35 & 0x80808080 & uVar35 + 0xfefefeff;
          while (uVar35 != 0) {
            uVar37 = uVar24 + ((uint)LZCOUNT(uVar35 << 0x18 | (uVar35 >> 8 & 0xff) << 0x10 |
                                             (uVar35 >> 0x10 & 0xff) << 8 | uVar35 >> 0x18) >> 3) &
                     local_3dc;
            uVar35 = uVar35 - 1 & uVar35;
            if (uVar33 == local_414[uVar37 * -4 + -4]) {
              fVar66 = (float)*(double *)(local_414 + uVar37 * -4 + -2);
              goto LAB_00d53b30;
            }
          }
          if ((uVar28 & 0x80808080 & uVar28 << 1) != 0) break;
          iVar4 = iVar4 + 4;
          uVar24 = uVar24 + iVar4;
        }
      }
LAB_00d53b30:
      puVar57 = &DAT_0186d400;
      if (uVar33 == uVar44) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar44,uVar44,&DAT_01877c60);
      }
      FUN_00c6f548(auStack_270,uVar33);
      extraout_s1 = (int)((ulonglong)dVar67 >> 0x20);
      DataMemoryBarrier(0xb);
      if (DAT_018d7d14 == 0) {
        DataMemoryBarrier(0xb);
        if (DAT_018d8068 != 0) {
          uVar22 = 0x26;
          puVar19 = &DAT_0034cdde;
          goto LAB_00d55484;
        }
        FUN_009b0238(&local_88,local_244,uVar33);
        local_1b4 = local_88[0xd];
        local_1c0 = local_88[9];
        local_1bc = local_88[10];
        local_1d0 = *(double *)(local_88 + 3);
        local_1c8 = local_88[6];
        local_1c4 = local_88[7];
        local_1b8 = (int *)local_88[0xc];
        piVar15 = (int *)FUN_00a630d0(DAT_018d7d18,&local_1d0,4);
        do {
          bVar65 = (bool)hasExclusiveAccess(piVar15 + 2);
        } while (!bVar65);
        piVar15[2] = SUB84(dVar67,0);
        piVar15[3] = extraout_s1;
        DataMemoryBarrier(0xb);
        do {
          iVar4 = *piVar15;
          bVar65 = (bool)hasExclusiveAccess(piVar15);
        } while (!bVar65);
        *piVar15 = iVar4 + -1;
        if (iVar4 == 1) {
          DataMemoryBarrier(0xb);
          FUN_0078fa50();
        }
        FUN_00a758f4(local_84);
      }
      puVar21 = local_204;
      if (local_200 <= uVar33) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar33,local_200,&DAT_0186abf8);
      }
      if (local_204[uVar33 * 6 + 2] == 0) {
        uVar22 = 0x13;
        puVar19 = &DAT_0034ae12;
        puVar57 = &DAT_0186ab88;
LAB_00d55484:
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(puVar19,uVar22,puVar57);
      }
      uVar16 = in_fpscr & 0xfffffff | (uint)(dVar68 == 0.0) << 0x1e;
      if (SUB41(uVar16 >> 0x1e,0)) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8(&DAT_0034ad0f,0x1f,auStack_100,&DAT_0186ab28);
      }
      FUN_0184590c(0,local_24c[uVar33 * 3],0,0);
      dVar69 = dVar67 / dVar68;
      uVar74 = FUN_01845bac(SUB84(dVar69,0));
      uVar16 = uVar16 & 0xfffffff | (uint)(dVar69 < 3.4028236692093843e+38) << 0x1f |
               (uint)(dVar69 == 3.4028236692093843e+38) << 0x1e;
      in_fpscr = uVar16 | (uint)NAN(dVar69) << 0x1c;
      if (NAN(dVar69)) {
        uVar74 = 0;
      }
      bVar1 = (byte)(uVar16 >> 0x18);
      if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
        uVar74 = 0xffffffffffffffff;
      }
      FUN_0184590c((int)uVar74,(int)((ulonglong)uVar74 >> 0x20));
      iVar4 = local_70;
      in_d0 = (double)CONCAT44(extraout_s1,SUB84(dVar69,0));
      uVar16 = *(uint *)puVar21[uVar33 * 6 + 1];
      piVar15 = (int *)(uint)(uVar33 < 0x8000);
      if (local_70 == local_78) {
        FUN_00d569bc(&local_78);
      }
      piVar23 = (int *)(local_74 + iVar4 * 0x50);
      *piVar23 = -((int)~uVar20 >> 0x1f);
      *(short *)((int)piVar23 + 0x3e) = (short)(uVar16 / 1000000);
      *(short *)((int)piVar23 + 0x36) = (short)uVar46;
      *(ushort *)(piVar23 + 0xd) = (ushort)(uVar46 < 0x8000);
      *(short *)((int)piVar23 + 0x32) = (short)uVar5;
      *(ushort *)(piVar23 + 0xc) = (ushort)(uVar5 < 0x8000);
      piVar23[9] = iVar8;
      piVar23[10] = (int)puVar9;
      piVar23[8] = iVar38;
      piVar23[1] = uVar20;
      local_70 = iVar4 + 1;
      *(undefined2 *)(piVar23 + 0x12) = 0;
      *(undefined2 *)(piVar23 + 0x11) = 0;
      *(undefined2 *)(piVar23 + 0x10) = 0;
      *(undefined2 *)(piVar23 + 0xf) = 1;
      *(short *)((int)piVar23 + 0x3a) = (short)uVar33;
      *(ushort *)(piVar23 + 0xe) = (ushort)(uVar33 < 0x8000);
      piVar23[7] = (int)(float)dVar67;
      piVar23[4] = (uint)((uint)ABS(fVar66) < 0x7f800000);
      piVar23[5] = (int)fVar66;
      piVar23[6] = 1;
      piVar23[3] = (int)(float)(in_d0 * 1e-09);
      piVar23[2] = 1;
      uVar33 = uVar33 + 1;
      puVar21 = local_3cc + 3;
      dVar67 = in_d0;
    } while (local_3cc + 3 != local_408);
  }
  iVar6 = *(int *)(local_1e8 + 0x10);
  puVar36 = *(uint **)(local_1e8 + 0xc);
  iVar4 = iVar6 * 0x30;
  puVar21 = puVar36;
  do {
    puVar13 = puVar21;
    if (iVar4 == 0) {
      iVar4 = 0;
      goto LAB_00d53f80;
    }
    piVar15 = (int *)*puVar13;
    iVar4 = iVar4 + -0x30;
    puVar21 = puVar13 + 0xc;
  } while ((int *)0x1 < piVar15);
  local_1d0 = *(double *)(puVar13 + 1);
  local_1c8 = puVar13[3];
  local_1c4 = puVar13[4];
  local_1c0 = puVar13[5];
  local_1bc = puVar13[6];
  local_1b8 = (int *)puVar13[7];
  local_1b4 = puVar13[8];
  uStack_1b0 = puVar13[9];
  uStack_1ac = puVar13[10];
  uStack_1a8 = puVar13[0xb];
  puVar21 = (uint *)thunk_FUN_016d4a50(0xc0);
  if (puVar21 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0xc0);
  }
  *puVar21 = (uint)piVar15;
  puVar21[1] = (uint)(uint *)local_1d0;
  puVar21[2] = (uint)local_1d0._4_4_;
  puVar21[3] = local_1c8;
  puVar21[4] = local_1c4;
  puVar21[5] = local_1c0;
  puVar21[6] = local_1bc;
  puVar21[7] = (uint)local_1b8;
  puVar21[8] = local_1b4;
  puVar21[9] = uStack_1b0;
  puVar21[10] = uStack_1ac;
  puVar21[0xb] = uStack_1a8;
  local_80 = (int *)0x1;
  local_88 = (int *)0x4;
  puVar13 = puVar13 + 0xc;
  local_84 = puVar21;
  while( true ) {
    puVar14 = puVar13;
    piVar23 = local_80;
    piVar15 = local_88;
    if (puVar14 == puVar36 + iVar6 * 0xc) break;
    uVar5 = *puVar14;
    puVar13 = puVar14 + 0xc;
    if (uVar5 < 2) {
      local_1d0 = *(double *)(puVar14 + 1);
      local_1c8 = puVar14[3];
      local_1c4 = puVar14[4];
      local_1c0 = puVar14[5];
      local_1bc = puVar14[6];
      local_1b8 = (int *)puVar14[7];
      local_1b4 = puVar14[8];
      uStack_1b0 = puVar14[9];
      uStack_1ac = puVar14[10];
      uStack_1a8 = puVar14[0xb];
      if (local_80 == local_88) {
        FUN_00d653ec(&local_88,local_80,1,4);
        puVar21 = local_84;
      }
      local_80 = (int *)((int)piVar23 + 1);
      puVar29 = puVar21 + (int)piVar23 * 0xc;
      *puVar29 = uVar5;
      puVar29[1] = (uint)(uint *)local_1d0;
      puVar29[2] = (uint)local_1d0._4_4_;
      puVar29[3] = local_1c8;
      puVar29[4] = local_1c4;
      puVar29[5] = local_1c0;
      puVar29[6] = local_1bc;
      puVar29[7] = (uint)local_1b8;
      puVar29[8] = local_1b4;
      puVar29[9] = uStack_1b0;
      puVar29[10] = uStack_1ac;
      puVar29[0xb] = uStack_1a8;
    }
  }
  puVar36 = local_84 + 9;
  iVar6 = 0;
  piVar42 = local_80;
  puVar21 = puVar36;
  do {
    if (((char)*puVar21 == '\x01') && (puVar21[-9] != 0)) {
      FUN_016d55d4();
      iVar6 = iVar6 + 1;
    }
    puVar21 = puVar21 + 0xc;
    piVar42 = (int *)((int)piVar42 - 1);
  } while (piVar42 != (int *)0x0);
  iVar4 = 0;
  do {
    if (((char)*puVar36 == '\0') && (puVar36[-9] != 0)) {
      FUN_016d55d4();
      iVar4 = iVar4 + 1;
    }
    puVar36 = puVar36 + 0xc;
    piVar23 = (int *)((int)piVar23 - 1);
  } while (piVar23 != (int *)0x0);
  if (iVar6 < 2) {
    iVar6 = 1;
  }
  VectorUnsignedToFloat(iVar6,(byte)(in_fpscr >> 0x16) & 3);
LAB_00d53f80:
  if (iVar4 < 2) {
    iVar4 = 1;
  }
  uVar5 = *local_414;
  puVar21 = local_414;
  if (local_3dc == 0) {
    if (uVar32 != 0) goto joined_r0x00d53fe8;
LAB_00d541b8:
    bVar65 = true;
    pdVar52 = (double *)&DAT_00000008;
    pdVar43 = (double *)&DAT_00000008;
  }
  else {
    local_408 = local_414 + local_3dc * -4 + -4;
    if (uVar32 == 0) {
      if (local_3dc * 0x11 != -0x15) {
        thunk_FUN_016d3fb4(local_408,local_4dc);
      }
      goto LAB_00d541b8;
    }
    local_3cc = (uint *)(uint)(local_3dc * 0x11 == -0x15);
joined_r0x00d53fe8:
    while( true ) {
      puVar21 = puVar21 + 1;
      if ((uVar5 & 0x80808080) != 0x80808080) break;
      uVar5 = *puVar21;
      local_414 = local_414 + -0x10;
    }
    uVar20 = uVar32;
    if (uVar32 - 1 == -1) {
      uVar20 = 0xffffffff;
    }
    uVar44 = 4;
    if (4 < uVar20) {
      uVar44 = uVar20;
    }
    bVar64 = 0x1ffffffe < uVar20;
    bVar65 = uVar20 == 0x1fffffff;
    if (uVar20 < 0x20000000) {
      piVar15 = (int *)(uVar44 << 3);
    }
    uVar22 = 0;
    if (uVar20 < 0x20000000) {
      bVar64 = (int *)0x7ffffff7 < piVar15;
      bVar65 = piVar15 == (int *)0x7ffffff8;
    }
    if (bVar64 && !bVar65) {
LAB_00d556fc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(uVar22,local_4dc);
    }
    uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
    uVar74 = *(undefined8 *)
              ((int)local_414 +
              (LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                       uVar5 >> 0x18) & 0x38U) * -2 + -8);
    puVar17 = (undefined8 *)thunk_FUN_016d4a50(piVar15);
    if (puVar17 == (undefined8 *)0x0) {
      uVar22 = 8;
      local_4dc = piVar15;
      goto LAB_00d556fc;
    }
    uVar20 = 1;
    uVar5 = uVar5 - 1 & uVar5;
    *puVar17 = uVar74;
    local_1d0 = (double)CONCAT44(puVar17,uVar44);
    iVar6 = uVar32 - 1;
    while (local_1c8 = uVar20, iVar6 != 0) {
      puVar36 = puVar21;
      if (uVar5 == 0) {
        do {
          puVar21 = puVar36 + 1;
          uVar5 = *puVar36;
          local_414 = local_414 + -0x10;
          puVar36 = puVar21;
        } while ((uVar5 & 0x80808080) == 0x80808080);
        uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
      }
      iVar7 = iVar6 + -1;
      uVar74 = *(undefined8 *)
                ((int)local_414 +
                (LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 | (uVar5 >> 0x10 & 0xff) << 8 |
                         uVar5 >> 0x18) & 0x38U) * -2 + -8);
      if ((uint *)uVar20 == (uint *)local_1d0) {
        if (iVar7 == -1) {
          iVar6 = -1;
        }
        FUN_00d653ec(&local_1d0,uVar20,iVar6,8);
        puVar17 = local_1d0._4_4_;
      }
      uVar5 = uVar5 - 1 & uVar5;
      puVar25 = puVar17 + uVar20;
      uVar20 = uVar20 + 1;
      *puVar25 = uVar74;
      iVar6 = iVar7;
    }
    if (((uint)local_3cc & 1) == 0 && local_3dc != 0) {
      thunk_FUN_016d3fb4(local_408);
    }
    bVar65 = (uint *)local_1d0 == (uint *)0x0;
    pdVar43 = local_1d0._4_4_;
    pdVar52 = local_1d0._4_4_;
    if (uVar32 == 0) {
      uVar5 = 0;
      goto LAB_00d541d4;
    }
    iVar6 = 0;
    do {
      pdVar30 = (double *)((int)local_1d0._4_4_ + iVar6);
      iVar6 = iVar6 + 8;
      if (((uint)((ulonglong)*pdVar30 >> 0x20) & 0x7fffffff) < 0x7ff00000) {
        *pdVar52 = *pdVar30;
        pdVar52 = pdVar52 + 1;
      }
    } while (uVar32 * 8 != iVar6);
  }
  uVar20 = (int)pdVar52 - (int)pdVar43;
  uVar5 = uVar20 >> 3;
  if (0xf < uVar20) {
    if (uVar20 < 0xa8) {
      pdVar30 = pdVar43 + 1;
      iVar6 = 8;
      do {
        dVar68 = pdVar30[-1];
        dVar67 = *pdVar30;
        in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar67 < dVar68) << 0x1f;
        if (SUB41(in_fpscr >> 0x1f,0)) {
          iVar7 = iVar6;
          do {
            *(double *)((int)pdVar43 + iVar7) = dVar68;
            if (iVar7 == 8) {
              pdVar31 = pdVar43;
              goto LAB_00d551e8;
            }
            dVar68 = ((double *)((int)pdVar43 + iVar7))[-2];
            iVar7 = iVar7 + -8;
            in_fpscr = in_fpscr & 0xfffffff | (uint)(dVar67 < dVar68) << 0x1f;
          } while (SUB41(in_fpscr >> 0x1f,0));
          pdVar31 = (double *)((int)pdVar43 + iVar7);
LAB_00d551e8:
          *pdVar31 = dVar67;
        }
        pdVar30 = pdVar30 + 1;
        iVar6 = iVar6 + 8;
      } while (pdVar30 != pdVar52);
    }
    else {
      FUN_00cda61c(pdVar43,uVar5);
    }
  }
LAB_00d541d4:
  if (pdVar52 == pdVar43) {
    puVar18 = (undefined4 *)FUN_00c70f88(&DAT_00356df1,0x24);
    if (!bVar65) {
      thunk_FUN_016d3fb4(pdVar43);
    }
    (**(code **)*puVar18)();
  }
  else {
    local_1d0 = *pdVar43;
    uVar20 = uVar5;
    do {
      uVar20 = uVar20 - 1;
    } while (uVar20 != 0);
    dVar67 = (double)VectorSignedToFloat(uVar5 - 1,(byte)(in_fpscr >> 0x16) & 3);
    in_d0 = dVar67 * 0.9;
    FUN_016d6168(SUB84(in_d0,0));
    if (!bVar65) {
      thunk_FUN_016d3fb4(pdVar43);
    }
    VectorUnsignedToFloat(uVar5,(byte)(in_fpscr >> 0x16) & 3);
  }
  uVar22 = FUN_0184589c(local_260,local_25c);
  local_1c8 = local_234;
  local_1c4 = local_230;
  dVar67 = (double)FUN_01845f30(local_260,local_25c);
  dVar68 = (double)VectorUnsignedToFloat(local_258,(byte)(in_fpscr >> 0x16) & 3);
  dVar67 = dVar68 / 1000000000.0 + dVar67;
  uVar5 = in_fpscr & 0xfffffff | (uint)(dVar67 == 0.0) << 0x1e;
  if (!SUB41(uVar5 >> 0x1e,0)) {
    FUN_0184590c(0,local_240,0,0);
    dVar67 = in_d0 / dVar67;
    uVar74 = FUN_01845bac(SUB84(dVar67,0));
    uVar5 = uVar5 & 0xfffffff | (uint)(dVar67 < 3.4028236692093843e+38) << 0x1f |
            (uint)(dVar67 == 3.4028236692093843e+38) << 0x1e;
    uVar20 = uVar5 | (uint)NAN(dVar67) << 0x1c;
    if (NAN(dVar67)) {
      uVar74 = 0;
    }
    bVar1 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar1 >> 6 & 1) && bVar1 >> 7 == ((byte)(uVar20 >> 0x1c) & 1)) {
      uVar74 = 0xffffffffffffffff;
    }
    FUN_0184590c((int)uVar74,(int)((ulonglong)uVar74 >> 0x20));
    FUN_009d4790(local_d0,local_204,local_200,iVar26 + 0x18);
    fVar66 = (float)VectorUnsignedToFloat(local_258,(byte)(uVar20 >> 0x16) & 3);
    VectorUnsignedToFloat(iVar4,(byte)(uVar20 >> 0x16) & 3);
                    /* WARNING: Could not recover jumptable at 0x00d54464. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&LAB_00d54468 + *(int *)(&LAB_00d54468 + local_d0[0] * 4)))
              (uVar22,(int)((ulonglong)in_d0 >> 0x20),fVar66 / 1e+09);
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00fb74f8(&DAT_0034ad94,0x1f,auStack_100,&DAT_0186ab28);
}


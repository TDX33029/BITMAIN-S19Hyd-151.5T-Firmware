// FUN_00995de0 @ 00995de0 size=2296 calls_out=8 calls_in=1
// strings: 

void FUN_00995de0(undefined1 *param_1,double *param_2,int *param_3,char *param_4,undefined1 param_5,
                 undefined4 param_6,uint param_7,uint param_8,undefined2 param_9,undefined2 param_10
                 )

{
  uint uVar1;
  uint uVar2;
  code *pcVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  int *piVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  int iVar12;
  undefined1 uVar13;
  int iVar14;
  undefined4 uVar15;
  int *piVar16;
  undefined4 *puVar17;
  bool bVar18;
  uint in_fpscr;
  double dVar19;
  double dVar20;
  double dVar21;
  double dVar22;
  double dVar23;
  undefined4 local_a0;
  undefined4 local_9c;
  undefined4 local_98;
  undefined4 local_94;
  undefined4 local_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined4 local_80;
  undefined1 local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 *local_54;
  int *local_50;
  undefined2 local_4c;
  undefined2 local_4a;
  int local_48;
  int local_44;
  int local_40;
  undefined1 local_3c;
  
  if (*param_4 == '\x01') {
    if (*(int *)(param_2 + 2) == 0) {
      uVar13 = 2;
    }
    else {
      uVar13 = 3;
      dVar20 = *(double *)(param_4 + 8) + *param_2;
      uVar1 = in_fpscr & 0xfffffff | (uint)(dVar20 < 1.0) << 0x1f;
      in_fpscr = uVar1 | (uint)NAN(dVar20) << 0x1c;
      if ((byte)(uVar1 >> 0x1f) != ((byte)(in_fpscr >> 0x1c) & 1)) {
        *param_2 = dVar20;
        goto LAB_00995e3c;
      }
    }
    if (*param_3 != 0) {
      thunk_FUN_016d3fb4(param_3[1]);
    }
    param_1[1] = uVar13;
    uVar13 = 1;
LAB_0099665c:
    *param_1 = uVar13;
    return;
  }
LAB_00995e3c:
  piVar16 = *(int **)((int)param_2 + 0x14);
  do {
    iVar6 = *piVar16;
    bVar18 = (bool)hasExclusiveAccess(piVar16);
  } while (!bVar18);
  *piVar16 = iVar6 + 1;
  if (iVar6 < 0) {
LAB_009966b4:
                    /* WARNING: Does not return */
    pcVar3 = (code *)software_udf(0xfdee,0x9966b4);
    (*pcVar3)();
  }
  piVar7 = piVar16 + 0x11;
  do {
    bVar18 = (bool)hasExclusiveAccess(piVar7);
  } while (!bVar18);
  *piVar7 = *piVar7 + 1;
  puVar8 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar8 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  puVar8[2] = param_7 & 0xffff;
  *puVar8 = 1;
  puVar8[1] = 1;
  local_54 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (local_54 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *local_54 = 1;
  local_54[2] = param_8 & 0xffff;
  local_48 = *param_3;
  local_44 = param_3[1];
  local_40 = param_3[2];
  local_54[1] = 1;
  local_60 = 8;
  local_3c = param_5;
  local_74 = 4;
  local_98 = *(undefined4 *)param_4;
  local_94 = *(undefined4 *)(param_4 + 4);
  local_90 = *(undefined4 *)(param_4 + 8);
  local_8c = *(undefined4 *)(param_4 + 0xc);
  local_4a = param_10;
  local_88 = param_6;
  local_9c = 1;
  local_a0 = 1;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = 0;
  local_4c = param_9;
  local_5c = 0;
  local_78 = 0;
  local_7c = 0;
  local_80 = 0;
  local_84 = 0;
  local_58 = puVar8;
  local_50 = piVar16;
  iVar6 = thunk_FUN_016d4a50(0x68);
  if (iVar6 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x68);
  }
  FUN_016dd1aa(iVar6,&local_a0,0x68);
  piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
  if (*piVar16 == 0) {
    bVar18 = (bool)hasExclusiveAccess(piVar16);
    if (!bVar18) goto LAB_00995fe4;
    *piVar16 = 1;
  }
  else {
    ClearExclusiveLocal();
LAB_00995fe4:
    do {
      while( true ) {
        while (*piVar16 != 0) {
          HintYield();
        }
        if (*piVar16 == 0) break;
        ClearExclusiveLocal();
      }
      bVar18 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar18);
    *piVar16 = 1;
  }
  DataMemoryBarrier(0xb);
  dVar19 = 0.0;
  bVar4 = *(byte *)(iVar6 + 8);
  dVar21 = *(double *)(iVar6 + 0x10);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  iVar14 = *(int *)(param_2 + 2);
  dVar20 = dVar19;
  if ((bVar4 & 1) != 0) {
    dVar20 = dVar21;
  }
  if (iVar14 == *(int *)(param_2 + 1)) {
    FUN_009957b4();
  }
  puVar8 = *(undefined4 **)((int)param_2 + 0xc);
  *(int *)(param_2 + 2) = iVar14 + 1;
  puVar11 = puVar8 + iVar14 * 0xc;
  *puVar11 = 0;
  puVar11[10] = 0;
  puVar11[1] = 0;
  puVar11[2] = 0;
  puVar11[3] = 0;
  puVar11[4] = 0;
  puVar11[5] = 0;
  puVar11[6] = 0;
  puVar11[7] = 0;
  puVar11[0xb] = iVar6;
  *(double *)(puVar11 + 8) = dVar20;
  if (iVar14 != -1) {
    iVar12 = 0;
    iVar6 = 0;
LAB_009960d8:
    if (puVar8[iVar6 * 0xc + 10] != 0) {
      iVar9 = puVar8[iVar6 * 0xc + 0xb];
      piVar16 = (int *)(&DAT_018db800 + ((iVar9 + 8U >> 0x14 ^ iVar9 + 8U >> 4) & 0x3f) * 0x40);
      do {
        if (*piVar16 == 0) {
          bVar18 = (bool)hasExclusiveAccess(piVar16);
          if (bVar18) goto LAB_00996118;
        }
        else {
          ClearExclusiveLocal();
        }
        while (*piVar16 != 0) {
          HintYield();
        }
      } while( true );
    }
    goto LAB_009960c8;
  }
LAB_009966d0:
                    /* WARNING: Subroutine does not return */
  FUN_00fb74b8(&DAT_0034fc7c,0x2b,&DAT_018712d4);
LAB_00996118:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  bVar4 = *(byte *)(iVar9 + 8);
  iVar9 = *(int *)(iVar9 + 0xc);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) == 0) {
    iVar12 = iVar12 + iVar9;
  }
LAB_009960c8:
  bVar18 = iVar6 == iVar14;
  iVar6 = iVar6 + 1;
  if (bVar18) goto LAB_0099613c;
  goto LAB_009960d8;
LAB_0099613c:
  puVar10 = puVar8 + (iVar14 + 1) * 0xc;
  iVar6 = 0;
  iVar14 = 0;
  puVar11 = puVar8;
LAB_00996158:
  while (puVar17 = puVar11, puVar17 != puVar10) {
    puVar11 = puVar17 + 0xc;
    if (puVar17[10] != 0) {
      iVar9 = puVar17[0xb];
      piVar16 = (int *)(&DAT_018db800 + ((iVar9 + 8U >> 0x14 ^ iVar9 + 8U >> 4) & 0x3f) * 0x40);
      do {
        if (*piVar16 == 0) {
          bVar18 = (bool)hasExclusiveAccess(piVar16);
          if (bVar18) goto LAB_0099619c;
        }
        else {
          ClearExclusiveLocal();
        }
        while (*piVar16 != 0) {
          HintYield();
        }
      } while( true );
    }
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(dVar19 == 1.0) << 0x1e;
  uVar2 = uVar1 | (uint)(1.0 <= dVar19) << 0x1d;
  if ((bool)((byte)(uVar2 >> 0x1d) & 1) && !SUB41(uVar1 >> 0x1e,0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_003593b7,0x30,&DAT_0187b094);
  }
  if (iVar12 != 0) {
    dVar20 = (double)VectorUnsignedToFloat(iVar12,(byte)(uVar2 >> 0x16) & 3);
    dVar20 = (1.0 - dVar19) / dVar20;
joined_r0x009962e8:
    dVar21 = 0.0;
    if (iVar14 == iVar6) goto LAB_009964b4;
LAB_009962ec:
LAB_00996318:
    puVar8[4] = 0;
    puVar8[5] = 0;
    *puVar8 = 0;
    puVar8[1] = 0;
    dVar19 = 0.0;
    if (puVar8[10] != 0) {
      iVar6 = puVar8[0xb];
      piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
      do {
        if (*piVar16 == 0) {
          bVar18 = (bool)hasExclusiveAccess(piVar16);
          if (bVar18) goto LAB_00996368;
        }
        else {
          ClearExclusiveLocal();
        }
        while (*piVar16 != 0) {
          HintYield();
        }
      } while( true );
    }
    goto LAB_00996308;
  }
  dVar20 = 0.0;
  if (iVar14 < 1) goto joined_r0x009962e8;
  if (iVar6 < iVar14) {
    dVar21 = (double)VectorSignedToFloat(iVar14 - iVar6,(byte)(uVar2 >> 0x16) & 3);
  }
  else {
    dVar21 = (double)VectorUnsignedToFloat(iVar14,(byte)(uVar2 >> 0x16) & 3);
  }
  dVar21 = (1.0 - dVar19) / dVar21;
  if (iVar14 != iVar6) goto LAB_009962ec;
LAB_009964b4:
LAB_009964e0:
  puVar8[4] = 0;
  puVar8[5] = 0;
  *puVar8 = 0;
  puVar8[1] = 0;
  dVar19 = 0.0;
  if (puVar8[10] != 0) {
    iVar6 = puVar8[0xb];
    piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
    do {
      if (*piVar16 == 0) {
        bVar18 = (bool)hasExclusiveAccess(piVar16);
        if (bVar18) goto LAB_00996530;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*piVar16 != 0) {
        HintYield();
      }
    } while( true );
  }
  goto LAB_009964d0;
LAB_0099619c:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  bVar4 = *(byte *)(iVar9 + 8);
  dVar20 = *(double *)(iVar9 + 0x10);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) != 0) {
    iVar9 = puVar17[0xb];
    piVar16 = (int *)(&DAT_018db800 + ((iVar9 + 8U >> 0x14 ^ iVar9 + 8U >> 4) & 0x3f) * 0x40);
    do {
      if (*piVar16 == 0) {
        bVar18 = (bool)hasExclusiveAccess(piVar16);
        if (bVar18) goto LAB_00996208;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*piVar16 != 0) {
        HintYield();
      }
    } while( true );
  }
  goto LAB_00996158;
LAB_00996208:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  dVar19 = dVar19 + dVar20;
  bVar4 = *(byte *)(iVar9 + 8);
  iVar14 = iVar14 + 1;
  bVar5 = *(byte *)(iVar9 + 9);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) != 0) {
    iVar6 = iVar6 + (uint)bVar5;
  }
  goto LAB_00996158;
LAB_00996368:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  uVar15 = *(undefined4 *)(iVar6 + 0xc);
  bVar4 = *(byte *)(iVar6 + 8);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) != 0) {
    iVar6 = puVar8[0xb];
    piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
    do {
      if (*piVar16 == 0) {
        bVar18 = (bool)hasExclusiveAccess(piVar16);
        if (bVar18) goto LAB_009963d4;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*piVar16 != 0) {
        HintYield();
      }
    } while( true );
  }
  dVar19 = (double)VectorUnsignedToFloat(uVar15,(byte)(uVar2 >> 0x16) & 3);
  dVar19 = dVar20 * dVar19;
LAB_00996308:
  puVar11 = puVar8 + 0xc;
  *(double *)(puVar8 + 8) = dVar19;
  puVar8 = puVar11;
  if (puVar11 == puVar10) goto LAB_009965e4;
  goto LAB_00996318;
LAB_009963d4:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  dVar22 = *(double *)(iVar6 + 0x10);
  bVar4 = *(byte *)(iVar6 + 8);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) != 0) {
    iVar6 = puVar8[0xb];
    piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
    do {
      if (*piVar16 == 0) {
        bVar18 = (bool)hasExclusiveAccess(piVar16);
        if (bVar18) goto LAB_00996448;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*piVar16 != 0) {
        HintYield();
      }
    } while( true );
  }
  goto LAB_00996670;
LAB_00996448:
  *piVar16 = 1;
  dVar19 = dVar21 + dVar22;
  DataMemoryBarrier(0xb);
  bVar4 = *(byte *)(iVar6 + 8);
  bVar5 = *(byte *)(iVar6 + 9);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  dVar23 = dVar19;
  if ((bVar5 & 1) != 0) {
    dVar23 = dVar22;
  }
  if ((bVar4 & 1) != 0) {
    dVar19 = dVar23;
  }
  goto LAB_00996308;
LAB_00996530:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  uVar15 = *(undefined4 *)(iVar6 + 0xc);
  bVar4 = *(byte *)(iVar6 + 8);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) != 0) {
    iVar6 = puVar8[0xb];
    piVar16 = (int *)(&DAT_018db800 + ((iVar6 + 8U >> 0x14 ^ iVar6 + 8U >> 4) & 0x3f) * 0x40);
    do {
      if (*piVar16 == 0) {
        bVar18 = (bool)hasExclusiveAccess(piVar16);
        if (bVar18) goto LAB_0099659c;
      }
      else {
        ClearExclusiveLocal();
      }
      while (*piVar16 != 0) {
        HintYield();
      }
    } while( true );
  }
  dVar19 = (double)VectorUnsignedToFloat(uVar15,(byte)(uVar2 >> 0x16) & 3);
  dVar19 = dVar20 * dVar19;
  goto LAB_009964d0;
LAB_0099659c:
  *piVar16 = 1;
  DataMemoryBarrier(0xb);
  dVar19 = *(double *)(iVar6 + 0x10);
  bVar4 = *(byte *)(iVar6 + 8);
  DataMemoryBarrier(0xb);
  *piVar16 = 0;
  if ((bVar4 & 1) == 0) {
LAB_00996670:
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_003593e7,0x1e,&DAT_0187b0a4);
  }
  dVar19 = dVar21 + dVar19;
LAB_009964d0:
  puVar11 = puVar8 + 0xc;
  *(double *)(puVar8 + 8) = dVar19;
  puVar8 = puVar11;
  if (puVar11 == puVar10) goto LAB_009965e4;
  goto LAB_009964e0;
LAB_009965e4:
  iVar6 = DAT_018d7d08;
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c == 0) {
    FUN_0074bfa0(DAT_018d7d04 + 8);
    FUN_0074bfa0(iVar6 + 8);
  }
  if (*(int *)(param_2 + 2) != 0) {
    iVar6 = *(int *)((int)param_2 + 0xc) + *(int *)(param_2 + 2) * 0x30;
    piVar16 = *(int **)(iVar6 + -4);
    do {
      iVar14 = *piVar16;
      bVar18 = (bool)hasExclusiveAccess(piVar16);
    } while (!bVar18);
    *piVar16 = iVar14 + 1;
    if (iVar14 < 0) goto LAB_009966b4;
    *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar6 + -4);
    uVar13 = 0;
    goto LAB_0099665c;
  }
  goto LAB_009966d0;
}


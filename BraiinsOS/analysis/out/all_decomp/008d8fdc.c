// FUN_008d8fdc @ 008d8fdc size=14392 calls_out=61 calls_in=1
// strings: SetGloba | SetGloba | lDefaultError | lDefaultError | SetGloba | lDefaultError

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x008daaac */
/* WARNING: Removing unreachable block (ram,0x008db0bc) */
/* WARNING: Removing unreachable block (ram,0x008db088) */
/* WARNING: Removing unreachable block (ram,0x008db09c) */
/* WARNING: Removing unreachable block (ram,0x008db0a4) */
/* WARNING: Removing unreachable block (ram,0x008db0b0) */
/* WARNING: Restarted to delay deadcode elimination for space: register */

undefined4 FUN_008d8fdc(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  byte bVar2;
  char cVar3;
  char cVar4;
  uint uVar5;
  undefined4 *puVar6;
  int *****pppppiVar7;
  uint *puVar8;
  int iVar9;
  undefined4 uVar10;
  int *piVar11;
  uint uVar12;
  code *pcVar13;
  int iVar14;
  undefined1 *puVar15;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined1 *puVar16;
  int ***pppiVar17;
  uint uVar18;
  undefined4 uVar19;
  int *****pppppiVar20;
  undefined4 *puVar21;
  byte *pbVar22;
  byte bVar23;
  int *****unaff_r5;
  int *****pppppiVar24;
  char *pcVar25;
  int ****unaff_r6;
  undefined4 *puVar26;
  int ****ppppiVar27;
  int ****unaff_r7;
  int ****ppppiVar28;
  undefined *puVar29;
  int ****unaff_r8;
  int ****unaff_r10;
  bool bVar30;
  undefined8 uVar31;
  undefined8 uVar32;
  double dVar33;
  double dVar34;
  double dVar35;
  undefined8 uVar36;
  double dVar37;
  undefined8 uVar38;
  ulonglong uVar39;
  int ****local_274;
  int ****local_270;
  int *****local_26c;
  int *****local_268;
  int ****local_264;
  int ****local_260;
  int ****local_25c;
  int ****local_258;
  int ****local_254;
  uint local_248;
  undefined4 uStack_244;
  undefined4 uStack_240;
  undefined4 local_23c;
  uint local_238;
  undefined4 uStack_234;
  undefined1 *local_230;
  undefined4 uStack_22c;
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 local_220;
  undefined4 uStack_21c;
  undefined1 *local_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_208;
  undefined4 uStack_204;
  undefined1 *local_200;
  undefined4 uStack_1fc;
  undefined4 uStack_1f8;
  undefined4 uStack_1f4;
  undefined4 local_1f0;
  undefined4 uStack_1ec;
  undefined1 *local_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  uint local_1d8;
  undefined4 uStack_1d4;
  undefined4 uStack_1d0;
  undefined4 local_1cc;
  int *****local_1c8;
  int *****local_1c4;
  byte local_1c0 [4];
  undefined4 *local_1bc;
  int local_1b8;
  int *****local_1b4;
  int *****local_1b0;
  int *****pppppiStack_1ac;
  int ****ppppiStack_1a8;
  int ****ppppiStack_1a4;
  int *****local_1a0;
  int *****pppppiStack_19c;
  int ****ppppiStack_198;
  int ****ppppiStack_194;
  int *****local_190;
  int *****local_18c;
  int ****local_188;
  int ****ppppiStack_184;
  int *****local_180;
  undefined4 *local_17c;
  undefined4 uStack_178;
  undefined4 local_174;
  undefined1 auStack_138 [88];
  int *****local_e0;
  code *local_dc;
  undefined4 *local_d8;
  undefined4 uStack_d4;
  int *****local_d0;
  int *****local_cc;
  undefined4 *local_c8;
  int *****local_c4;
  int *****local_c0;
  undefined *local_bc;
  int *****local_b8;
  int *****local_b4;
  int ****local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int ****local_a0;
  int *****local_9c;
  int *****local_98;
  undefined4 local_94;
  int *****local_90;
  int *****local_8c;
  int ****local_88;
  int ****local_84;
  int *****local_80;
  undefined4 *local_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  
  uVar5 = (&switchD_008d9008::switchdataD_008d900c)[*(byte *)(param_1 + 0x3d)];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(byte *)(param_1 + 0x3d)) {
  case 0:
    param_1[4] = *param_1;
    *(undefined4 *)((int)param_1 + 0xf6) = 0;
    *(undefined4 *)((int)param_1 + 0xfe) = 0;
    *(undefined4 *)((int)param_1 + 0xfa) = 0;
    *(undefined1 *)((int)param_1 + 0xf7) = 1;
    param_1[5] = param_1[1];
    param_1[6] = param_1[2];
    param_1[7] = param_1[3];
    param_1[0x37] = param_1[0x36];
    if ((DAT_018d9130 < 3) &&
       (((DAT_018d965c - 1 < 2 ||
         ((DAT_018d965c != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9654), cVar3 != '\0')))) &&
        (iVar9 = FUN_016949d8(DAT_018d9654), iVar9 != 0)))) {
      local_b0 = (int ****)(DAT_018d9654 + 0x1c);
      local_190 = (int *****)*local_b0;
      local_18c = *(int ******)(DAT_018d9654 + 0x20);
      if (local_18c == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018651fc);
      }
      local_8c = (int *****)&local_e0;
      local_188 = *(int *****)(DAT_018d9654 + 0x24);
      ppppiStack_184 = *(int *****)(DAT_018d9654 + 0x28);
      local_90 = (int *****)&local_190;
      local_b8 = (int *****)&local_90;
      local_b4 = (int *****)&DAT_00000001;
      local_180 = (int *****)0x0;
      local_88 = (int ****)&DAT_018abb78;
      local_dc = (code *)0x35;
      local_e0 = (int *****)&DAT_00346280;
      FUN_008dda68(&local_b8);
    }
    param_1[0x42] = param_1 + 4;
    *(undefined1 *)(param_1 + 0x44) = 0;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186520c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186520c);
  case 4:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x44)) {
    case 0:
      puVar21 = (undefined4 *)param_1[0x42];
      param_1[0x43] = puVar21;
      goto LAB_008dcc7c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018775b4);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018775b4);
    case 3:
      puVar21 = (undefined4 *)param_1[0x43];
      goto LAB_008dcc7c;
    }
  case 5:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x46)) {
    case 0:
      goto switchD_008d9310_caseD_0;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186539c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186539c);
    case 3:
      uVar38 = *(undefined8 *)(param_1 + 0x44);
    }
    goto LAB_008dce50;
  case 6:
    goto switchD_008d9008_caseD_6;
  case 7:
    goto switchD_008d9008_caseD_7;
  case 8:
    goto switchD_008d9008_caseD_8;
  case 9:
    goto switchD_008d9008_caseD_9;
  case 10:
    goto switchD_008d9008_caseD_a;
  case 0xb:
    pbVar22 = (byte *)param_1[0x51];
    puVar21 = (undefined4 *)param_1[0x52];
    ppppiVar28 = unaff_r8;
    goto LAB_008d9988;
  case 0xc:
    uVar38 = *(undefined8 *)(param_1 + 0x42);
    goto LAB_008d9ae4;
  case 0xd:
switchD_008d9008_caseD_d:
    iVar9 = FUN_008de424(param_1 + 0x44,param_2);
    if (iVar9 != 0) {
      uVar10 = 1;
      uVar1 = 0xd;
      goto LAB_008dd4e4;
    }
    FUN_008d8520(param_1 + 0x44);
    *(undefined1 *)((int)param_1 + 0xfe) = 0;
    FUN_008e8b74(param_1[0x42]);
    *(undefined1 *)((int)param_1 + 0xfe) = 0;
    if (7 < *(byte *)(param_1 + 0x32) - 1) {
      FUN_00aca43c();
    }
    uVar10 = param_1[0x26];
    *(undefined1 *)((int)param_1 + 0xf6) = 0;
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x20];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x1a];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x14];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    if (param_1[0x38] != 0) {
      FUN_00d424fc();
      piVar11 = (int *)param_1[0x38];
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar11;
        bVar30 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar30);
      *piVar11 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(param_1[0x38]);
      }
    }
    goto LAB_008dd48c;
  case 0xe:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x46)) {
    case 0:
      puVar21 = (undefined4 *)param_1[0x44];
      goto LAB_008dad3c;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_018652fc);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_018652fc);
    case 3:
      uVar38 = *(undefined8 *)(param_1 + 0x47);
      goto LAB_008daf58;
    case 4:
      goto LAB_008db044;
    }
  case 0xf:
    goto switchD_008d9008_caseD_f;
  case 0x10:
    goto switchD_008d9008_caseD_10;
  case 0x11:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)((int)param_1 + 0x191)) {
    case 0:
      cVar3 = *(char *)((int)param_1 + 0x192);
      uVar38 = *(undefined8 *)(param_1 + 0x5c);
      puVar21 = (undefined4 *)param_1[99];
      goto LAB_008daa18;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186533c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186533c);
    case 3:
      goto LAB_008dc9c0;
    case 4:
      goto LAB_008dcb04;
    case 5:
      goto switchD_008d93f4_caseD_5;
    }
  case 0x12:
    goto switchD_008d9008_caseD_12;
  case 0x13:
    goto switchD_008d9008_caseD_13;
  case 0x14:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x48)) {
    case 0:
      puVar21 = (undefined4 *)param_1[0x42];
      local_26c = unaff_r5;
      goto LAB_008d9ff4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186538c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186538c);
    case 3:
      goto switchD_008d9388_caseD_3;
    }
  case 0x15:
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_1 + 0x48)) {
    case 0:
      puVar21 = (undefined4 *)param_1[0x42];
      local_26c = unaff_r5;
      goto LAB_008da7a4;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7ca0(&DAT_0186531c);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_0186531c);
    case 3:
      goto switchD_008d9188_caseD_3;
    }
  case 0x16:
    uVar38 = *(undefined8 *)(param_1 + 0x42);
    goto LAB_008da2dc;
  case 0x17:
switchD_008d9008_caseD_17:
    iVar9 = FUN_008de424(param_1 + 0x42,param_2);
    if (iVar9 != 0) {
      uVar10 = 1;
      uVar1 = 0x17;
      goto LAB_008dd4e4;
    }
    FUN_008d8520(param_1 + 0x42);
    uVar10 = param_1[0x26];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x20];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x1a];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    uVar10 = param_1[0x14];
    FUN_00a07b4c(uVar10);
    thunk_FUN_016d3fb4(uVar10);
    if (param_1[0x38] != 0) {
      FUN_00d424fc();
      piVar11 = (int *)param_1[0x38];
      DataMemoryBarrier(0xb);
      do {
        iVar9 = *piVar11;
        bVar30 = (bool)hasExclusiveAccess(piVar11);
      } while (!bVar30);
      *piVar11 = iVar9 + -1;
      if (iVar9 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f23b4(param_1[0x38]);
      }
    }
    FUN_008e9df8(param_1[0x37]);
    piVar11 = (int *)param_1[0x37];
    DataMemoryBarrier(0xb);
    do {
      iVar9 = *piVar11;
      bVar30 = (bool)hasExclusiveAccess(piVar11);
    } while (!bVar30);
    *piVar11 = iVar9 + -1;
    if (iVar9 == 1) {
      DataMemoryBarrier(0xb);
      FUN_008f2c4c(param_1[0x37]);
    }
    goto LAB_008dd4d8;
  }
  uVar39 = FUN_008ddb38(param_1 + 0x42,param_2);
  pppppiVar20 = (int *****)(uVar39 >> 0x20);
  if ((uVar39 & 1) == 0) {
    if (*(char *)(param_1 + 0x44) == '\x04') {
      FUN_00a07b4c(param_1 + 0x46);
    }
    else if (*(char *)(param_1 + 0x44) == '\x03') {
      puVar21 = (undefined4 *)param_1[0x46];
      uVar10 = param_1[0x45];
      pcVar13 = (code *)*puVar21;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar10);
      }
      if (puVar21[1] != 0) {
        thunk_FUN_016d3fb4(uVar10);
      }
    }
    if (pppppiVar20 != (int *****)0x0) {
      local_d0 = pppppiVar20;
      if ((DAT_018d9130 < 4) &&
         ((DAT_018d9644 - 1 < 2 ||
          ((DAT_018d9644 != 0 && (cVar3 = FUN_0169ac90(&DAT_018d963c), cVar3 != '\0')))))) {
        iVar9 = FUN_016949d8(DAT_018d963c);
        if (iVar9 != 0) {
          if (*(int ******)(DAT_018d963c + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186521c);
          }
          local_188 = *(int *****)(DAT_018d963c + 0x24);
          ppppiStack_184 = *(int *****)(DAT_018d963c + 0x28);
          local_8c = (int *****)&local_c4;
          local_b4 = (int *****)&DAT_00000001;
          local_c0 = (int *****)&local_e0;
          local_90 = (int *****)&local_190;
          local_e0 = (int *****)&local_d0;
          local_b8 = (int *****)&local_90;
          local_180 = (int *****)0x0;
          local_88 = (int ****)&DAT_018abb78;
          local_c4 = (int *****)&DAT_0034629a;
          local_dc = FUN_00604528;
          local_190 = *(int ******)(DAT_018d963c + 0x1c);
          local_18c = *(int ******)(DAT_018d963c + 0x20);
          local_b0 = (int ****)(DAT_018d963c + 0x1c);
          FUN_008ddfa4(&local_b8);
        }
      }
      (*(code *)**local_d0)();
    }
    while( true ) {
      *(undefined1 *)(param_1 + 0x44) = 0;
      puVar21 = param_1 + 0x37;
      param_1[0x43] = puVar21;
      param_1[0x42] = puVar21;
LAB_008dcc7c:
      FUN_008e7998(&local_190,*puVar21,*param_2);
      uVar10 = 1;
      bVar30 = ((uint)local_190 & 0xff) == 10;
      uVar1 = 1;
      if (bVar30) {
        uVar1 = 3;
      }
      *(undefined1 *)(param_1 + 0x44) = uVar1;
      if (bVar30) {
        uVar1 = 4;
        goto LAB_008dd4e4;
      }
      puVar8 = param_1 + 8;
      *puVar8 = (uint)local_190;
      param_1[9] = local_18c;
      param_1[10] = local_188;
      param_1[0xb] = ppppiStack_184;
      if ((char)*puVar8 == '\t') {
        if (((DAT_018d9130 < 4) &&
            ((DAT_018d9698 - 1 < 2 ||
             ((DAT_018d9698 != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9690), cVar3 != '\0')))))) &&
           (iVar9 = FUN_016949d8(DAT_018d9690), iVar9 != 0)) {
          if (*(int ******)(DAT_018d9690 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186522c);
          }
          local_188 = *(int *****)(DAT_018d9690 + 0x24);
          ppppiStack_184 = *(int *****)(DAT_018d9690 + 0x28);
          local_8c = (int *****)&local_e0;
          local_b8 = (int *****)&local_90;
          local_b4 = (int *****)&DAT_00000001;
          local_180 = (int *****)0x0;
          local_88 = (int ****)&DAT_018abb78;
          local_dc = (code *)0x4d;
          local_e0 = (int *****)&DAT_003462b8;
          local_190 = *(int ******)(DAT_018d9690 + 0x1c);
          local_18c = *(int ******)(DAT_018d9690 + 0x20);
          local_b0 = (int ****)(DAT_018d9690 + 0x1c);
          local_90 = (int *****)&local_190;
          FUN_008de070(&local_b8);
        }
        goto LAB_008dd48c;
      }
      *(undefined1 *)((int)param_1 + 0x101) = 1;
      param_1[0xc] = *puVar8;
      param_1[0xd] = param_1[9];
      param_1[0xe] = param_1[10];
      param_1[0xf] = param_1[0xb];
      if ((*puVar8 & 0xff) == 0) break;
      local_248 = *puVar8;
      uStack_244 = param_1[9];
      uStack_240 = param_1[10];
      local_23c = param_1[0xb];
      *(undefined1 *)((int)param_1 + 0x101) = 0;
      FUN_008ee7b0(&local_248,0);
      *(undefined1 *)((int)param_1 + 0x101) = 0;
    }
    *(undefined1 *)(param_1 + 0x46) = 0;
    param_1[0x39] = param_1[0xd];
    *(undefined1 *)(param_1 + 0x40) = 1;
    param_1[0x42] = param_1 + 4;
    param_1[0x3a] = param_1[0xe];
switchD_008d9310_caseD_0:
    puVar21 = (undefined4 *)param_1[0x42];
    param_1[0x43] = puVar21;
    uVar38 = (**(code **)(puVar21[1] + 0x10))(*puVar21);
    *(undefined8 *)(param_1 + 0x44) = uVar38;
LAB_008dce50:
    (**(code **)((int)((ulonglong)uVar38 >> 0x20) + 0xc))(&local_190,(int)uVar38,param_2);
    ppppiVar28 = local_188;
    pppppiVar7 = local_18c;
    pppppiVar20 = local_190;
    if (local_190 == (int *****)0x3 && local_18c == (int *****)0x0) {
      uVar1 = 5;
      *(undefined1 *)(param_1 + 0x46) = 3;
      uVar10 = 1;
    }
    else {
      puVar21 = (undefined4 *)param_1[0x45];
      uVar19 = param_1[0x44];
      pcVar13 = (code *)*puVar21;
      uVar10 = 0;
      if (pcVar13 != (code *)0x0) {
        (*pcVar13)(uVar19);
        uVar10 = extraout_r1;
      }
      if (puVar21[1] != 0) {
        thunk_FUN_016d3fb4(uVar19);
        uVar10 = extraout_r1_00;
      }
      if (pppppiVar20 == (int *****)&SUB_00000002 && pppppiVar7 == (int *****)0x0) {
        *(undefined1 *)((int)param_1 + 0xff) = 1;
        *(undefined1 *)(param_1 + 0x46) = 1;
        param_1[0x3b] = ppppiVar28;
        if (ppppiVar28 != (int ****)0x0) {
          *(undefined1 *)(param_1 + 0x44) = 0;
          param_1[0x42] = param_1 + 4;
switchD_008d9008_caseD_6:
          uVar39 = FUN_008ddb38(param_1 + 0x42,param_2);
          pppppiVar20 = (int *****)(uVar39 >> 0x20);
          if ((uVar39 & 1) == 0) {
            if (*(char *)(param_1 + 0x44) == '\x04') {
              FUN_00a07b4c(param_1 + 0x46);
            }
            else if (*(char *)(param_1 + 0x44) == '\x03') {
              puVar21 = (undefined4 *)param_1[0x46];
              uVar10 = param_1[0x45];
              pcVar13 = (code *)*puVar21;
              if (pcVar13 != (code *)0x0) {
                (*pcVar13)(uVar10);
              }
              if (puVar21[1] != 0) {
                thunk_FUN_016d3fb4(uVar10);
              }
            }
            if (pppppiVar20 != (int *****)0x0) {
              local_d0 = pppppiVar20;
              if ((DAT_018d9130 < 4) &&
                 ((DAT_018d9668 - 1 < 2 ||
                  ((DAT_018d9668 != 0 && (cVar3 = FUN_0169ac90(&DAT_018d9660), cVar3 != '\0')))))) {
                iVar9 = FUN_016949d8(DAT_018d9660);
                if (iVar9 != 0) {
                  if (*(int ******)(DAT_018d9660 + 0x20) == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186523c);
                  }
                  local_188 = *(int *****)(DAT_018d9660 + 0x24);
                  ppppiStack_184 = *(int *****)(DAT_018d9660 + 0x28);
                  local_8c = (int *****)&local_c4;
                  local_b4 = (int *****)&DAT_00000001;
                  local_c0 = (int *****)&local_e0;
                  local_90 = (int *****)&local_190;
                  local_e0 = (int *****)&local_d0;
                  local_b8 = (int *****)&local_90;
                  local_180 = (int *****)0x0;
                  local_88 = (int ****)&DAT_018abb78;
                  local_c4 = (int *****)&DAT_0034629a;
                  local_dc = FUN_00604528;
                  local_190 = *(int ******)(DAT_018d9660 + 0x1c);
                  local_18c = *(int ******)(DAT_018d9660 + 0x20);
                  local_b0 = (int ****)(DAT_018d9660 + 0x1c);
                  FUN_008de140(&local_b8);
                }
              }
              (*(code *)**local_d0)();
            }
            *(undefined2 *)((int)param_1 + 0xff) = 0;
            uVar39 = FUN_008e8e20(param_1[0x39],param_1[0x3b]);
            puVar21 = (undefined4 *)(uVar39 >> 0x20);
            if ((uVar39 & 1) != 0 && puVar21 != (undefined4 *)0x0) {
              (**(code **)*puVar21)(puVar21);
            }
            *(undefined1 *)((int)param_1 + 0xff) = 0;
            if (param_1[0x3a] != 0) {
              FUN_00d424fc();
              piVar11 = (int *)param_1[0x3a];
              DataMemoryBarrier(0xb);
              do {
                iVar9 = *piVar11;
                bVar30 = (bool)hasExclusiveAccess(piVar11);
              } while (!bVar30);
              *piVar11 = iVar9 + -1;
              if (iVar9 == 1) {
                DataMemoryBarrier(0xb);
                FUN_008f23b4(param_1[0x3a]);
              }
            }
            *(undefined1 *)(param_1 + 0x40) = 0;
            if (*(char *)(param_1 + 0xc) != '\0') {
              FUN_00aca43c();
            }
            *(undefined1 *)((int)param_1 + 0x101) = 0;
LAB_008dd48c:
            FUN_008e9df8(param_1[0x37]);
            piVar11 = (int *)param_1[0x37];
            DataMemoryBarrier(0xb);
            do {
              iVar9 = *piVar11;
              bVar30 = (bool)hasExclusiveAccess(piVar11);
            } while (!bVar30);
            *piVar11 = iVar9 + -1;
            if (iVar9 == 1) {
              DataMemoryBarrier(0xb);
              FUN_008f2c4c(param_1[0x37]);
            }
            if (*(char *)((int)param_1 + 0xf7) != '\0') {
              FUN_008d8460(param_1 + 4);
            }
LAB_008dd4d8:
            uVar10 = 0;
            uVar1 = 1;
            *(undefined1 *)((int)param_1 + 0xf7) = 0;
          }
          else {
            uVar10 = 1;
            uVar1 = 6;
          }
          goto LAB_008dd4e4;
        }
      }
      else {
        FUN_008f0d24(ppppiVar28,*(int *)(param_1[0x43] + 8) + 8,uVar10,pppppiVar20,pppppiVar7);
        (**(code **)(((undefined4 *)param_1[0x43])[1] + 0xc))
                  (&local_190,*(undefined4 *)param_1[0x43]);
        if (local_190 != (int *****)&SUB_00000002 || local_18c != (int *****)0x0) {
          FUN_016dd1aa(auStack_138,&local_190,0x58);
          FUN_008f0bc0(*(int *)(param_1[0x43] + 8) + 8,auStack_138);
        }
        *(undefined1 *)((int)param_1 + 0xff) = 1;
        *(undefined1 *)(param_1 + 0x46) = 1;
        param_1[0x3b] = 0;
      }
      *(undefined2 *)((int)param_1 + 0xff) = 0;
      uVar39 = FUN_008e8e20(param_1[0x39]);
      puVar21 = (undefined4 *)(uVar39 >> 0x20);
      if ((uVar39 & 1) != 0 && puVar21 != (undefined4 *)0x0) {
        (**(code **)*puVar21)(puVar21);
      }
      *(undefined2 *)((int)param_1 + 0xff) = 0;
      param_1[0x38] = param_1[0x3a];
      if (*(char *)(param_1 + 0xc) != '\0') {
        FUN_00aca43c();
      }
      iVar9 = param_1[6];
      *(undefined1 *)((int)param_1 + 0x101) = 0;
      param_1[0x3c] = iVar9 + 0xf0;
      uVar19 = *(undefined4 *)(iVar9 + 0xf4);
      uVar10 = *(undefined4 *)(iVar9 + 0xf8);
      param_1[0x42] = *(undefined4 *)(iVar9 + 0xf0);
      param_1[0x43] = uVar19;
      param_1[0x44] = uVar10;
      *(undefined1 *)(param_1 + 0x4f) = 0;
switchD_008d9008_caseD_7:
      FUN_008de24c(&local_238,param_1 + 0x42,*param_2);
      if (local_230 == &DAT_3b9aca00) {
        uVar10 = 1;
        uVar1 = 7;
      }
      else {
        param_1[0x10] = local_238;
        param_1[0x11] = uStack_234;
        param_1[0x12] = local_230;
        param_1[0x13] = uStack_22c;
        param_1[0x14] = uStack_228;
        param_1[0x15] = uStack_224;
        if (*(char *)(param_1 + 0x4f) == '\x03') {
          uVar10 = param_1[0x4a];
          FUN_00a07b4c(uVar10);
          thunk_FUN_016d3fb4(uVar10);
        }
        iVar9 = param_1[0x3c];
        uVar19 = *(undefined4 *)(iVar9 + 0x14);
        uVar10 = *(undefined4 *)(iVar9 + 0x10);
        param_1[0x44] = *(undefined4 *)(iVar9 + 0x18);
        param_1[0x42] = uVar10;
        param_1[0x43] = uVar19;
        *(undefined1 *)(param_1 + 0x4f) = 0;
switchD_008d9008_caseD_8:
        FUN_008de24c(&local_220,param_1 + 0x42,*param_2);
        if (local_218 == &DAT_3b9aca00) {
          uVar10 = 1;
          uVar1 = 8;
        }
        else {
          param_1[0x16] = local_220;
          param_1[0x17] = uStack_21c;
          param_1[0x18] = local_218;
          param_1[0x19] = uStack_214;
          param_1[0x1a] = uStack_210;
          param_1[0x1b] = uStack_20c;
          if (*(char *)(param_1 + 0x4f) == '\x03') {
            uVar10 = param_1[0x4a];
            FUN_00a07b4c(uVar10);
            thunk_FUN_016d3fb4(uVar10);
          }
          iVar9 = param_1[0x3c];
          uVar19 = *(undefined4 *)(iVar9 + 0x24);
          uVar10 = *(undefined4 *)(iVar9 + 0x20);
          param_1[0x44] = *(undefined4 *)(iVar9 + 0x28);
          param_1[0x42] = uVar10;
          param_1[0x43] = uVar19;
          *(undefined1 *)(param_1 + 0x4f) = 0;
switchD_008d9008_caseD_9:
          unaff_r8 = (int ****)(param_1 + 0x42);
          FUN_008de24c(&local_208,unaff_r8,*param_2);
          if (local_200 == &DAT_3b9aca00) {
            uVar10 = 1;
            uVar1 = 9;
          }
          else {
            param_1[0x1c] = local_208;
            param_1[0x1d] = uStack_204;
            param_1[0x1e] = local_200;
            param_1[0x1f] = uStack_1fc;
            param_1[0x20] = uStack_1f8;
            param_1[0x21] = uStack_1f4;
            if (*(char *)(param_1 + 0x4f) == '\x03') {
              uVar10 = param_1[0x4a];
              FUN_00a07b4c(uVar10);
              thunk_FUN_016d3fb4(uVar10);
            }
            iVar9 = param_1[0x3c];
            uVar10 = *(undefined4 *)(iVar9 + 0x34);
            pppiVar17 = *(int ****)(iVar9 + 0x30);
            param_1[0x44] = *(undefined4 *)(iVar9 + 0x38);
            *unaff_r8 = pppiVar17;
            param_1[0x43] = uVar10;
            *(undefined1 *)(param_1 + 0x4f) = 0;
switchD_008d9008_caseD_a:
            unaff_r7 = unaff_r8;
            FUN_008de24c(&local_1f0,param_1 + 0x42,*param_2);
            if (local_1e8 != &DAT_3b9aca00) {
              param_1[0x22] = local_1f0;
              param_1[0x23] = uStack_1ec;
              param_1[0x24] = local_1e8;
              param_1[0x25] = uStack_1e4;
              param_1[0x26] = uStack_1e0;
              param_1[0x27] = uStack_1dc;
              if (*(char *)(param_1 + 0x4f) == '\x03') {
                uVar10 = param_1[0x4a];
                FUN_00a07b4c(uVar10);
                thunk_FUN_016d3fb4(uVar10);
              }
LAB_008dc7a0:
              do {
                uVar5 = 0;
                pbVar22 = (byte *)((int)param_1 + 0xf5);
                *pbVar22 = 0;
                *(undefined1 *)(param_1 + 0x50) = 0;
                puVar21 = param_1 + 0x42;
                *puVar21 = param_1 + 0x22;
                param_1[0x4e] = param_1 + 0x16;
                param_1[0x4b] = param_1 + 0x10;
                param_1[0x48] = param_1 + 0x1c;
                param_1[0x52] = puVar21;
                *(undefined1 *)(param_1 + 0x4d) = 0;
                *(undefined1 *)(param_1 + 0x4a) = 0;
                *(undefined1 *)(param_1 + 0x47) = 0;
                param_1[0x45] = param_1 + 0x37;
                *(undefined1 *)(param_1 + 0x44) = 0;
                param_1[0x51] = pbVar22;
                ppppiVar28 = unaff_r7;
LAB_008d9988:
                uVar38 = thunk_FUN_016de0ee(uVar5,0x40);
                iVar9 = (int)uVar38 + (int)((ulonglong)uVar38 >> 0x20);
                puVar26 = (undefined4 *)*param_2;
                if (*(char *)(iVar9 + 0x38) == '\x01') {
LAB_008d99c8:
                  cVar3 = *(char *)(iVar9 + 0x30);
                  bVar30 = cVar3 == '\x01';
                  if (bVar30) {
                    cVar3 = *(char *)(iVar9 + 0x31);
                  }
                  if (!bVar30 || cVar3 != '\0') goto LAB_008d99dc;
                  FUN_016455a4(*puVar26,puVar26[1]);
                  goto LAB_008db29c;
                }
                if (*(char *)(iVar9 + 0x38) != '\x02') {
                  FUN_015e8e6c(iVar9,FUN_01626eac);
                  *(undefined1 *)(iVar9 + 0x38) = 1;
                  goto LAB_008d99c8;
                }
LAB_008d99dc:
                bVar2 = *pbVar22;
                bVar23 = bVar2 & 1 ^ 1;
                if ((bVar2 & 1) == 0) {
                  puVar29 = &DAT_01879154;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                  switch(*(undefined1 *)(puVar21 + 2)) {
                  case 0:
                    uVar10 = *puVar21;
                    puVar21[1] = uVar10;
                    break;
                  case 1:
                    goto switchD_008d9a04_caseD_1;
                  case 2:
                    goto switchD_008d9a04_caseD_2;
                  case 3:
                    uVar10 = puVar21[1];
                  }
                  FUN_016510c8(&local_190,uVar10,puVar26);
                  unaff_r7 = local_188;
                  unaff_r5 = local_18c;
                  uVar1 = 1;
                  if (local_188 == (int ****)&DAT_3b9aca00) {
                    uVar1 = 3;
                  }
                  *(undefined1 *)(puVar21 + 2) = uVar1;
                  if (local_188 != (int ****)&DAT_3b9aca00) {
                    *pbVar22 = *pbVar22 | 1;
                    param_1[0x28] = 0;
                    param_1[0x29] = 0;
                    param_1[0x2c] = local_188;
                    param_1[0x2a] = local_190;
                    param_1[0x2b] = local_18c;
                    param_1[0x2d] = local_270;
                    local_26c = local_190;
                    uVar38 = (**(code **)(param_1[5] + 0x2c))(param_1[4]);
                    *(undefined8 *)(param_1 + 0x42) = uVar38;
LAB_008d9ae4:
                    uVar39 = (**(code **)((int)((ulonglong)uVar38 >> 0x20) + 0xc))
                                       ((int)uVar38,param_2);
                    pppppiVar20 = (int *****)(uVar39 >> 0x20);
                    if ((uVar39 & 1) != 0) {
                      uVar10 = 1;
                      uVar1 = 0xc;
                      goto LAB_008dd4e4;
                    }
                    puVar21 = (undefined4 *)param_1[0x43];
                    uVar10 = param_1[0x42];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                    iVar9 = DAT_018d7fb8;
                    if (pppppiVar20 == (int *****)0x0) {
                      DataMemoryBarrier(0xb);
                      if (DAT_018d8068 == 0) {
                        puVar8 = (uint *)(DAT_018d7fb8 + 8);
                        do {
                          uVar5 = *puVar8;
                          piVar11 = (int *)(DAT_018d7fb8 + 0xc);
                          bVar30 = (bool)hasExclusiveAccess(puVar8);
                        } while (!bVar30);
                        *puVar8 = uVar5 + 1;
                        *(uint *)(iVar9 + 0xc) = *piVar11 + (uint)(0xfffffffe < uVar5);
                      }
                    }
                    else {
                      local_98 = pppppiVar20;
                      if ((DAT_018d9130 < 4) && (DAT_018d968c != '\0')) {
                        if (DAT_018d968c == '\x01') {
LAB_008d9ba8:
                          DataMemoryBarrier(0xb);
                          pcVar25 = s_SetGloba_00414c05;
                          puVar29 = &DAT_018ae394;
                          if (DAT_018dd984 == 2) {
                            pcVar25 = DAT_018daa74;
                            puVar29 = DAT_018daa78;
                            if (DAT_018daa70 != 0) {
                              pcVar25 = DAT_018daa74 +
                                        (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                            }
                          }
                          iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d9684);
                          if (iVar9 == 0) goto LAB_008d9d1c;
                        }
                        else if (DAT_018d968c != '\x02') {
                          cVar3 = FUN_0169ac90(&DAT_018d9684);
                          if (cVar3 == '\0') goto LAB_008d9d1c;
                          if (cVar3 != '\x02') goto LAB_008d9ba8;
                        }
                        if ((int *****)DAT_018d9684[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186526c);
                        }
                        local_d8 = DAT_018d9684 + 7;
                        local_90 = (int *****)*local_d8;
                        local_b4 = (int *****)&local_d0;
                        local_b8 = (int *****)&local_90;
                        local_88 = (int ****)DAT_018d9684[9];
                        local_84 = (int ****)DAT_018d9684[10];
                        local_e0 = (int *****)&local_b8;
                        local_80 = (int *****)0x0;
                        local_dc = (code *)0x1;
                        local_b0 = (int ****)&DAT_018abb78;
                        local_cc = (int *****)&local_c4;
                        local_d0 = (int *****)&DAT_00583446;
                        local_190 = (int *****)&DAT_00000001;
                        local_180 = (int *****)&local_e0;
                        local_c0 = (int *****)FUN_00604528;
                        local_c4 = (int *****)&local_98;
                        local_18c = (int *****)0x0;
                        DataMemoryBarrier(0xb);
                        pcVar25 = s_SetGloba_00414c05;
                        puVar29 = &DAT_018ae394;
                        if (DAT_018dd984 == 2) {
                          pcVar25 = DAT_018daa74;
                          puVar29 = DAT_018daa78;
                          if (DAT_018daa70 != 0) {
                            pcVar25 = DAT_018daa74 +
                                      (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                          }
                        }
                        local_17c = DAT_018d9684;
                        local_8c = (int *****)DAT_018d9684[8];
                        iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                        if (iVar9 != 0) {
                          (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                        }
                      }
LAB_008d9d1c:
                      (*(code *)**local_98)();
                    }
                    local_268 = unaff_r5;
                    goto LAB_008dc7a0;
                  }
                  bVar2 = *pbVar22;
                }
                if ((bVar2 & 2) != 0) {
LAB_008d9db4:
                  if ((bVar2 & 4) == 0) {
                    puVar29 = &DAT_01879154;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                    switch(*(undefined1 *)(puVar21 + 8)) {
                    case 0:
                      uVar10 = puVar21[6];
                      puVar21[7] = uVar10;
                      break;
                    case 1:
                      goto switchD_008d9a04_caseD_1;
                    case 2:
                      goto switchD_008d9a04_caseD_2;
                    case 3:
                      uVar10 = puVar21[7];
                    }
                    FUN_016510c8(&local_190,uVar10,puVar26);
                    bVar23 = 1;
                    uVar1 = 1;
                    if (local_188 == (int ****)&DAT_3b9aca00) {
                      uVar1 = 3;
                    }
                    *(undefined1 *)(puVar21 + 8) = uVar1;
                    if (local_188 != (int ****)&DAT_3b9aca00) {
                      *pbVar22 = *pbVar22 | 4;
                      param_1[0x28] = 2;
                      param_1[0x29] = 0;
                      param_1[0x2a] = local_190;
                      param_1[0x2b] = local_18c;
                      local_268 = local_18c;
                      puVar21 = param_1 + 4;
                      param_1[0x42] = puVar21;
                      param_1[0x2c] = local_188;
                      local_25c = local_188;
                      param_1[0x2d] = local_270;
                      *(undefined1 *)(param_1 + 0x48) = 0;
                      local_26c = local_190;
LAB_008d9ff4:
                      local_254 = (int ****)(param_1 + 0x48);
                      iVar9 = puVar21[2];
                      ppppiVar28 = (int ****)(iVar9 + 0x80);
                      do {
                        if (*ppppiVar28 != (int ***)0x0) {
                          ClearExclusiveLocal();
                          FUN_015bf680(ppppiVar28);
                          goto LAB_008da048;
                        }
                        bVar30 = (bool)hasExclusiveAccess(ppppiVar28);
                      } while (!bVar30);
                      *ppppiVar28 = (int ***)0x1;
                      DataMemoryBarrier(0xb);
LAB_008da048:
                      uVar5 = 0;
                      if ((DAT_018dd988 & 0x7fffffff) == 0) {
                        cVar3 = *(char *)(iVar9 + 0x84);
                      }
                      else {
                        uVar5 = FUN_015bf3f8();
                        uVar5 = uVar5 ^ 1;
                        cVar3 = *(char *)(iVar9 + 0x84);
                      }
                      if (cVar3 != '\0') {
                        local_18c._1_3_ = (undefined3)((uint)local_18c >> 8);
                        local_18c = (int *****)CONCAT31(local_18c._1_3_,(char)uVar5);
                        local_190 = (int *****)ppppiVar28;
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74f8(&DAT_00347788,0x18,&local_190,&DAT_01866df4);
                      }
                      FUN_015f3b0c(&local_190,1);
                      uVar12 = *(uint *)(iVar9 + 0x9c);
                      uVar18 = *(uint *)(iVar9 + 0xac);
                      pppppiVar7 = (int *****)(*(uint *)(iVar9 + 0xa8) + *(uint *)(iVar9 + 0x98));
                      pppppiVar20 = (int *****)
                                    (uVar18 + uVar12 +
                                    (uint)CARRY4(*(uint *)(iVar9 + 0xa8),*(uint *)(iVar9 + 0x98)));
                      if ((int)uVar12 < 0 !=
                          (int)((uVar18 ^ (uint)pppppiVar20) & ~(uVar18 ^ uVar12)) < 0) {
LAB_008da0f8:
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
                      }
                      ppppiVar27 = (int ****)(*(int *)(iVar9 + 0xa0) + *(int *)(iVar9 + 0xb0));
                      if (&DAT_3b9aca00 <= ppppiVar27) {
                        bVar30 = (int *****)0xfffffffe < pppppiVar7;
                        pppppiVar7 = (int *****)((int)pppppiVar7 + 1);
                        pppppiVar24 = (int *****)((int)pppppiVar20 + (uint)bVar30);
                        if ((int)(((uint)pppppiVar20 ^ (uint)pppppiVar24) & ~(uint)pppppiVar20) < 0)
                        goto LAB_008da0f8;
                        ppppiVar27 = ppppiVar27 + -250000000;
                        pppppiVar20 = pppppiVar24;
                      }
                      bVar30 = (int)local_18c -
                               (int)((int)pppppiVar20 + (uint)(local_190 < pppppiVar7)) < 0 !=
                               (SBORROW4((int)local_18c,(int)pppppiVar20) !=
                               SBORROW4((int)local_18c - (int)pppppiVar20,
                                        (uint)(local_190 < pppppiVar7)));
                      if (local_190 == pppppiVar7 && local_18c == pppppiVar20) {
                        bVar30 = local_188 < ppppiVar27;
                      }
                      uVar12 = (uint)bVar30 & *(uint *)(iVar9 + 0x88);
                      if (uVar12 == 1) {
                        local_260 = *(int *****)(iVar9 + 0x90);
                        local_258 = *(int *****)(iVar9 + 0x94);
                      }
                      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                         (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
                        *(undefined1 *)(iVar9 + 0x84) = 1;
                      }
                      DataMemoryBarrier(0xb);
                      do {
                        pppiVar17 = *ppppiVar28;
                        bVar30 = (bool)hasExclusiveAccess(ppppiVar28);
                      } while (!bVar30);
                      *ppppiVar28 = (int ***)0x0;
                      if (pppiVar17 == (int ***)0x2) {
                        FUN_016d6968(0xf0,ppppiVar28,0x81,1);
                        if (uVar12 != 0) goto LAB_008da1c0;
LAB_008db644:
                        *(undefined1 *)(param_1 + 0x47) = 0;
                        param_1[0x43] = puVar21;
                        unaff_r6 = local_260;
                        unaff_r10 = local_25c;
switchD_008d9388_caseD_3:
                        local_254 = (int ****)(param_1 + 0x48);
                        FUN_008df750(&local_190,param_1 + 0x43,param_2);
                        ppppiVar27 = ppppiStack_184;
                        ppppiVar28 = local_188;
                        pppppiVar7 = local_18c;
                        pppppiVar20 = local_190;
                        if (local_190 == (int *****)&SUB_00000002) {
                          *(undefined1 *)local_254 = 3;
                          uVar10 = 1;
                          uVar1 = 0x14;
                          goto LAB_008dd4e4;
                        }
                        if (*(char *)(param_1 + 0x47) == '\x03') {
                          puVar21 = (undefined4 *)param_1[0x46];
                          uVar10 = param_1[0x45];
                          pcVar13 = (code *)*puVar21;
                          if (pcVar13 != (code *)0x0) {
                            (*pcVar13)(uVar10);
                          }
                          if (puVar21[1] != 0) {
                            thunk_FUN_016d3fb4(uVar10);
                          }
                        }
                        *(undefined1 *)local_254 = 1;
                        local_260 = unaff_r6;
                        if (((uint)pppppiVar20 & 1) == 0) {
                          local_25c = unaff_r10;
                          goto LAB_008db8d4;
                        }
                        local_98 = pppppiVar7;
                        if ((DAT_018d9130 < 4) && (DAT_018d9674 != '\0')) {
                          if (DAT_018d9674 == '\x01') {
LAB_008db728:
                            DataMemoryBarrier(0xb);
                            puVar29 = &DAT_018ae394;
                            pcVar25 = s_SetGloba_00414c05;
                            if (DAT_018dd984 == 2) {
                              pcVar25 = DAT_018daa74;
                              puVar29 = DAT_018daa78;
                              if (DAT_018daa70 != 0) {
                                pcVar25 = DAT_018daa74 +
                                          (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                              }
                            }
                            iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d966c);
                            if (iVar9 == 0) goto LAB_008db988;
                          }
                          else if (DAT_018d9674 != '\x02') {
                            cVar3 = FUN_0169ac90(&DAT_018d966c);
                            if (cVar3 == '\0') goto LAB_008db988;
                            if (cVar3 != '\x02') goto LAB_008db728;
                          }
                          if ((int *****)DAT_018d966c[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186527c);
                          }
                          local_b4 = (int *****)&local_d0;
                          local_88 = (int ****)DAT_018d966c[9];
                          local_84 = (int ****)DAT_018d966c[10];
                          local_d8 = DAT_018d966c + 7;
                          local_90 = (int *****)*local_d8;
                          local_b8 = (int *****)&local_90;
                          local_e0 = (int *****)&local_b8;
                          local_cc = (int *****)&local_c4;
                          local_c4 = (int *****)&local_98;
                          local_80 = (int *****)0x0;
                          local_18c = (int *****)0x0;
                          local_180 = (int *****)&local_e0;
                          local_dc = (code *)0x1;
                          local_b0 = (int ****)&DAT_018abb78;
                          local_d0 = (int *****)&DAT_00591449;
                          local_c0 = (int *****)FUN_00604528;
                          local_190 = (int *****)&DAT_00000001;
                          DataMemoryBarrier(0xb);
                          pcVar25 = s_SetGloba_00414c05;
                          puVar29 = &DAT_018ae394;
                          if (DAT_018dd984 == 2) {
                            pcVar25 = DAT_018daa74;
                            puVar29 = DAT_018daa78;
                            if (DAT_018daa70 != 0) {
                              pcVar25 = DAT_018daa74 +
                                        (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                            }
                          }
                          local_17c = DAT_018d966c;
                          local_8c = (int *****)DAT_018d966c[8];
                          iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                          if (iVar9 != 0) {
                            (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                          }
                        }
LAB_008db988:
                        (*(code *)**local_98)();
                        unaff_r7 = unaff_r10;
                      }
                      else {
                        if (uVar12 == 0) goto LAB_008db644;
LAB_008da1c0:
                        *(undefined1 *)local_254 = 1;
                        ppppiVar28 = local_260;
                        ppppiVar27 = local_258;
LAB_008db8d4:
                        DataMemoryBarrier(0xb);
                        unaff_r7 = local_25c;
                        if (DAT_018d8068 == 0) {
                          local_b4 = (int *****)&DAT_00000008;
                          local_b8 = (int *****)&DAT_0056a0c0;
                          FUN_009b4e0c(&local_90,DAT_018d7fb0 + 8,&local_b8,1);
                          pppppiVar20 = local_8c;
                          if (local_90 != (int *****)&DAT_00000005) {
                            ppppiStack_184 = local_84;
                            local_190 = local_90;
                            local_18c = local_8c;
                            local_188 = local_88;
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_190,&DAT_01869dec);
                          }
                          do {
                            bVar30 = (bool)hasExclusiveAccess(local_8c + 2);
                          } while (!bVar30);
                          local_8c[2] = ppppiVar28;
                          pppppiVar20[3] = ppppiVar27;
                          DataMemoryBarrier(0xb);
                          do {
                            ppppiVar28 = *pppppiVar20;
                            bVar30 = (bool)hasExclusiveAccess(pppppiVar20);
                          } while (!bVar30);
                          *pppppiVar20 = (int ****)((int)ppppiVar28 + -1);
                          if (ppppiVar28 == (int ****)0x1) {
                            DataMemoryBarrier(0xb);
                            FUN_0078fa50();
                          }
                        }
                      }
                      uVar10 = param_1[0x20];
                      FUN_0165a798(&local_190);
                      uVar5 = param_1[0x1d];
                      puVar16 = (undefined1 *)((int)local_190 + param_1[0x1c]);
                      puVar15 = (undefined1 *)
                                ((int)local_18c + CARRY4((uint)local_190,param_1[0x1c]) + uVar5);
                      if ((int)uVar5 < 0 !=
                          (int)(((uint)local_18c ^ (uint)puVar15) & ~((uint)local_18c ^ uVar5)) < 0)
                      {
LAB_008dba20:
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
                      }
                      if (&DAT_3b9aca00 <= (undefined *)(param_1[0x1e] + (int)local_188)) {
                        bVar30 = (undefined1 *)0xfffffffe < puVar16;
                        puVar16 = puVar16 + 1;
                        if ((int)(((uint)puVar15 ^ (uint)(puVar15 + bVar30)) & ~(uint)puVar15) < 0)
                        goto LAB_008dba20;
                        puVar15 = puVar15 + bVar30;
                      }
                      FUN_01653364(uVar10,1,puVar16,puVar15);
                      goto LAB_008dc7a0;
                    }
                    bVar2 = *pbVar22;
                  }
                  if ((bVar2 & 8) == 0) {
                    puVar29 = &DAT_01879154;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                    switch(*(undefined1 *)(puVar21 + 0xb)) {
                    case 0:
                      uVar10 = puVar21[9];
                      puVar21[10] = uVar10;
                      break;
                    case 1:
                      goto switchD_008d9a04_caseD_1;
                    case 2:
                      goto switchD_008d9a04_caseD_2;
                    case 3:
                      uVar10 = puVar21[10];
                    }
                    FUN_016510c8(&local_190,uVar10,puVar26);
                    uVar1 = 1;
                    if (local_188 == (int ****)&DAT_3b9aca00) {
                      uVar1 = 3;
                    }
                    *(undefined1 *)(puVar21 + 0xb) = uVar1;
                    if (local_188 != (int ****)&DAT_3b9aca00) {
                      *pbVar22 = *pbVar22 | 8;
                      param_1[0x28] = 3;
                      param_1[0x29] = 0;
                      param_1[0x2a] = local_190;
                      param_1[0x2b] = local_18c;
                      local_268 = local_18c;
                      puVar21 = param_1 + 4;
                      param_1[0x42] = puVar21;
                      param_1[0x2c] = local_188;
                      local_254 = local_188;
                      param_1[0x2d] = local_270;
                      *(undefined1 *)(param_1 + 0x48) = 0;
                      local_26c = local_190;
LAB_008da7a4:
                      local_25c = (int ****)(param_1 + 0x48);
                      iVar9 = puVar21[2];
                      ppppiVar28 = (int ****)(iVar9 + 0xb8);
                      do {
                        if (*ppppiVar28 != (int ***)0x0) {
                          ClearExclusiveLocal();
                          FUN_015bf680(ppppiVar28);
                          goto LAB_008da7f0;
                        }
                        bVar30 = (bool)hasExclusiveAccess(ppppiVar28);
                      } while (!bVar30);
                      *ppppiVar28 = (int ***)0x1;
                      DataMemoryBarrier(0xb);
LAB_008da7f0:
                      uVar5 = 0;
                      if ((DAT_018dd988 & 0x7fffffff) == 0) {
                        cVar3 = *(char *)(iVar9 + 0xbc);
                      }
                      else {
                        uVar5 = FUN_015bf3f8();
                        uVar5 = uVar5 ^ 1;
                        cVar3 = *(char *)(iVar9 + 0xbc);
                      }
                      if (cVar3 != '\0') {
                        local_18c._1_3_ = (undefined3)((uint)local_18c >> 8);
                        local_18c = (int *****)CONCAT31(local_18c._1_3_,(char)uVar5);
                        local_190 = (int *****)ppppiVar28;
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74f8(&DAT_00347772,0x16,&local_190,&DAT_01866de4);
                      }
                      FUN_015f3b0c(&local_190,1);
                      uVar12 = *(uint *)(iVar9 + 0xd4);
                      uVar18 = *(uint *)(iVar9 + 0xe4);
                      pppppiVar7 = (int *****)(*(uint *)(iVar9 + 0xe0) + *(uint *)(iVar9 + 0xd0));
                      pppppiVar20 = (int *****)
                                    (uVar18 + uVar12 +
                                    (uint)CARRY4(*(uint *)(iVar9 + 0xe0),*(uint *)(iVar9 + 0xd0)));
                      if ((int)uVar12 < 0 !=
                          (int)((uVar18 ^ (uint)pppppiVar20) & ~(uVar18 ^ uVar12)) < 0) {
LAB_008da8a0:
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
                      }
                      ppppiVar27 = (int ****)(*(int *)(iVar9 + 0xd8) + *(int *)(iVar9 + 0xe8));
                      if (&DAT_3b9aca00 <= ppppiVar27) {
                        bVar30 = (int *****)0xfffffffe < pppppiVar7;
                        pppppiVar7 = (int *****)((int)pppppiVar7 + 1);
                        pppppiVar24 = (int *****)((int)pppppiVar20 + (uint)bVar30);
                        if ((int)(((uint)pppppiVar20 ^ (uint)pppppiVar24) & ~(uint)pppppiVar20) < 0)
                        goto LAB_008da8a0;
                        ppppiVar27 = ppppiVar27 + -250000000;
                        pppppiVar20 = pppppiVar24;
                      }
                      bVar30 = (int)local_18c -
                               (int)((int)pppppiVar20 + (uint)(local_190 < pppppiVar7)) < 0 !=
                               (SBORROW4((int)local_18c,(int)pppppiVar20) !=
                               SBORROW4((int)local_18c - (int)pppppiVar20,
                                        (uint)(local_190 < pppppiVar7)));
                      if (local_190 == pppppiVar7 && local_18c == pppppiVar20) {
                        bVar30 = local_188 < ppppiVar27;
                      }
                      uVar12 = (uint)bVar30 & *(uint *)(iVar9 + 0xc0);
                      unaff_r6 = local_264;
                      if (uVar12 == 1) {
                        unaff_r6 = *(int *****)(iVar9 + 200);
                        local_274 = *(int *****)(iVar9 + 0xcc);
                      }
                      if (((uVar5 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
                         (iVar14 = FUN_015bf3f8(), iVar14 == 0)) {
                        *(undefined1 *)(iVar9 + 0xbc) = 1;
                      }
                      DataMemoryBarrier(0xb);
                      do {
                        pppiVar17 = *ppppiVar28;
                        bVar30 = (bool)hasExclusiveAccess(ppppiVar28);
                      } while (!bVar30);
                      *ppppiVar28 = (int ***)0x0;
                      if (pppiVar17 == (int ***)0x2) {
                        FUN_016d6968(0xf0,ppppiVar28,0x81,1);
                        if (uVar12 != 0) goto LAB_008da968;
LAB_008dbadc:
                        *(undefined1 *)(param_1 + 0x47) = 0;
                        param_1[0x43] = puVar21;
                        unaff_r8 = local_254;
switchD_008d9188_caseD_3:
                        local_25c = (int ****)(param_1 + 0x48);
                        FUN_008df44c(&local_190,param_1 + 0x43,param_2);
                        ppppiVar27 = ppppiStack_184;
                        ppppiVar28 = local_188;
                        pppppiVar7 = local_18c;
                        pppppiVar20 = local_190;
                        if (local_190 == (int *****)&SUB_00000002) {
                          *(undefined1 *)local_25c = 3;
                          uVar10 = 1;
                          uVar1 = 0x15;
                          goto LAB_008dd4e4;
                        }
                        if (*(char *)(param_1 + 0x47) == '\x03') {
                          puVar21 = (undefined4 *)param_1[0x46];
                          uVar10 = param_1[0x45];
                          pcVar13 = (code *)*puVar21;
                          if (pcVar13 != (code *)0x0) {
                            (*pcVar13)(uVar10);
                          }
                          if (puVar21[1] != 0) {
                            thunk_FUN_016d3fb4(uVar10);
                          }
                        }
                        *(undefined1 *)local_25c = 1;
                        local_264 = unaff_r6;
                        if (((uint)pppppiVar20 & 1) == 0) {
                          local_254 = unaff_r8;
                          goto LAB_008dbd90;
                        }
                        local_98 = pppppiVar7;
                        if ((DAT_018d9130 < 4) && (DAT_018d9650 != '\0')) {
                          if (DAT_018d9650 == '\x01') {
LAB_008dbbd0:
                            DataMemoryBarrier(0xb);
                            puVar29 = &DAT_018ae394;
                            pcVar25 = s_SetGloba_00414c05;
                            if (DAT_018dd984 == 2) {
                              pcVar25 = DAT_018daa74;
                              puVar29 = DAT_018daa78;
                              if (DAT_018daa70 != 0) {
                                pcVar25 = DAT_018daa74 +
                                          (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                              }
                            }
                            iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d9648);
                            if (iVar9 == 0) goto LAB_008dbe58;
                          }
                          else if (DAT_018d9650 != '\x02') {
                            cVar3 = FUN_0169ac90(&DAT_018d9648);
                            if (cVar3 == '\0') goto LAB_008dbe58;
                            if (cVar3 != '\x02') goto LAB_008dbbd0;
                          }
                          if ((int *****)DAT_018d9648[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186528c);
                          }
                          local_b4 = (int *****)&local_d0;
                          local_88 = (int ****)DAT_018d9648[9];
                          local_84 = (int ****)DAT_018d9648[10];
                          local_d8 = DAT_018d9648 + 7;
                          local_90 = (int *****)*local_d8;
                          local_b8 = (int *****)&local_90;
                          local_e0 = (int *****)&local_b8;
                          local_cc = (int *****)&local_c4;
                          local_80 = (int *****)0x0;
                          local_dc = (code *)0x1;
                          local_b0 = (int ****)&DAT_018abb78;
                          local_18c = (int *****)0x0;
                          local_180 = (int *****)&local_e0;
                          local_d0 = (int *****)&DAT_00594079;
                          local_c4 = (int *****)&local_98;
                          local_c0 = (int *****)FUN_00604528;
                          local_190 = (int *****)&DAT_00000001;
                          DataMemoryBarrier(0xb);
                          pcVar25 = s_SetGloba_00414c05;
                          puVar29 = &DAT_018ae394;
                          if (DAT_018dd984 == 2) {
                            pcVar25 = DAT_018daa74;
                            puVar29 = DAT_018daa78;
                            if (DAT_018daa70 != 0) {
                              pcVar25 = DAT_018daa74 +
                                        (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                            }
                          }
                          local_17c = DAT_018d9648;
                          local_8c = (int *****)DAT_018d9648[8];
                          iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                          if (iVar9 != 0) {
                            (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                          }
                        }
LAB_008dbe58:
                        (*(code *)**local_98)();
                        unaff_r7 = unaff_r8;
                      }
                      else {
                        if (uVar12 == 0) goto LAB_008dbadc;
LAB_008da968:
                        *(undefined1 *)local_25c = 1;
                        ppppiVar28 = unaff_r6;
                        ppppiVar27 = local_274;
                        local_264 = unaff_r6;
LAB_008dbd90:
                        DataMemoryBarrier(0xb);
                        unaff_r7 = local_254;
                        if (DAT_018d8068 == 0) {
                          local_ac = 3;
                          local_b0 = (int ****)0x3ce66d;
                          local_b4 = (int *****)0x3;
                          local_b8 = (int *****)0x35a1ab;
                          FUN_009b4e0c(&local_90,DAT_018d8008 + 8,&local_b8,2);
                          pppppiVar20 = local_8c;
                          if (local_90 != (int *****)&DAT_00000005) {
                            ppppiStack_184 = local_84;
                            local_190 = local_90;
                            local_18c = local_8c;
                            local_188 = local_88;
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_190,&DAT_01869dec);
                          }
                          do {
                            bVar30 = (bool)hasExclusiveAccess(local_8c + 2);
                          } while (!bVar30);
                          local_8c[2] = ppppiVar28;
                          pppppiVar20[3] = ppppiVar27;
                          DataMemoryBarrier(0xb);
                          do {
                            ppppiVar28 = *pppppiVar20;
                            bVar30 = (bool)hasExclusiveAccess(pppppiVar20);
                          } while (!bVar30);
                          *pppppiVar20 = (int ****)((int)ppppiVar28 + -1);
                          unaff_r7 = local_254;
                          if (ppppiVar28 == (int ****)0x1) {
                            DataMemoryBarrier(0xb);
                            FUN_0078fa50();
                            unaff_r7 = local_254;
                          }
                        }
                      }
                      uVar10 = param_1[0x14];
                      FUN_0165a798(&local_190);
                      uVar5 = param_1[0x10];
                      uVar12 = param_1[0x11];
                      puVar16 = (undefined1 *)((int)local_190 + uVar5);
                      puVar15 = (undefined1 *)
                                ((int)local_18c + CARRY4((uint)local_190,uVar5) + uVar12);
                      if ((int)uVar12 < 0 !=
                          (int)(((uint)local_18c ^ (uint)puVar15) & ~((uint)local_18c ^ uVar12)) < 0
                         ) {
LAB_008dbee8:
                    /* WARNING: Subroutine does not return */
                        FUN_00fb74b8(&DAT_00410edf,0x28,&DAT_018ab600);
                      }
                      if (&DAT_3b9aca00 <= (undefined *)(param_1[0x12] + (int)local_188)) {
                        bVar30 = (undefined1 *)0xfffffffe < puVar16;
                        puVar16 = puVar16 + 1;
                        if ((int)(((uint)puVar15 ^ (uint)(puVar15 + bVar30)) & ~(uint)puVar15) < 0)
                        goto LAB_008dbee8;
                        puVar15 = puVar15 + bVar30;
                      }
                      FUN_01653364(uVar10,1,puVar16,puVar15);
                      goto LAB_008dc7a0;
                    }
                    if ((*pbVar22 & 0x10) == 0) goto LAB_008da220;
                  }
                  else if ((bVar2 & 0x10) == 0) {
LAB_008da220:
                    puVar29 = &DAT_01879154;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                    switch(*(undefined1 *)(puVar21 + 0xe)) {
                    case 0:
                      uVar10 = puVar21[0xc];
                      puVar21[0xd] = uVar10;
                      break;
                    case 1:
switchD_008d9a04_caseD_1:
                    /* WARNING: Subroutine does not return */
                      FUN_00fb7ca0();
                    case 2:
switchD_008d9a04_caseD_2:
                    /* WARNING: Subroutine does not return */
                      FUN_00fb7cc0(puVar29);
                    case 3:
                      uVar10 = puVar21[0xd];
                    }
                    FUN_016510c8(&local_190,uVar10,puVar26);
                    unaff_r8 = local_188;
                    unaff_r5 = local_18c;
                    uVar1 = 1;
                    if (local_188 == (int ****)&DAT_3b9aca00) {
                      uVar1 = 3;
                    }
                    *(undefined1 *)(puVar21 + 0xe) = uVar1;
                    if (local_188 != (int ****)&DAT_3b9aca00) {
                      *pbVar22 = *pbVar22 | 0x10;
                      param_1[0x29] = 0;
                      param_1[0x2c] = local_188;
                      param_1[0x28] = 4;
                      param_1[0x2a] = local_190;
                      param_1[0x2b] = local_18c;
                      param_1[0x2d] = local_270;
                      local_26c = local_190;
                      uVar38 = (**(code **)(param_1[5] + 0x28))(param_1[4]);
                      *(undefined8 *)(param_1 + 0x42) = uVar38;
LAB_008da2dc:
                      uVar39 = (**(code **)((int)((ulonglong)uVar38 >> 0x20) + 0xc))
                                         ((int)uVar38,param_2);
                      pppppiVar20 = (int *****)(uVar39 >> 0x20);
                      if ((int)uVar39 == 2) {
                        uVar10 = 1;
                        uVar1 = 0x16;
                        goto LAB_008dd4e4;
                      }
                      puVar21 = (undefined4 *)param_1[0x43];
                      uVar10 = param_1[0x42];
                      pcVar13 = (code *)*puVar21;
                      if (pcVar13 != (code *)0x0) {
                        (*pcVar13)(uVar10);
                      }
                      if (puVar21[1] != 0) {
                        thunk_FUN_016d3fb4(uVar10);
                      }
                      unaff_r7 = unaff_r8;
                      local_268 = unaff_r5;
                      if ((uVar39 & 1) == 0) {
                        DataMemoryBarrier(0xb);
                        if (DAT_018d8068 == 0) {
                          ppppiVar28 = pppppiVar20[3];
                          for (iVar9 = (int)pppppiVar20[4] * 0x30; iVar9 != 0; iVar9 = iVar9 + -0x30
                              ) {
                            FUN_009b2b98(ppppiVar28);
                            ppppiVar28 = ppppiVar28 + 0xc;
                          }
                        }
                        iVar9 = param_1[0x38];
                        local_90 = (int *****)CONCAT31(local_90._1_3_,4);
                        local_8c = pppppiVar20;
                        if (iVar9 == 0) {
LAB_008dc010:
                          local_b8 = local_90;
                          local_b0 = local_88;
                          local_190 = local_90;
                          local_188 = local_88;
                          ppppiStack_184 = (int ****)CONCAT31(ppppiStack_184._1_3_,1);
                          local_18c = pppppiVar20;
                          local_b4 = pppppiVar20;
                    /* WARNING: Subroutine does not return */
                          FUN_00fb74f8(&DAT_003462de,0x23,&local_190,&DAT_018653fc);
                        }
                        uVar5 = *(uint *)(iVar9 + 0x10);
                        puVar8 = (uint *)(iVar9 + 0x10);
                        DataMemoryBarrier(0xb);
                        while( true ) {
                          if (uVar5 < 0x80000000) goto LAB_008dc010;
                          if ((~uVar5 & 0x7fffffff) == 0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00faa464(&DAT_0040888b,0x46,&DAT_0187b670);
                          }
                          uVar12 = *puVar8;
                          if (*puVar8 == uVar5) break;
LAB_008da578:
                          uVar5 = uVar12;
                          ClearExclusiveLocal();
                          DataMemoryBarrier(0xb);
                        }
                        DataMemoryBarrier(0xb);
                        while (bVar30 = (bool)hasExclusiveAccess(puVar8), !bVar30) {
                          uVar12 = *puVar8;
                          if (*puVar8 != uVar5) goto LAB_008da578;
                        }
                        *puVar8 = uVar5 + 1 | 0x80000000;
                        DataMemoryBarrier(0xb);
                        local_190 = local_90;
                        local_188 = local_88;
                        ppppiStack_184 = (int ****)0x0;
                        local_18c = pppppiVar20;
                        puVar21 = (undefined4 *)thunk_FUN_016d4a50(0x10);
                        if (puVar21 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
                          FUN_00600874(4,0x10);
                        }
                        *puVar21 = local_190;
                        puVar21[1] = local_18c;
                        puVar21[2] = local_188;
                        puVar21[3] = ppppiStack_184;
                        piVar11 = (int *)(iVar9 + 8);
                        DataMemoryBarrier(0xb);
                        do {
                          iVar14 = *piVar11;
                          bVar30 = (bool)hasExclusiveAccess(piVar11);
                        } while (!bVar30);
                        *piVar11 = (int)puVar21;
                        DataMemoryBarrier(0xb);
                        *(undefined4 **)(iVar14 + 0xc) = puVar21;
                        puVar8 = (uint *)(iVar9 + 0x20);
                        DataMemoryBarrier(0xb);
                        do {
                          uVar5 = *puVar8;
                          bVar30 = (bool)hasExclusiveAccess(puVar8);
                        } while (!bVar30);
                        *puVar8 = uVar5 | 2;
                        DataMemoryBarrier(0xb);
                        if (uVar5 == 0) {
                          iVar14 = *(int *)(iVar9 + 0x18);
                          *(undefined4 *)(iVar9 + 0x18) = 0;
                          DataMemoryBarrier(0xb);
                          do {
                            bVar30 = (bool)hasExclusiveAccess(puVar8);
                          } while (!bVar30);
                          *puVar8 = *puVar8 & 0xfffffffd;
                          if (iVar14 != 0) {
                            (**(code **)(iVar14 + 4))(*(undefined4 *)(iVar9 + 0x1c));
                          }
                        }
                      }
                      else {
                        local_98 = pppppiVar20;
                        if ((DAT_018d9130 < 4) && (DAT_018d9680 != '\0')) {
                          if (DAT_018d9680 == '\x01') {
LAB_008da38c:
                            DataMemoryBarrier(0xb);
                            puVar29 = &DAT_018ae394;
                            pcVar25 = s_SetGloba_00414c05;
                            if (DAT_018dd984 == 2) {
                              pcVar25 = DAT_018daa74;
                              puVar29 = DAT_018daa78;
                              if (DAT_018daa70 != 0) {
                                pcVar25 = DAT_018daa74 +
                                          (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                              }
                            }
                            iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d9678);
                            if (iVar9 == 0) goto LAB_008da6cc;
                          }
                          else if (DAT_018d9680 != '\x02') {
                            cVar3 = FUN_0169ac90(&DAT_018d9678);
                            if (cVar3 == '\0') goto LAB_008da6cc;
                            if (cVar3 != '\x02') goto LAB_008da38c;
                          }
                          if ((int *****)DAT_018d9678[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186525c);
                          }
                          local_b4 = (int *****)&local_d0;
                          local_88 = (int ****)DAT_018d9678[9];
                          local_84 = (int ****)DAT_018d9678[10];
                          local_d8 = DAT_018d9678 + 7;
                          local_90 = (int *****)*local_d8;
                          local_b8 = (int *****)&local_90;
                          local_e0 = (int *****)&local_b8;
                          local_cc = (int *****)&local_c4;
                          local_c4 = (int *****)&local_98;
                          local_80 = (int *****)0x0;
                          local_18c = (int *****)0x0;
                          local_180 = (int *****)&local_e0;
                          local_dc = (code *)0x1;
                          local_b0 = (int ****)&DAT_018abb78;
                          local_d0 = (int *****)&DAT_00585430;
                          local_c0 = (int *****)FUN_00604528;
                          local_190 = (int *****)&DAT_00000001;
                          DataMemoryBarrier(0xb);
                          pcVar25 = s_SetGloba_00414c05;
                          puVar29 = &DAT_018ae394;
                          if (DAT_018dd984 == 2) {
                            pcVar25 = DAT_018daa74;
                            puVar29 = DAT_018daa78;
                            if (DAT_018daa70 != 0) {
                              pcVar25 = DAT_018daa74 +
                                        (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                            }
                          }
                          local_17c = DAT_018d9678;
                          local_8c = (int *****)DAT_018d9678[8];
                          iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                          if (iVar9 != 0) {
                            (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                          }
                        }
LAB_008da6cc:
                        (*(code *)**local_98)();
                      }
                      goto LAB_008dc7a0;
                    }
                  }
                  else if (bVar23 == 0) {
                    param_1[0x2c] = ppppiVar28;
                    param_1[0x2d] = local_270;
                    param_1[0x29] = 0;
                    param_1[0x2a] = local_26c;
                    param_1[0x28] = 5;
                    param_1[0x2b] = local_268;
                    /* WARNING: Subroutine does not return */
                    FUN_00faa478("all branches are disabled and there is no else branch",0x6b,
                                 &DAT_0186529c);
                  }
LAB_008db29c:
                  uVar10 = 1;
                  uVar1 = 0xb;
                  goto LAB_008dd4e4;
                }
                puVar29 = &DAT_018775b4;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*(undefined1 *)(puVar21 + 5)) {
                case 0:
                  puVar6 = (undefined4 *)puVar21[3];
                  puVar21[4] = puVar6;
                  break;
                case 1:
                  goto switchD_008d9a04_caseD_1;
                case 2:
                  goto switchD_008d9a04_caseD_2;
                case 3:
                  puVar6 = (undefined4 *)puVar21[4];
                }
                FUN_008e7998(&local_190,*puVar6,puVar26);
                unaff_r8 = local_188;
                bVar23 = 1;
                bVar30 = ((uint)local_190 & 0xff) == 10;
                uVar1 = 1;
                if (bVar30) {
                  uVar1 = 3;
                }
                *(undefined1 *)(puVar21 + 5) = uVar1;
                if (bVar30) {
                  bVar2 = *pbVar22;
                  goto LAB_008d9db4;
                }
                *pbVar22 = *pbVar22 | 2;
                param_1[0x2a] = local_190;
                param_1[0x2b] = local_18c;
                local_26c = local_190;
                puVar8 = param_1 + 0x2a;
                local_268 = local_18c;
                param_1[0x2d] = ppppiStack_184;
                param_1[0x2e] = *puVar8;
                param_1[0x2f] = param_1[0x2b];
                param_1[0x30] = local_188;
                param_1[0x29] = 0;
                param_1[0x28] = 1;
                param_1[0x2c] = local_188;
                local_270 = ppppiStack_184;
                param_1[0x31] = ppppiStack_184;
                if ((*puVar8 & 0xff) == 9) {
                  local_174 = param_1[7];
                  local_180 = (int *****)param_1[4];
                  local_17c = (undefined4 *)param_1[5];
                  uStack_178 = param_1[6];
                  *(undefined1 *)((int)param_1 + 0xf7) = 0;
                  local_90 = local_190;
                  local_8c = local_18c;
                  local_88 = local_188;
                  local_84 = ppppiStack_184;
                  param_1[0x42] = local_190;
                  param_1[0x43] = local_18c;
                  param_1[0x44] = local_188;
                  param_1[0x45] = ppppiStack_184;
                  param_1[0x46] = local_180;
                  param_1[0x47] = local_17c;
                  param_1[0x48] = uStack_178;
                  param_1[0x49] = local_174;
                  *(undefined1 *)(param_1 + 0x4a) = 0;
                  local_80 = local_180;
                  local_7c = local_17c;
                  uStack_78 = uStack_178;
                  uStack_74 = local_174;
                  goto switchD_008d9008_caseD_17;
                }
                *(undefined1 *)((int)param_1 + 0xf6) = 1;
                param_1[0x32] = *puVar8;
                param_1[0x33] = param_1[0x2b];
                param_1[0x34] = param_1[0x2c];
                param_1[0x35] = param_1[0x2d];
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
                switch(*puVar8 & 0xff) {
                case 0:
                  local_1d8 = *puVar8;
                  uStack_1d4 = param_1[0x2b];
                  uStack_1d0 = param_1[0x2c];
                  local_1cc = param_1[0x2d];
                  *(undefined1 *)((int)param_1 + 0xf6) = 0;
                  FUN_008ee7b0(&local_1d8,1);
                  break;
                case 1:
                  param_1[0x42] = param_1[0x33];
                  *(undefined1 *)((int)param_1 + 0xfe) = 1;
                  local_180 = (int *****)param_1[4];
                  local_17c = (undefined4 *)param_1[5];
                  uStack_178 = param_1[6];
                  local_174 = param_1[7];
                  *(undefined1 *)((int)param_1 + 0xf7) = 0;
                  local_90 = local_190;
                  local_8c = local_18c;
                  local_88 = local_188;
                  local_84 = ppppiStack_184;
                  param_1[0x44] = local_190;
                  param_1[0x45] = local_18c;
                  param_1[0x46] = local_188;
                  param_1[0x47] = ppppiStack_184;
                  param_1[0x48] = local_180;
                  param_1[0x49] = local_17c;
                  param_1[0x4a] = uStack_178;
                  param_1[0x4b] = local_174;
                  *(undefined1 *)(param_1 + 0x4c) = 0;
                  local_80 = local_180;
                  local_7c = local_17c;
                  uStack_78 = uStack_178;
                  uStack_74 = local_174;
                  goto switchD_008d9008_caseD_d;
                case 2:
                  puVar21 = param_1 + 4;
                  param_1[0x44] = puVar21;
                  local_254 = local_188;
                  *(undefined1 *)((int)param_1 + 0xfd) = 1;
                  param_1[0x42] = param_1[0x33];
                  *(undefined1 *)(param_1 + 0x46) = 0;
LAB_008dad3c:
                  param_1[0x45] = puVar21;
                  if ((DAT_018d9130 < 3) && (DAT_018d96bc != '\0')) {
                    if (DAT_018d96bc == '\x01') {
LAB_008dad9c:
                      puVar29 = &DAT_018ae394;
                      DataMemoryBarrier(0xb);
                      pcVar25 = s_SetGloba_00414c05;
                      if (DAT_018dd984 == 2) {
                        pcVar25 = DAT_018daa74;
                        puVar29 = DAT_018daa78;
                        if (DAT_018daa70 != 0) {
                          pcVar25 = DAT_018daa74 +
                                    (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                        }
                      }
                      iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d96b4);
                      if (iVar9 == 0) goto LAB_008daf40;
                    }
                    else if (DAT_018d96bc != '\x02') {
                      cVar3 = FUN_0169ac90(&DAT_018d96b4);
                      if (cVar3 == '\0') goto LAB_008daf40;
                      if (cVar3 != '\x02') goto LAB_008dad9c;
                    }
                    if ((int *****)DAT_018d96b4[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_018652ec);
                    }
                    local_b4 = (int *****)&local_c4;
                    local_88 = (int ****)DAT_018d96b4[9];
                    local_84 = (int ****)DAT_018d96b4[10];
                    local_d8 = DAT_018d96b4 + 7;
                    local_90 = (int *****)*local_d8;
                    local_b8 = (int *****)&local_90;
                    local_e0 = (int *****)&local_b8;
                    local_80 = (int *****)0x0;
                    local_18c = (int *****)0x0;
                    local_180 = (int *****)&local_e0;
                    local_dc = (code *)0x1;
                    local_b0 = (int ****)&DAT_018abb78;
                    local_c0 = (int *****)&DAT_00000017;
                    local_c4 = (int *****)&DAT_00346351;
                    local_190 = (int *****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    pcVar25 = s_SetGloba_00414c05;
                    puVar29 = &DAT_018ae394;
                    if (DAT_018dd984 == 2) {
                      pcVar25 = DAT_018daa74;
                      puVar29 = DAT_018daa78;
                      if (DAT_018daa70 != 0) {
                        pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                      }
                    }
                    local_17c = DAT_018d96b4;
                    local_8c = (int *****)DAT_018d96b4[8];
                    iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                    if (iVar9 != 0) {
                      (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                    }
                  }
LAB_008daf40:
                  uVar38 = (**(code **)(((undefined4 *)param_1[0x45])[1] + 0x14))
                                     (*(undefined4 *)param_1[0x45]);
                  *(undefined8 *)(param_1 + 0x47) = uVar38;
LAB_008daf58:
                  uVar39 = (**(code **)((int)((ulonglong)uVar38 >> 0x20) + 0xc))
                                     ((int)uVar38,param_2);
                  iVar9 = (int)(uVar39 >> 0x20);
                  if ((uVar39 & 1) != 0) {
                    uVar1 = 3;
LAB_008db064:
                    *(undefined1 *)(param_1 + 0x46) = uVar1;
                    uVar10 = 1;
                    uVar1 = 0xe;
                    goto LAB_008dd4e4;
                  }
                  puVar21 = (undefined4 *)param_1[0x48];
                  uVar10 = param_1[0x47];
                  pcVar13 = (code *)*puVar21;
                  if (pcVar13 != (code *)0x0) {
                    (*pcVar13)(uVar10);
                  }
                  if (puVar21[1] != 0) {
                    thunk_FUN_016d3fb4(uVar10);
                  }
                  if (iVar9 == 0) {
                    *(undefined1 *)(param_1[0x45] + 0xc) = 1;
                    iVar9 = DAT_018d7fb4;
                    DataMemoryBarrier(0xb);
                    if (DAT_018d8068 == 0) {
                      do {
                        bVar30 = (bool)hasExclusiveAccess((undefined4 *)(DAT_018d7fb4 + 8));
                      } while (!bVar30);
                      *(undefined4 *)(DAT_018d7fb4 + 8) = 1;
                      *(undefined4 *)(iVar9 + 0xc) = 0;
                    }
                    FUN_01656eb8(&local_190,&DAT_0186530c,
                                 *(undefined4 *)(*(int *)(param_1[0x45] + 8) + 0x168),
                                 *(undefined4 *)(*(int *)(param_1[0x45] + 8) + 0x16c));
                    FUN_016dd1aa(&local_90,&local_190,0x50);
                    FUN_016dd1aa(param_1 + 0x48,&local_90,0x50);
LAB_008db044:
                    iVar9 = FUN_01657fc4(param_1 + 0x48,*param_2);
                    if (iVar9 != 0) {
                      uVar1 = 4;
                      goto LAB_008db064;
                    }
                    FUN_00a07b4c(param_1 + 0x48);
                    iVar9 = 0;
                  }
                  *(undefined1 *)(param_1 + 0x46) = 1;
                  *(undefined1 *)((int)param_1 + 0xfd) = 0;
                  uVar39 = FUN_008e8e20(param_1[0x42],iVar9);
                  puVar21 = (undefined4 *)(uVar39 >> 0x20);
                  *(undefined1 *)((int)param_1 + 0xfd) = 0;
                  unaff_r8 = local_254;
                  if ((uVar39 & 1) != 0 && puVar21 != (undefined4 *)0x0) {
                    (**(code **)*puVar21)(puVar21);
                  }
                  break;
                case 3:
                  *(undefined1 *)(param_1 + 0x3f) = 1;
                  *(undefined1 *)(param_1 + 0x46) = 0;
                  param_1[0x44] = param_1 + 4;
                  param_1[0x42] = param_1[0x33];
switchD_008d9008_caseD_f:
                  uVar39 = FUN_008ddb38(param_1 + 0x44,param_2);
                  if ((uVar39 & 1) != 0) {
                    uVar10 = 1;
                    uVar1 = 0xf;
                    goto LAB_008dd4e4;
                  }
                  if (*(char *)(param_1 + 0x46) == '\x04') {
                    FUN_00a07b4c(param_1 + 0x48);
                  }
                  else if (*(char *)(param_1 + 0x46) == '\x03') {
                    puVar21 = (undefined4 *)param_1[0x48];
                    uVar10 = param_1[0x47];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                  }
                  *(undefined1 *)(param_1 + 0x3f) = 0;
                  uVar39 = FUN_008e8e20(param_1[0x42],(int)(uVar39 >> 0x20));
                  puVar21 = (undefined4 *)(uVar39 >> 0x20);
                  if ((uVar39 & 1) != 0 && puVar21 != (undefined4 *)0x0) {
                    (**(code **)*puVar21)(puVar21);
                  }
                  *(undefined1 *)(param_1 + 0x3f) = 0;
                  break;
                case 4:
                  param_1[0x42] = param_1[0x33];
                  *(undefined1 *)(param_1 + 0x4c) = 0;
                  param_1[0x4a] = param_1 + 4;
                  *(undefined8 *)(param_1 + 0x44) = *(undefined8 *)(param_1 + 0x34);
                  *(undefined1 *)((int)param_1 + 0xfb) = 1;
switchD_008d9008_caseD_10:
                  FUN_008dee58(&local_190,param_1 + 0x44,param_2);
                  if (((uint)local_190 & 0xff) == 2) {
                    uVar10 = 1;
                    uVar1 = 0x10;
                    goto LAB_008dd4e4;
                  }
                  local_1c8 = local_190;
                  local_1c4 = local_18c;
                  if (*(char *)(param_1 + 0x4c) == '\x03') {
                    puVar21 = (undefined4 *)param_1[0x49];
                    uVar10 = param_1[0x48];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                  }
                  *(undefined1 *)((int)param_1 + 0xfb) = 0;
                  FUN_008e91c0(&local_90,param_1[0x42],&local_1c8);
                  *(undefined1 *)((int)param_1 + 0xfb) = 0;
                  if (((uint)local_90 & 1) != 0) {
                    (*(code *)**local_8c)();
                  }
                  break;
                case 5:
                  *(undefined1 *)((int)param_1 + 0x191) = 0;
                  puVar21 = param_1 + 4;
                  cVar3 = *(char *)((int)param_1 + 0xc9);
                  param_1[0x42] = param_1[0x33];
                  uVar38 = *(undefined8 *)(param_1 + 0x34);
                  *(undefined1 *)((int)param_1 + 0xfa) = 1;
                  *(char *)((int)param_1 + 0x192) = cVar3;
                  param_1[99] = puVar21;
                  *(undefined8 *)(param_1 + 0x5c) = uVar38;
LAB_008daa18:
                  *(undefined8 *)(param_1 + 0x5e) = uVar38;
                  *(undefined1 *)(param_1 + 100) = 0;
                  param_1[0x62] = puVar21;
                  FUN_008ef954(&local_e0,puVar21[2] + 8);
                  if (((uint)local_e0 & 1) != 0) {
                    iVar9 = 0x148;
                    if (cVar3 != '\0') {
                      iVar9 = 0x138;
                    }
                    *(ulonglong *)(param_1 + 0x60) = CONCAT44(uStack_d4,local_d8);
                    iVar14 = *(int *)(param_1[0x62] + 8);
                    uVar32 = *(undefined8 *)(iVar14 + 0x130);
                    uVar31 = *(undefined8 *)(iVar14 + 0x138);
                    uVar36 = *(undefined8 *)(iVar14 + 0x140);
                    uVar38 = *(undefined8 *)(iVar14 + iVar9);
                    *(ulonglong *)(param_1 + 0x44) = CONCAT44(uStack_d4,local_d8);
                    *(undefined8 *)(param_1 + 0x46) = *(undefined8 *)(param_1 + 0x5e);
                    *(undefined8 *)(param_1 + 0x4a) = uVar32;
                    *(undefined8 *)(param_1 + 0x4c) = uVar31;
                    *(undefined8 *)(param_1 + 0x4e) = uVar36;
                    FUN_016d5622((int)uVar38);
                    FUN_016d5578((int)uVar38,(int)((ulonglong)uVar38 >> 0x20),(int)uVar32);
                    *(undefined8 *)(param_1 + 0x48) = uVar38;
                    if ((2 < DAT_018d9130) || (DAT_018d96c8 == '\0')) goto LAB_008dace4;
                    if (DAT_018d96c8 == '\x01') {
LAB_008dab10:
                      DataMemoryBarrier(0xb);
                      puVar29 = &DAT_018ae394;
                      pcVar25 = s_SetGloba_00414c05;
                      if (DAT_018dd984 == 2) {
                        pcVar25 = DAT_018daa74;
                        puVar29 = DAT_018daa78;
                        if (DAT_018daa70 != 0) {
                          pcVar25 = DAT_018daa74 +
                                    (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                        }
                      }
                      iVar9 = (**(code **)(puVar29 + 0x14))(pcVar25,DAT_018d96c0);
                      if (iVar9 == 0) goto LAB_008dace4;
                    }
                    else if (DAT_018d96c8 != '\x02') {
                      cVar4 = FUN_0169ac90(&DAT_018d96c0);
                      if (cVar4 == '\0') goto LAB_008dace4;
                      if (cVar4 != '\x02') goto LAB_008dab10;
                    }
                    if ((int *****)DAT_018d96c0[8] == (int *****)0x0) {
                    /* WARNING: Subroutine does not return */
                      FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0186532c);
                    }
                    local_c0 = &local_a0;
                    local_c8 = DAT_018d96c0 + 7;
                    local_b8 = (int *****)*local_c8;
                    local_b0 = (int ****)DAT_018d96c0[9];
                    local_ac = DAT_018d96c0[10];
                    local_c4 = (int *****)&local_b8;
                    local_a8 = 0;
                    local_bc = &DAT_018abb78;
                    local_94 = 4;
                    puVar29 = &DAT_018ae394;
                    local_98 = (int *****)&DAT_00567520;
                    if (cVar3 == '\0') {
                      local_98 = (int *****)&DAT_00566ef8;
                    }
                    local_9c = (int *****)&local_90;
                    local_a0 = (int ****)&DAT_0034635c;
                    local_7c = &DAT_0157d360;
                    local_80 = (int *****)&local_98;
                    local_d0 = (int *****)&local_c4;
                    local_180 = (int *****)&local_d0;
                    local_84 = (int ****)FUN_00f5cdb8;
                    local_8c = (int *****)FUN_00f5cdb8;
                    local_cc = (int *****)&DAT_00000001;
                    local_18c = (int *****)0x0;
                    local_190 = (int *****)&DAT_00000001;
                    DataMemoryBarrier(0xb);
                    pcVar25 = s_SetGloba_00414c05;
                    if (DAT_018dd984 == 2) {
                      pcVar25 = DAT_018daa74;
                      puVar29 = DAT_018daa78;
                      if (DAT_018daa70 != 0) {
                        pcVar25 = DAT_018daa74 + (*(int *)(DAT_018daa78 + 8) - 1U & 0xfffffff8) + 8;
                      }
                    }
                    local_17c = DAT_018d96c0;
                    local_b4 = (int *****)DAT_018d96c0[8];
                    local_90 = (int *****)(param_1 + 0x60);
                    local_88 = (int ****)(param_1 + 0x5e);
                    iVar9 = (**(code **)(puVar29 + 0x28))(pcVar25,&local_190);
                    if (iVar9 != 0) {
                      (**(code **)(puVar29 + 0x2c))(pcVar25,&local_190);
                    }
LAB_008dace4:
                    param_1[0x50] = param_1[0x44];
                    param_1[0x51] = param_1[0x45];
                    param_1[0x52] = param_1[0x46];
                    param_1[0x53] = param_1[0x47];
                    param_1[0x54] = param_1[0x48];
                    param_1[0x55] = param_1[0x49];
                    param_1[0x56] = param_1[0x4a];
                    param_1[0x57] = param_1[0x4b];
                    param_1[0x58] = param_1[0x4c];
                    param_1[0x59] = param_1[0x4d];
                    param_1[0x5a] = param_1[0x4e];
                    param_1[0x5b] = param_1[0x4f];
                    do {
                      dVar33 = *(double *)(param_1 + 0x50);
                      dVar35 = *(double *)(param_1 + 0x52);
                      dVar34 = ABS(dVar35 - dVar33);
                      if (!NAN(dVar35 - dVar33)) {
                        dVar37 = *(double *)(param_1 + 0x54);
                        if (NAN(dVar37)) break;
                        if (dVar34 <= dVar37) {
                          if (dVar34 < dVar37) break;
                        }
                        else if (dVar34 < dVar37) goto LAB_008dc930;
                      }
                      if (NAN(dVar35)) {
LAB_008dc988:
                        dVar34 = dVar34 * *(double *)(param_1 + 0x5a);
                        uVar38 = *(undefined8 *)(param_1 + 0x56);
                        uVar10 = (undefined4)((ulonglong)dVar34 >> 0x20);
                        FUN_016d5622(SUB84(dVar34,0),uVar10,(int)*(undefined8 *)(param_1 + 0x58));
                        FUN_016d5578(SUB84(dVar34,0),uVar10,(int)uVar38);
                        dVar33 = dVar33 + dVar34;
                      }
                      else {
                        if (!NAN(dVar33)) {
                          if (dVar35 <= dVar33) {
                            if (dVar35 < dVar33) goto LAB_008dc958;
                          }
                          else if (dVar35 < dVar33) {
LAB_008dc930:
                    /* WARNING: Subroutine does not return */
                            FUN_00fb74b8("BUG: impossible",0xf,&DAT_0187f934);
                          }
                          goto LAB_008dc988;
                        }
LAB_008dc958:
                        dVar34 = dVar34 * *(double *)(param_1 + 0x5a);
                        uVar38 = *(undefined8 *)(param_1 + 0x56);
                        uVar10 = (undefined4)((ulonglong)dVar34 >> 0x20);
                        FUN_016d5622(SUB84(dVar34,0),uVar10,(int)*(undefined8 *)(param_1 + 0x58));
                        FUN_016d5578(SUB84(dVar34,0),uVar10,(int)uVar38);
                        dVar33 = dVar33 - dVar34;
                      }
                      *(double *)(param_1 + 0x50) = dVar33;
                      *(undefined1 *)(param_1 + 0x6e) = 0;
                      *(double *)(param_1 + 0x66) = dVar33;
                      param_1[0x6c] = param_1[0x62];
LAB_008dc9c0:
                      FUN_008dee58(&local_190,param_1 + 0x66,param_2);
                      pppppiVar7 = local_18c;
                      pppppiVar20 = local_190;
                      if (((uint)local_190 & 0xff) == 2) {
                        uVar1 = 3;
                        goto LAB_008dcb40;
                      }
                      if (*(char *)(param_1 + 0x6e) == '\x03') {
                        puVar21 = (undefined4 *)param_1[0x6b];
                        uVar10 = param_1[0x6a];
                        pcVar13 = (code *)*puVar21;
                        if (pcVar13 != (code *)0x0) {
                          (*pcVar13)(uVar10);
                        }
                        if (puVar21[1] != 0) {
                          thunk_FUN_016d3fb4(uVar10);
                        }
                      }
                      if (((uint)pppppiVar20 & 1) != 0) goto LAB_008dca2c;
                      if (((uint)pppppiVar20 & 0x100) != 0) {
                        *(undefined1 *)(param_1 + 100) = 1;
                      }
                      FUN_01656eb8(&local_190,&DAT_0186534c,0,0);
                      FUN_016dd1aa(&local_90,&local_190,0x50);
                      FUN_016dd1aa(param_1 + 0x66,&local_90,0x50);
LAB_008dcb04:
                      iVar9 = FUN_01657fc4(param_1 + 0x66,*param_2);
                      if (iVar9 != 0) {
                        uVar1 = 4;
                        goto LAB_008dcb40;
                      }
                      FUN_00a07b4c(param_1 + 0x66);
                    } while( true );
                  }
                  *(undefined1 *)(param_1 + 0x6e) = 0;
                  param_1[0x6c] = param_1[0x62];
                  *(undefined8 *)(param_1 + 0x66) = *(undefined8 *)(param_1 + 0x5e);
switchD_008d93f4_caseD_5:
                  FUN_008dee58(&local_190,param_1 + 0x66,param_2);
                  pppppiVar7 = local_18c;
                  pppppiVar20 = local_190;
                  if (((uint)local_190 & 0xff) == 2) {
                    uVar1 = 5;
LAB_008dcb40:
                    local_25c = (int ****)((int)param_1 + 0x191);
                    *(undefined1 *)local_25c = uVar1;
                    uVar10 = 1;
                    uVar1 = 0x11;
                    goto LAB_008dd4e4;
                  }
                  if (*(char *)(param_1 + 0x6e) == '\x03') {
                    puVar21 = (undefined4 *)param_1[0x6b];
                    uVar10 = param_1[0x6a];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                  }
                  if (((uint)pppppiVar20 & 1) == 0) {
                    bVar2 = *(byte *)(param_1 + 100);
                    *(undefined1 *)((int)param_1 + 0x191) = 1;
                    *(byte *)(param_1 + 100) = bVar2 | (byte)((uint)pppppiVar20 >> 8);
                    local_1b8 = ((uint)bVar2 | (uint)pppppiVar20 >> 8 & 0xff) << 8;
                  }
                  else {
LAB_008dca2c:
                    local_25c = (int ****)((int)param_1 + 0x191);
                    local_1b8 = 1;
                    *(undefined1 *)local_25c = 1;
                  }
                  local_1b4 = pppppiVar7;
                  FUN_008d8604(param_1 + 0x44);
                  *(undefined1 *)((int)param_1 + 0xfa) = 0;
                  FUN_008e91c0(local_1c0,param_1[0x42],&local_1b8);
                  *(undefined1 *)((int)param_1 + 0xfa) = 0;
                  if ((local_1c0[0] & 1) != 0) {
                    (**(code **)*local_1bc)();
                  }
                  break;
                case 6:
                  param_1[0x42] = param_1[0x33];
                  *(undefined1 *)(param_1 + 0x47) = 0;
                  param_1[0x43] = param_1 + 4;
                  *(undefined1 *)((int)param_1 + 0xf9) = 1;
switchD_008d9008_caseD_12:
                  FUN_008df44c(&local_190,param_1 + 0x43,param_2);
                  if (local_190 == (int *****)&SUB_00000002) {
                    uVar10 = 1;
                    uVar1 = 0x12;
                    goto LAB_008dd4e4;
                  }
                  local_1b0 = local_190;
                  pppppiStack_1ac = local_18c;
                  ppppiStack_1a8 = local_188;
                  ppppiStack_1a4 = ppppiStack_184;
                  if (*(char *)(param_1 + 0x47) == '\x03') {
                    puVar21 = (undefined4 *)param_1[0x46];
                    uVar10 = param_1[0x45];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                  }
                  *(undefined1 *)((int)param_1 + 0xf9) = 0;
                  FUN_008e8ff0(&local_90,param_1[0x42],&local_1b0);
                  *(undefined1 *)((int)param_1 + 0xf9) = 0;
                  if (((uint)local_90 & 1) != 0) {
                    (*(code *)**local_8c)();
                  }
                  break;
                case 7:
                  param_1[0x42] = param_1[0x33];
                  *(undefined1 *)(param_1 + 0x47) = 0;
                  param_1[0x43] = param_1 + 4;
                  *(undefined1 *)(param_1 + 0x3e) = 1;
switchD_008d9008_caseD_13:
                  FUN_008df750(&local_190,param_1 + 0x43,param_2);
                  if (local_190 == (int *****)&SUB_00000002) {
                    uVar10 = 1;
                    uVar1 = 0x13;
                    goto LAB_008dd4e4;
                  }
                  local_1a0 = local_190;
                  pppppiStack_19c = local_18c;
                  ppppiStack_198 = local_188;
                  ppppiStack_194 = ppppiStack_184;
                  if (*(char *)(param_1 + 0x47) == '\x03') {
                    puVar21 = (undefined4 *)param_1[0x46];
                    uVar10 = param_1[0x45];
                    pcVar13 = (code *)*puVar21;
                    if (pcVar13 != (code *)0x0) {
                      (*pcVar13)(uVar10);
                    }
                    if (puVar21[1] != 0) {
                      thunk_FUN_016d3fb4(uVar10);
                    }
                  }
                  *(undefined1 *)(param_1 + 0x3e) = 0;
                  FUN_008e8ff0(&local_90,param_1[0x42],&local_1a0);
                  *(undefined1 *)(param_1 + 0x3e) = 0;
                  if (((uint)local_90 & 1) != 0) {
                    (*(code *)**local_8c)();
                  }
                  break;
                case 8:
                  FUN_008e8ccc(param_1[0x33],*(undefined1 *)(param_1 + 7));
                }
                if ((*(char *)((int)param_1 + 0xf6) != '\0') && (7 < *(byte *)(param_1 + 0x32) - 1))
                {
                  FUN_00aca43c();
                }
                *(undefined1 *)((int)param_1 + 0xf6) = 0;
                unaff_r7 = unaff_r8;
              } while( true );
            }
            uVar10 = 1;
            uVar1 = 10;
          }
        }
      }
    }
  }
  else {
    uVar10 = 1;
    uVar1 = 3;
  }
LAB_008dd4e4:
  *(undefined1 *)(param_1 + 0x3d) = uVar1;
  return uVar10;
}


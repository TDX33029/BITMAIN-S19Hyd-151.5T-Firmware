// FUN_00e1d730 @ 00e1d730 size=4240 calls_out=39 calls_in=0
// strings: internal error: entered unreachable code: unexpected stage | broadcast channel capacity cannot be zero | broadcast channel capacity exceeded `usize::MAX / 2`BestShareLastShareTimestampstart_time | all branches are disabled and there is no else branch

int FUN_00e1d730(int param_1,int *param_2)

{
  code *pcVar1;
  bool bVar2;
  undefined4 ******ppppppuVar3;
  undefined1 *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  char cVar13;
  undefined4 *puVar14;
  undefined4 **ppuVar15;
  undefined4 *puVar16;
  undefined4 **ppuVar17;
  int iVar18;
  undefined4 **ppuVar19;
  int *piVar20;
  byte bVar21;
  undefined4 *puVar22;
  undefined4 uVar23;
  uint uVar24;
  undefined1 uVar25;
  uint uVar26;
  undefined4 *puVar27;
  uint uVar28;
  undefined4 uVar29;
  undefined4 *puVar30;
  undefined4 **ppuVar31;
  char *pcVar32;
  uint *puVar33;
  int iVar34;
  int iVar35;
  byte *pbVar36;
  undefined4 *****pppppuVar37;
  undefined4 **ppuVar38;
  int iVar39;
  char *pcVar40;
  bool bVar41;
  undefined8 uVar42;
  undefined4 **local_68c;
  undefined4 **local_688;
  uint local_680;
  uint local_67c;
  undefined4 **local_678;
  undefined4 *****local_600;
  int local_5fc;
  undefined4 ******local_5f8;
  undefined1 *local_5f4;
  undefined4 **local_5f0;
  int local_5ec;
  undefined4 **local_5e8;
  undefined4 **local_5e4;
  undefined4 local_5e0;
  undefined4 uStack_5dc;
  undefined1 local_518;
  undefined4 *local_510;
  undefined4 *puStack_50c;
  undefined4 *puStack_508;
  undefined4 uStack_504;
  undefined4 uStack_500;
  undefined4 local_4fc;
  undefined4 uStack_4f8;
  undefined4 uStack_4f4;
  undefined4 uStack_4f0;
  undefined4 uStack_4ec;
  undefined4 *local_428;
  undefined4 *local_424;
  undefined4 *local_420;
  undefined4 uStack_41c;
  undefined4 uStack_418;
  undefined4 local_414;
  undefined4 uStack_410;
  undefined4 uStack_40c;
  undefined4 uStack_408;
  undefined4 uStack_404;
  undefined1 auStack_340 [224];
  undefined4 **local_260;
  undefined4 **local_25c;
  undefined4 ******local_258;
  undefined1 *local_254;
  undefined4 **local_250;
  int local_24c;
  undefined4 **local_248;
  undefined4 **local_244;
  undefined4 local_240;
  undefined4 local_23c;
  undefined4 **local_238;
  undefined4 **local_234;
  undefined4 *local_230;
  undefined4 *local_22c;
  undefined4 *local_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  undefined4 local_21c;
  undefined4 uStack_218;
  undefined4 uStack_214;
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 local_150;
  undefined4 local_14c;
  undefined4 local_148;
  undefined4 *local_140;
  undefined4 **local_13c;
  undefined4 ******local_110;
  undefined1 *puStack_10c;
  undefined4 **ppuStack_108;
  int iStack_104;
  undefined4 **local_100;
  undefined4 **ppuStack_fc;
  undefined4 uStack_f8;
  undefined4 uStack_f4;
  int *local_2c;
  undefined1 uStack_25;
  
  if (*(int *)(param_1 + 0x10) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("internal error: entered unreachable code: unexpected stage",0x75,&DAT_018ace94);
  }
  uVar42 = thunk_FUN_016de0ee(0,0x40);
  puVar33 = (uint *)((int)uVar42 + (int)((ulonglong)uVar42 >> 0x20));
  uVar26 = *(uint *)(param_1 + 8);
  uVar28 = *(uint *)(param_1 + 0xc);
  if ((char)puVar33[0xe] == '\x01') {
LAB_00e1d7bc:
    local_67c = puVar33[6];
    local_680 = puVar33[7];
    cVar13 = '\x01';
    puVar33[6] = uVar26;
    puVar33[7] = uVar28;
  }
  else {
    if ((char)puVar33[0xe] != '\x02') {
      FUN_015e8e6c(puVar33,FUN_01655ec4);
      *(undefined1 *)(puVar33 + 0xe) = 1;
      goto LAB_00e1d7bc;
    }
    local_67c = 0;
    local_680 = 0;
    cVar13 = '\x02';
  }
  puVar27 = (undefined4 *)((uint)&local_260 | 0x10);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_1 + 0x28)) {
  case 0:
    iVar18 = thunk_FUN_016d4a50(0x1c);
    if (iVar18 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,0x1c);
    }
    FUN_016dd1aa(iVar18,&DAT_00358330,0x1c);
    local_25c = (undefined4 **)&DAT_00000001;
    local_260 = (undefined4 **)&DAT_00000001;
    local_22c = (undefined4 *)0x1;
    local_23c = 4;
    local_240 = 0;
    local_258 = (undefined4 ******)0x0;
    local_254 = (undefined1 *)0x0;
    local_250 = (undefined4 **)0x0;
    local_24c = 0;
    local_248 = (undefined4 **)0x0;
    local_244 = (undefined4 **)((uint)local_244 & 0xffffff00);
    local_228 = (undefined4 *)((uint)local_228 & 0xffffff00);
    local_230 = (undefined4 *)0x0;
    local_234 = (undefined4 **)0x0;
    local_238 = (undefined4 **)0x0;
    puVar16 = (undefined4 *)thunk_FUN_016d4a50(0x3c);
    if (puVar16 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(4,0x3c);
    }
    *puVar16 = local_260;
    puVar16[1] = local_25c;
    puVar16[2] = local_258;
    puVar16[3] = local_254;
    puVar16[4] = local_250;
    puVar16[5] = local_24c;
    puVar16[6] = local_248;
    puVar16[7] = local_244;
    puVar16[8] = local_240;
    puVar16[9] = local_23c;
    puVar16[10] = local_238;
    puVar16[0xb] = local_234;
    puVar16[0xc] = local_230;
    puVar16[0xd] = local_22c;
    puVar16[0xe] = local_228;
    *(undefined4 *)(param_1 + 0x2c) = 0x1c;
    *(int *)(param_1 + 0x30) = iVar18;
    *(undefined1 *)(param_1 + 0x40) = 0;
    *(undefined4 *)(param_1 + 0x34) = 0x1c;
    *(undefined4 **)(param_1 + 0x38) = puVar16;
    *(undefined4 *)(param_1 + 0x3c) = 100;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_01878ea8);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_01878ea8);
  case 3:
    if (*(char *)(param_1 + 0x40) != '\0') {
      if (*(char *)(param_1 + 0x40) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_00fb7ca0(&DAT_01878f28);
      }
                    /* WARNING: Subroutine does not return */
      FUN_00fb7cc0(&DAT_01878f28);
    }
    break;
  case 4:
    pbVar36 = *(byte **)(param_1 + 0x30);
    puVar27 = *(undefined4 **)(param_1 + 0x34);
    goto joined_r0x00e1d954;
  }
  piVar20 = (int *)(param_1 + 0x2c);
  iVar18 = *piVar20;
  uVar23 = *(undefined4 *)(param_1 + 0x30);
  ppuVar38 = *(undefined4 ***)(param_1 + 0x34);
  uVar29 = *(undefined4 *)(param_1 + 0x38);
  iVar39 = *(int *)(param_1 + 0x3c);
  if (iVar39 == 0) {
    uVar23 = 0x53;
    pcVar40 = "broadcast channel capacity cannot be zero";
LAB_00e1dcbc:
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(pcVar40,uVar23,&DAT_01878f08);
  }
  if (iVar39 < 0) {
    uVar23 = 0x69;
    pcVar40 = 
    "broadcast channel capacity exceeded `usize::MAX / 2`BestShareLastShareTimestampstart_time";
    goto LAB_00e1dcbc;
  }
  puVar16 = (undefined4 *)0x0;
  if (iVar39 != 1) {
    puVar16 = (undefined4 *)(0xffffffff >> LZCOUNT(iVar39 + -1));
  }
  if (&UNK_01249248 < puVar16) {
    uVar23 = 0;
LAB_00e1d93c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar23,piVar20);
  }
  puVar30 = (undefined4 *)((int)puVar16 + 1);
  piVar20 = (int *)((int)puVar30 * 0x70);
  if (piVar20 == (int *)0x0) {
    puVar14 = (undefined4 *)0x8;
    local_428 = (undefined4 *)0x0;
  }
  else {
    puVar14 = (undefined4 *)thunk_FUN_016d4a50(piVar20);
    local_428 = puVar30;
    if (puVar14 == (undefined4 *)0x0) {
      uVar23 = 8;
      goto LAB_00e1d93c;
    }
  }
  iVar39 = 0;
  local_420 = (undefined4 *)0x0;
  local_424 = puVar14;
  do {
    puVar5 = local_420;
    bVar41 = local_420 < puVar30;
    iVar35 = (int)local_420 - (int)puVar30;
    if (local_420 == local_428) {
      FUN_00edfa64(&local_428);
      puVar14 = local_424;
    }
    puVar22 = (undefined4 *)((int)puVar14 + iVar39);
    *puVar22 = 0;
    iVar39 = iVar39 + 0x70;
    puVar22[1] = 0;
    puVar22[0x18] = iVar35;
    puVar22[0x19] = -(uint)bVar41;
    puVar22[0x1a] = 0;
    puVar22[2] = 4;
    puVar22 = (undefined4 *)((int)puVar5 + 1);
    local_420 = puVar22;
  } while (puVar5 != puVar16);
  puVar30 = local_424;
  if (puVar22 < local_428) {
    if (puVar22 != (undefined4 *)0x0) {
      puVar30 = (undefined4 *)thunk_FUN_016d4ea4(local_424,(int)puVar22 * 0x70);
      if (puVar30 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(8,(int)puVar22 * 0x70);
      }
      goto LAB_00e1da60;
    }
    thunk_FUN_016d3fb4(local_424);
    puVar30 = (undefined4 *)0x8;
    ppuVar15 = (undefined4 **)thunk_FUN_016d4a50(0x50);
  }
  else {
LAB_00e1da60:
    ppuVar15 = (undefined4 **)thunk_FUN_016d4a50(0x50);
  }
  if (ppuVar15 == (undefined4 **)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x50);
  }
  ppuVar15[1] = (undefined4 *)0x1;
  ppuVar15[2] = puVar30;
  ppuVar31 = ppuVar15 + 0x11;
  *ppuVar31 = (undefined4 *)0x1;
  *ppuVar15 = (undefined4 *)0x1;
  ppuVar15[3] = puVar22;
  ppuVar15[4] = (undefined4 *)0x0;
  ppuVar15[5] = (undefined4 *)0x0;
  ppuVar15[6] = (undefined4 *)0x0;
  ppuVar15[7] = (undefined4 *)0x0;
  *(undefined1 *)(ppuVar15 + 0xb) = 0;
  ppuVar15[8] = (undefined4 *)0x0;
  ppuVar15[9] = (undefined4 *)0x0;
  ppuVar15[10] = (undefined4 *)0x1;
  ppuVar15[0x12] = (undefined4 *)0x0;
  ppuVar15[0xc] = (undefined4 *)0x0;
  ppuVar15[0xd] = (undefined4 *)0x0;
  ppuVar15[0xe] = (undefined4 *)0x0;
  ppuVar15[0xf] = (undefined4 *)0x0;
  ppuVar15[0x10] = puVar16;
  do {
    puVar16 = *ppuVar15;
    bVar41 = (bool)hasExclusiveAccess(ppuVar15);
  } while (!bVar41);
  *ppuVar15 = (undefined4 *)((int)puVar16 + 1);
  if ((int)puVar16 < 0) {
LAB_00e1eb9c:
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xe1eb9c);
    (*pcVar1)();
  }
  local_254 = (undefined1 *)0x0;
  local_258 = (undefined4 ******)0x0;
  local_260 = ppuVar15;
  local_250 = ppuVar15;
  FUN_00e7e088(&local_258);
  DataMemoryBarrier(0xb);
  do {
    puVar16 = *local_250;
    bVar41 = (bool)hasExclusiveAccess(local_250);
  } while (!bVar41);
  *local_250 = (undefined4 *)((int)puVar16 + -1);
  if (puVar16 == (undefined4 *)0x1) {
    DataMemoryBarrier(0xb);
    FUN_00e454dc(local_250);
  }
  FUN_01663af4(uVar29);
  do {
    puVar16 = *ppuVar15;
    bVar41 = (bool)hasExclusiveAccess(ppuVar15);
  } while (!bVar41);
  *ppuVar15 = (undefined4 *)((int)puVar16 + 1);
  if ((int)puVar16 < 0) goto LAB_00e1eb9c;
  do {
    bVar41 = (bool)hasExclusiveAccess(ppuVar31);
  } while (!bVar41);
  *ppuVar31 = (undefined4 *)((int)*ppuVar31 + 1);
  if (ppuVar38 == (undefined4 **)0x0) {
    iVar39 = 1;
  }
  else {
    iVar39 = thunk_FUN_016d4a50(ppuVar38);
    if (iVar39 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppuVar38);
    }
  }
  FUN_016dd1aa(iVar39,uVar23,ppuVar38);
  do {
    do {
      local_600 = DAT_018d9200;
      local_5fc = DAT_018d9204;
      pppppuVar37 = (undefined4 *****)((int)DAT_018d9200 + 1);
      iVar35 = DAT_018d9204 + (uint)((undefined4 *****)0xfffffffe < DAT_018d9200);
      bVar41 = (bool)hasExclusiveAccess(0x18d9200);
    } while (!bVar41);
    bVar41 = DAT_018d9200 == (undefined4 *****)0x0;
    bVar2 = DAT_018d9204 == 0;
    DAT_018d9200 = pppppuVar37;
    DAT_018d9204 = iVar35;
  } while (bVar41 && bVar2);
  local_518 = 0;
  local_5f4 = &uStack_25;
  local_5f8 = &local_600;
  local_5f0 = ppuVar38;
  local_5ec = iVar39;
  local_5e8 = ppuVar38;
  local_5e4 = ppuVar15;
  local_5e0 = uVar29;
  if ((char)puVar33[0xe] != '\x01') {
    if ((char)puVar33[0xe] == '\x02') {
      uVar25 = 1;
      FUN_00e55bcc(&local_5f8);
      goto LAB_00e1dc40;
    }
    FUN_015e8e6c(puVar33,FUN_005bc49c);
    *(undefined1 *)(puVar33 + 0xe) = 1;
  }
  FUN_016dd1aa(&local_510,&local_5f8,0xe4);
  if (0x7ffffffe < *puVar33) {
    FUN_00fb71b0(&DAT_018accb0);
    goto LAB_00e1eb9c;
  }
  *puVar33 = *puVar33 + 1;
  uVar26 = puVar33[1];
  FUN_016dd1aa(&local_428,&local_5f8,0xe4);
  puVar16 = local_428;
  if (uVar26 == 2) {
    FUN_00e55bcc(&local_428);
    uVar25 = 0;
    *puVar33 = *puVar33 - 1;
LAB_00e1dc40:
    local_428 = (undefined4 *)CONCAT31(local_428._1_3_,uVar25);
    local_25c = (undefined4 **)&LAB_0164eda0;
    local_260 = &local_428;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00590e71,&local_260,&DAT_01878f18);
  }
  FUN_016dd1aa(auStack_340,&local_5f0,0xdc);
  ppuVar38 = (undefined4 **)*puVar16;
  local_678 = (undefined4 **)puVar16[1];
  if ((uVar26 & 1) == 0) {
    ppuVar31 = (undefined4 **)puVar33[2];
    do {
      puVar16 = *ppuVar31;
      bVar41 = (bool)hasExclusiveAccess(ppuVar31);
    } while (!bVar41);
    *ppuVar31 = (undefined4 *)((int)puVar16 + 1);
    if ((int)puVar16 < 0) goto LAB_00e1eb9c;
    piVar20 = ppuVar31[0x8e];
    if (piVar20 == (int *)0x0) {
      puVar16 = (undefined4 *)0x0;
      ppuVar17 = local_678;
    }
    else {
      do {
        iVar39 = *piVar20;
        bVar41 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar41);
      *piVar20 = iVar39 + 1;
      if (iVar39 < 0) goto LAB_00e1eb9c;
      puVar16 = ppuVar31[0x8e];
      ppuVar17 = (undefined4 **)ppuVar31[0x8f];
    }
    FUN_016dd1aa((uint)&local_110 | 4,auStack_340,0xdc);
    local_258 = (undefined4 ******)&PTR_LAB_018796dc;
    local_260 = (undefined4 **)0xcc;
    puVar27[4] = ppuVar38;
    *puVar27 = 0;
    puVar27[1] = 0;
    puVar27[5] = local_678;
    local_25c = (undefined4 **)0x0;
    local_238 = (undefined4 **)0x0;
    local_248 = ppuVar31;
    FUN_016dd1aa(&local_234,&local_110,0xe0);
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_2c = (int *)0x0;
    local_140 = puVar16;
    local_13c = ppuVar17;
    iVar39 = FUN_016d51b0(&local_2c,0x20,0x140);
    piVar20 = local_2c;
    if ((iVar39 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x140);
    }
    FUN_016dd1aa(local_2c,&local_260,0x140);
    iVar39 = FUN_00ee0238(ppuVar31 + 0x40,piVar20,piVar20);
    local_260 = ppuVar38;
    local_25c = local_678;
    if (ppuVar31[0x8c] != (undefined4 *)0x0) {
      (*(code *)ppuVar31[0x8d][5])
                ((int)ppuVar31[0x8c] + (ppuVar31[0x8d][2] - 1 & 0xfffffff8) + 8,&local_260);
    }
    local_688 = ppuVar38;
    if (iVar39 != 0) {
      FUN_01659ec0(puVar33[2],iVar39);
    }
  }
  else {
    ppuVar31 = (undefined4 **)puVar33[2];
    do {
      puVar16 = *ppuVar31;
      bVar41 = (bool)hasExclusiveAccess(ppuVar31);
    } while (!bVar41);
    *ppuVar31 = (undefined4 *)((int)puVar16 + 1);
    if ((int)puVar16 < 0) goto LAB_00e1eb9c;
    piVar20 = ppuVar31[0x5c];
    if (piVar20 == (int *)0x0) {
      puVar16 = (undefined4 *)0x0;
    }
    else {
      do {
        iVar39 = *piVar20;
        bVar41 = (bool)hasExclusiveAccess(piVar20);
      } while (!bVar41);
      *piVar20 = iVar39 + 1;
      if (iVar39 < 0) goto LAB_00e1eb9c;
      puVar16 = ppuVar31[0x5c];
      local_68c = (undefined4 **)ppuVar31[0x5d];
    }
    FUN_016dd1aa((uint)&local_110 | 4,auStack_340,0xdc);
    local_258 = (undefined4 ******)&PTR_LAB_018791dc;
    local_25c = (undefined4 **)0x0;
    local_260 = (undefined4 **)0xcc;
    *puVar27 = 0;
    puVar27[1] = 0;
    puVar27[4] = ppuVar38;
    puVar27[5] = local_678;
    local_238 = (undefined4 **)0x0;
    local_248 = ppuVar31;
    FUN_016dd1aa(&local_234,&local_110,0xe0);
    local_13c = local_68c;
    local_148 = 0;
    local_14c = 0;
    local_150 = 0;
    local_2c = (int *)0x0;
    local_140 = puVar16;
    iVar39 = FUN_016d51b0(&local_2c,0x20,0x140);
    piVar20 = local_2c;
    if ((iVar39 != 0) || (local_2c == (int *)0x0)) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(0x20,0x140);
    }
    FUN_016dd1aa(local_2c,&local_260,0x140);
    ppuVar17 = (undefined4 **)FUN_00ee0238(ppuVar31 + 0x14,piVar20,piVar20);
    local_260 = ppuVar38;
    local_25c = local_678;
    if (ppuVar31[0x5a] != (undefined4 *)0x0) {
      (*(code *)ppuVar31[0x5b][5])
                ((int)ppuVar31[0x5a] + (ppuVar31[0x5b][2] - 1 & 0xfffffff8) + 8,&local_260);
    }
    local_678 = ppuVar38;
    if (ppuVar17 != (undefined4 **)0x0) {
      local_110 = (undefined4 ******)((uint)local_110 & 0xffffff00);
      local_258 = &local_110;
      local_260 = ppuVar31 + 2;
      local_25c = ppuVar17;
      FUN_0164511c(&local_260);
    }
  }
  *puVar33 = *puVar33 - 1;
  if (*piVar20 == 0xcc) {
    DataMemoryBarrier(0xb);
    bVar41 = (bool)hasExclusiveAccess(piVar20);
    if (!bVar41) goto LAB_00e1e0b4;
    *piVar20 = 0x84;
  }
  else {
    ClearExclusiveLocal();
LAB_00e1e0b4:
    (**(code **)(piVar20[2] + 0x10))(piVar20);
  }
  if (iVar18 != 0) {
    thunk_FUN_016d3fb4(uVar23);
  }
  *(undefined1 *)(param_1 + 0x40) = 1;
  *(undefined4 ***)(param_1 + 0x20) = ppuVar15;
  *(undefined4 *)(param_1 + 0x24) = uVar29;
LAB_00e1e524:
  iVar18 = *(int *)(param_1 + 0x1c);
  pbVar36 = (byte *)(param_1 + 0x2c);
  *pbVar36 = 0;
  uVar26 = *(uint *)(iVar18 + 8);
  DataMemoryBarrier(0xb);
  puVar27 = (undefined4 *)(param_1 + 0x38);
  *puVar27 = 1;
  *(int *)(param_1 + 0x3c) = *(int *)(param_1 + 0x18) + 0x4c4;
  *(undefined4 *)(param_1 + 0x40) = 0;
  *(byte **)(param_1 + 0x30) = pbVar36;
  *(undefined4 **)(param_1 + 0x34) = puVar27;
  *(undefined1 *)(param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0x60) = 0;
  cVar13 = (char)puVar33[0xe];
  *(int **)(param_1 + 0x44) = (int *)(param_1 + 0x1c);
  *(int *)(param_1 + 0x48) = iVar18 + 8;
  *(uint *)(param_1 + 0x4c) = uVar26 >> 2;
  *(undefined4 *)(param_1 + 0x50) = 0;
  *(undefined4 *)(param_1 + 0x54) = 0;
  *(undefined4 *)(param_1 + 0x58) = 0;
joined_r0x00e1d954:
  if (cVar13 != '\x01') {
    if (cVar13 == '\x02') {
                    /* WARNING: Subroutine does not return */
      FUN_015f853c(&DAT_018ae900);
    }
    FUN_015e8e6c(puVar33,FUN_005bc49c);
    *(undefined1 *)(puVar33 + 0xe) = 1;
  }
  cVar13 = (char)puVar33[0xc];
  bVar41 = cVar13 == '\x01';
  if (bVar41) {
    cVar13 = *(char *)((int)puVar33 + 0x31);
  }
  if (bVar41 && cVar13 == '\0') {
    FUN_016455a4(*(undefined4 *)*param_2,((undefined4 *)*param_2)[1]);
LAB_00e1ea58:
    uVar25 = 4;
    iVar18 = 1;
    goto LAB_00e1eaf4;
  }
  if ((puVar33[9] & 1) == 0) {
    uVar42 = FUN_0164e918();
    if ((uint)uVar42 < 2) {
      uVar42 = CONCAT44((int)((ulonglong)uVar42 >> 0x20),1);
    }
  }
  else {
    uVar42 = CONCAT44(puVar33[10],puVar33[0xb]);
  }
  uVar26 = (uint)((ulonglong)uVar42 >> 0x20);
  uVar24 = (uint)uVar42;
  uVar26 = uVar26 ^ uVar26 << 0x11;
  puVar33[10] = uVar24;
  puVar33[9] = 1;
  uVar26 = uVar24 >> 0x10 ^ uVar26 >> 7 ^ uVar24 ^ uVar26;
  puVar33[0xb] = uVar26;
  bVar21 = *pbVar36;
  uVar28 = (uint)bVar21;
  if (-1 < (int)(uVar26 + uVar24)) {
    uVar26 = uVar28 & 1;
    if ((bVar21 & 1) == 0) {
      FUN_00ef4348(&local_260,puVar27,param_2);
      if (local_260 != (undefined4 **)&DAT_00000005) {
LAB_00e1e714:
        local_68c = local_25c;
        local_110 = local_258;
        puStack_10c = local_254;
        ppuStack_108 = local_250;
        iStack_104 = local_24c;
        local_100 = local_248;
        ppuStack_fc = local_244;
        uStack_f8 = local_240;
        uStack_f4 = local_23c;
        local_688 = local_238;
        local_678 = local_234;
        local_510 = local_230;
        puStack_50c = local_22c;
        puStack_508 = local_228;
        uStack_504 = uStack_224;
        uStack_500 = uStack_220;
        local_4fc = local_21c;
        uStack_4f8 = uStack_218;
        uStack_4f4 = uStack_214;
        uStack_4f0 = uStack_210;
        uStack_4ec = uStack_20c;
        bVar21 = 1;
        ppuVar38 = local_260;
        goto LAB_00e1e764;
      }
      uVar28 = (uint)*pbVar36;
    }
    if ((uVar28 & 2) == 0) {
      iVar18 = FUN_016638c8(puVar27 + 3,*param_2);
      ppuVar38 = (undefined4 **)&DAT_00000005;
      bVar21 = 2;
      if (iVar18 == 0) goto LAB_00e1e764;
    }
    else {
LAB_00e1e6f0:
      ppuVar38 = (undefined4 **)&DAT_00000006;
      if (uVar26 == 1) goto LAB_00e1e770;
    }
    goto LAB_00e1ea58;
  }
  uVar26 = (uVar28 & 2) >> 1;
  if ((bVar21 & 2) != 0) {
LAB_00e1e670:
    if ((uVar28 & 1) != 0) goto LAB_00e1e6f0;
    FUN_00ef4348(&local_260,puVar27,param_2);
    if (local_260 != (undefined4 **)&DAT_00000005) goto LAB_00e1e714;
    goto LAB_00e1ea58;
  }
  iVar18 = FUN_016638c8(puVar27 + 3,*param_2);
  bVar21 = 2;
  ppuVar38 = (undefined4 **)&DAT_00000005;
  if (iVar18 != 0) {
    uVar28 = (uint)*pbVar36;
    goto LAB_00e1e670;
  }
LAB_00e1e764:
  *pbVar36 = *pbVar36 | bVar21;
LAB_00e1e770:
  local_5f8 = local_110;
  local_5f4 = puStack_10c;
  local_5f0 = ppuStack_108;
  local_5ec = iStack_104;
  local_5e8 = local_100;
  local_5e4 = ppuStack_fc;
  local_5e0 = uStack_f8;
  uStack_5dc = uStack_f4;
  local_428 = local_510;
  local_424 = puStack_50c;
  local_420 = puStack_508;
  uStack_41c = uStack_504;
  uStack_418 = uStack_500;
  local_414 = local_4fc;
  uStack_410 = uStack_4f8;
  uStack_40c = uStack_4f4;
  uStack_408 = uStack_4f0;
  uStack_404 = uStack_4ec;
  FUN_00de1d78(param_1 + 0x38);
  FUN_0163bdc0(param_1 + 0x48);
  if (*(int *)(param_1 + 0x58) != 0) {
    (**(code **)(*(int *)(param_1 + 0x58) + 0xc))(*(undefined4 *)(param_1 + 0x5c));
  }
  uVar12 = uStack_404;
  uVar11 = uStack_408;
  uVar10 = uStack_40c;
  uVar9 = uStack_410;
  uVar8 = local_414;
  uVar7 = uStack_418;
  uVar6 = uStack_41c;
  puVar30 = local_420;
  puVar16 = local_424;
  puVar27 = local_428;
  uVar29 = uStack_5dc;
  uVar23 = local_5e0;
  ppuVar17 = local_5e4;
  ppuVar31 = local_5e8;
  iVar18 = local_5ec;
  ppuVar15 = local_5f0;
  puVar4 = local_5f4;
  ppppppuVar3 = local_5f8;
  ppuVar19 = ppuVar38 + -1;
  if (ppuVar38 < &DAT_00000004) {
    ppuVar19 = (undefined4 **)0x0;
  }
  if (ppuVar19 == (undefined4 **)0x0) {
    if (ppuVar38 == (undefined4 **)&DAT_00000004) goto LAB_00e1ea6c;
    iVar39 = *(int *)(param_1 + 0x20);
    pcVar40 = (char *)(iVar39 + 0x10);
    if (*pcVar40 == '\0') {
      bVar41 = (bool)hasExclusiveAccess(pcVar40);
      if (!bVar41) goto LAB_00e1e848;
      *pcVar40 = '\x01';
      DataMemoryBarrier(0xb);
    }
    else {
      ClearExclusiveLocal();
LAB_00e1e848:
      FUN_01280da8(pcVar40);
    }
    FUN_0128236c(pcVar40);
    iVar35 = *(int *)(iVar39 + 0x28);
    if (iVar35 == 0) {
      FUN_01282570(pcVar40);
      if (*pcVar40 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(pcVar40);
          if (bVar41) {
            *pcVar40 = '\0';
            goto LAB_00e1e8f4;
          }
        } while (*pcVar40 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar40);
LAB_00e1e8f4:
      if ((ppuVar38 != (undefined4 **)0x3 && local_678 != (undefined4 **)0x0) &&
         (uVar26 = (int)local_678 * 0x11 & 0xfffffffc,
         (undefined1 *)(uVar26 + (int)local_678) != (undefined1 *)0xffffffe7)) {
        thunk_FUN_016d3fb4((undefined1 *)((int)local_688 + (-0x14 - uVar26)));
      }
    }
    else {
      uVar28 = *(uint *)(iVar39 + 0x18);
      iVar34 = *(int *)(iVar39 + 0x1c);
      uVar26 = *(uint *)(iVar39 + 0x40) & uVar28;
      *(uint *)(iVar39 + 0x18) = uVar28 + 1;
      *(uint *)(iVar39 + 0x1c) = iVar34 + (uint)(0xfffffffe < uVar28);
      if (*(uint *)(iVar39 + 0xc) <= uVar26) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar26,*(uint *)(iVar39 + 0xc),&DAT_0187ab50);
      }
      pcVar32 = (char *)(*(int *)(iVar39 + 8) + uVar26 * 0x70);
      if (*pcVar32 == '\0') {
        bVar41 = (bool)hasExclusiveAccess(pcVar32);
        if (!bVar41) goto LAB_00e1e938;
        *pcVar32 = '\x01';
        DataMemoryBarrier(0xb);
      }
      else {
        ClearExclusiveLocal();
LAB_00e1e938:
        FUN_01280da8(pcVar32);
      }
      FUN_0128236c(pcVar32);
      *(uint *)(pcVar32 + 0x60) = uVar28;
      *(int *)(pcVar32 + 100) = iVar34;
      *(int *)(pcVar32 + 0x68) = iVar35;
      if (((1 < *(int *)(pcVar32 + 8) - 3U) && (iVar35 = *(int *)(pcVar32 + 0x34), iVar35 != 0)) &&
         (uVar26 = iVar35 * 0x11 & 0xfffffffc, uVar26 + iVar35 != -0x19)) {
        thunk_FUN_016d3fb4((*(int *)(pcVar32 + 0x30) - uVar26) + -0x14);
      }
      *(undefined4 ***)(pcVar32 + 8) = ppuVar38;
      *(undefined4 ***)(pcVar32 + 0xc) = local_68c;
      *(undefined4 *******)(pcVar32 + 0x10) = ppppppuVar3;
      *(undefined1 **)(pcVar32 + 0x14) = puVar4;
      *(undefined4 ***)(pcVar32 + 0x18) = ppuVar15;
      *(int *)(pcVar32 + 0x1c) = iVar18;
      *(undefined4 ***)(pcVar32 + 0x20) = ppuVar31;
      *(undefined4 ***)(pcVar32 + 0x24) = ppuVar17;
      *(undefined4 *)(pcVar32 + 0x28) = uVar23;
      *(undefined4 *)(pcVar32 + 0x2c) = uVar29;
      *(undefined4 ***)(pcVar32 + 0x30) = local_688;
      *(undefined4 ***)(pcVar32 + 0x34) = local_678;
      *(undefined4 **)(pcVar32 + 0x38) = puVar27;
      *(undefined4 **)(pcVar32 + 0x3c) = puVar16;
      *(undefined4 **)(pcVar32 + 0x40) = puVar30;
      *(undefined4 *)(pcVar32 + 0x44) = uVar6;
      *(undefined4 *)(pcVar32 + 0x48) = uVar7;
      *(undefined4 *)(pcVar32 + 0x4c) = uVar8;
      *(undefined4 *)(pcVar32 + 0x50) = uVar9;
      *(undefined4 *)(pcVar32 + 0x54) = uVar10;
      *(undefined4 *)(pcVar32 + 0x58) = uVar11;
      *(undefined4 *)(pcVar32 + 0x5c) = uVar12;
      FUN_01282570(pcVar32);
      if (*pcVar32 == '\x01') {
        DataMemoryBarrier(0xb);
        do {
          bVar41 = (bool)hasExclusiveAccess(pcVar32);
          if (bVar41) {
            *pcVar32 = '\0';
            goto LAB_00e1ea28;
          }
        } while (*pcVar32 == '\x01');
      }
      ClearExclusiveLocal();
      FUN_01280a5c(pcVar32);
LAB_00e1ea28:
      FUN_0072a978((int *)(iVar39 + 8),pcVar40);
    }
    goto LAB_00e1e524;
  }
  if (ppuVar19 != (undefined4 **)&DAT_00000001) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("all branches are disabled and there is no else branch",0x6b,&DAT_01878eb8);
  }
LAB_00e1ea6c:
  FUN_005bf3c4(param_1 + 0x20);
  piVar20 = *(int **)(param_1 + 0x18);
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar20;
    bVar41 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar41);
  *piVar20 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_00e45d08(*(undefined4 *)(param_1 + 0x18));
  }
  puVar27 = (undefined4 *)(param_1 + 0x1c);
  FUN_01663cc4(*puVar27);
  piVar20 = (int *)*puVar27;
  DataMemoryBarrier(0xb);
  do {
    iVar39 = *piVar20;
    bVar41 = (bool)hasExclusiveAccess(piVar20);
  } while (!bVar41);
  *piVar20 = iVar39 + -1;
  uVar25 = 1;
  iVar18 = 0;
  if (iVar39 == 1) {
    DataMemoryBarrier(0xb);
    FUN_01665328(puVar27);
  }
LAB_00e1eaf4:
  *(undefined1 *)(param_1 + 0x28) = uVar25;
  if ((char)puVar33[0xe] != '\x01') {
    if ((char)puVar33[0xe] == '\x02') goto joined_r0x00e1eb10;
    FUN_015e8e6c(puVar33,FUN_01655ec4);
    *(undefined1 *)(puVar33 + 0xe) = 1;
  }
  puVar33[6] = local_67c;
  puVar33[7] = local_680;
joined_r0x00e1eb10:
  if (iVar18 == 0) {
    local_260 = (undefined4 **)0x2;
    FUN_00e1edf0(param_1,&local_260);
    return 0;
  }
  return iVar18;
}


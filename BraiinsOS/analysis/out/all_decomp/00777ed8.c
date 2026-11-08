// FUN_00777ed8 @ 00777ed8 size=18988 calls_out=16 calls_in=3
// strings: stratum+tcp | stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp | stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt

/* WARNING: Type propagation algorithm not settling */

void FUN_00777ed8(int *param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 *******pppppppuVar5;
  undefined4 uVar6;
  undefined4 *******pppppppuVar7;
  undefined4 ******ppppppuVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int iVar11;
  undefined2 *puVar12;
  undefined2 *puVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  char *pcVar19;
  int iVar20;
  int iVar21;
  undefined2 *puVar22;
  int iVar23;
  int *piVar24;
  int iVar25;
  int iVar26;
  int iVar27;
  int *piVar28;
  bool bVar29;
  int local_d8;
  int local_d0;
  int local_cc;
  int local_c8;
  undefined2 *local_c4;
  undefined2 *local_b8;
  undefined2 *local_b0;
  undefined2 *local_ac;
  undefined4 ******local_a8;
  undefined4 *******local_a0;
  int local_9c;
  int *local_98 [2];
  char *local_90;
  undefined4 local_8c;
  undefined *local_88;
  undefined4 local_84;
  int local_80;
  undefined4 local_7c;
  undefined4 local_78;
  int local_70;
  int *local_6c;
  undefined4 local_68;
  int *local_64;
  int *local_60;
  undefined4 *******local_5c;
  undefined4 local_58;
  int **local_54;
  undefined4 local_50;
  undefined4 *******local_4c;
  undefined2 *local_48;
  undefined2 *local_44;
  int local_40;
  undefined2 *local_3c;
  int local_38;
  undefined2 *local_34;
  int local_30;
  undefined2 *local_2c;
  int local_28;
  
  iVar25 = param_1[0x41];
  iVar17 = param_1[0x40];
  if (iVar25 != 0) {
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00777f60;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 != (undefined4 ******)0x0) {
      bVar29 = false;
      *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
      *(undefined2 *)ppppppuVar8 = 0x2f4e;
      iVar15 = 3;
      goto LAB_00777f6c;
    }
LAB_0077c4a0:
    iVar25 = 3;
    goto LAB_0077c8ec;
  }
  ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00777f60:
  bVar29 = iVar25 == 0;
  iVar15 = iVar25;
LAB_00777f6c:
  iVar23 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar20 = *param_1;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined4 *******)0x0;
  if (iVar20 == -0x80000000) {
    iVar23 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar13 = local_44;
  pppppppuVar5 = local_4c;
  local_b8 = local_48;
  pcVar19 = "stratum+tcp";
  if (iVar20 == -0x80000000) {
    pcVar19 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    local_b8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar1 = false;
    *(undefined1 *)(local_b8 + 1) = 0x41;
    *local_b8 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar13 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    puVar13 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
  }
  iVar21 = param_1[0x3e];
  iVar11 = param_1[0x3d];
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_00778194:
    bVar4 = iVar21 == 0;
    local_28 = iVar21;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c844:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_00778194;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c844;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
    local_28 = 3;
  }
  local_44 = local_b8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_40 = iVar20;
  local_3c = puVar9;
  local_38 = (int)puVar13;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  FUN_0074b0c8(&local_a0,DAT_018d7c80 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_007782d8;
LAB_0077824c:
    if (bVar29) goto LAB_00778258;
LAB_007782ec:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_007782fc;
LAB_00778260:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00778300;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 != (undefined4 ******)0x0) {
      *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
      *(undefined2 *)ppppppuVar8 = 0x2f4e;
      bVar29 = false;
      iVar15 = 3;
      goto LAB_0077830c;
    }
LAB_0077c4b0:
    iVar25 = 3;
    goto LAB_0077c8ec;
  }
  if (bVar1) goto LAB_0077824c;
LAB_007782d8:
  thunk_FUN_016d3fb4(local_b8);
  if (!bVar29) goto LAB_007782ec;
LAB_00778258:
  if (iVar25 != 0) goto LAB_00778260;
LAB_007782fc:
  ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00778300:
  bVar29 = iVar25 == 0;
  iVar15 = iVar25;
LAB_0077830c:
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    local_c8 = 3;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
  }
  else {
    local_c8 = (int)local_44;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
    if (iVar21 == 0) goto LAB_00778464;
LAB_0077848c:
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c860:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_007784f8;
    iVar18 = 3;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c860;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
    if (iVar21 != 0) goto LAB_0077848c;
LAB_00778464:
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_007784f8:
    bVar4 = iVar21 == 0;
    iVar18 = iVar21;
  }
  local_38 = local_c8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  local_28 = iVar18;
  FUN_0074b0c8(&local_a0,DAT_018d7c84 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
    if (!bVar3) goto LAB_00778620;
LAB_0077857c:
    if (bVar2) goto LAB_00778588;
LAB_00778634:
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_00778644;
LAB_00778590:
    if (bVar29) goto LAB_007785a0;
LAB_0077865c:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077866c;
LAB_007785a8:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00778670;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 != (undefined4 ******)0x0) {
      bVar29 = false;
      *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
      *(undefined2 *)ppppppuVar8 = 0x2f4e;
      iVar15 = 3;
      goto LAB_0077867c;
    }
LAB_0077c4b8:
    iVar25 = 3;
    goto LAB_0077c8ec;
  }
  if (bVar3) goto LAB_0077857c;
LAB_00778620:
  thunk_FUN_016d3fb4(puVar10);
  if (!bVar2) goto LAB_00778634;
LAB_00778588:
  if (bVar1) goto LAB_00778590;
LAB_00778644:
  thunk_FUN_016d3fb4(puVar13);
  if (!bVar29) goto LAB_0077865c;
LAB_007785a0:
  if (iVar25 != 0) goto LAB_007785a8;
LAB_0077866c:
  ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00778670:
  bVar29 = iVar25 == 0;
  iVar15 = iVar25;
LAB_0077867c:
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    local_c8 = 3;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
  }
  else {
    local_c8 = (int)local_44;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
  }
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_00778864:
    bVar4 = iVar21 == 0;
    local_28 = iVar21;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c878:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_00778864;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c878;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
    local_28 = 3;
  }
  local_38 = local_c8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  FUN_0074b0c8(&local_a0,DAT_018d7c88 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_007788ec;
LAB_00778990:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar2) goto LAB_007789a4;
LAB_007788f8:
    if (bVar1) goto LAB_00778904;
LAB_007789b8:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_007789cc;
LAB_00778910:
    if (iVar25 != 0) goto LAB_00778918;
LAB_007789dc:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_007789e0:
    bVar29 = iVar25 == 0;
  }
  else {
    thunk_FUN_016d3fb4(puVar12);
    if (!bVar3) goto LAB_00778990;
LAB_007788ec:
    if (bVar2) goto LAB_007788f8;
LAB_007789a4:
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_007789b8;
LAB_00778904:
    if (bVar29) goto LAB_00778910;
LAB_007789cc:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_007789dc;
LAB_00778918:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_007789e0;
    iVar25 = 3;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4b0;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar23 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar23 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_b8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar2 = false;
    *(undefined1 *)(local_b8 + 1) = 0x41;
    *local_b8 = 0x2f4e;
    puVar9 = (undefined2 *)3;
  }
  else {
    local_b8 = local_48;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    bVar3 = false;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_44;
    puVar14 = local_48;
  }
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_00778bd4:
    bVar4 = iVar21 == 0;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c894:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_00778bd4;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c894;
    }
    bVar4 = false;
    *(undefined1 *)(puVar12 + 1) = 0x41;
    iVar21 = 3;
    *puVar12 = 0x2f4e;
  }
  local_3c = local_b8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar25;
  local_44 = puVar13;
  local_40 = iVar23;
  local_38 = (int)puVar9;
  local_34 = puVar14;
  local_30 = (int)puVar10;
  local_2c = puVar12;
  local_28 = iVar21;
  FUN_0074b0c8(&local_a0,DAT_018d7c8c + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(local_b8);
  }
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (!bVar29) {
    thunk_FUN_016d3fb4(ppppppuVar8);
  }
  iVar25 = param_1[0x41];
  iVar17 = param_1[0x40];
  if (iVar25 == 0) {
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00778d4c:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00778d4c;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a0;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
    iVar15 = 3;
  }
  iVar23 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar20 = *param_1;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined4 *******)0x0;
  if (iVar20 == -0x80000000) {
    iVar23 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar13 = local_44;
  pppppppuVar5 = local_4c;
  local_b8 = local_48;
  pcVar19 = "stratum+tcp";
  if (iVar20 == -0x80000000) {
    pcVar19 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    local_b8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_b8 + 1) = 0x41;
    *local_b8 = 0x2f4e;
    bVar1 = false;
  }
  else {
    iVar20 = (int)puVar13 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
    bVar2 = false;
    puVar9 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_48;
    puVar9 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
  }
  iVar21 = param_1[0x3e];
  iVar11 = param_1[0x3d];
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_00778f8c:
    bVar4 = iVar21 == 0;
    local_28 = iVar21;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c8b8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_00778f8c;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c8b8;
    }
    bVar4 = false;
    *(undefined1 *)(puVar12 + 1) = 0x41;
    *puVar12 = 0x2f4e;
    local_28 = 3;
  }
  local_44 = local_b8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_40 = iVar20;
  local_3c = puVar13;
  local_38 = (int)puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  FUN_0074b780(&local_a0,DAT_018d7c90 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar1) goto LAB_007790c4;
LAB_0077903c:
    if (bVar29) goto LAB_00779048;
LAB_007790d8:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_007790e8;
LAB_00779050:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_007790ec;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 != (undefined4 ******)0x0) {
      *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
      *(undefined2 *)ppppppuVar8 = 0x2f4e;
      bVar29 = false;
      iVar15 = 3;
      goto LAB_007790f8;
    }
LAB_0077c4a8:
    iVar25 = 3;
LAB_0077c8ec:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,iVar25);
  }
  if (bVar1) goto LAB_0077903c;
LAB_007790c4:
  thunk_FUN_016d3fb4(local_b8);
  if (!bVar29) goto LAB_007790d8;
LAB_00779048:
  if (iVar25 != 0) goto LAB_00779050;
LAB_007790e8:
  ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_007790ec:
  bVar29 = iVar25 == 0;
  iVar15 = iVar25;
LAB_007790f8:
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    bVar2 = false;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
    puVar10 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar3 = false;
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    puVar12 = (undefined2 *)3;
    if (iVar21 == 0) goto LAB_00779254;
LAB_00779278:
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar22 == (undefined2 *)0x0) {
LAB_0077c8cc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar22,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_007792dc;
    iVar18 = 3;
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar22 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c8cc;
    }
    bVar4 = false;
    *(undefined1 *)(puVar22 + 1) = 0x41;
    *puVar22 = 0x2f4e;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_48;
    puVar12 = local_44;
    if (iVar21 != 0) goto LAB_00779278;
LAB_00779254:
    puVar22 = (undefined2 *)&DAT_00000001;
LAB_007792dc:
    bVar4 = iVar21 == 0;
    iVar18 = iVar21;
  }
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar9;
  local_38 = (int)puVar10;
  local_34 = puVar14;
  local_30 = (int)puVar12;
  local_2c = puVar22;
  local_28 = iVar18;
  FUN_0074b780(&local_a0,DAT_018d7ca0 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar22);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (bVar2) {
    if (bVar1) goto LAB_00779388;
LAB_00779414:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_0077942c;
LAB_00779398:
    if (iVar25 != 0) goto LAB_007793a0;
LAB_0077943c:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00779440:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_00779414;
LAB_00779388:
    if (bVar29) goto LAB_00779398;
LAB_0077942c:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077943c;
LAB_007793a0:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00779440;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a8;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
    iVar15 = 3;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar2 = false;
    puVar9 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_44;
    puVar10 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    bVar3 = false;
    puVar12 = (undefined2 *)3;
    if (iVar21 == 0) goto LAB_007795a8;
LAB_007795cc:
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar22 == (undefined2 *)0x0) {
LAB_0077c8dc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar22,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_00779638;
    iVar18 = 3;
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar22 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c8dc;
    }
    *(undefined1 *)(puVar22 + 1) = 0x41;
    bVar4 = false;
    *puVar22 = 0x2f4e;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_48;
    puVar12 = local_44;
    if (iVar21 != 0) goto LAB_007795cc;
LAB_007795a8:
    puVar22 = (undefined2 *)&DAT_00000001;
LAB_00779638:
    bVar4 = iVar21 == 0;
    iVar18 = iVar21;
  }
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar10;
  local_38 = (int)puVar9;
  local_34 = puVar14;
  local_30 = (int)puVar12;
  local_2c = puVar22;
  local_28 = iVar18;
  FUN_0074b780(&local_a0,DAT_018d7ca8 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_007796b8;
LAB_00779760:
    thunk_FUN_016d3fb4(puVar14);
    if (!bVar2) goto LAB_00779778;
LAB_007796c8:
    if (bVar1) goto LAB_007796d0;
LAB_00779788:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_007797a0;
LAB_007796e0:
    if (iVar25 != 0) goto LAB_007796e8;
LAB_007797b0:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_007797b4:
    bVar29 = iVar25 == 0;
  }
  else {
    thunk_FUN_016d3fb4(puVar22);
    if (!bVar3) goto LAB_00779760;
LAB_007796b8:
    if (bVar2) goto LAB_007796c8;
LAB_00779778:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar1) goto LAB_00779788;
LAB_007796d0:
    if (bVar29) goto LAB_007796e0;
LAB_007797a0:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_007797b0;
LAB_007796e8:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_007797b4;
    iVar25 = 3;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) {
      iVar25 = 3;
      goto LAB_0077c8ec;
    }
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar23 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar23 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
    puVar10 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar3 = false;
    *(undefined1 *)(puVar12 + 1) = 0x41;
    *puVar12 = 0x2f4e;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_44;
    puVar12 = local_48;
  }
  if (iVar21 == 0) {
    puVar22 = (undefined2 *)&DAT_00000001;
LAB_007799a0:
    bVar4 = iVar21 == 0;
  }
  else {
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar22 == (undefined2 *)0x0) {
LAB_0077c8fc:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar22,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_007799a0;
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar22 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c8fc;
    }
    *(undefined1 *)(puVar22 + 1) = 0x41;
    bVar4 = false;
    iVar21 = 3;
    *puVar22 = 0x2f4e;
  }
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar25;
  local_44 = puVar13;
  local_40 = iVar23;
  local_3c = puVar9;
  local_38 = (int)puVar10;
  local_34 = puVar12;
  local_30 = (int)puVar14;
  local_2c = puVar22;
  local_28 = iVar21;
  FUN_0074bb90(&local_a0,DAT_018d7cb4 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar22);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (!bVar29) {
    thunk_FUN_016d3fb4(ppppppuVar8);
  }
  iVar25 = param_1[0x41];
  iVar17 = param_1[0x40];
  if (iVar25 == 0) {
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00779b18:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00779b18;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a0;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    iVar15 = 3;
  }
  iVar20 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar23 = *param_1;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined4 *******)0x0;
  if (iVar23 == -0x80000000) {
    iVar20 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar20,1,1);
  puVar13 = local_44;
  pppppppuVar5 = local_4c;
  local_a8 = (undefined4 ******)local_48;
  pcVar19 = "stratum+tcp";
  if (iVar23 == -0x80000000) {
    pcVar19 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar20);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    local_a8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (local_a8 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar1 = false;
    local_c8 = 3;
    *(undefined1 *)((int)local_a8 + 2) = 0x41;
    *(undefined2 *)local_a8 = 0x2f4e;
  }
  else {
    local_c8 = (int)puVar13 + iVar20;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_b0 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b0 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar2 = false;
    *(undefined1 *)(local_b0 + 1) = 0x41;
    *local_b0 = 0x2f4e;
    puVar13 = (undefined2 *)3;
  }
  else {
    local_b0 = local_48;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar9 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_44;
    puVar10 = local_48;
  }
  iVar11 = param_1[0x3e];
  iVar23 = param_1[0x3d];
  if (iVar11 == 0) {
    puVar14 = (undefined2 *)&DAT_00000001;
LAB_00779d60:
    bVar4 = iVar11 == 0;
    local_28 = iVar11;
  }
  else {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(iVar11);
    if (puVar14 == (undefined2 *)0x0) {
LAB_0077c914:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar11);
    }
    FUN_016dd1aa(puVar14,iVar23,iVar11);
    if (iVar11 != -0x80000000) goto LAB_00779d60;
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
      iVar11 = 3;
      goto LAB_0077c914;
    }
    bVar4 = false;
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    local_28 = 3;
  }
  local_3c = local_b0;
  local_40 = local_c8;
  local_44 = (undefined2 *)local_a8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_38 = (int)puVar13;
  local_34 = puVar10;
  local_30 = (int)puVar9;
  local_2c = puVar14;
  FUN_0074b780(&local_a0,DAT_018d7c94 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_00779de8;
LAB_00779e8c:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar2) goto LAB_00779ea4;
LAB_00779df8:
    if (bVar1) goto LAB_00779e00;
LAB_00779eb4:
    thunk_FUN_016d3fb4(local_a8);
    if (!bVar29) goto LAB_00779ec4;
LAB_00779e08:
    if (iVar25 != 0) goto LAB_00779e10;
LAB_00779ed4:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_00779ed8:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    thunk_FUN_016d3fb4(puVar14);
    if (!bVar3) goto LAB_00779e8c;
LAB_00779de8:
    if (bVar2) goto LAB_00779df8;
LAB_00779ea4:
    thunk_FUN_016d3fb4(local_b0);
    if (!bVar1) goto LAB_00779eb4;
LAB_00779e00:
    if (bVar29) goto LAB_00779e08;
LAB_00779ec4:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_00779ed4;
LAB_00779e10:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_00779ed8;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4b8;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    iVar15 = 3;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar20,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar20);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar21 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar21 = (int)puVar9 + iVar20;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
    puVar10 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    local_d0 = 3;
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    bVar3 = false;
  }
  else {
    local_d0 = (int)local_44;
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_48;
  }
  if (iVar11 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_0077a0c8:
    bVar4 = iVar11 == 0;
    local_28 = iVar11;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar11);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c930:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar11);
    }
    FUN_016dd1aa(puVar12,iVar23,iVar11);
    if (iVar11 != -0x80000000) goto LAB_0077a0c8;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar11 = 3;
      goto LAB_0077c930;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
    local_28 = 3;
  }
  local_30 = local_d0;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar21;
  local_3c = puVar9;
  local_38 = (int)puVar10;
  local_34 = puVar14;
  local_2c = puVar12;
  FUN_0074b780(&local_a0,DAT_018d7c98 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (!bVar29) {
    thunk_FUN_016d3fb4(ppppppuVar8);
  }
  iVar21 = 0;
  local_90 = "stratum_event";
  local_98[1] = (int *)0x12;
  local_9c = 3;
  local_a0 = (undefined4 *******)0x0;
  local_88 = &DAT_0034e2d9;
  local_98[0] = (int *)0x340cee;
  local_84 = 0xc;
  local_8c = 0xd;
  iVar15 = DAT_018d7ccc + 8;
  do {
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
    piVar28 = local_98[iVar21 * 2];
    piVar24 = local_98[iVar21 * 2 + 1];
    iVar18 = iVar25;
    bVar29 = iVar25 == 0;
    if (iVar25 != 0) {
      ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
      if (ppppppuVar8 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar25);
      }
      FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
      if (iVar25 == -0x80000000) {
        ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
        if (ppppppuVar8 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,3);
        }
        iVar18 = 3;
        *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
        *(undefined2 *)ppppppuVar8 = 0x2f4e;
        bVar29 = false;
      }
    }
    local_44 = (undefined2 *)0x0;
    local_48 = (undefined2 *)&DAT_00000001;
    local_4c = (undefined4 *******)0x0;
    FUN_006bca64(&local_4c,0,iVar20,1,1);
    puVar9 = local_44;
    puVar13 = local_48;
    pppppppuVar5 = local_4c;
    FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar20);
    if (pppppppuVar5 == (undefined4 *******)0x80000000) {
      puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      iVar26 = 3;
      *(undefined1 *)(puVar13 + 1) = 0x41;
      *puVar13 = 0x2f4e;
      bVar1 = false;
    }
    else {
      iVar26 = (int)puVar9 + iVar20;
      bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
    }
    FUN_007990b4(&local_4c,param_1);
    if (local_4c == (undefined4 *******)0x80000000) {
      puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar9 + 1) = 0x41;
      *puVar9 = 0x2f4e;
      bVar2 = false;
      puVar10 = (undefined2 *)3;
    }
    else {
      bVar2 = local_4c == (undefined4 *******)0x0;
      puVar9 = local_48;
      puVar10 = local_44;
    }
    FUN_007991e0(&local_4c,param_1);
    if (local_4c == (undefined4 *******)0x80000000) {
      puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar12 + 1) = 0x41;
      *puVar12 = 0x2f4e;
      bVar3 = false;
      puVar14 = (undefined2 *)3;
    }
    else {
      bVar3 = local_4c == (undefined4 *******)0x0;
      puVar14 = local_44;
      puVar12 = local_48;
    }
    iVar27 = iVar11;
    bVar4 = iVar11 == 0;
    if (iVar11 == 0) {
      puVar22 = (undefined2 *)&DAT_00000001;
    }
    else {
      puVar22 = (undefined2 *)thunk_FUN_016d4a50(iVar11);
      if (puVar22 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
      FUN_016dd1aa(puVar22,iVar23,iVar11);
      if (iVar11 == -0x80000000) {
        puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
        if (puVar22 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,3);
        }
        *(undefined1 *)(puVar22 + 1) = 0x41;
        *puVar22 = 0x2f4e;
        iVar27 = 3;
        bVar4 = false;
      }
    }
    local_54 = &local_64;
    local_5c = &local_4c;
    local_50 = 1;
    local_58 = 5;
    local_64 = piVar28;
    local_60 = piVar24;
    local_4c = (undefined4 *******)ppppppuVar8;
    local_48 = (undefined2 *)iVar18;
    local_44 = puVar13;
    local_40 = iVar26;
    local_3c = puVar9;
    local_38 = (int)puVar10;
    local_34 = puVar12;
    local_30 = (int)puVar14;
    local_2c = puVar22;
    local_28 = iVar27;
    FUN_00791930(&local_70,&local_5c);
    piVar24 = local_6c;
    FUN_0074b0c8(&local_80,iVar15,local_6c,local_68);
    FUN_00777ddc(&local_80);
    if (local_70 != 0) {
      thunk_FUN_016d3fb4(piVar24);
    }
    if (!bVar4) {
      thunk_FUN_016d3fb4(puVar22);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(puVar12);
    }
    if (!bVar2) {
      thunk_FUN_016d3fb4(puVar9);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(puVar13);
    }
    if (!bVar29) {
      thunk_FUN_016d3fb4(ppppppuVar8);
    }
    iVar21 = iVar21 + 1;
  } while (iVar21 != 3);
  iVar21 = DAT_018d7cd0 + 8;
  iVar15 = 0;
  do {
    local_98[0] = (int *)0x0;
    local_9c = 1;
    local_a0 = (undefined4 *******)0x0;
    local_40 = 0;
    local_44 = (undefined2 *)&DAT_60000020;
    local_48 = (undefined2 *)&DAT_0185bc90;
    local_4c = &local_a0;
    iVar26 = FUN_00faace8(&local_4c,(&DAT_018af9b0)[-iVar15],(&DAT_0041de2c)[-iVar15]);
    piVar24 = local_98[0];
    iVar18 = local_9c;
    pppppppuVar5 = local_a0;
    if (iVar26 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_5c,
                   &DAT_0185bca8,&DAT_018af130);
    }
    iVar26 = iVar25;
    bVar29 = iVar25 == 0;
    if (iVar25 == 0) {
      local_a8 = (undefined4 ******)&DAT_00000001;
    }
    else {
      local_a8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
      if (local_a8 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar25);
      }
      FUN_016dd1aa(local_a8,iVar17,iVar25);
      if (iVar25 == -0x80000000) {
        local_a8 = (undefined4 ******)thunk_FUN_016d4a50(3);
        if (local_a8 == (undefined4 ******)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1);
        }
        *(undefined1 *)((int)local_a8 + 2) = 0x41;
        *(undefined2 *)local_a8 = 0x2f4e;
        iVar26 = 3;
        bVar29 = false;
      }
    }
    local_44 = (undefined2 *)0x0;
    local_48 = (undefined2 *)&DAT_00000001;
    local_4c = (undefined4 *******)0x0;
    FUN_006bca64(&local_4c,0,iVar20,1,1);
    puVar9 = local_44;
    puVar13 = local_48;
    pppppppuVar7 = local_4c;
    FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar20);
    if (pppppppuVar7 == (undefined4 *******)0x80000000) {
      puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      iVar27 = 3;
      *(undefined1 *)(puVar13 + 1) = 0x41;
      bVar1 = false;
      *puVar13 = 0x2f4e;
    }
    else {
      iVar27 = (int)puVar9 + iVar20;
      bVar1 = pppppppuVar7 == (undefined4 *******)0x0;
    }
    FUN_007990b4(&local_4c,param_1);
    if (local_4c == (undefined4 *******)0x80000000) {
      local_b0 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (local_b0 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1);
      }
      *(undefined1 *)(local_b0 + 1) = 0x41;
      bVar2 = false;
      *local_b0 = 0x2f4e;
      puVar9 = (undefined2 *)3;
    }
    else {
      local_b0 = local_48;
      bVar2 = local_4c == (undefined4 *******)0x0;
      puVar9 = local_44;
    }
    FUN_007991e0(&local_4c,param_1);
    if (local_4c == (undefined4 *******)0x80000000) {
      puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)(puVar14 + 1) = 0x41;
      *puVar14 = 0x2f4e;
      bVar3 = false;
      puVar10 = (undefined2 *)3;
    }
    else {
      bVar3 = local_4c == (undefined4 *******)0x0;
      puVar10 = local_44;
      puVar14 = local_48;
    }
    iVar16 = iVar11;
    bVar4 = iVar11 == 0;
    if (iVar11 == 0) {
      puVar12 = (undefined2 *)&DAT_00000001;
    }
    else {
      puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar11);
      if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar11);
      }
      FUN_016dd1aa(puVar12,iVar23,iVar11);
      if (iVar11 == -0x80000000) {
        puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
        if (puVar12 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(1,3);
        }
        *(undefined1 *)(puVar12 + 1) = 0x41;
        *puVar12 = 0x2f4e;
        iVar16 = 3;
        bVar4 = false;
      }
    }
    local_98[0] = &local_70;
    local_3c = local_b0;
    local_4c = (undefined4 *******)local_a8;
    local_98[1] = (int *)0x1;
    local_9c = 5;
    local_a0 = &local_4c;
    local_6c = piVar24;
    local_70 = iVar18;
    local_48 = (undefined2 *)iVar26;
    local_44 = puVar13;
    local_40 = iVar27;
    local_38 = (int)puVar9;
    local_34 = puVar14;
    local_30 = (int)puVar10;
    local_2c = puVar12;
    local_28 = iVar16;
    FUN_00791930(&local_80,&local_a0);
    uVar6 = local_7c;
    FUN_0074b424(&local_5c,iVar21,local_7c,local_78);
    FUN_00777ddc(&local_5c);
    if (local_80 != 0) {
      thunk_FUN_016d3fb4(uVar6);
    }
    if (!bVar4) {
      thunk_FUN_016d3fb4(puVar12);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(puVar14);
    }
    if (!bVar2) {
      thunk_FUN_016d3fb4(local_b0);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(puVar13);
    }
    if (!bVar29) {
      thunk_FUN_016d3fb4(local_a8);
    }
    if (pppppppuVar5 != (undefined4 *******)0x0) {
      thunk_FUN_016d3fb4(iVar18);
    }
    bVar29 = iVar15 != -2;
    iVar15 = iVar15 + -1;
  } while (bVar29);
  iVar25 = param_1[0x41];
  iVar17 = param_1[0x40];
  if (iVar25 == 0) {
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077ab6c:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077ab6c;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a0;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    iVar15 = 3;
  }
  iVar23 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar20 = *param_1;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined4 *******)0x0;
  if (iVar20 == -0x80000000) {
    iVar23 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar13 = local_44;
  pppppppuVar5 = local_4c;
  local_b0 = local_48;
  pcVar19 = "stratum+tcp";
  if (iVar20 == -0x80000000) {
    pcVar19 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    local_b0 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b0 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar1 = false;
    *(undefined1 *)(local_b0 + 1) = 0x41;
    *local_b0 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar13 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_c4 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_c4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_c4 + 1) = 0x41;
    *local_c4 = 0x2f4e;
    bVar2 = false;
    puVar13 = (undefined2 *)3;
  }
  else {
    local_c4 = local_48;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar13 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    bVar3 = false;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
    puVar10 = local_44;
  }
  iVar21 = param_1[0x3e];
  iVar11 = param_1[0x3d];
  if (iVar21 == 0) {
    puVar14 = (undefined2 *)&DAT_00000001;
LAB_0077adb0:
    bVar4 = iVar21 == 0;
    local_28 = iVar21;
  }
  else {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar14 == (undefined2 *)0x0) {
LAB_0077c944:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar14,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_0077adb0;
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c944;
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    bVar4 = false;
    *puVar14 = 0x2f4e;
    local_28 = 3;
  }
  local_3c = local_c4;
  local_44 = local_b0;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_40 = iVar20;
  local_38 = (int)puVar13;
  local_34 = puVar9;
  local_30 = (int)puVar10;
  local_2c = puVar14;
  FUN_0074b0c8(&local_a0,DAT_018d7cd4 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (bVar2) {
    if (bVar1) goto LAB_0077ae6c;
LAB_0077aef0:
    thunk_FUN_016d3fb4(local_b0);
    if (!bVar29) goto LAB_0077af04;
LAB_0077ae78:
    if (iVar25 != 0) goto LAB_0077ae80;
LAB_0077af14:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077af18:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    thunk_FUN_016d3fb4(local_c4);
    if (!bVar1) goto LAB_0077aef0;
LAB_0077ae6c:
    if (bVar29) goto LAB_0077ae78;
LAB_0077af04:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077af14;
LAB_0077ae80:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077af18;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a8;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
    iVar15 = 3;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    local_cc = 3;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
  }
  else {
    local_cc = (int)local_44;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
    if (iVar21 == 0) goto LAB_0077b08c;
LAB_0077b0b4:
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c95c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_0077b12c;
    iVar18 = 3;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c95c;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
    if (iVar21 != 0) goto LAB_0077b0b4;
LAB_0077b08c:
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_0077b12c:
    bVar4 = iVar21 == 0;
    iVar18 = iVar21;
  }
  local_38 = local_cc;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  local_28 = iVar18;
  FUN_0074b780(&local_a0,DAT_018d7cd8 + 8,&local_4c);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_0077b1ac;
LAB_0077b254:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar2) goto LAB_0077b26c;
LAB_0077b1bc:
    if (bVar1) goto LAB_0077b1c4;
LAB_0077b27c:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_0077b294;
LAB_0077b1d4:
    if (iVar25 != 0) goto LAB_0077b1dc;
LAB_0077b2a4:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077b2a8:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    thunk_FUN_016d3fb4(puVar12);
    if (!bVar3) goto LAB_0077b254;
LAB_0077b1ac:
    if (bVar2) goto LAB_0077b1bc;
LAB_0077b26c:
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_0077b27c;
LAB_0077b1c4:
    if (bVar29) goto LAB_0077b1d4;
LAB_0077b294:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077b2a4;
LAB_0077b1dc:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077b2a8;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4b8;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    iVar15 = 3;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar20 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar20 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    local_cc = 3;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
  }
  else {
    local_cc = (int)local_44;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
  }
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_0077b48c:
    bVar4 = iVar21 == 0;
    local_28 = iVar21;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c974:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_0077b48c;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c974;
    }
    bVar4 = false;
    *(undefined1 *)(puVar12 + 1) = 0x41;
    *puVar12 = 0x2f4e;
    local_28 = 3;
  }
  local_38 = local_cc;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar20;
  local_3c = puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  FUN_0074b0c8(&local_a0,DAT_018d7cdc + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_0077b510;
LAB_0077b5c4:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar2) goto LAB_0077b5d8;
LAB_0077b51c:
    if (bVar1) goto LAB_0077b528;
LAB_0077b5ec:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_0077b600;
LAB_0077b534:
    if (iVar25 != 0) goto LAB_0077b53c;
LAB_0077b610:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077b614:
    bVar29 = iVar25 == 0;
  }
  else {
    thunk_FUN_016d3fb4(puVar12);
    if (!bVar3) goto LAB_0077b5c4;
LAB_0077b510:
    if (bVar2) goto LAB_0077b51c;
LAB_0077b5d8:
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_0077b5ec;
LAB_0077b528:
    if (bVar29) goto LAB_0077b534;
LAB_0077b600:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077b610;
LAB_0077b53c:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077b614;
    iVar25 = 3;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4b0;
    bVar29 = false;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar23 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar23 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_b8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_b8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar2 = false;
    *(undefined1 *)(local_b8 + 1) = 0x41;
    *local_b8 = 0x2f4e;
    puVar9 = (undefined2 *)3;
  }
  else {
    local_b8 = local_48;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    bVar3 = false;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_44;
    puVar14 = local_48;
  }
  if (iVar21 == 0) {
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_0077b808:
    bVar4 = iVar21 == 0;
  }
  else {
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar21);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c990:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar21);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar21);
    if (iVar21 != -0x80000000) goto LAB_0077b808;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar21 = 3;
      goto LAB_0077c990;
    }
    bVar4 = false;
    *(undefined1 *)(puVar12 + 1) = 0x41;
    iVar21 = 3;
    *puVar12 = 0x2f4e;
  }
  local_3c = local_b8;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar25;
  local_44 = puVar13;
  local_40 = iVar23;
  local_38 = (int)puVar9;
  local_34 = puVar14;
  local_30 = (int)puVar10;
  local_2c = puVar12;
  local_28 = iVar21;
  FUN_0074b0c8(&local_a0,DAT_018d7ce0 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar12);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(local_b8);
  }
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (!bVar29) {
    thunk_FUN_016d3fb4(ppppppuVar8);
  }
  iVar25 = param_1[0x41];
  iVar17 = param_1[0x40];
  if (iVar25 == 0) {
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077b97c:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077b97c;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a0;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
    iVar15 = 3;
  }
  iVar23 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar20 = *param_1;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined4 *******)0x0;
  if (iVar20 == -0x80000000) {
    iVar23 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  pcVar19 = "stratum+tcp";
  if (iVar20 == -0x80000000) {
    pcVar19 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    local_cc = 3;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    local_cc = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_ac = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_ac == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_ac + 1) = 0x41;
    *local_ac = 0x2f4e;
    bVar2 = false;
    puVar9 = (undefined2 *)3;
  }
  else {
    local_ac = local_48;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    local_d8 = 3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50();
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
  }
  else {
    local_d8 = (int)local_44;
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
  }
  iVar20 = param_1[0x3e];
  iVar11 = param_1[0x3d];
  if (iVar20 == 0) {
    puVar14 = (undefined2 *)&DAT_00000001;
LAB_0077bbcc:
    bVar4 = iVar20 == 0;
    local_28 = iVar20;
  }
  else {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(iVar20);
    if (puVar14 == (undefined2 *)0x0) {
LAB_0077c9b4:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar20);
    }
    FUN_016dd1aa(puVar14,iVar11,iVar20);
    if (iVar20 != -0x80000000) goto LAB_0077bbcc;
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
      iVar20 = 3;
      goto LAB_0077c9b4;
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    bVar4 = false;
    *puVar14 = 0x2f4e;
    local_28 = 3;
  }
  local_30 = local_d8;
  local_40 = local_cc;
  local_3c = local_ac;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_38 = (int)puVar9;
  local_34 = puVar10;
  local_2c = puVar14;
  FUN_0074b0c8(&local_a0,DAT_018d7ce4 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (bVar2) {
    if (bVar1) goto LAB_0077bc90;
LAB_0077bd20:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_0077bd34;
LAB_0077bc9c:
    if (iVar25 != 0) goto LAB_0077bca4;
LAB_0077bd44:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077bd48:
    bVar29 = iVar25 == 0;
    iVar15 = iVar25;
  }
  else {
    thunk_FUN_016d3fb4(local_ac);
    if (!bVar1) goto LAB_0077bd20;
LAB_0077bc90:
    if (bVar29) goto LAB_0077bc9c;
LAB_0077bd34:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077bd44;
LAB_0077bca4:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077bd48;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a8;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
    iVar15 = 3;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar21 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar1 = false;
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
  }
  else {
    iVar21 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    bVar2 = false;
    local_cc = 3;
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
  }
  else {
    local_cc = (int)local_44;
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    bVar3 = false;
    puVar14 = (undefined2 *)3;
    if (iVar20 == 0) goto LAB_0077bebc;
LAB_0077bee4:
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(iVar20);
    if (puVar12 == (undefined2 *)0x0) {
LAB_0077c9d0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar20);
    }
    FUN_016dd1aa(puVar12,iVar11,iVar20);
    if (iVar20 != -0x80000000) goto LAB_0077bf4c;
    iVar18 = 3;
    puVar12 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar12 == (undefined2 *)0x0) {
      iVar20 = 3;
      goto LAB_0077c9d0;
    }
    *(undefined1 *)(puVar12 + 1) = 0x41;
    bVar4 = false;
    *puVar12 = 0x2f4e;
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar10 = local_48;
    puVar14 = local_44;
    if (iVar20 != 0) goto LAB_0077bee4;
LAB_0077bebc:
    puVar12 = (undefined2 *)&DAT_00000001;
LAB_0077bf4c:
    bVar4 = iVar20 == 0;
    iVar18 = iVar20;
  }
  local_38 = local_cc;
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar15;
  local_44 = puVar13;
  local_40 = iVar21;
  local_3c = puVar9;
  local_34 = puVar10;
  local_30 = (int)puVar14;
  local_2c = puVar12;
  local_28 = iVar18;
  FUN_0074b0c8(&local_a0,DAT_018d7ce8 + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (bVar4) {
    if (bVar3) goto LAB_0077bfd8;
LAB_0077c080:
    thunk_FUN_016d3fb4(puVar10);
    if (!bVar2) goto LAB_0077c098;
LAB_0077bfe8:
    if (bVar1) goto LAB_0077bff0;
LAB_0077c0a8:
    thunk_FUN_016d3fb4(puVar13);
    if (!bVar29) goto LAB_0077c0c0;
LAB_0077c000:
    if (iVar25 != 0) goto LAB_0077c008;
LAB_0077c0d0:
    ppppppuVar8 = (undefined4 ******)&DAT_00000001;
LAB_0077c0d4:
    bVar29 = iVar25 == 0;
  }
  else {
    thunk_FUN_016d3fb4(puVar12);
    if (!bVar3) goto LAB_0077c080;
LAB_0077bfd8:
    if (bVar2) goto LAB_0077bfe8;
LAB_0077c098:
    thunk_FUN_016d3fb4(puVar9);
    if (!bVar1) goto LAB_0077c0a8;
LAB_0077bff0:
    if (bVar29) goto LAB_0077c000;
LAB_0077c0c0:
    thunk_FUN_016d3fb4(ppppppuVar8);
    if (iVar25 == 0) goto LAB_0077c0d0;
LAB_0077c008:
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(iVar25);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c8ec;
    FUN_016dd1aa(ppppppuVar8,iVar17,iVar25);
    if (iVar25 != -0x80000000) goto LAB_0077c0d4;
    iVar25 = 3;
    ppppppuVar8 = (undefined4 ******)thunk_FUN_016d4a50(3);
    if (ppppppuVar8 == (undefined4 ******)0x0) goto LAB_0077c4a8;
    *(undefined1 *)((int)ppppppuVar8 + 2) = 0x41;
    *(undefined2 *)ppppppuVar8 = 0x2f4e;
    bVar29 = false;
  }
  local_44 = (undefined2 *)0x0;
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined4 *******)0x0;
  FUN_006bca64(&local_4c,0,iVar23,1,1);
  puVar9 = local_44;
  puVar13 = local_48;
  pppppppuVar5 = local_4c;
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar19,iVar23);
  if (pppppppuVar5 == (undefined4 *******)0x80000000) {
    iVar23 = 3;
    puVar13 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar13 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar13 + 1) = 0x41;
    *puVar13 = 0x2f4e;
    bVar1 = false;
  }
  else {
    iVar23 = (int)puVar9 + iVar23;
    bVar1 = pppppppuVar5 == (undefined4 *******)0x0;
  }
  FUN_007990b4(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    bVar2 = false;
    puVar10 = (undefined2 *)3;
  }
  else {
    bVar2 = local_4c == (undefined4 *******)0x0;
    puVar9 = local_48;
    puVar10 = local_44;
  }
  FUN_007991e0(&local_4c,param_1);
  if (local_4c == (undefined4 *******)0x80000000) {
    puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar14 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar14 + 1) = 0x41;
    *puVar14 = 0x2f4e;
    bVar3 = false;
    puVar12 = (undefined2 *)3;
    if (iVar20 == 0) goto LAB_0077c238;
LAB_0077c25c:
    puVar22 = (undefined2 *)thunk_FUN_016d4a50(iVar20);
    if (puVar22 == (undefined2 *)0x0) {
LAB_0077c9f0:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar20);
    }
    FUN_016dd1aa(puVar22,iVar11,iVar20);
    if (iVar20 == -0x80000000) {
      iVar20 = 3;
      puVar22 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar22 == (undefined2 *)0x0) {
        iVar20 = 3;
        goto LAB_0077c9f0;
      }
      *(undefined1 *)(puVar22 + 1) = 0x41;
      bVar4 = false;
      *puVar22 = 0x2f4e;
      goto LAB_0077c2d0;
    }
  }
  else {
    bVar3 = local_4c == (undefined4 *******)0x0;
    puVar14 = local_48;
    puVar12 = local_44;
    if (iVar20 != 0) goto LAB_0077c25c;
LAB_0077c238:
    puVar22 = (undefined2 *)&DAT_00000001;
  }
  bVar4 = iVar20 == 0;
LAB_0077c2d0:
  local_4c = (undefined4 *******)ppppppuVar8;
  local_48 = (undefined2 *)iVar25;
  local_44 = puVar13;
  local_40 = iVar23;
  local_3c = puVar9;
  local_38 = (int)puVar10;
  local_34 = puVar14;
  local_30 = (int)puVar12;
  local_2c = puVar22;
  local_28 = iVar20;
  FUN_0074b0c8(&local_a0,DAT_018d7cec + 8,&local_4c,5);
  FUN_00777ddc(&local_a0);
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar22);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar14);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar1) {
    thunk_FUN_016d3fb4(puVar13);
  }
  if (!bVar29) {
    thunk_FUN_016d3fb4(ppppppuVar8);
    FUN_00b50e5c(param_1);
    return;
  }
  FUN_00b50e5c(param_1);
  return;
}


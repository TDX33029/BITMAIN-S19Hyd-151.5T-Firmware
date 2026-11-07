// FUN_00798734 @ 00798734 size=1160 calls_out=10 calls_in=2
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

/* WARNING: Type propagation algorithm not settling */

void FUN_00798734(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  undefined1 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  int *piVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  undefined2 *puVar20;
  uint local_160;
  undefined4 local_15c;
  uint local_88;
  undefined4 local_84;
  int local_7c;
  undefined4 local_78;
  int local_70;
  undefined4 local_6c;
  int local_68;
  int local_64;
  undefined4 local_60;
  int local_5c;
  undefined2 *local_4c;
  undefined2 *local_48;
  undefined2 *local_44;
  int local_40;
  undefined2 *local_3c;
  int local_38;
  undefined2 *local_34;
  int local_30;
  undefined2 *local_2c;
  int local_28;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c != 0) {
    return;
  }
  FUN_007901fc(&local_160,param_1);
  uVar5 = local_60;
  uVar6 = DAT_018d7c8c;
  iVar17 = local_5c;
  if (local_5c == 0) {
    puVar7 = (undefined2 *)&DAT_00000001;
  }
  else {
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(local_5c);
    if (puVar7 == (undefined2 *)0x0) {
LAB_00798b80:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar17);
    }
    FUN_016dd1aa(puVar7,uVar5,local_5c);
    if (local_5c == -0x80000000) {
      iVar17 = 3;
      puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar7 == (undefined2 *)0x0) goto LAB_00798b80;
      *(undefined1 *)(puVar7 + 1) = 0x41;
      *puVar7 = 0x2f4e;
      iVar17 = 3;
    }
  }
  uVar14 = local_160;
  iVar15 = 0xb;
  local_44 = (undefined2 *)0x0;
  if (local_160 == 0x80000000) {
    iVar15 = 0xc;
  }
  local_48 = (undefined2 *)&DAT_00000001;
  local_4c = (undefined2 *)0x0;
  FUN_006bca64(&local_4c,0,iVar15,1,1);
  puVar20 = local_44;
  puVar8 = local_48;
  puVar9 = local_4c;
  pcVar12 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  if (uVar14 != 0x80000000) {
    pcVar12 = "stratum+tcp";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar12,iVar15);
  if (puVar9 == (undefined2 *)0x80000000) {
    iVar15 = 3;
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    bVar2 = false;
    *puVar8 = 0x2f4e;
  }
  else {
    iVar15 = (int)puVar20 + iVar15;
    bVar2 = puVar9 == (undefined2 *)0x0;
  }
  FUN_007990b4(&local_4c,&local_160);
  if (local_4c == (undefined2 *)0x80000000) {
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar9 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    bVar3 = false;
    *puVar9 = 0x2f4e;
    puVar20 = (undefined2 *)3;
  }
  else {
    bVar3 = local_4c == (undefined2 *)0x0;
    puVar9 = local_48;
    puVar20 = local_44;
  }
  FUN_007991e0(&local_4c,&local_160);
  if (local_4c == (undefined2 *)0x80000000) {
    puVar19 = (undefined2 *)0x3;
    puVar10 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar10 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar10 + 1) = 0x41;
    *puVar10 = 0x2f4e;
    uVar4 = false;
    uVar5 = local_6c;
    iVar16 = local_68;
  }
  else {
    uVar4 = local_4c == (undefined2 *)0x0;
    uVar5 = local_6c;
    iVar16 = local_68;
    puVar10 = local_48;
    puVar19 = local_44;
  }
  local_6c = uVar5;
  if (iVar16 == 0) {
    puVar18 = (undefined2 *)&DAT_00000001;
  }
  else {
    puVar18 = (undefined2 *)thunk_FUN_016d4a50(iVar16);
    if (puVar18 == (undefined2 *)0x0) {
LAB_00798b90:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar16);
    }
    FUN_016dd1aa(puVar18,uVar5,iVar16);
    if (iVar16 == -0x80000000) {
      iVar16 = 3;
      puVar18 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar18 == (undefined2 *)0x0) goto LAB_00798b90;
      *(undefined1 *)(puVar18 + 1) = 0x41;
      iVar16 = 3;
      *puVar18 = 0x2f4e;
    }
  }
  local_4c = puVar7;
  local_48 = (undefined2 *)iVar17;
  local_44 = puVar8;
  local_40 = iVar15;
  local_3c = puVar9;
  local_38 = (int)puVar20;
  local_34 = puVar10;
  local_30 = (int)puVar19;
  local_2c = puVar18;
  local_28 = iVar16;
  piVar11 = (int *)FUN_00749fd0(uVar6,&local_4c,5);
  puVar13 = (uint *)(piVar11 + 2);
  do {
    uVar14 = *puVar13;
    bVar1 = (bool)hasExclusiveAccess(puVar13);
  } while (!bVar1);
  *puVar13 = uVar14 + 1;
  piVar11[3] = piVar11[3] + (uint)(0xfffffffe < uVar14);
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar11;
    bVar1 = (bool)hasExclusiveAccess(piVar11);
  } while (!bVar1);
  *piVar11 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (iVar16 != 0) {
    thunk_FUN_016d3fb4(puVar18);
  }
  if (!(bool)uVar4) {
    thunk_FUN_016d3fb4(puVar10);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (iVar17 != 0) {
    thunk_FUN_016d3fb4(puVar7);
  }
  if ((local_160 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_15c);
  }
  if (local_7c != 0) {
    thunk_FUN_016d3fb4(local_78);
  }
  if ((local_88 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_84);
  }
  if (local_70 != 0) {
    thunk_FUN_016d3fb4(local_6c);
  }
  if (local_64 == 0) {
    return;
  }
  thunk_FUN_016d3fb4(local_60);
  return;
}


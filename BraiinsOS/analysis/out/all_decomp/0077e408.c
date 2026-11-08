// FUN_0077e408 @ 0077e408 size=1148 calls_out=11 calls_in=2
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

void FUN_0077e408(undefined4 param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  bool bVar5;
  bool bVar6;
  undefined2 *puVar7;
  undefined2 *puVar8;
  undefined2 *puVar9;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  uint uVar13;
  undefined2 *puVar14;
  int iVar15;
  int iVar16;
  undefined2 *puVar17;
  int iVar18;
  int iVar19;
  undefined2 *local_90;
  undefined2 *local_78;
  int local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined2 **local_64;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined4 local_58;
  undefined2 *local_54;
  undefined2 *local_50;
  undefined2 *local_4c;
  int local_48;
  undefined2 *local_44;
  int local_40;
  undefined2 *local_3c;
  int local_38;
  undefined2 *local_34;
  int local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  iVar18 = param_2[0x41];
  if (iVar18 == 0) {
    puVar7 = (undefined2 *)&DAT_00000001;
LAB_0077e498:
    bVar2 = iVar18 == 0;
  }
  else {
    iVar15 = param_2[0x40];
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(iVar18);
    if (puVar7 == (undefined2 *)0x0) {
LAB_0077e860:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar18);
    }
    FUN_016dd1aa(puVar7,iVar15,iVar18);
    if (iVar18 != -0x80000000) goto LAB_0077e498;
    iVar18 = 3;
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
      iVar18 = 3;
      goto LAB_0077e860;
    }
    bVar2 = false;
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
  }
  iVar15 = *param_2;
  iVar16 = 0xb;
  local_4c = (undefined2 *)0x0;
  if (iVar15 == -0x80000000) {
    iVar16 = 0xc;
  }
  local_50 = (undefined2 *)&DAT_00000001;
  local_54 = (undefined2 *)0x0;
  FUN_006bca64(&local_54,0,iVar16,1,1);
  puVar14 = local_4c;
  puVar17 = local_54;
  local_78 = local_50;
  pcVar11 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  if (iVar15 != -0x80000000) {
    pcVar11 = "stratum+tcp";
  }
  FUN_016dd1aa((undefined1 *)((int)local_50 + (int)local_4c),pcVar11,iVar16);
  if (puVar17 == (undefined2 *)0x80000000) {
    iVar16 = 3;
    local_78 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_78 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar3 = false;
    *(undefined1 *)(local_78 + 1) = 0x41;
    *local_78 = 0x2f4e;
  }
  else {
    iVar16 = (int)puVar14 + iVar16;
    bVar3 = puVar17 == (undefined2 *)0x0;
  }
  FUN_007990b4(&local_54,param_2);
  if (local_54 == (undefined2 *)0x80000000) {
    local_90 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_90 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar4 = false;
    *(undefined1 *)(local_90 + 1) = 0x41;
    *local_90 = 0x2f4e;
    puVar17 = (undefined2 *)3;
  }
  else {
    local_90 = local_50;
    bVar4 = local_54 == (undefined2 *)0x0;
    puVar17 = local_4c;
  }
  FUN_007991e0(&local_54,param_2);
  if (local_54 == (undefined2 *)0x80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    bVar5 = false;
    puVar14 = (undefined2 *)3;
  }
  else {
    bVar5 = local_54 == (undefined2 *)0x0;
    puVar14 = local_4c;
    puVar8 = local_50;
  }
  iVar15 = param_2[0x3e];
  if (iVar15 == 0) {
    puVar9 = (undefined2 *)&DAT_00000001;
  }
  else {
    iVar19 = param_2[0x3d];
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar9 == (undefined2 *)0x0) {
LAB_0077e870:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar9,iVar19,iVar15);
    if (iVar15 == -0x80000000) {
      iVar15 = 3;
      puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar9 == (undefined2 *)0x0) {
        iVar15 = 3;
        goto LAB_0077e870;
      }
      bVar6 = false;
      *(undefined1 *)(puVar9 + 1) = 0x41;
      *puVar9 = 0x2f4e;
      goto LAB_0077e6b8;
    }
  }
  bVar6 = iVar15 == 0;
LAB_0077e6b8:
  local_5c = &local_2c;
  local_64 = &local_54;
  local_58 = 1;
  local_60 = 5;
  local_44 = local_90;
  local_4c = local_78;
  local_54 = puVar7;
  local_50 = (undefined2 *)iVar18;
  local_48 = iVar16;
  local_40 = (int)puVar17;
  local_3c = puVar8;
  local_38 = (int)puVar14;
  local_34 = puVar9;
  local_30 = iVar15;
  local_2c = param_3;
  local_28 = param_4;
  FUN_00791930(&local_70,&local_64);
  piVar10 = (int *)FUN_00749fd0(param_1,local_6c,local_68);
  puVar12 = (uint *)(piVar10 + 2);
  do {
    uVar13 = *puVar12;
    bVar1 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar1);
  *puVar12 = uVar13 + 1;
  piVar10[3] = piVar10[3] + (uint)(0xfffffffe < uVar13);
  DataMemoryBarrier(0xb);
  do {
    iVar18 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = iVar18 + -1;
  if (iVar18 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (local_70 != 0) {
    thunk_FUN_016d3fb4(local_6c);
  }
  if (!bVar6) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(local_90);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(local_78);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar7);
    FUN_00b50e5c(param_2);
    return;
  }
  FUN_00b50e5c(param_2);
  return;
}


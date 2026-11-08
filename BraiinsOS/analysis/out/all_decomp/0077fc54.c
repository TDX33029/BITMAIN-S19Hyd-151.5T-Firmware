// FUN_0077fc54 @ 0077fc54 size=1096 calls_out=10 calls_in=2
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

void FUN_0077fc54(undefined4 param_1,int *param_2,int param_3,int param_4)

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
  int iVar12;
  undefined2 *puVar13;
  int iVar14;
  int iVar15;
  undefined2 *puVar16;
  int iVar17;
  undefined2 *local_7c;
  undefined2 *local_54;
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
  
  iVar15 = param_2[0x41];
  if (iVar15 == 0) {
    puVar7 = (undefined2 *)&DAT_00000001;
LAB_0077fce8:
    bVar2 = iVar15 == 0;
  }
  else {
    iVar12 = param_2[0x40];
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(iVar15);
    if (puVar7 == (undefined2 *)0x0) {
LAB_00780078:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar15);
    }
    FUN_016dd1aa(puVar7,iVar12,iVar15);
    if (iVar15 != -0x80000000) goto LAB_0077fce8;
    iVar15 = 3;
    puVar7 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar7 == (undefined2 *)0x0) {
      iVar15 = 3;
      goto LAB_00780078;
    }
    *(undefined1 *)(puVar7 + 1) = 0x41;
    *puVar7 = 0x2f4e;
    bVar2 = false;
  }
  iVar12 = 0xb;
  local_48 = (undefined2 *)&DAT_00000001;
  iVar14 = *param_2;
  local_44 = (undefined2 *)0x0;
  local_4c = (undefined2 *)0x0;
  if (iVar14 == -0x80000000) {
    iVar12 = 0xc;
  }
  FUN_006bca64(&local_4c,0,iVar12,1,1);
  puVar13 = local_44;
  puVar8 = local_4c;
  local_54 = local_48;
  pcVar11 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  if (iVar14 != -0x80000000) {
    pcVar11 = "stratum+tcp";
  }
  FUN_016dd1aa((undefined1 *)((int)local_48 + (int)local_44),pcVar11,iVar12);
  if (puVar8 == (undefined2 *)0x80000000) {
    iVar12 = 3;
    local_54 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_54 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar3 = false;
    *(undefined1 *)(local_54 + 1) = 0x41;
    *local_54 = 0x2f4e;
  }
  else {
    iVar12 = (int)puVar13 + iVar12;
    bVar3 = puVar8 == (undefined2 *)0x0;
  }
  FUN_007990b4(&local_4c,param_2);
  if (local_4c == (undefined2 *)0x80000000) {
    puVar8 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (puVar8 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    bVar4 = false;
    *(undefined1 *)(puVar8 + 1) = 0x41;
    *puVar8 = 0x2f4e;
    puVar13 = (undefined2 *)3;
  }
  else {
    bVar4 = local_4c == (undefined2 *)0x0;
    puVar8 = local_48;
    puVar13 = local_44;
  }
  FUN_007991e0(&local_4c,param_2);
  if (local_4c == (undefined2 *)0x80000000) {
    local_7c = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_7c == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1);
    }
    *(undefined1 *)(local_7c + 1) = 0x41;
    *local_7c = 0x2f4e;
    bVar5 = false;
    puVar16 = (undefined2 *)3;
  }
  else {
    local_7c = local_48;
    bVar5 = local_4c == (undefined2 *)0x0;
    puVar16 = local_44;
  }
  iVar14 = param_2[0x3e];
  if (iVar14 == 0) {
    puVar9 = (undefined2 *)&DAT_00000001;
  }
  else {
    iVar17 = param_2[0x3d];
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(iVar14);
    if (puVar9 == (undefined2 *)0x0) {
LAB_00780088:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar14);
    }
    FUN_016dd1aa(puVar9,iVar17,iVar14);
    if (iVar14 == -0x80000000) {
      iVar14 = 3;
      puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar9 == (undefined2 *)0x0) {
        iVar14 = 3;
        goto LAB_00780088;
      }
      bVar6 = false;
      *(undefined1 *)(puVar9 + 1) = 0x41;
      *puVar9 = 0x2f4e;
      goto LAB_0077ff14;
    }
  }
  bVar6 = iVar14 == 0;
LAB_0077ff14:
  local_44 = local_54;
  local_34 = local_7c;
  local_4c = puVar7;
  local_48 = (undefined2 *)iVar15;
  local_40 = iVar12;
  local_3c = puVar8;
  local_38 = (int)puVar13;
  local_30 = (int)puVar16;
  local_2c = puVar9;
  local_28 = iVar14;
  piVar10 = (int *)FUN_00749168(param_1,&local_4c,5);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar10 + 2);
  } while (!bVar1);
  piVar10[2] = param_3;
  piVar10[3] = param_4;
  DataMemoryBarrier(0xb);
  do {
    iVar15 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = iVar15 + -1;
  if (iVar15 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (!bVar6) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar5) {
    thunk_FUN_016d3fb4(local_7c);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar8);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(local_54);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(puVar7);
    FUN_00b50e5c(param_2);
    return;
  }
  FUN_00b50e5c(param_2);
  return;
}


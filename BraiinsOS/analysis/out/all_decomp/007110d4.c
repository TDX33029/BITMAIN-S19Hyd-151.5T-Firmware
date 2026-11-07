// FUN_007110d4 @ 007110d4 size=2044 calls_out=20 calls_in=1
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_007110d4(uint *param_1,undefined4 param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  int iVar8;
  int *piVar9;
  uint *puVar10;
  undefined **ppuVar11;
  undefined **ppuVar12;
  undefined **ppuVar13;
  undefined2 *puVar14;
  char *pcVar15;
  uint *puVar16;
  uint uVar17;
  int iVar18;
  undefined2 *puVar19;
  int iVar20;
  undefined2 *puVar21;
  uint *local_180;
  undefined **local_17c;
  undefined2 *local_178;
  uint local_174;
  undefined2 *local_170;
  uint local_16c;
  undefined2 *local_168;
  uint local_164;
  undefined2 *local_160;
  uint local_15c;
  uint uStack_158;
  uint uStack_154;
  uint uStack_150;
  uint **local_14c;
  undefined4 local_148;
  uint *local_144;
  undefined *local_140;
  undefined4 local_13c;
  uint local_138;
  uint local_134;
  uint uStack_130;
  uint uStack_12c;
  uint local_128;
  uint local_124;
  uint uStack_120;
  uint uStack_11c;
  uint local_118;
  uint uStack_114;
  uint uStack_110;
  uint uStack_10c;
  uint uStack_108;
  uint local_60;
  undefined4 local_5c;
  int local_54;
  undefined4 local_50;
  int local_48;
  undefined4 local_44;
  int local_40;
  int local_3c;
  undefined4 local_38;
  int local_34;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_1[0x35]) {
  case '\0':
    uVar17 = param_1[0xd];
    param_1[0xe] = uVar17;
    param_1[0xf] = *param_1;
    param_1[0x10] = param_1[1];
    param_1[0x11] = param_1[2];
    param_1[0x12] = param_1[3];
    param_1[0x13] = param_1[4];
    param_1[0x14] = param_1[5];
    param_1[0x15] = param_1[6];
    param_1[0x16] = param_1[7];
    param_1[0x17] = param_1[8];
    param_1[0x18] = param_1[9];
    param_1[0x19] = param_1[10];
    param_1[0x1a] = param_1[0xb];
    param_1[0x1b] = param_1[0xc];
    if (*(uint *)(uVar17 + 0x48) != 2) {
      iVar8 = *(int *)(uVar17 + 0x4c);
      if ((*(uint *)(uVar17 + 0x48) & 1) != 0) {
        iVar8 = iVar8 + (*(int *)(*(int *)(uVar17 + 0x50) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar17 + 0x50) + 0x30))(iVar8,uVar17 + 0x40);
      iVar8 = *(int *)(uVar17 + 0x4c);
      if (*(int *)(uVar17 + 0x48) == 1) {
        iVar8 = iVar8 + (*(int *)(*(int *)(uVar17 + 0x50) + 8) - 1U & 0xfffffff8) + 8;
      }
      (**(code **)(*(int *)(uVar17 + 0x50) + 0x34))(iVar8,uVar17 + 0x40);
    }
    iVar8 = *(int *)(param_1[0xe] + 0x60);
    local_138 = param_1[0xf];
    local_134 = param_1[0x10];
    uStack_130 = param_1[0x11];
    uStack_12c = param_1[0x12];
    local_128 = param_1[0x13];
    local_124 = param_1[0x14];
    uStack_120 = param_1[0x15];
    uStack_11c = param_1[0x16];
    local_118 = param_1[0x17];
    uStack_114 = param_1[0x18];
    uStack_110 = param_1[0x19];
    uStack_10c = param_1[0x1a];
    uStack_108 = param_1[0x1b];
    (**(code **)(*(int *)(iVar8 + 0x3dc) + 0x10))
              (&local_180,*(undefined4 *)(iVar8 + 0x3d8),&local_138,param_1[0xe] + 0x68);
    if (local_180 == (uint *)&SUB_00000002) goto LAB_007117d8;
    puVar10 = param_1 + 0x1c;
    *puVar10 = (uint)local_180;
    param_1[0x1d] = (uint)local_17c;
    param_1[0x1e] = (uint)local_178;
    param_1[0x1f] = local_174;
    param_1[0x20] = (uint)local_170;
    param_1[0x21] = local_16c;
    param_1[0x22] = (uint)local_168;
    param_1[0x23] = local_164;
    param_1[0x24] = (uint)local_160;
    param_1[0x25] = local_15c;
    param_1[0x26] = uStack_158;
    param_1[0x27] = uStack_154;
    param_1[0x28] = uStack_150;
    local_138 = *puVar10;
    local_134 = param_1[0x1d];
    uStack_130 = param_1[0x1e];
    uStack_12c = param_1[0x1f];
    local_128 = param_1[0x20];
    local_124 = param_1[0x21];
    uStack_120 = param_1[0x22];
    uStack_11c = param_1[0x23];
    local_118 = param_1[0x24];
    uStack_114 = param_1[0x25];
    uStack_110 = param_1[0x26];
    uStack_10c = param_1[0x27];
    uStack_108 = param_1[0x28];
    FUN_00752a6c(&local_180,param_1[0xe] + 0x20,param_1[0x1f],&local_138);
    if (*(int *)(param_1[0xe] + 0x68) == 0) {
      if ((((param_1[0x1c] != 0) && (DAT_018d9130 < 4)) &&
          ((DAT_018d9350 - 1 < 2 ||
           ((DAT_018d9350 != 0 && (cVar7 = FUN_0169ac90(&DAT_018d9348), cVar7 != '\0')))))) &&
         (iVar8 = FUN_016949d8(DAT_018d9348), iVar8 != 0)) {
        local_144 = (uint *)(DAT_018d9348 + 0x1c);
        if (*(uint *)(DAT_018d9348 + 0x20) == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_00fb74b8(&DAT_00411c02,0x22,&DAT_0185a014);
        }
        uStack_130 = *(uint *)(DAT_018d9348 + 0x24);
        uStack_12c = *(uint *)(DAT_018d9348 + 0x28);
        local_17c = &local_140;
        local_148 = 1;
        local_128 = 0;
        local_178 = (undefined2 *)&DAT_018abb78;
        local_13c = 0x51;
        local_140 = &DAT_0034014f;
        local_180 = &local_138;
        local_14c = &local_180;
        local_138 = *local_144;
        local_134 = *(uint *)(DAT_018d9348 + 0x20);
        FUN_00712c9c(&local_14c);
      }
    }
    else if (param_1[0x1c] != 0) {
      *(undefined1 *)((int)param_1 + 0xd1) = 0;
      param_1[0x32] = param_1[0xe];
      param_1[0x33] = (uint)puVar10;
      param_1[0x2f] = param_1[0x1d];
      goto switchD_007110ec_caseD_3;
    }
    break;
  case '\x01':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0185a024);
  case '\x02':
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0185a024);
  case '\x03':
switchD_007110ec_caseD_3:
    iVar8 = FUN_00711e48(param_1 + 0x29,param_2);
    if (iVar8 != 0) {
      *(undefined1 *)(param_1 + 0x35) = 3;
      return 1;
    }
    if (*(char *)((int)param_1 + 0xd1) == '\x03') {
      FUN_00711a8c(param_1 + 0x29);
      piVar9 = (int *)param_1[0x31];
      DataMemoryBarrier(0xb);
      do {
        iVar8 = *piVar9;
        bVar1 = (bool)hasExclusiveAccess(piVar9);
      } while (!bVar1);
      *piVar9 = iVar8 + -1;
      if (iVar8 == 1) {
        DataMemoryBarrier(0xb);
        FUN_00790c08(param_1[0x31]);
      }
      *(undefined1 *)(param_1 + 0x34) = 0;
    }
  }
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c == 0) {
    FUN_007901fc(&local_138,*(int *)(param_1[0xe] + 0x60) + 0x10);
    uVar6 = local_38;
    uVar5 = DAT_018d7cd4;
    iVar8 = local_34;
    if (local_34 == 0) {
      puVar10 = (uint *)&DAT_00000001;
    }
    else {
      puVar10 = (uint *)thunk_FUN_016d4a50(local_34);
      if (puVar10 == (uint *)0x0) {
LAB_00711888:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar8);
      }
      FUN_016dd1aa(puVar10,uVar6,local_34);
      if (local_34 == -0x80000000) {
        iVar8 = 3;
        puVar10 = (uint *)thunk_FUN_016d4a50(3);
        if (puVar10 == (uint *)0x0) goto LAB_00711888;
        *(undefined1 *)((int)puVar10 + 2) = 0x41;
        *(undefined2 *)puVar10 = 0x2f4e;
        iVar8 = 3;
      }
    }
    uVar17 = local_138;
    iVar18 = 0xb;
    local_178 = (undefined2 *)0x0;
    if (local_138 == 0x80000000) {
      iVar18 = 0xc;
    }
    local_17c = (undefined **)&DAT_00000001;
    local_180 = (uint *)0x0;
    FUN_006bca64(&local_180,0,iVar18,1,1);
    puVar19 = local_178;
    ppuVar11 = local_17c;
    puVar16 = local_180;
    pcVar15 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
    if (uVar17 != 0x80000000) {
      pcVar15 = "stratum+tcp";
    }
    FUN_016dd1aa((undefined1 *)((int)local_17c + (int)local_178),pcVar15,iVar18);
    if (puVar16 == (uint *)0x80000000) {
      iVar18 = 3;
      ppuVar11 = (undefined **)thunk_FUN_016d4a50(3);
      if (ppuVar11 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)((int)ppuVar11 + 2) = 0x41;
      bVar1 = false;
      *(undefined2 *)ppuVar11 = 0x2f4e;
    }
    else {
      iVar18 = (int)puVar19 + iVar18;
      bVar1 = puVar16 == (uint *)0x0;
    }
    FUN_007990b4(&local_180,&local_138);
    if (local_180 == (uint *)0x80000000) {
      ppuVar12 = (undefined **)thunk_FUN_016d4a50(3);
      if (ppuVar12 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)((int)ppuVar12 + 2) = 0x41;
      bVar3 = false;
      *(undefined2 *)ppuVar12 = 0x2f4e;
      puVar19 = (undefined2 *)3;
    }
    else {
      bVar3 = local_180 == (uint *)0x0;
      puVar19 = local_178;
      ppuVar12 = local_17c;
    }
    FUN_007991e0(&local_180,&local_138);
    if (local_180 == (uint *)0x80000000) {
      ppuVar13 = (undefined **)thunk_FUN_016d4a50(3);
      if (ppuVar13 == (undefined **)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,3);
      }
      *(undefined1 *)((int)ppuVar13 + 2) = 0x41;
      *(undefined2 *)ppuVar13 = 0x2f4e;
      bVar4 = false;
      puVar21 = (undefined2 *)3;
    }
    else {
      bVar4 = local_180 == (uint *)0x0;
      ppuVar13 = local_17c;
      puVar21 = local_178;
    }
    uVar6 = local_44;
    iVar20 = local_40;
    if (local_40 == 0) {
      puVar14 = (undefined2 *)&DAT_00000001;
    }
    else {
      puVar14 = (undefined2 *)thunk_FUN_016d4a50(local_40);
      if (puVar14 == (undefined2 *)0x0) {
LAB_00711898:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar20);
      }
      FUN_016dd1aa(puVar14,uVar6,local_40);
      if (local_40 == -0x80000000) {
        iVar20 = 3;
        puVar14 = (undefined2 *)thunk_FUN_016d4a50(3);
        if (puVar14 == (undefined2 *)0x0) goto LAB_00711898;
        *(undefined1 *)(puVar14 + 1) = 0x41;
        *puVar14 = 0x2f4e;
        iVar20 = 3;
      }
    }
    local_180 = puVar10;
    local_17c = (undefined **)iVar8;
    local_178 = (undefined2 *)ppuVar11;
    local_174 = iVar18;
    local_170 = (undefined2 *)ppuVar12;
    local_16c = (uint)puVar19;
    local_168 = (undefined2 *)ppuVar13;
    local_164 = (uint)puVar21;
    local_160 = puVar14;
    local_15c = iVar20;
    piVar9 = (int *)FUN_00749fd0(uVar5,&local_180,5);
    puVar16 = (uint *)(piVar9 + 2);
    do {
      uVar17 = *puVar16;
      bVar2 = (bool)hasExclusiveAccess(puVar16);
    } while (!bVar2);
    *puVar16 = uVar17 + 1;
    piVar9[3] = piVar9[3] + (uint)(0xfffffffe < uVar17);
    DataMemoryBarrier(0xb);
    do {
      iVar18 = *piVar9;
      bVar2 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar2);
    *piVar9 = iVar18 + -1;
    if (iVar18 == 1) {
      DataMemoryBarrier(0xb);
      FUN_012c0df4();
    }
    if (iVar20 != 0) {
      thunk_FUN_016d3fb4(puVar14);
    }
    if (!bVar4) {
      thunk_FUN_016d3fb4(ppuVar13);
    }
    if (!bVar3) {
      thunk_FUN_016d3fb4(ppuVar12);
    }
    if (!bVar1) {
      thunk_FUN_016d3fb4(ppuVar11);
    }
    if (iVar8 != 0) {
      thunk_FUN_016d3fb4(puVar10);
    }
    if ((local_138 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_134);
    }
    if (local_54 != 0) {
      thunk_FUN_016d3fb4(local_50);
    }
    if ((local_60 & 0x7fffffff) != 0) {
      thunk_FUN_016d3fb4(local_5c);
    }
    if (local_48 != 0) {
      thunk_FUN_016d3fb4(local_44);
    }
    if (local_3c != 0) {
      thunk_FUN_016d3fb4(local_38);
    }
  }
LAB_007117d8:
  *(undefined1 *)(param_1 + 0x35) = 1;
  return 0;
}


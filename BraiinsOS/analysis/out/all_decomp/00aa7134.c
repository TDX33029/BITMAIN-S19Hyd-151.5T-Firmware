// FUN_00aa7134 @ 00aa7134 size=1820 calls_out=12 calls_in=1
// strings: stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt | stratum+tcp

/* WARNING: Type propagation algorithm not settling */

void FUN_00aa7134(undefined4 param_1)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined2 *puVar9;
  int *piVar10;
  char *pcVar11;
  uint *puVar12;
  int iVar13;
  uint uVar14;
  undefined **ppuVar15;
  undefined **ppuVar16;
  undefined2 *puVar17;
  undefined2 *puVar18;
  undefined2 *puVar19;
  int iVar20;
  undefined **unaff_r11;
  int local_1b4;
  undefined2 *local_1a4;
  uint local_1a0;
  undefined4 local_19c;
  uint local_c8;
  undefined4 local_c4;
  int local_bc;
  undefined4 local_b8;
  undefined **local_b4;
  int local_b0;
  undefined4 local_ac;
  int local_a8;
  int local_a4;
  undefined4 local_a0;
  int local_9c;
  int local_8c;
  undefined4 local_88;
  undefined4 local_84;
  undefined2 **local_80;
  undefined **local_7c;
  undefined **local_78;
  undefined4 local_74;
  undefined *local_70;
  undefined4 local_6c;
  undefined2 *local_68;
  undefined2 *local_64;
  undefined2 *local_60;
  int local_5c;
  undefined2 *local_58;
  undefined **local_54;
  undefined2 *local_50;
  undefined **local_4c;
  undefined2 *local_48;
  int local_44;
  
  DataMemoryBarrier(0xb);
  if (DAT_018d7c7c != 0) goto LAB_00aa76b8;
  FUN_007901fc(&local_1a0,param_1);
  uVar8 = local_a0;
  uVar5 = DAT_018d7ccc;
  iVar20 = local_9c;
  if (local_9c == 0) {
    puVar19 = (undefined2 *)&DAT_00000001;
  }
  else {
    puVar19 = (undefined2 *)thunk_FUN_016d4a50(local_9c);
    if (puVar19 == (undefined2 *)0x0) {
LAB_00aa780c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar20);
    }
    FUN_016dd1aa(puVar19,uVar8,local_9c);
    if (local_9c == -0x80000000) {
      iVar20 = 3;
      puVar19 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar19 == (undefined2 *)0x0) goto LAB_00aa780c;
      *(undefined1 *)(puVar19 + 1) = 0x41;
      iVar20 = 3;
      *puVar19 = 0x2f4e;
    }
  }
  uVar14 = local_1a0;
  local_1b4 = 0xb;
  local_64 = (undefined2 *)&DAT_00000001;
  local_60 = (undefined2 *)0x0;
  if (local_1a0 == 0x80000000) {
    local_1b4 = 0xc;
  }
  local_68 = (undefined2 *)0x0;
  FUN_006bca64(&local_68,0,local_1b4,1,1);
  puVar9 = local_60;
  puVar18 = local_68;
  local_1a4 = local_64;
  pcVar11 = "stratum2+tcpv2.stratum.braiins.comu95GEReVMjK6k5YqiSFNqqTnKU4ypU2Wm8awa6tmbmDmk1bWt";
  if (uVar14 != 0x80000000) {
    pcVar11 = "stratum+tcp";
  }
  FUN_016dd1aa((undefined1 *)((int)local_64 + (int)local_60),pcVar11,local_1b4);
  if (puVar18 == (undefined2 *)0x80000000) {
    local_1a4 = (undefined2 *)thunk_FUN_016d4a50(3);
    if (local_1a4 == (undefined2 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,3);
    }
    local_1b4 = 3;
    *(undefined1 *)(local_1a4 + 1) = 0x41;
    *local_1a4 = 0x2f4e;
    bVar2 = false;
  }
  else {
    local_1b4 = (int)puVar9 + local_1b4;
    bVar2 = puVar18 == (undefined2 *)0x0;
  }
  uVar8 = local_b8;
  puVar18 = (undefined2 *)&DAT_00000001;
  ppuVar16 = (undefined **)0x0;
  if (local_b4 == (undefined **)0x0) {
LAB_00aa732c:
    FUN_00fb6cfc(&local_68,puVar18,local_b4,&DAT_00418eb7,1);
    FUN_00953db0(&local_80,&local_68);
    if (local_80 == (undefined2 **)&DAT_00000001) {
      uVar7 = 0;
      if ((int)local_7c < 0) {
LAB_00aa7370:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar7,local_7c);
      }
      if (local_7c == (undefined **)0x0) {
        puVar9 = (undefined2 *)&DAT_00000001;
        ppuVar15 = (undefined **)0x0;
      }
      else {
        puVar9 = (undefined2 *)thunk_FUN_016d4a50(local_7c);
        ppuVar15 = local_7c;
        if (puVar9 == (undefined2 *)0x0) {
          uVar7 = 1;
          goto LAB_00aa7370;
        }
      }
      FUN_016dd1aa(puVar9,puVar18);
      ppuVar16 = local_7c;
      unaff_r11 = local_7c;
      if (local_b4 != (undefined **)0x0) {
        thunk_FUN_016d3fb4(puVar18);
        bVar3 = ppuVar15 == (undefined **)0x0;
        iVar6 = thunk_FUN_016d4a50(local_b4);
        puVar18 = puVar9;
        goto joined_r0x00aa73a0;
      }
      bVar3 = ppuVar15 == (undefined **)0x0;
      iVar6 = 1;
      puVar18 = puVar9;
    }
    else {
      iVar6 = 1;
      bVar3 = ppuVar16 == (undefined **)0x0;
      ppuVar16 = local_b4;
      if (local_b4 != (undefined **)0x0) {
        iVar6 = thunk_FUN_016d4a50(local_b4);
        goto joined_r0x00aa73a0;
      }
    }
LAB_00aa7428:
    FUN_00fb6cfc(&local_68,iVar6,local_b4,&DAT_00418eb7,1);
    FUN_00953db0(&local_80,&local_68);
    if (local_80 == (undefined2 **)0x0) {
      ppuVar15 = (undefined **)&DAT_80000000;
      puVar9 = puVar19;
    }
    else {
      uVar8 = 0;
      unaff_r11 = (undefined **)((int)local_b4 - (int)local_78);
      if ((int)unaff_r11 < 0) {
LAB_00aa7470:
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(uVar8,unaff_r11);
      }
      if (local_b4 == local_78) {
        puVar9 = (undefined2 *)&DAT_00000001;
        ppuVar15 = (undefined **)0x0;
      }
      else {
        puVar9 = (undefined2 *)thunk_FUN_016d4a50(unaff_r11);
        ppuVar15 = unaff_r11;
        if (puVar9 == (undefined2 *)0x0) {
          uVar8 = 1;
          goto LAB_00aa7470;
        }
      }
      FUN_016dd1aa(puVar9,(undefined1 *)(iVar6 + (int)local_78),unaff_r11);
    }
    if (local_b4 != (undefined **)0x0) {
      thunk_FUN_016d3fb4(iVar6);
    }
    if (ppuVar15 == (undefined **)&DAT_80000000) goto LAB_00aa7498;
    bVar4 = ppuVar15 == (undefined **)0x0;
  }
  else {
    puVar18 = (undefined2 *)thunk_FUN_016d4a50(local_b4);
    if (puVar18 == (undefined2 *)0x0) {
      ppuVar16 = local_b4;
LAB_00aa7840:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,ppuVar16);
    }
    FUN_016dd1aa(puVar18,uVar8,local_b4);
    ppuVar16 = local_b4;
    if (local_b4 != (undefined **)&DAT_80000000) goto LAB_00aa732c;
    puVar18 = (undefined2 *)thunk_FUN_016d4a50(3);
    ppuVar16 = (undefined **)0x3;
    if (puVar18 == (undefined2 *)0x0) goto LAB_00aa7840;
    *(undefined1 *)(puVar18 + 1) = 0x41;
    *puVar18 = 0x2f4e;
    bVar3 = false;
    iVar6 = thunk_FUN_016d4a50(0x80000000);
    ppuVar16 = (undefined **)0x3;
joined_r0x00aa73a0:
    if (iVar6 == 0) goto LAB_00aa77c8;
    FUN_016dd1aa(iVar6,uVar8,local_b4);
    if (local_b4 != (undefined **)&DAT_80000000) goto LAB_00aa7428;
LAB_00aa7498:
    puVar9 = (undefined2 *)thunk_FUN_016d4a50(3);
    local_b4 = (undefined **)0x3;
    if (puVar9 == (undefined2 *)0x0) {
LAB_00aa77c8:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,local_b4);
    }
    *(undefined1 *)(puVar9 + 1) = 0x41;
    *puVar9 = 0x2f4e;
    unaff_r11 = (undefined **)0x3;
    bVar4 = false;
  }
  uVar8 = local_ac;
  iVar6 = local_a8;
  if (local_a8 == 0) {
    puVar17 = (undefined2 *)&DAT_00000001;
  }
  else {
    puVar17 = (undefined2 *)thunk_FUN_016d4a50(local_a8);
    if (puVar17 == (undefined2 *)0x0) {
LAB_00aa781c:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar6);
    }
    FUN_016dd1aa(puVar17,uVar8,local_a8);
    if (local_a8 == -0x80000000) {
      iVar6 = 3;
      puVar17 = (undefined2 *)thunk_FUN_016d4a50(3);
      if (puVar17 == (undefined2 *)0x0) goto LAB_00aa781c;
      *(undefined1 *)(puVar17 + 1) = 0x41;
      iVar6 = 3;
      *puVar17 = 0x2f4e;
    }
  }
  local_78 = &local_70;
  local_80 = &local_68;
  local_5c = local_1b4;
  local_60 = local_1a4;
  local_7c = (undefined **)&DAT_00000005;
  local_74 = 1;
  local_6c = 0xc;
  local_70 = &DAT_0034e2d9;
  local_68 = puVar19;
  local_64 = (undefined2 *)iVar20;
  local_58 = puVar18;
  local_54 = ppuVar16;
  local_50 = puVar9;
  local_4c = unaff_r11;
  local_48 = puVar17;
  local_44 = iVar6;
  FUN_00a8c51c(&local_8c,&local_80);
  piVar10 = (int *)FUN_00a62238(uVar5,local_88,local_84);
  puVar12 = (uint *)(piVar10 + 2);
  do {
    uVar14 = *puVar12;
    bVar1 = (bool)hasExclusiveAccess(puVar12);
  } while (!bVar1);
  *puVar12 = uVar14 + 1;
  piVar10[3] = piVar10[3] + (uint)(0xfffffffe < uVar14);
  DataMemoryBarrier(0xb);
  do {
    iVar13 = *piVar10;
    bVar1 = (bool)hasExclusiveAccess(piVar10);
  } while (!bVar1);
  *piVar10 = iVar13 + -1;
  if (iVar13 == 1) {
    DataMemoryBarrier(0xb);
    FUN_012c0df4();
  }
  if (local_8c != 0) {
    thunk_FUN_016d3fb4(local_88);
  }
  if (iVar6 != 0) {
    thunk_FUN_016d3fb4(puVar17);
  }
  if (!bVar4) {
    thunk_FUN_016d3fb4(puVar9);
  }
  if (!bVar3) {
    thunk_FUN_016d3fb4(puVar18);
  }
  if (!bVar2) {
    thunk_FUN_016d3fb4(local_1a4);
  }
  if (iVar20 != 0) {
    thunk_FUN_016d3fb4(puVar19);
  }
  if ((local_1a0 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_19c);
  }
  if (local_bc != 0) {
    thunk_FUN_016d3fb4(local_b8);
  }
  if ((local_c8 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_c4);
  }
  if (local_b0 != 0) {
    thunk_FUN_016d3fb4(local_ac);
  }
  if (local_a4 != 0) {
    thunk_FUN_016d3fb4(local_a0);
  }
LAB_00aa76b8:
  FUN_00ac0588(&DAT_0034e2e5,0x22);
  return;
}


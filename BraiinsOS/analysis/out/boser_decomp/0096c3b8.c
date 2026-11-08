// FUN_0096c3b8 @ 0096c3b8 size=1224 calls_out=12 calls_in=9
// strings: 

void FUN_0096c3b8(undefined4 param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  int iVar11;
  char *pcVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint uVar17;
  uint local_960;
  undefined *local_95c;
  uint local_94c;
  int local_920 [114];
  undefined1 auStack_758 [456];
  undefined1 auStack_590 [456];
  undefined1 auStack_3c8 [456];
  undefined1 auStack_200 [456];
  int local_38;
  int local_34;
  int local_30;
  uint local_2c;
  
  iVar4 = FUN_01298504(param_4,1);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_4);
  }
  FUN_01bed4e2(iVar4,param_3,param_4);
  FUN_01bed4e2(auStack_590,param_5,0x1c8);
  uVar5 = FUN_01adafd4(*(undefined4 *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24),
                       *(undefined4 *)(param_2 + 0x28),*(undefined4 *)(param_2 + 0x2c),iVar4,param_4
                      );
  iVar11 = *(int *)(param_2 + 0x34);
  local_94c = *(uint *)(param_2 + 0x38);
  if (*(int *)(param_2 + 0x44) == 0) {
    FUN_00945a14(param_2 + 0x3c);
  }
  piVar6 = (int *)(param_2 + 0x30);
  puVar13 = *(uint **)(param_2 + 0x3c);
  iVar16 = 0;
  uVar17 = *(uint *)(param_2 + 0x40);
  bVar2 = false;
  bVar3 = false;
  uVar15 = uVar5;
  do {
    local_95c = &DAT_01d307c8;
    uVar15 = uVar17 & uVar15;
    uVar7 = *(uint *)((int)puVar13 + uVar15);
    uVar8 = uVar7 ^ (uVar5 >> 0x19) * 0x1010101;
    uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
    if (uVar8 != 0) {
      do {
        uVar14 = puVar13[-1 - (uVar15 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                                       (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18)
                                        >> 3) & uVar17)];
        if (local_94c <= uVar14) {
LAB_0096c870:
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar14,local_94c,local_95c);
        }
        iVar9 = uVar14 * 0x1d8 + iVar11;
        if ((param_4 == *(int *)(iVar9 + 0x1d0)) &&
           (iVar9 = thunk_FUN_01bed842(iVar4,*(undefined4 *)(iVar9 + 0x1cc),param_4), iVar9 == 0)) {
          local_94c = *(uint *)(param_2 + 0x38);
          if (local_94c <= uVar14) {
            local_95c = &DAT_01d307d8;
            goto LAB_0096c870;
          }
          piVar6 = (int *)(*(int *)(param_2 + 0x34) + uVar14 * 0x1d8);
          iVar11 = *piVar6;
          FUN_01bed4e2(auStack_758,piVar6 + 1,0x1c4);
          FUN_01bed4e2(piVar6,param_5,0x1c8);
          FUN_019bb7e0(param_4,iVar4);
          local_920[0] = iVar11;
          FUN_01bed4e2((uint)local_920 | 4,auStack_758,0x1c4);
          if (iVar11 != 9) {
            FUN_0096d2e0(local_920);
          }
          goto LAB_0096c800;
        }
        uVar8 = uVar8 - 1 & uVar8;
      } while (uVar8 != 0);
    }
    if (bVar2) {
      if (bVar3) goto LAB_0096c5c0;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar8 = uVar7 & 0x80808080;
      if (uVar8 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_960 = uVar15 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                            (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) &
                    uVar17;
LAB_0096c5c0:
        if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar16 = iVar16 + 4;
    uVar15 = uVar15 + iVar16;
  } while( true );
  uVar15 = (uint)*(char *)((int)puVar13 + local_960);
  if (-1 < (int)uVar15) {
    uVar15 = *puVar13 & 0x80808080;
    uVar7 = LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 | (uVar15 >> 0x10 & 0xff) << 8 |
                    uVar15 >> 0x18);
    uVar15 = (uint)*(byte *)((int)puVar13 + (uVar7 >> 3));
    local_960 = uVar7 >> 3;
  }
  iVar11 = *(int *)(param_2 + 0x48);
  uVar7 = *(uint *)(param_2 + 0x38);
  *(uint *)(param_2 + 0x44) = *(int *)(param_2 + 0x44) - (uVar15 & 1);
  bVar1 = (byte)(uVar5 >> 0x19);
  *(byte *)((int)puVar13 + local_960) = bVar1;
  *(int *)(param_2 + 0x48) = iVar11 + 1;
  *(byte *)((int)puVar13 + (uVar17 & local_960 - 4) + 4) = bVar1;
  puVar13[-1 - local_960] = uVar7;
  FUN_01bed4e2(auStack_3c8,param_5,0x1c8);
  iVar11 = *(int *)(param_2 + 0x38);
  if (iVar11 == *(int *)(param_2 + 0x30)) {
    pcVar10 = (char *)(*(int *)(param_2 + 0x44) + *(int *)(param_2 + 0x48));
    pcVar12 = 
    "eeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:433event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1531event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1540event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1545event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1595event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1613event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1590event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1585event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1567event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1603event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1571event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs..." /* TRUNCATED STRING LITERAL */
    ;
    if (pcVar10 < 
        "eeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:433event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1531event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1540event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1545event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1595event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1613event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1590event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1585event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1567event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1603event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs:1571event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/server.rs..." /* TRUNCATED STRING LITERAL */
       ) {
      pcVar12 = pcVar10;
    }
    if (1 < (uint)((int)pcVar12 - iVar11)) {
      iVar16 = FUN_01a54c4c(piVar6,iVar11,(int)pcVar12 - iVar11,0x1d8);
      iVar11 = *(int *)(param_2 + 0x38);
      if (iVar16 == -0x7fffffff) goto LAB_0096c788;
    }
    FUN_01a54c38(piVar6,iVar11,1,0x1d8);
    iVar11 = *(int *)(param_2 + 0x38);
  }
LAB_0096c788:
  local_38 = param_4;
  local_34 = iVar4;
  local_30 = param_4;
  FUN_01bed4e2(auStack_200,param_5,0x1c8);
  local_2c = uVar5;
  if (iVar11 == *piVar6) {
    FUN_00a21050(piVar6);
  }
  FUN_01bed4e2(iVar11 * 0x1d8 + *(int *)(param_2 + 0x34),auStack_200,0x1d8);
  *(int *)(param_2 + 0x38) = iVar11 + 1;
  local_920[0] = 9;
  FUN_01bed4e2((uint)local_920 | 4,auStack_758,0x1c4);
LAB_0096c800:
  FUN_01bed4e2(param_1,param_2,0x78);
  return;
}


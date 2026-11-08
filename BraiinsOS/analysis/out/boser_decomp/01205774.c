// FUN_01205774 @ 01205774 size=2224 calls_out=21 calls_in=2
// strings: /var/log/boser/boser.log | /var/log/monitor/monitor.log | tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571 | boser-monitorevent open/boser/boser-unix/src/contract.rs:49 | boser-monitorevent open/boser/boser-unix/src/contract.rs:49 | tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571

void FUN_01205774(int param_1)

{
  undefined *puVar1;
  undefined2 uVar2;
  undefined1 uVar3;
  byte bVar4;
  int iVar5;
  uint uVar6;
  int extraout_r1;
  uint uVar7;
  undefined1 auStack_29b8 [88];
  undefined1 auStack_2960 [13];
  undefined1 local_2953;
  undefined1 auStack_2950 [88];
  undefined1 auStack_28f8 [800];
  undefined1 auStack_25d8 [240];
  undefined1 auStack_24e8 [800];
  undefined1 auStack_21c8 [240];
  int local_20d8;
  int local_20d4;
  undefined *local_20d0;
  byte local_204c;
  int local_1cc8;
  int local_1cc4;
  undefined4 local_1cc0;
  undefined1 local_1cbc;
  undefined1 auStack_1cbb [87];
  undefined2 uStack_1c64;
  undefined1 local_1c62;
  undefined1 local_1c61;
  undefined4 local_1c60;
  undefined4 local_1c5c;
  undefined4 local_1c58;
  undefined4 local_1c54;
  undefined4 local_1c50;
  undefined4 local_1c4c;
  undefined4 local_1c48;
  undefined4 local_1c3c;
  undefined1 auStack_1938 [240];
  undefined4 local_1848;
  undefined4 uStack_1844;
  undefined4 local_1840;
  undefined1 local_183c;
  undefined1 auStack_183b [87];
  undefined4 local_17e4;
  undefined4 local_17e0;
  undefined4 local_17dc;
  undefined4 local_17d8;
  undefined4 uStack_17d4;
  undefined4 uStack_17d0;
  undefined4 uStack_17cc;
  int local_16f8;
  undefined1 auStack_13b0 [240];
  undefined1 auStack_12c0 [1144];
  int local_e48;
  int local_e44;
  undefined *local_e40;
  byte local_dbc;
  int local_9d0;
  undefined *local_9cc;
  undefined *local_9c8;
  undefined4 local_9c4;
  undefined4 local_8ec;
  undefined4 local_8e8;
  undefined4 local_5c0;
  undefined4 uStack_5bc;
  undefined4 uStack_5b8;
  undefined4 uStack_5b4;
  int local_5b0;
  uint local_5ac;
  int local_558;
  uint local_554;
  int local_550;
  uint local_54c;
  undefined1 auStack_548 [56];
  undefined2 uStack_510;
  undefined1 local_50e;
  byte local_4c4;
  undefined2 uStack_4c0;
  undefined1 local_4be;
  undefined2 uStack_30;
  byte local_2e;
  
  if (param_1 == 0) {
    local_8ec = 0;
    local_8e8 = 5;
    local_9d0 = 0;
    FUN_01264594(&local_17d8,&local_9d0);
    FUN_012644dc(&local_e48,&local_17d8,
                 "tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571"
                 ,5);
    FUN_01ab73a0(&local_17d8);
    if (local_16f8 == 2) {
      FUN_01ab8094(&local_9d0);
      local_1c3c = 0x80000000;
      local_1c48 = 0x80000000;
      local_1c4c = 0;
      local_1c50 = 8;
      local_1c54 = 0;
      local_1c58 = 2;
      FUN_01ab6924(&local_20d8,&local_9d0,&local_1c58);
      FUN_00a21554(&local_17d8);
    }
    else {
      FUN_01bed4e2(&local_20d8,&local_17d8,800);
    }
    FUN_01bed4e2(auStack_1938,&local_e48,0xec);
    FUN_01bed4e2(&local_1c58,&local_20d8,800);
    FUN_01abed88(&local_20d8);
    FUN_0126a030(&local_17d8);
    FUN_01bed4e2(&local_9d0,&local_1c58,0x410);
    local_5c0 = local_17d8;
    uStack_5bc = uStack_17d4;
    uStack_5b8 = uStack_17d0;
    uStack_5b4 = uStack_17cc;
    uVar7 = (uint)local_204c;
    local_5b0 = 0xffffffff;
    local_5ac = 0xffffffff;
    if (0x3f < uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531533,0x25,&DAT_01d2ec40);
    }
    local_5ac = 1 >> (0x20 - uVar7 & 0xff);
    uVar6 = uVar7 - 0x20;
    if (-1 < (int)uVar6) {
      local_5ac = 1 << (uVar6 & 0xff);
    }
    local_5b0 = 1 << uVar7;
    if (-1 < (int)uVar6) {
      local_5b0 = 0;
    }
    local_204c = local_204c + 1;
    FUN_01bed4e2(&local_17d8,&local_9d0,0x428);
    FUN_01bed4e2(auStack_13b0,&local_20d8,0x90);
    local_9d0 = 1;
    local_9cc = (undefined *)0x1;
    FUN_01bed4e2(&local_9c8,&local_17d8,0x4b8);
    uStack_510 = 0x101;
    local_50e = 1;
    iVar5 = thunk_FUN_01be5118(0x4c8);
    if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_0066439c(8,0x4c8);
    }
    FUN_01bed4e2(iVar5,&local_9d0,0x4c8);
    local_20d0 = &DAT_01c0d5e0;
    local_20d8 = 1;
    local_20d4 = iVar5;
    FUN_01aab2f8(&local_20d8);
    local_9d0 = local_20d8;
    local_9cc = (undefined *)local_20d4;
    local_9c8 = local_20d0;
    iVar5 = FUN_01aaa900(&local_9d0);
    if (iVar5 == 0) {
      local_9cc = (undefined *)0x0;
      local_9d0 = 5 - DAT_01d50f88;
      local_9c8 = (undefined *)0x4;
      local_9c4 = 0;
      iVar5 = FUN_01aad10c(&local_9d0);
      if (iVar5 == 0) {
        return;
      }
      local_9cc = &DAT_01d2ef5c;
    }
    else {
      local_9cc = &DAT_01d2efd4;
    }
    local_9d0 = 1;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc("failed to set global default subscriber",0x27,&local_9d0,&DAT_01c0f914,
                 &DAT_01c240a4);
  }
  local_2953 = 2;
  local_9cc = (undefined *)0x80000;
  local_9d0._0_1_ = 3;
  FUN_01261a9c(auStack_29b8,"/var/log/boser/boser.log",0x18,&local_9d0,1,0,auStack_2960);
  local_9d0 = CONCAT31(local_9d0._1_3_,3);
  local_9cc = (undefined *)0x8000;
  FUN_01261a9c(auStack_2950,"/var/log/monitor/monitor.log",0x1c,&local_9d0,1,0,auStack_2960);
  local_8ec = 0;
  local_8e8 = 5;
  local_9d0 = 0;
  FUN_01264594(&local_17d8,&local_9d0);
  FUN_012644dc(&local_9d0,&local_17d8,
               "tarpc::client/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:574event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tarpc-0.33.0/src/client.rs:571"
               ,5);
  FUN_012644dc(&local_17d8,&local_9d0,"boser-monitorevent open/boser/boser-unix/src/contract.rs:49",
               5);
  FUN_0120631c(&local_9d0);
  FUN_01bed4e2(auStack_25d8,&local_17d8,0xec);
  FUN_01bed4e2(auStack_28f8,&local_9d0,800);
  local_8ec = 0;
  local_8e8 = 5;
  local_9d0 = 0;
  FUN_012644dc(&local_17d8,&local_9d0,"boser-monitorevent open/boser/boser-unix/src/contract.rs:49",
               0);
  FUN_0120631c(&local_9d0);
  FUN_01bed4e2(auStack_21c8,&local_17d8,0xec);
  FUN_01bed4e2(auStack_24e8,&local_9d0,800);
  FUN_0126a030(&local_9d0);
  puVar1 = local_9cc;
  iVar5 = local_9d0;
  uVar2 = (undefined2)local_9c4;
  uVar3 = local_9c4._3_1_;
  FUN_01bed4e2((uint)&local_9d0 | 3,auStack_29b8,0x54);
  FUN_01bed4e2(&local_17d8,&local_9d0,0x57);
  FUN_01bed4e2(&local_20d8,auStack_28f8,0x410);
  local_1cc8 = iVar5;
  local_1cc4 = (int)puVar1;
  local_1cbc = 0;
  local_1cc0 = 0;
  FUN_01bed4e2(auStack_1cbb,&local_17d8,0x57);
  local_1c60 = 0xffffffff;
  uStack_1c64 = uVar2;
  local_1c5c = 0xffffffff;
  local_1c61 = uVar3;
  local_1c62 = 0;
  FUN_019abc84(&local_9d0,&DAT_0056fb80,8);
  if ((local_9d0 == 0) || (local_9cc != (undefined *)0x80000000)) {
    FUN_019bb7e0(local_9cc,local_9c8);
  }
  FUN_01bed4e2((uint)&local_9d0 | 3,auStack_2950,0x54);
  FUN_01bed4e2(&local_17d8,&local_9d0,0x57);
  FUN_01bed4e2(&local_1c58,auStack_24e8,0x410);
  local_1848 = 0x10101;
  uStack_1844 = 0x2000000;
  local_183c = 0;
  local_1840 = 0;
  FUN_01bed4e2(auStack_183b,&local_17d8,0x57);
  local_17e0 = 0xffffffff;
  local_17dc = 0xffffffff;
  local_17e4 = 1;
  FUN_01abed88(&local_e48);
  FUN_01bed4e2(&local_17d8,&local_20d8,0x478);
  uVar7 = (uint)local_dbc;
  if (0x3f < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_00531533,0x25,&DAT_01d2ec40);
  }
  local_dbc = local_dbc + 1;
  FUN_01bed4e2(&local_9d0,&local_17d8,0x478);
  uVar6 = uVar7 - 0x20;
  local_554 = 1 >> (0x20 - uVar7 & 0xff);
  if (-1 < (int)uVar6) {
    local_554 = 1 << (uVar6 & 0xff);
  }
  local_558 = 1 << uVar7;
  if (-1 < (int)uVar6) {
    local_558 = 0;
  }
  FUN_01bed4e2(&local_550,&local_e48,0x90);
  uStack_4c0 = 0x101;
  local_4be = 1;
  FUN_01bed4e2(&local_e48,&local_1c58,0x478);
  uVar7 = (uint)local_4c4;
  if (0x3f < uVar7) {
                    /* WARNING: Subroutine does not return */
    FUN_01979f74(&DAT_00531533,0x25,&DAT_01d2ec40);
  }
  bVar4 = FUN_01210d98(&local_9d0,0xca32c100,0xc8b5eb6e,0xdceed2c0,0xb6c55ee9,0xca32c100);
  local_4c4 = local_4c4 + 1;
  FUN_01bed4e2(auStack_12c0,&local_e48,0x478);
  FUN_01bed4e2(&local_17d8,&local_9d0,0x518);
  local_9d0 = 1;
  local_9cc = (undefined *)0x1;
  FUN_01bed4e2(&local_9c8,auStack_12c0,0x478);
  uVar6 = uVar7 - 0x20;
  local_54c = 1 >> (0x20 - uVar7 & 0xff);
  if (-1 < (int)uVar6) {
    local_54c = 1 << (uVar6 & 0xff);
  }
  local_550 = 1 << uVar7;
  if (-1 < (int)uVar6) {
    local_550 = 0;
  }
  FUN_01bed4e2(auStack_548,&local_17d8,0x518);
  uStack_30 = 0x100;
  local_2e = bVar4 & extraout_r1 != 0;
  iVar5 = thunk_FUN_01be5118(0x9a8);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x9a8);
  }
  FUN_01bed4e2(iVar5,&local_9d0,0x9a8);
  local_e48 = 1;
  local_e40 = &DAT_01c236b8;
  local_e44 = iVar5;
  FUN_01aab2f8(&local_e48);
  local_9d0 = local_e48;
  local_9cc = (undefined *)local_e44;
  local_9c8 = local_e40;
  iVar5 = FUN_01aaa900(&local_9d0);
  if (iVar5 == 0) {
    local_9c4 = 0;
    local_9d0 = 5 - DAT_01d50f88;
    local_9c8 = (undefined *)0x4;
    local_9cc = (undefined *)0x0;
    iVar5 = FUN_01aad10c(&local_9d0);
    if (iVar5 == 0) {
      return;
    }
    local_9cc = &DAT_01d2ef5c;
  }
  else {
    local_9cc = &DAT_01d2efd4;
  }
  local_9d0 = 1;
                    /* WARNING: Subroutine does not return */
  FUN_013073dc("failed to set global default subscriber",0x27,&local_9d0,&DAT_01c240b4,&DAT_01c240a4
              );
}


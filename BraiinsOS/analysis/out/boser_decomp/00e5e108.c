// FUN_00e5e108 @ 00e5e108 size=1324 calls_out=13 calls_in=2
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442

void FUN_00e5e108(int *param_1,int *param_2,int *param_3)

{
  code *pcVar1;
  byte bVar2;
  bool bVar3;
  char *pcVar4;
  int iVar5;
  char cVar6;
  uint uVar7;
  int iVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int local_84;
  int local_80;
  uint local_7c;
  undefined4 ****local_78;
  undefined4 local_74;
  int *local_70;
  undefined4 ****local_6c;
  undefined **local_68;
  int *local_64;
  undefined4 ***local_60;
  int local_5c;
  uint local_58;
  undefined4 uStack_54;
  undefined4 local_50;
  undefined *local_48;
  int *local_44;
  int local_40;
  code *local_3c;
  int local_38;
  code *local_34;
  undefined4 ****local_30;
  undefined **local_2c;
  undefined1 *local_28;
  
  FUN_01933ff0(&local_60,param_2 + 2);
  iVar5 = local_5c;
  if (local_60 == (undefined4 ***)0x1) {
    local_3c = (code *)CONCAT31(local_3c._1_3_,(undefined1)local_58);
    local_40 = local_5c;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_40,&DAT_01c1810c,&DAT_01c17fc4);
  }
  uVar7 = local_58 & 0xff;
  iVar12 = local_5c + 0x158;
  FUN_01368478(&local_60,local_5c + 0x74,iVar12);
  uVar10 = local_58;
  iVar11 = local_5c;
  if (local_60 == (undefined4 ***)0x0) {
    *param_1 = 0;
LAB_00e5e578:
    FUN_011967dc(iVar5,uVar7);
    return;
  }
  local_7c = local_58;
  local_80 = local_5c;
  local_84 = iVar12;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d724 - 1 < 2 ||
       ((DAT_01d4d724 != 0 && (cVar6 = FUN_01aaafa8(&DAT_01d4d71c), cVar6 != '\0')))) &&
      (iVar12 = FUN_01aaa278(DAT_01d4d71c), iVar12 != 0)))) {
    piVar9 = (int *)(DAT_01d4d71c + 0x1c);
    local_60 = (undefined4 ***)*piVar9;
    local_5c = *(int *)(DAT_01d4d71c + 0x20);
    if (local_5c == 0) {
LAB_00e5e620:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01c17fd4);
    }
    local_58 = *(uint *)(DAT_01d4d71c + 0x24);
    uStack_54 = *(undefined4 *)(DAT_01d4d71c + 0x28);
    local_50 = 0;
    iVar12 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x18c),*(undefined4 *)(iVar5 + 400),iVar11,uVar10)
    ;
    local_38 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x18c),*(undefined4 *)(iVar5 + 400),iVar11,
                            uVar10);
    local_38 = local_38 + 0x20;
    local_44 = &local_40;
    local_68 = &local_48;
    local_40 = iVar12 + 0xd4;
    local_78 = &local_6c;
    local_74 = 1;
    local_34 = FUN_00ea8c9c;
    local_3c = FUN_00b1c384;
    local_48 = &DAT_005934f5;
    local_64 = (int *)&DAT_01d2ea4c;
    local_70 = piVar9;
    local_6c = &local_60;
    FUN_01aaaecc(DAT_01d4d71c,&local_78);
    iVar12 = DAT_01d4d71c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined ***)(DAT_01d4d71c + 0x14);
      local_28 = *(undefined1 **)(DAT_01d4d71c + 0x18);
      local_30 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar13[3])(pcVar4,&local_30);
      if (iVar8 != 0) {
        FUN_01aaa328(iVar12,pcVar4,puVar13[4],&local_30,&local_78);
      }
    }
  }
  else {
    iVar12 = DAT_01d4d71c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_74 = *(undefined4 *)(DAT_01d4d71c + 0x14);
      local_70 = *(int **)(DAT_01d4d71c + 0x18);
      local_78 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar4 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar8 = (*(code *)puVar13[3])(pcVar4,&local_78);
      if (iVar8 != 0) {
        piVar9 = (int *)(DAT_01d4d71c + 0x1c);
        local_60 = (undefined4 ***)*piVar9;
        local_5c = *(int *)(DAT_01d4d71c + 0x20);
        if (local_5c == 0) goto LAB_00e5e620;
        local_58 = *(uint *)(DAT_01d4d71c + 0x24);
        uStack_54 = *(undefined4 *)(DAT_01d4d71c + 0x28);
        local_50 = 0;
        iVar8 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x18c),*(undefined4 *)(iVar5 + 400),iVar11,
                             uVar10);
        local_38 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x18c),*(undefined4 *)(iVar5 + 400),iVar11,
                                uVar10);
        local_38 = local_38 + 0x20;
        local_44 = &local_40;
        local_2c = &local_48;
        local_40 = iVar8 + 0xd4;
        local_6c = &local_30;
        local_68 = (undefined **)&DAT_00000001;
        local_34 = FUN_00ea8c9c;
        local_3c = FUN_00b1c384;
        local_48 = &DAT_005934f5;
        local_28 = &DAT_01d2ea4c;
        local_64 = piVar9;
        local_30 = &local_60;
        FUN_01aaa328(iVar12,pcVar4,puVar13[4],&local_78,&local_6c);
      }
    }
  }
  *(int *)(iVar5 + 0x1a0) = *(int *)(iVar5 + 0x1a0) + 1;
  uVar10 = FUN_01367c40(*(undefined4 *)(iVar5 + 0x18c),*(undefined4 *)(iVar5 + 400),iVar11,uVar10);
  bVar2 = *(byte *)(uVar10 + 0x20);
  if (bVar2 < 6) {
    if (bVar2 == 0) {
      uVar10 = (uint)*(byte *)(uVar10 + 0x21);
    }
    if (bVar2 == 0 && uVar10 == 2) {
      if (*(int *)(iVar5 + 0x2c) == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec("assertion failed: self.num_remote_reset_streams > 0event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/client.rs:1295/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/client.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/client.rs:1290event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/client.rs:1442/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/hpack/encoder.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/peer.rs:88/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/peer.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.4.7/src/proto/peer.rs:80"
                     ,0x33,&DAT_01cebf60);
      }
      *(int *)(iVar5 + 0x2c) = *(int *)(iVar5 + 0x2c) + -1;
    }
  }
  do {
    iVar11 = *param_2;
    bVar3 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar3);
  *param_2 = iVar11 + 1;
  if (-1 < iVar11) {
    FUN_01381984(&local_60,param_2,&local_84);
    do {
      iVar11 = *param_3;
      bVar3 = (bool)hasExclusiveAccess(param_3);
    } while (!bVar3);
    *param_3 = iVar11 + 1;
    if (-1 < iVar11) {
      *param_1 = (int)local_60;
      param_1[1] = local_5c;
      param_1[2] = local_58;
      param_1[3] = (int)param_3;
      goto LAB_00e5e578;
    }
  }
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0xe5e638);
  (*pcVar1)();
}


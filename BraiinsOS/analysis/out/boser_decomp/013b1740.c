// FUN_013b1740 @ 013b1740 size=2756 calls_out=11 calls_in=13
// strings: h2::proto::streams::counts/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rs:233 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::counts/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rs:233 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::counts/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rs:233 | InvalidParamSegmentInvalidParamInvalidCatchAll

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013b1740(int param_1,int *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  char *pcVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 ***pppuVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  bool bVar16;
  undefined4 ****ppppuVar17;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 *local_c8;
  undefined4 ***local_c4;
  undefined4 ***local_c0;
  byte local_b9;
  undefined4 ****local_b8;
  undefined4 ****local_b4;
  int *local_b0;
  undefined4 ****local_ac;
  undefined4 ****local_a8;
  undefined4 *local_a4;
  undefined4 ***local_a0;
  undefined4 ****local_9c;
  undefined1 *local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined1 local_89;
  undefined4 ***local_88;
  code *local_84;
  int local_80;
  code *local_7c;
  byte *local_78;
  undefined1 *local_74;
  undefined4 ***local_70;
  undefined1 *local_6c;
  int local_68;
  code *local_64;
  int local_60;
  code *local_5c;
  int local_58;
  code *local_54;
  undefined4 **local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  int *local_38;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  int *local_28;
  
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4ddfc - 1 < 2 ||
       ((DAT_01d4ddfc != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4ddf4), cVar1 != '\0')))) &&
      (iVar5 = FUN_01aaa278(DAT_01d4ddf4), iVar5 != 0)))) {
    puVar13 = (undefined4 *)(DAT_01d4ddf4 + 0x1c);
    local_a0 = (undefined4 ***)*puVar13;
    local_9c = *(undefined4 *****)(DAT_01d4ddf4 + 0x20);
    if (local_9c == (undefined4 ****)0x0) {
LAB_013b21d4:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cefe34);
    }
    iVar12 = *param_2;
    local_98 = *(undefined1 **)(DAT_01d4ddf4 + 0x24);
    uStack_94 = *(undefined4 *)(DAT_01d4ddf4 + 0x28);
    uStack_90 = 0;
    iVar4 = param_2[1];
    iVar11 = param_2[2];
    iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar4,iVar11)
    ;
    iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar4,iVar11)
    ;
    iVar3 = FUN_0139f0d0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar4,iVar11)
    ;
    local_88 = (undefined4 ***)(iVar5 + 0xcc);
    local_80 = iVar2 + 0x20;
    bVar16 = *(byte *)(iVar3 + 0x20) == 5;
    if (*(byte *)(iVar3 + 0x20) < 6) {
      bVar16 = *(int *)(iVar3 + 100) == 0;
    }
    local_b9 = false;
    if (bVar16) {
      local_b9 = *(int *)(iVar3 + 0xd8) == 0;
    }
    iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar4,iVar11)
    ;
    local_89 = *(byte *)(iVar5 + 100) ^ 1;
    local_68 = FUN_0139f0d0(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar4,
                            iVar11);
    local_68 = local_68 + 0xd8;
    local_c0 = &local_88;
    local_c4 = (undefined4 ***)&DAT_00584c09;
    local_a8 = &local_c4;
    local_70 = (undefined4 ***)&local_89;
    local_ac = &local_a0;
    local_78 = &local_b9;
    local_58 = param_1 + 0xc;
    local_60 = param_1 + 0x14;
    local_cc = (undefined4 ****)&DAT_00000001;
    local_d0 = &local_ac;
    ppppuVar17 = &local_d0;
    local_a4 = (undefined4 *)&DAT_01d2ea4c;
    local_54 = FUN_012fd02c;
    local_5c = FUN_012fd02c;
    local_64 = FUN_012fd02c;
    local_6c = &LAB_01a705e0;
    local_74 = &LAB_01a705e0;
    local_7c = FUN_013a2a94;
    local_84 = FUN_00b1c384;
    local_c8 = puVar13;
    FUN_01aaaecc(DAT_01d4ddf4,ppppuVar17);
    iVar5 = DAT_01d4ddf4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *****)(DAT_01d4ddf4 + 0x14);
      local_38 = *(int **)(DAT_01d4ddf4 + 0x18);
      local_40 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar13[3])(pcVar6,&local_40);
      if (iVar2 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar9 = puVar13[4];
        goto LAB_013b1c70;
      }
    }
  }
  else {
    iVar5 = DAT_01d4ddf4;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_b4 = *(undefined4 *****)(DAT_01d4ddf4 + 0x14);
      local_b0 = *(int **)(DAT_01d4ddf4 + 0x18);
      local_b8 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar13[3])(pcVar6,&local_b8);
      if (iVar2 != 0) {
        puVar8 = (undefined4 *)(DAT_01d4ddf4 + 0x1c);
        local_a0 = (undefined4 ***)*puVar8;
        local_9c = *(undefined4 *****)(DAT_01d4ddf4 + 0x20);
        if (local_9c == (undefined4 ****)0x0) goto LAB_013b21d4;
        iVar15 = *param_2;
        local_98 = *(undefined1 **)(DAT_01d4ddf4 + 0x24);
        uStack_94 = *(undefined4 *)(DAT_01d4ddf4 + 0x28);
        uStack_90 = 0;
        iVar11 = param_2[1];
        iVar12 = param_2[2];
        iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,
                             iVar12);
        iVar3 = FUN_0139f0d0(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,
                             iVar12);
        iVar4 = FUN_0139f0d0(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,
                             iVar12);
        local_88 = (undefined4 ***)(iVar2 + 0xcc);
        local_80 = iVar3 + 0x20;
        if (*(byte *)(iVar4 + 0x20) < 6) {
          local_89 = false;
          if (*(int *)(iVar4 + 100) == 0) {
            local_89 = *(int *)(iVar4 + 0xd8) == 0;
          }
        }
        else {
          local_89 = false;
        }
        iVar2 = FUN_0139f0d0(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,
                             iVar12);
        local_c4 = (undefined4 ***)(CONCAT31(local_c4._1_3_,*(undefined1 *)(iVar2 + 100)) ^ 1);
        local_68 = FUN_0139f0d0(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11
                                ,iVar12);
        local_68 = local_68 + 0xd8;
        local_cc = &local_88;
        local_70 = &local_c4;
        local_d0 = (undefined4 ****)&DAT_00584c09;
        local_3c = &local_d0;
        local_78 = &local_89;
        local_40 = &local_a0;
        local_58 = param_1 + 0xc;
        local_60 = param_1 + 0x14;
        local_a8 = (undefined4 ****)&DAT_00000001;
        local_ac = &local_40;
        local_38 = (int *)&DAT_01d2ea4c;
        local_54 = FUN_012fd02c;
        local_5c = FUN_012fd02c;
        local_64 = FUN_012fd02c;
        local_6c = &LAB_01a705e0;
        local_74 = &LAB_01a705e0;
        local_7c = FUN_013a2a94;
        local_84 = FUN_00b1c384;
        local_30 = local_b8;
        local_2c = local_b4;
        local_28 = local_b0;
        ppppuVar17 = &local_ac;
        uVar9 = puVar13[4];
        local_a4 = puVar8;
LAB_013b1c70:
        FUN_01aaa328(iVar5,pcVar6,uVar9,&local_30,ppppuVar17);
      }
    }
  }
  iVar3 = *param_2;
  iVar2 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if (5 < *(byte *)(iVar5 + 0x20)) goto LAB_013b1cb8;
  bVar16 = *(int *)(iVar5 + 100) == 0;
  if (bVar16) {
    iVar5 = *(int *)(iVar5 + 0xd8);
  }
  if (!bVar16 || iVar5 != 0) goto LAB_013b1cb8;
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if ((*(undefined1 **)(iVar5 + 0x18) == &DAT_3b9aca00) && (FUN_013a1724(iVar3,iVar4), param_3 != 0)
     ) {
    if (*(int *)(param_1 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.num_local_reset_streams > 0",0x32,&DAT_01cefe94);
    }
    *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + -1;
  }
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if (*(char *)(iVar5 + 0xe0) == '\0') goto LAB_013b1cb8;
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4ddf0 - 1 < 2 ||
       ((DAT_01d4ddf0 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4dde8), cVar1 != '\0')))))) &&
     (iVar5 = FUN_01aaa278(DAT_01d4dde8), iVar5 != 0)) {
    piVar14 = (int *)(DAT_01d4dde8 + 0x1c);
    if (*(code **)(DAT_01d4dde8 + 0x20) == (code *)0x0) {
LAB_013b21ec:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cefe44);
    }
    local_80 = *(int *)(DAT_01d4dde8 + 0x24);
    local_7c = *(code **)(DAT_01d4dde8 + 0x28);
    local_78 = (byte *)0x0;
    local_88 = (undefined4 ***)*piVar14;
    local_84 = *(code **)(DAT_01d4dde8 + 0x20);
    iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
    local_cc = &local_ac;
    local_ac = (undefined4 ****)(iVar5 + 0xcc);
    local_d0 = (undefined4 ****)&DAT_00585377;
    local_2c = &local_d0;
    local_30 = &local_88;
    local_3c = (undefined4 ****)&DAT_00000001;
    local_40 = &local_30;
    ppppuVar17 = &local_40;
    local_28 = (int *)&DAT_01d2ea4c;
    local_a8 = (undefined4 ****)FUN_00b1c384;
    local_38 = piVar14;
    FUN_01aaaecc(DAT_01d4dde8,ppppuVar17);
    iVar5 = DAT_01d4dde8;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_9c = *(undefined4 *****)(DAT_01d4dde8 + 0x14);
      local_98 = *(undefined1 **)(DAT_01d4dde8 + 0x18);
      local_a0 = (undefined4 ***)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar13[3])(pcVar6,&local_a0);
      if (iVar2 != 0) {
        uVar9 = puVar13[4];
        pppuVar10 = &local_a0;
        goto LAB_013b1ea0;
      }
    }
  }
  else {
    iVar5 = DAT_01d4dde8;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_48 = *(undefined4 *)(DAT_01d4dde8 + 0x14);
      local_44 = *(undefined4 *)(DAT_01d4dde8 + 0x18);
      local_4c = (undefined4 **)0x5;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
      }
      pcVar6 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar6 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar2 = (*(code *)puVar13[3])(pcVar6,&local_4c);
      if (iVar2 != 0) {
        piVar14 = (int *)(DAT_01d4dde8 + 0x1c);
        if (*(code **)(DAT_01d4dde8 + 0x20) == (code *)0x0) goto LAB_013b21ec;
        local_80 = *(int *)(DAT_01d4dde8 + 0x24);
        local_7c = *(code **)(DAT_01d4dde8 + 0x28);
        local_78 = (byte *)0x0;
        local_88 = (undefined4 ***)*piVar14;
        local_84 = *(code **)(DAT_01d4dde8 + 0x20);
        iVar2 = FUN_0139f0d0(*(undefined4 *)(*param_2 + 0x34),*(undefined4 *)(*param_2 + 0x38),
                             param_2[1],param_2[2]);
        local_40 = (undefined4 ****)(iVar2 + 0xcc);
        local_a8 = &local_40;
        local_ac = (undefined4 ****)&DAT_00585377;
        local_9c = &local_ac;
        local_a0 = &local_88;
        local_2c = (undefined4 ****)&DAT_00000001;
        local_30 = &local_a0;
        local_3c = (undefined4 ****)FUN_00b1c384;
        pppuVar10 = &local_4c;
        ppppuVar17 = &local_30;
        local_98 = &DAT_01d2ea4c;
        uVar9 = puVar13[4];
        local_28 = piVar14;
LAB_013b1ea0:
        FUN_01aaa328(iVar5,pcVar6,uVar9,pppuVar10,ppppuVar17);
      }
    }
  }
  iVar3 = *param_2;
  iVar2 = param_2[1];
  iVar4 = param_2[2];
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if (*(char *)(iVar5 + 0xe0) == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: stream.is_counted",0x23,&DAT_01cefd84);
  }
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if (*(uint *)(iVar5 + 0xcc) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: !id.is_zero()event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/peer.rs:80"
                 ,0x1f,&DAT_01ceef9c);
  }
  if ((((uint)(*(char *)(param_1 + 0x2c) != '\0') ^ *(uint *)(iVar5 + 0xcc)) & 1) == 0) {
    if (*(int *)(param_1 + 0x14) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.num_recv_streams > 0",0x2b,&DAT_01cefd94);
    }
    *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -1;
  }
  else {
    if (*(int *)(param_1 + 0xc) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.num_send_streams > 0event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/counts.rs:211"
                   ,0x2b,&DAT_01cefda4);
    }
    *(int *)(param_1 + 0xc) = *(int *)(param_1 + 0xc) + -1;
  }
  iVar5 = FUN_0139f148(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  *(undefined1 *)(iVar5 + 0xe0) = 0;
LAB_013b1cb8:
  iVar5 = FUN_0139f0d0(*(undefined4 *)(iVar3 + 0x34),*(undefined4 *)(iVar3 + 0x38),iVar2,iVar4);
  if (*(byte *)(iVar5 + 0x20) < 6) {
    iVar2 = *(int *)(iVar5 + 100);
    bVar16 = iVar2 == 0;
    if (bVar16) {
      iVar2 = *(int *)(iVar5 + 0xd8);
    }
    if (bVar16 && iVar2 == 0) {
      uVar7 = *(uint *)(iVar5 + 0xd0);
      bVar16 = uVar7 == 0;
      if (bVar16) {
        uVar7 = (uint)*(byte *)(iVar5 + 0xe1);
      }
      if (bVar16 && uVar7 == 0) {
        cVar1 = *(char *)(iVar5 + 0xe2);
        bVar16 = cVar1 == '\0';
        if (bVar16) {
          cVar1 = *(char *)(iVar5 + 0xe6);
        }
        if (bVar16 && cVar1 == '\0') {
          cVar1 = *(char *)(iVar5 + 0xe7);
          bVar16 = cVar1 == '\0';
          if (bVar16) {
            cVar1 = *(char *)(iVar5 + 0xe4);
          }
          if ((bVar16 && cVar1 == '\0') && (*(undefined1 **)(iVar5 + 0x18) == &DAT_3b9aca00)) {
            local_88 = (undefined4 ***)*param_2;
            local_84 = (code *)param_2[1];
            local_80 = param_2[2];
            FUN_013a1590();
          }
        }
      }
    }
  }
  return;
}


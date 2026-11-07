// FUN_01383f10 @ 01383f10 size=3024 calls_out=19 calls_in=2
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442

void FUN_01383f10(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  undefined *puVar7;
  undefined1 *puVar8;
  undefined4 ****ppppuVar9;
  int iVar10;
  undefined1 *puVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  code *pcVar15;
  undefined4 ****ppppuVar16;
  code *pcVar17;
  bool bVar18;
  undefined4 ****local_a8;
  undefined4 ****local_a4;
  int local_a0;
  undefined4 ****local_98;
  undefined4 ****local_94;
  undefined4 *local_90;
  undefined4 ****local_88;
  undefined4 ****local_84;
  int local_80;
  undefined4 ****local_78;
  code *local_74;
  undefined4 *local_70;
  undefined4 ****local_6c;
  undefined4 ****local_68;
  undefined4 *local_64;
  undefined4 ***local_60;
  int local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 ***local_48;
  undefined4 ****local_44;
  undefined4 ****local_40;
  undefined4 ****local_3c;
  undefined4 *local_38;
  undefined1 *local_34;
  undefined4 ****local_30;
  undefined4 ****local_2c;
  undefined4 *local_28;
  
  ppppuVar9 = (undefined4 ****)param_1[1];
  iVar10 = param_1[2];
  FUN_01933ff0(&local_78,*param_1 + 8);
  puVar12 = local_70;
  pcVar6 = local_74;
  if (local_78 == (undefined4 ****)&DAT_00000001) {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar10 = FUN_0197ac0c(), iVar10 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("StreamRef::drop; mutex poisonedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:947event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:581event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:588event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:459event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:406event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:426event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:468event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:502event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:741event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:734event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:724event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a..." /* TRUNCATED STRING LITERAL */
                   ,0x3f,&DAT_01cea9d4);
    }
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d718 - 1 < 2 ||
         ((DAT_01d4d718 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d710), cVar2 != '\0')))) &&
        (iVar10 = FUN_01aaa278(DAT_01d4d710), iVar10 != 0)))) {
      local_28 = (undefined4 *)(DAT_01d4d710 + 0x1c);
      local_60 = (undefined4 ***)*local_28;
      local_5c = *(int *)(DAT_01d4d710 + 0x20);
      if (local_5c == 0) {
LAB_01384ad4:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea9e4);
      }
      local_3c = &local_6c;
      local_58 = *(undefined4 *)(DAT_01d4d710 + 0x24);
      local_54 = *(undefined4 *)(DAT_01d4d710 + 0x28);
      local_40 = &local_60;
      local_30 = &local_40;
      local_2c = (undefined4 ****)&DAT_00000001;
      local_50 = 0;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_68 = (undefined4 ****)&DAT_0000003f;
      local_6c = (undefined4 ****)0x46f5d8;
      FUN_01384c7c(&local_30);
    }
    else {
      iVar10 = DAT_01d4d710;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_68 = *(undefined4 *****)(DAT_01d4d710 + 0x14);
        local_64 = *(undefined4 **)(DAT_01d4d710 + 0x18);
        local_6c = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar12 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar12 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar12[3])(pcVar1,&local_6c);
        if (iVar3 != 0) {
          local_28 = (undefined4 *)(DAT_01d4d710 + 0x1c);
          local_60 = (undefined4 ***)*local_28;
          local_5c = *(int *)(DAT_01d4d710 + 0x20);
          if (local_5c == 0) goto LAB_01384ad4;
          local_3c = &local_88;
          local_58 = *(undefined4 *)(DAT_01d4d710 + 0x24);
          local_54 = *(undefined4 *)(DAT_01d4d710 + 0x28);
          local_40 = &local_60;
          local_30 = &local_40;
          local_2c = (undefined4 ****)&DAT_00000001;
          local_50 = 0;
          local_38 = (undefined4 *)&DAT_01d2ea4c;
          local_84 = (undefined4 ****)&DAT_0000003f;
          local_88 = (undefined4 ****)0x46f5d8;
          FUN_01aaa328(iVar10,pcVar1,puVar12[4],&local_6c,&local_30);
        }
      }
    }
    pcVar6 = local_74;
    puVar12 = local_70;
    goto LAB_013847ec;
  }
  *(int *)(local_74 + 0x1a0) = *(int *)(local_74 + 0x1a0) + -1;
  local_a8 = (undefined4 ****)(local_74 + 0x158);
  local_a4 = ppppuVar9;
  local_a0 = iVar10;
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d70c - 1 < 2 ||
       ((DAT_01d4d70c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d704), cVar2 != '\0')))))) &&
     (iVar10 = FUN_01aaa278(DAT_01d4d704), iVar10 != 0)) {
    if (*(int *)(DAT_01d4d704 + 0x20) == 0) {
LAB_01384aac:
      puVar7 = &DAT_01cea9c4;
      goto LAB_01384ab4;
    }
    local_68 = &local_98;
    local_58 = *(undefined4 *)(DAT_01d4d704 + 0x24);
    local_54 = *(undefined4 *)(DAT_01d4d704 + 0x28);
    local_70 = (undefined4 *)(DAT_01d4d704 + 0x1c);
    local_60 = (undefined4 ***)*local_70;
    local_6c = &local_60;
    local_78 = &local_6c;
    local_50 = 0;
    local_74 = (code *)0x1;
    local_94 = &local_88;
    local_88 = &local_a8;
    local_64 = (undefined4 *)&DAT_01d2ea4c;
    local_98 = (undefined4 ****)&DAT_005af280;
    local_84 = (undefined4 ****)FUN_0136adfc;
    local_5c = *(int *)(DAT_01d4d704 + 0x20);
    FUN_01aaaecc(DAT_01d4d704,&local_78);
    iVar10 = DAT_01d4d704;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_2c = *(undefined4 *****)(DAT_01d4d704 + 0x14);
      local_28 = *(undefined4 **)(DAT_01d4d704 + 0x18);
      local_30 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar1,&local_30);
      if (iVar3 != 0) {
        local_40 = local_30;
        local_3c = local_2c;
        local_38 = local_28;
        FUN_01aaa328(iVar10,pcVar1,puVar14[4],&local_40,&local_78);
      }
    }
  }
  else {
    iVar10 = DAT_01d4d704;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_94 = *(undefined4 *****)(DAT_01d4d704 + 0x14);
      local_90 = *(undefined4 **)(DAT_01d4d704 + 0x18);
      local_98 = (undefined4 ****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar1,&local_98);
      if (iVar3 != 0) {
        if (*(int *)(DAT_01d4d704 + 0x20) == 0) goto LAB_01384aac;
        local_2c = &local_88;
        local_58 = *(undefined4 *)(DAT_01d4d704 + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4d704 + 0x28);
        local_30 = &local_60;
        local_6c = &local_30;
        local_50 = 0;
        local_68 = (undefined4 ****)&DAT_00000001;
        local_78 = &local_a8;
        local_28 = (undefined4 *)&DAT_01d2ea4c;
        local_88 = (undefined4 ****)&DAT_005af280;
        local_74 = FUN_0136adfc;
        local_40 = local_98;
        local_3c = local_94;
        local_38 = local_90;
        local_84 = &local_78;
        local_64 = (undefined4 *)(DAT_01d4d704 + 0x1c);
        local_60 = *(undefined4 ****)(DAT_01d4d704 + 0x1c);
        local_5c = *(int *)(DAT_01d4d704 + 0x20);
        FUN_01aaa328(iVar10,pcVar1,puVar14[4],&local_40,&local_6c);
      }
    }
  }
  iVar10 = FUN_01367cb8(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
  if (*(int *)(iVar10 + 0xd8) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: self.ref_count > 0",0x24,&DAT_01ceb0bc);
  }
  *(int *)(iVar10 + 0xd8) = *(int *)(iVar10 + 0xd8) + -1;
  iVar10 = FUN_01367c40(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
  if ((*(int *)(iVar10 + 0xd8) == 0) &&
     (iVar10 = FUN_01367c40(local_a8[0xd],local_a8[0xe],local_a4,local_a0),
     *(byte *)(iVar10 + 0x20) < 6)) {
    bVar18 = *(int *)(iVar10 + 0x6c) == 0;
    if (bVar18) {
      iVar10 = *(int *)(iVar10 + 0xe0);
    }
    if (bVar18 && iVar10 == 0) {
      iVar10 = *(int *)(pcVar6 + 0xe0);
      *(undefined4 *)(pcVar6 + 0xe0) = 0;
      if (iVar10 != 0) {
        (**(code **)(iVar10 + 4))(*(undefined4 *)(pcVar6 + 0xe4));
      }
    }
  }
  iVar10 = local_a0;
  ppppuVar16 = local_a4;
  ppppuVar9 = local_a8;
  local_88 = local_a8;
  local_84 = local_a4;
  local_80 = local_a0;
  iVar3 = FUN_01367c40(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
  puVar8 = *(undefined1 **)(iVar3 + 0x18);
  pcVar15 = pcVar6 + 8;
  pcVar17 = pcVar6 + 0x38;
  FUN_0138186c(&local_88,pcVar17,pcVar15);
  iVar3 = FUN_01367c40(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
  if (*(int *)(iVar3 + 0xd8) == 0) {
    iVar3 = FUN_01367c40(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
    if (*(int *)(iVar3 + 0xe4) != 0) {
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4d148 - 1 < 2 ||
           ((DAT_01d4d148 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d140), cVar2 != '\0')))))) &&
         (iVar3 = FUN_01aaa278(DAT_01d4d140), iVar3 != 0)) {
        puVar14 = (undefined4 *)(DAT_01d4d140 + 0x1c);
        if (*(int *)(DAT_01d4d140 + 0x20) == 0) {
LAB_01384ac8:
          puVar7 = &DAT_01ce7734;
LAB_01384ab4:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar7);
        }
        local_58 = *(undefined4 *)(DAT_01d4d140 + 0x24);
        local_54 = *(undefined4 *)(DAT_01d4d140 + 0x28);
        local_50 = 0;
        local_60 = (undefined4 ***)*puVar14;
        local_5c = *(int *)(DAT_01d4d140 + 0x20);
        iVar3 = FUN_01367c40(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
        iVar10 = FUN_01367c40(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
        local_44 = &local_40;
        local_38 = (undefined4 *)(iVar10 + 0xe4);
        local_68 = &local_48;
        local_40 = (undefined4 ****)(iVar3 + 0xd4);
        local_6c = &local_60;
        local_78 = &local_6c;
        local_74 = (code *)0x1;
        local_34 = &LAB_01a86300;
        local_3c = (undefined4 ****)FUN_00b1c384;
        local_48 = (undefined4 ***)&DAT_0058429f;
        local_64 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = puVar14;
        FUN_01aaaecc(DAT_01d4d140,&local_78);
        iVar10 = DAT_01d4d140;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2c = *(undefined4 *****)(DAT_01d4d140 + 0x14);
          local_28 = *(undefined4 **)(DAT_01d4d140 + 0x18);
          local_30 = (undefined4 ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar14 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar14 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar3 = (*(code *)puVar14[3])(pcVar1,&local_30);
          if (iVar3 != 0) {
            FUN_01aaa328(iVar10,pcVar1,puVar14[4],&local_30,&local_78);
          }
        }
      }
      else {
        iVar10 = DAT_01d4d140;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_74 = *(code **)(DAT_01d4d140 + 0x14);
          local_70 = *(undefined4 **)(DAT_01d4d140 + 0x18);
          local_78 = (undefined4 ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar14 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar14 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar14[3])(pcVar1,&local_78);
          iVar3 = local_80;
          ppppuVar16 = local_84;
          ppppuVar9 = local_88;
          if (iVar4 != 0) {
            puVar13 = (undefined4 *)(DAT_01d4d140 + 0x1c);
            if (*(int *)(DAT_01d4d140 + 0x20) == 0) goto LAB_01384ac8;
            local_58 = *(undefined4 *)(DAT_01d4d140 + 0x24);
            local_54 = *(undefined4 *)(DAT_01d4d140 + 0x28);
            local_50 = 0;
            local_60 = (undefined4 ***)*puVar13;
            local_5c = *(int *)(DAT_01d4d140 + 0x20);
            iVar4 = FUN_01367c40(local_88[0xd],local_88[0xe],local_84,local_80);
            iVar3 = FUN_01367c40(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar3);
            local_38 = (undefined4 *)(iVar3 + 0xe4);
            local_44 = &local_40;
            local_2c = &local_48;
            local_30 = &local_60;
            local_40 = (undefined4 ****)(iVar4 + 0xd4);
            local_6c = &local_30;
            local_68 = (undefined4 ****)&DAT_00000001;
            local_34 = &LAB_01a86300;
            local_3c = (undefined4 ****)FUN_00b1c384;
            local_48 = (undefined4 ***)&DAT_0058429f;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_64 = puVar13;
            FUN_01aaa328(iVar10,pcVar1,puVar14[4],&local_78,&local_6c);
          }
        }
      }
      iVar10 = local_80;
      ppppuVar16 = local_84;
      ppppuVar9 = local_88;
      iVar3 = FUN_01367c40(local_88[0xd],local_88[0xe],local_84,local_80);
      FUN_01354634(pcVar17,*(undefined4 *)(iVar3 + 0xe4),pcVar6 + 0xe0);
      iVar3 = FUN_01367cb8(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
      *(undefined4 *)(iVar3 + 0xe4) = 0;
      uVar5 = FUN_01367cb8(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
      FUN_01358498(pcVar17,uVar5);
      iVar10 = local_80;
      ppppuVar9 = local_88;
      ppppuVar16 = local_84;
    }
    iVar10 = FUN_01367cb8(ppppuVar9[0xd],ppppuVar9[0xe],ppppuVar16,iVar10);
    local_60 = *(undefined4 ****)(iVar10 + 0xc0);
    local_5c = *(int *)(iVar10 + 0xc4);
    local_58 = *(undefined4 *)(iVar10 + 200);
    local_54 = *(undefined4 *)(iVar10 + 0xcc);
    local_50 = *(undefined4 *)(iVar10 + 0xd0);
    *(undefined4 *)(iVar10 + 0xc0) = 0;
    while (FUN_01368478(&local_40,&local_60,ppppuVar9), local_40 != (undefined4 ****)0x0) {
      iVar10 = FUN_01367c40(local_40[0xd],local_40[0xe],local_3c,local_38);
      puVar11 = *(undefined1 **)(iVar10 + 0x18);
      FUN_0138186c(&local_40,pcVar17,pcVar15);
      FUN_01387ff4(pcVar15,&local_40,puVar11 != &DAT_3b9aca00);
    }
  }
  FUN_01387ff4(pcVar15,&local_88,puVar8 != &DAT_3b9aca00);
LAB_013847ec:
  FUN_00a97e8c(pcVar6,(uint)puVar12 & 0xff);
  return;
}


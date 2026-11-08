// FUN_013bac1c @ 013bac1c size=3024 calls_out=19 calls_in=2
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442

/* WARNING: Removing unreachable block (ram,0x013bb7d4) */

void FUN_013bac1c(int *param_1)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined1 *puVar6;
  undefined4 *puVar7;
  undefined4 ****ppppuVar8;
  int iVar9;
  undefined1 *puVar10;
  undefined4 *puVar11;
  code *pcVar12;
  undefined4 ****ppppuVar13;
  code *pcVar14;
  bool bVar15;
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
  undefined *local_54;
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
  
  ppppuVar8 = (undefined4 ****)param_1[1];
  iVar9 = param_1[2];
  FUN_01933ff0(&local_78,*param_1 + 8);
  puVar11 = local_70;
  pcVar5 = local_74;
  if (local_78 == (undefined4 ****)&DAT_00000001) {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar9 = FUN_0197ac0c(), iVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74("StreamRef::drop; mutex poisonedevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:947event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:581event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:588event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:459event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:406event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:426event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:468event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:502event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:741event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:734event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:724event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a..." /* TRUNCATED STRING LITERAL */
                   ,0x1f,&DAT_01cf0edc);
    }
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4df04 - 1 < 2 ||
         ((DAT_01d4df04 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4defc), cVar2 != '\0')))) &&
        (iVar9 = FUN_01aaa278(DAT_01d4defc), iVar9 != 0)))) {
      local_28 = (undefined4 *)(DAT_01d4defc + 0x1c);
      local_60 = (undefined4 ***)*local_28;
      local_5c = *(int *)(DAT_01d4defc + 0x20);
      if (local_5c == 0) {
LAB_013bb7e0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0eec);
      }
      local_3c = &local_6c;
      local_58 = *(undefined4 *)(DAT_01d4defc + 0x24);
      local_54 = *(undefined **)(DAT_01d4defc + 0x28);
      local_40 = &local_60;
      local_30 = &local_40;
      local_2c = (undefined4 ****)&DAT_00000001;
      local_50 = 0;
      local_38 = (undefined4 *)&DAT_01d2ea4c;
      local_68 = (undefined4 ****)&DAT_0000003f;
      local_6c = (undefined4 ****)0x46f5d8;
      FUN_013bb988(&local_30);
    }
    else {
      iVar9 = DAT_01d4defc;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_68 = *(undefined4 *****)(DAT_01d4defc + 0x14);
        local_64 = *(undefined4 **)(DAT_01d4defc + 0x18);
        local_6c = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar11 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar11 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar11[3])(pcVar1,&local_6c);
        if (iVar3 != 0) {
          local_28 = (undefined4 *)(DAT_01d4defc + 0x1c);
          local_60 = (undefined4 ***)*local_28;
          local_5c = *(int *)(DAT_01d4defc + 0x20);
          if (local_5c == 0) goto LAB_013bb7e0;
          local_3c = &local_88;
          local_58 = *(undefined4 *)(DAT_01d4defc + 0x24);
          local_54 = *(undefined **)(DAT_01d4defc + 0x28);
          local_40 = &local_60;
          local_30 = &local_40;
          local_2c = (undefined4 ****)&DAT_00000001;
          local_50 = 0;
          local_38 = (undefined4 *)&DAT_01d2ea4c;
          local_84 = (undefined4 ****)&DAT_0000003f;
          local_88 = (undefined4 ****)0x46f5d8;
          FUN_01aaa328(iVar9,pcVar1,puVar11[4],&local_6c,&local_30);
        }
      }
    }
    pcVar5 = local_74;
    puVar11 = local_70;
  }
  else {
    *(int *)(local_74 + 0x1a0) = *(int *)(local_74 + 0x1a0) + -1;
    local_a8 = (undefined4 ****)(local_74 + 0x158);
    local_a4 = ppppuVar8;
    local_a0 = iVar9;
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4df10 - 1 < 2 ||
         ((DAT_01d4df10 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4df08), cVar2 != '\0')))))) &&
       (iVar9 = FUN_01aaa278(DAT_01d4df08), iVar9 != 0)) {
      local_5c = *(int *)(DAT_01d4df08 + 0x20);
      if (local_5c == 0) {
LAB_013bb7b8:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0ecc);
      }
      local_68 = &local_98;
      local_58 = *(undefined4 *)(DAT_01d4df08 + 0x24);
      local_54 = *(undefined **)(DAT_01d4df08 + 0x28);
      local_70 = (undefined4 *)(DAT_01d4df08 + 0x1c);
      local_60 = (undefined4 ***)*local_70;
      local_6c = &local_60;
      local_78 = &local_6c;
      local_50 = 0;
      local_74 = (code *)0x1;
      local_94 = &local_88;
      local_88 = &local_a8;
      local_64 = (undefined4 *)&DAT_01d2ea4c;
      local_98 = (undefined4 ****)&DAT_005af280;
      local_84 = (undefined4 ****)FUN_013a21f8;
      FUN_01aaaecc(DAT_01d4df08,&local_78);
      iVar9 = DAT_01d4df08;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_2c = *(undefined4 *****)(DAT_01d4df08 + 0x14);
        local_28 = *(undefined4 **)(DAT_01d4df08 + 0x18);
        local_30 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar7[3])(pcVar1,&local_30);
        if (iVar3 != 0) {
          local_40 = local_30;
          local_3c = local_2c;
          local_38 = local_28;
          FUN_01aaa328(iVar9,pcVar1,puVar7[4],&local_40,&local_78);
        }
      }
    }
    else {
      iVar9 = DAT_01d4df08;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_94 = *(undefined4 *****)(DAT_01d4df08 + 0x14);
        local_90 = *(undefined4 **)(DAT_01d4df08 + 0x18);
        local_98 = (undefined4 ****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        pcVar1 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
          pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar7[3])(pcVar1,&local_98);
        if (iVar3 != 0) {
          local_64 = (undefined4 *)(DAT_01d4df08 + 0x1c);
          local_60 = (undefined4 ***)*local_64;
          local_5c = *(int *)(DAT_01d4df08 + 0x20);
          if (local_5c == 0) goto LAB_013bb7b8;
          local_2c = &local_88;
          local_58 = *(undefined4 *)(DAT_01d4df08 + 0x24);
          local_54 = *(undefined **)(DAT_01d4df08 + 0x28);
          local_30 = &local_60;
          local_6c = &local_30;
          local_50 = 0;
          local_68 = (undefined4 ****)&DAT_00000001;
          local_78 = &local_a8;
          local_28 = (undefined4 *)&DAT_01d2ea4c;
          local_88 = (undefined4 ****)&DAT_005af280;
          local_74 = FUN_013a21f8;
          local_40 = local_98;
          local_3c = local_94;
          local_38 = local_90;
          local_84 = &local_78;
          FUN_01aaa328(iVar9,pcVar1,puVar7[4],&local_40,&local_6c);
        }
      }
    }
    iVar9 = FUN_0139f148(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
    if (*(int *)(iVar9 + 0xd0) == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.ref_count > 0",0x24,&DAT_01cf1544);
    }
    *(int *)(iVar9 + 0xd0) = *(int *)(iVar9 + 0xd0) + -1;
    iVar9 = FUN_0139f0d0(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
    if ((*(int *)(iVar9 + 0xd0) == 0) &&
       (iVar9 = FUN_0139f0d0(local_a8[0xd],local_a8[0xe],local_a4,local_a0),
       *(byte *)(iVar9 + 0x20) < 6)) {
      bVar15 = *(int *)(iVar9 + 100) == 0;
      if (bVar15) {
        iVar9 = *(int *)(iVar9 + 0xd8);
      }
      if (bVar15 && iVar9 == 0) {
        iVar9 = *(int *)(pcVar5 + 0xe0);
        *(undefined4 *)(pcVar5 + 0xe0) = 0;
        if (iVar9 != 0) {
          (**(code **)(iVar9 + 4))(*(undefined4 *)(pcVar5 + 0xe4));
        }
      }
    }
    iVar9 = local_a0;
    ppppuVar13 = local_a4;
    ppppuVar8 = local_a8;
    local_88 = local_a8;
    local_84 = local_a4;
    local_80 = local_a0;
    iVar3 = FUN_0139f0d0(local_a8[0xd],local_a8[0xe],local_a4,local_a0);
    puVar6 = *(undefined1 **)(iVar3 + 0x18);
    pcVar12 = pcVar5 + 8;
    pcVar14 = pcVar5 + 0x38;
    FUN_013b850c(&local_88,pcVar14,pcVar12);
    iVar3 = FUN_0139f0d0(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
    if (*(int *)(iVar3 + 0xd0) == 0) {
      iVar3 = FUN_0139f0d0(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
      if (*(int *)(iVar3 + 0xdc) != 0) {
        if (((DAT_01d50f88 == 0) && (cVar2 = FUN_01aaafa8(0x1d4d92c), cVar2 != '\0')) &&
           (iVar3 = FUN_01aaa278(&DAT_01cecca4), iVar3 != 0)) {
          local_60 = (undefined4 ***)&DAT_01d2f7e0;
          local_5c = 1;
          local_58 = 0x1d4d92c;
          local_54 = &DAT_01cec72c;
          local_50 = 0;
          iVar3 = FUN_0139f0d0(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
          iVar9 = FUN_0139f0d0(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
          local_44 = &local_40;
          local_38 = (undefined4 *)(iVar9 + 0xdc);
          local_68 = &local_48;
          local_40 = (undefined4 ****)(iVar3 + 0xcc);
          local_6c = &local_60;
          local_78 = &local_6c;
          local_74 = (code *)0x1;
          local_34 = &LAB_01a86300;
          local_3c = (undefined4 ****)FUN_00b1c384;
          local_48 = (undefined4 ***)&DAT_0058429f;
          local_64 = (undefined4 *)&DAT_01d2ea4c;
          local_70 = &DAT_01ceccc0;
          FUN_01aaaecc(&DAT_01cecca4,&local_78);
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_2c = (undefined4 ****)0x45cead;
            local_28 = (undefined4 *)&DAT_00000018;
            local_30 = (undefined4 ****)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar7 = DAT_01d4edc8;
            pcVar1 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              puVar7 = &DAT_01cfc5e0;
              pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            iVar9 = (*(code *)puVar7[3])(pcVar1,&local_30);
            if (iVar9 != 0) {
              FUN_01aaa328(&DAT_01cecca4,pcVar1,puVar7[4],&local_30,&local_78);
            }
          }
        }
        else if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_70 = (undefined4 *)&DAT_00000018;
          local_78 = (undefined4 ****)&DAT_00000005;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          local_74 = (code *)
                     "h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs"
          ;
          iVar3 = (*(code *)puVar7[3])(pcVar1,&local_78);
          iVar9 = local_80;
          ppppuVar13 = local_84;
          ppppuVar8 = local_88;
          if (iVar3 != 0) {
            local_60 = (undefined4 ***)&DAT_01d2f7e0;
            local_5c = 1;
            local_58 = 0x1d4d92c;
            local_54 = &DAT_01cec72c;
            local_50 = 0;
            iVar3 = FUN_0139f0d0(local_88[0xd],local_88[0xe],local_84,local_80);
            iVar9 = FUN_0139f0d0(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
            local_38 = (undefined4 *)(iVar9 + 0xdc);
            local_44 = &local_40;
            local_2c = &local_48;
            local_30 = &local_60;
            local_40 = (undefined4 ****)(iVar3 + 0xcc);
            local_6c = &local_30;
            local_68 = (undefined4 ****)&DAT_00000001;
            local_34 = &LAB_01a86300;
            local_3c = (undefined4 ****)FUN_00b1c384;
            local_48 = (undefined4 ***)&DAT_0058429f;
            local_28 = (undefined4 *)&DAT_01d2ea4c;
            local_64 = &DAT_01ceccc0;
            FUN_01aaa328(&DAT_01cecca4,pcVar1,puVar7[4],&local_78,&local_6c);
          }
        }
        iVar9 = local_80;
        ppppuVar13 = local_84;
        ppppuVar8 = local_88;
        iVar3 = FUN_0139f0d0(local_88[0xd],local_88[0xe],local_84,local_80);
        FUN_0139366c(pcVar14,*(undefined4 *)(iVar3 + 0xdc),pcVar5 + 0xe0);
        iVar3 = FUN_0139f148(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
        *(undefined4 *)(iVar3 + 0xdc) = 0;
        uVar4 = FUN_0139f148(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
        FUN_013942a4(pcVar14,uVar4);
        iVar9 = local_80;
        ppppuVar8 = local_88;
        ppppuVar13 = local_84;
      }
      iVar9 = FUN_0139f148(ppppuVar8[0xd],ppppuVar8[0xe],ppppuVar13,iVar9);
      local_60 = *(undefined4 ****)(iVar9 + 0xb8);
      local_5c = *(int *)(iVar9 + 0xbc);
      local_58 = *(undefined4 *)(iVar9 + 0xc0);
      local_54 = *(undefined **)(iVar9 + 0xc4);
      local_50 = *(undefined4 *)(iVar9 + 200);
      *(undefined4 *)(iVar9 + 0xb8) = 0;
      while (FUN_0139f3f4(&local_40,&local_60,ppppuVar8), local_40 != (undefined4 ****)0x0) {
        iVar9 = FUN_0139f0d0(local_40[0xd],local_40[0xe],local_3c,local_38);
        puVar10 = *(undefined1 **)(iVar9 + 0x18);
        FUN_013b850c(&local_40,pcVar14,pcVar12);
        FUN_013b1740(pcVar12,&local_40,puVar10 != &DAT_3b9aca00);
      }
    }
    FUN_013b1740(pcVar12,&local_88,puVar6 != &DAT_3b9aca00);
  }
  FUN_00a97e8c(pcVar5,(uint)puVar11 & 0xff);
  return;
}


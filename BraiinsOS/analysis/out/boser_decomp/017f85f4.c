// FUN_017f85f4 @ 017f85f4 size=5120 calls_out=31 calls_in=3
// strings: connection closed because of a broken pipe | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | Streams::recv_eof | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll

byte ****** FUN_017f85f4(undefined4 param_1,undefined4 param_2,int param_3)

{
  byte ******ppppppbVar1;
  byte ******ppppppbVar2;
  byte ******ppppppbVar3;
  char cVar4;
  uint uVar5;
  int iVar6;
  byte ******ppppppbVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  byte ******ppppppbVar11;
  byte *****extraout_r2;
  undefined4 extraout_r3;
  undefined4 uVar12;
  undefined4 *puVar13;
  byte ******ppppppbVar14;
  char *pcVar15;
  byte *****pppppbVar16;
  undefined1 *puVar17;
  byte *****pppppbVar18;
  byte *****pppppbVar19;
  byte ******ppppppbVar20;
  undefined4 uVar21;
  byte ******ppppppbVar22;
  undefined *local_134;
  byte ******local_108;
  byte ******local_104;
  byte *****local_100;
  int local_f8 [3];
  int local_ec [3];
  byte ******local_e0;
  byte ******local_dc;
  byte *****local_d8;
  byte ******local_d4;
  byte *****local_d0;
  byte *****pppppbStack_cc;
  int local_c8;
  undefined4 uStack_c4;
  byte ******local_c0;
  byte ******local_bc;
  byte *****local_b8;
  byte ******local_b4;
  byte *****local_b0;
  byte *****local_ac;
  int local_a8;
  undefined4 uStack_a4;
  byte *****local_a0;
  byte ******local_9c;
  undefined4 uStack_98;
  byte *****local_90;
  byte ******local_8c;
  undefined4 local_88;
  byte ******local_80;
  byte ******local_7c;
  byte *****local_78;
  byte ******local_74;
  byte ******local_70;
  byte *****local_6c;
  undefined4 local_68;
  undefined4 local_64;
  byte *****local_60;
  undefined4 local_5c;
  byte ******local_58;
  byte ******local_54;
  byte *****local_50;
  undefined4 local_4c;
  undefined4 local_48;
  byte ****local_44;
  byte ******local_40;
  byte ******local_3c;
  byte *****local_38;
  byte ******local_30;
  byte ******local_2c;
  byte *****local_28;
  
  FUN_01933ff0(&local_c0,param_1);
  ppppppbVar2 = local_bc;
  ppppppbVar1 = local_c0;
  uVar10 = (uint)local_b8 & 0xff;
  if (local_c0 == (byte ******)&DAT_00000001) {
    FUN_00a97e8c();
  }
  else {
    FUN_01656cb0(&local_c0,param_2);
    ppppppbVar3 = local_bc;
    if (local_c0 == (byte ******)&DAT_00000001) {
      local_dc = (byte ******)CONCAT31(local_dc._1_3_,local_b8._0_1_);
      local_e0 = local_bc;
                    /* WARNING: Subroutine does not return */
      FUN_013073dc(&DAT_00533467,0x2b,&local_e0,&DAT_01d1d414,&DAT_01d1d384);
    }
    uVar5 = (uint)local_b8 & 0xff;
    ppppppbVar14 = ppppppbVar2 + 0x32;
    if (*(char *)ppppppbVar14 == '\x03') {
      FUN_019a18a8(&local_e0,0xb,"connection closed because of a broken pipe",0x2a);
      FUN_013bc5a0(&local_c0,&local_e0);
      local_e0 = local_c0;
      local_dc = local_bc;
      local_d8 = local_b8;
      local_d4 = local_b4;
      local_d0 = local_b0;
      pppppbStack_cc = local_ac;
      if (*(char *)ppppppbVar14 != '\x03') {
        FUN_01381bd4(ppppppbVar14);
      }
      *ppppppbVar14 = (byte *****)local_e0;
      ppppppbVar2[0x33] = (byte *****)local_dc;
      ppppppbVar2[0x34] = local_d8;
      ppppppbVar2[0x35] = (byte *****)local_d4;
      ppppppbVar2[0x36] = local_d0;
      ppppppbVar2[0x37] = pppppbStack_cc;
    }
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4f760 - 1 < 2 ||
         ((DAT_01d4f760 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4f758), cVar4 != '\0')))) &&
        (iVar8 = FUN_01aaa278(DAT_01d4f758), iVar8 != 0)))) {
      if (*(byte *******)(DAT_01d4f758 + 0x20) == (byte ******)0x0) {
LAB_017f9a58:
        local_134 = &DAT_01d1d394;
LAB_017f9a64:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,local_134);
      }
      local_70 = (byte ******)&local_40;
      local_b8 = *(byte ******)(DAT_01d4f758 + 0x24);
      local_b4 = *(byte *******)(DAT_01d4f758 + 0x28);
      local_28 = (byte *****)(DAT_01d4f758 + 0x1c);
      local_c0 = (byte ******)*local_28;
      local_74 = (byte ******)&local_c0;
      local_30 = (byte ******)&local_74;
      local_b0 = (byte *****)0x0;
      local_2c = (byte ******)&DAT_00000001;
      local_40 = (byte ******)0x52d7c6;
      local_6c = (byte *****)&DAT_01d2ea4c;
      local_3c = (byte ******)&DAT_00000023;
      local_bc = *(byte *******)(DAT_01d4f758 + 0x20);
      FUN_01aaaecc(DAT_01d4f758,&local_30);
      iVar8 = DAT_01d4f758;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_54 = *(byte *******)(DAT_01d4f758 + 0x14);
        local_50 = *(byte ******)(DAT_01d4f758 + 0x18);
        local_58 = (byte ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar15 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar13[3])(pcVar15,&local_58);
        if (iVar6 != 0) {
          local_e0 = local_58;
          local_dc = local_54;
          local_d8 = local_50;
          FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_e0,&local_30);
        }
      }
    }
    else {
      iVar8 = DAT_01d4f758;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_104 = *(byte *******)(DAT_01d4f758 + 0x14);
        local_100 = *(byte ******)(DAT_01d4f758 + 0x18);
        local_108 = (byte ******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        pcVar15 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        puVar13 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
        }
        iVar6 = (*(code *)puVar13[3])(pcVar15,&local_108);
        if (iVar6 != 0) {
          if (*(byte *******)(DAT_01d4f758 + 0x20) == (byte ******)0x0) goto LAB_017f9a58;
          local_54 = (byte ******)&local_30;
          local_b8 = *(byte ******)(DAT_01d4f758 + 0x24);
          local_b4 = *(byte *******)(DAT_01d4f758 + 0x28);
          local_58 = (byte ******)&local_c0;
          local_74 = (byte ******)&local_58;
          local_b0 = (byte *****)0x0;
          local_70 = (byte ******)&DAT_00000001;
          local_30 = (byte ******)0x52d7c6;
          local_50 = (byte *****)&DAT_01d2ea4c;
          local_2c = (byte ******)&DAT_00000023;
          local_e0 = local_108;
          local_dc = local_104;
          local_d8 = local_100;
          local_c0 = *(byte *******)(DAT_01d4f758 + 0x1c);
          local_bc = *(byte *******)(DAT_01d4f758 + 0x20);
          local_6c = (byte *****)(DAT_01d4f758 + 0x1c);
          FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_e0,&local_74);
        }
      }
    }
    ppppppbVar14 = ppppppbVar2 + 2;
    pppppbVar18 = ppppppbVar2[0x60];
    ppppppbVar7 = ppppppbVar2 + 0x56;
    if (pppppbVar18 != (byte *****)0x0) {
      pppppbVar16 = (byte *****)0x0;
      local_134 = &DAT_01cf0898;
      do {
        if (ppppppbVar2[0x5c] <= pppppbVar16) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(&DAT_01d1cff4);
        }
        pppppbVar19 = (byte *****)ppppppbVar2[0x5b][(int)pppppbVar16 * 3 + 1];
        ppppppbVar20 = (byte ******)ppppppbVar2[0x5b][(int)pppppbVar16 * 3 + 2];
        local_40 = ppppppbVar7;
        local_3c = ppppppbVar20;
        local_38 = pppppbVar19;
        iVar8 = FUN_0139f0d0(ppppppbVar2[99],ppppppbVar2[100],ppppppbVar20,pppppbVar19);
        puVar17 = *(undefined1 **)(iVar8 + 0x18);
        iVar8 = FUN_0139f148(ppppppbVar2[99],ppppppbVar2[100],ppppppbVar20,pppppbVar19);
        pppppbVar19 = (byte *****)(iVar8 + 0x20);
        if (5 < *(byte *)pppppbVar19) {
          local_a0 = pppppbVar19;
          if (((DAT_01d50f88 == 0) &&
              ((DAT_01d4de68 - 1 < 2 ||
               ((DAT_01d4de68 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4de60), cVar4 != '\0')))))) &&
             (iVar6 = FUN_01aaa278(DAT_01d4de60), iVar6 != 0)) {
            if (*(byte *******)(DAT_01d4de60 + 0x20) == (byte ******)0x0) goto LAB_017f9a64;
            local_70 = &local_90;
            local_74 = (byte ******)&local_c0;
            local_30 = (byte ******)&local_74;
            local_28 = (byte *****)(DAT_01d4de60 + 0x1c);
            local_c0 = (byte ******)*local_28;
            local_b8 = *(byte ******)(DAT_01d4de60 + 0x24);
            local_b4 = *(byte *******)(DAT_01d4de60 + 0x28);
            local_b0 = (byte *****)0x0;
            local_2c = (byte ******)&DAT_00000001;
            local_6c = (byte *****)&DAT_01d2ea4c;
            local_8c = (byte ******)&local_80;
            local_90 = (byte *****)&DAT_005a582f;
            local_7c = (byte ******)FUN_013b640c;
            local_80 = &local_a0;
            local_bc = *(byte *******)(DAT_01d4de60 + 0x20);
            FUN_01aaaecc(DAT_01d4de60,&local_30);
            iVar6 = DAT_01d4de60;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_54 = *(byte *******)(DAT_01d4de60 + 0x14);
              local_50 = *(byte ******)(DAT_01d4de60 + 0x18);
              local_58 = (byte ******)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar15 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar13 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
              }
              iVar9 = (*(code *)puVar13[3])(pcVar15,&local_58);
              if (iVar9 != 0) {
                local_e0 = local_58;
                local_dc = local_54;
                local_d8 = local_50;
                FUN_01aaa328(iVar6,pcVar15,puVar13[4],&local_e0,&local_30);
              }
            }
          }
          else {
            iVar6 = DAT_01d4de60;
            if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
              local_2c = *(byte *******)(DAT_01d4de60 + 0x14);
              local_28 = *(byte ******)(DAT_01d4de60 + 0x18);
              local_30 = (byte ******)&DAT_00000005;
              DataMemoryBarrier(0xb);
              pcVar15 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              puVar13 = DAT_01d4edc8;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
              }
              iVar9 = (*(code *)puVar13[3])(pcVar15,&local_30);
              if (iVar9 != 0) {
                if (*(byte *******)(DAT_01d4de60 + 0x20) == (byte ******)0x0) goto LAB_017f9a64;
                local_54 = &local_90;
                local_58 = (byte ******)&local_c0;
                local_b4 = *(byte *******)(DAT_01d4de60 + 0x28);
                local_74 = (byte ******)&local_58;
                local_b8 = *(byte ******)(DAT_01d4de60 + 0x24);
                local_b0 = (byte *****)0x0;
                local_70 = (byte ******)&DAT_00000001;
                local_50 = (byte *****)&DAT_01d2ea4c;
                local_8c = (byte ******)&local_80;
                local_90 = (byte *****)&DAT_005a582f;
                local_7c = (byte ******)FUN_013b640c;
                local_80 = &local_a0;
                local_e0 = local_30;
                local_dc = local_2c;
                local_d8 = local_28;
                local_c0 = *(byte *******)(DAT_01d4de60 + 0x1c);
                local_bc = *(byte *******)(DAT_01d4de60 + 0x20);
                local_6c = (byte *****)(DAT_01d4de60 + 0x1c);
                FUN_01aaa328(iVar6,pcVar15,puVar13[4],&local_e0,&local_74);
              }
            }
          }
          FUN_019a18a8(&local_e0,0xb,
                       "stream closed because of a broken pipeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:190event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:148event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:198event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:162event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/state.rs:178"
                       ,0x26);
          FUN_013bc5a0(&local_c0,&local_e0);
          FUN_013b63b0(pppppbVar19);
          *pppppbVar19 = (byte ****)local_c0;
          *(byte *******)(iVar8 + 0x24) = local_bc;
          *(byte ******)(iVar8 + 0x28) = local_b8;
          *(byte *******)(iVar8 + 0x2c) = local_b4;
          *(byte ******)(iVar8 + 0x30) = local_b0;
          *(byte ******)(iVar8 + 0x34) = local_ac;
        }
        iVar6 = *(int *)(iVar8 + 0x40);
        *(undefined4 *)(iVar8 + 0x40) = 0;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar8 + 0x44));
        }
        iVar6 = *(int *)(iVar8 + 0x50);
        *(undefined4 *)(iVar8 + 0x50) = 0;
        if (iVar6 != 0) {
          (**(code **)(iVar6 + 4))(*(undefined4 *)(iVar8 + 0x54));
        }
        FUN_017b4868(ppppppbVar2 + 0x3c,ppppppbVar3 + 2,&local_40);
        FUN_013a6ee0(ppppppbVar2 + 0x3c,&local_40,ppppppbVar14);
        FUN_013b1740(ppppppbVar14,&local_40,puVar17 != &DAT_3b9aca00);
        if (ppppppbVar2[0x60] >= pppppbVar18) {
          pppppbVar16 = (byte *****)((int)pppppbVar16 + 1);
        }
        pppppbVar18 = (byte *****)((int)pppppbVar18 - (uint)(ppppppbVar2[0x60] < pppppbVar18));
      } while (pppppbVar16 < pppppbVar18);
    }
    local_134 = &DAT_01cefa44;
    while (FUN_0139f838(&local_80,ppppppbVar2 + 0x18,ppppppbVar7), pppppbVar18 = local_78,
          ppppppbVar22 = local_7c, ppppppbVar20 = local_80, local_80 != (byte ******)0x0) {
      local_40 = local_80;
      local_3c = local_7c;
      local_38 = local_78;
      iVar8 = FUN_0139f0d0(local_80[0xd],local_80[0xe],local_7c,local_78);
      puVar17 = *(undefined1 **)(iVar8 + 0x18);
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4ddc0 - 1 < 2 ||
           ((DAT_01d4ddc0 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4ddb8), cVar4 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4ddb8), iVar8 != 0)) {
        pppppbVar16 = (byte *****)(DAT_01d4ddb8 + 0x1c);
        if (*(byte *******)(DAT_01d4ddb8 + 0x20) == (byte ******)0x0) goto LAB_017f9a64;
        local_b4 = *(byte *******)(DAT_01d4ddb8 + 0x28);
        local_b0 = (byte *****)0x0;
        local_b8 = *(byte ******)(DAT_01d4ddb8 + 0x24);
        local_c0 = (byte ******)*pppppbVar16;
        local_bc = *(byte *******)(DAT_01d4ddb8 + 0x20);
        iVar8 = FUN_0139f0d0(ppppppbVar20[0xd],ppppppbVar20[0xe],ppppppbVar22,pppppbVar18);
        local_9c = &local_90;
        local_70 = &local_a0;
        local_90 = (byte *****)(iVar8 + 0xcc);
        local_74 = (byte ******)&local_c0;
        local_30 = (byte ******)&local_74;
        local_2c = (byte ******)&DAT_00000001;
        local_8c = (byte ******)FUN_00b1c384;
        local_a0 = (byte *****)&DAT_005ac552;
        local_6c = (byte *****)&DAT_01d2ea4c;
        local_28 = pppppbVar16;
        FUN_01aaaecc(DAT_01d4ddb8,&local_30);
        iVar8 = DAT_01d4ddb8;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_54 = *(byte *******)(DAT_01d4ddb8 + 0x14);
          local_50 = *(byte ******)(DAT_01d4ddb8 + 0x18);
          local_58 = (byte ******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar13 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
          }
          iVar6 = (*(code *)puVar13[3])(pcVar15,&local_58);
          if (iVar6 != 0) {
            local_e0 = local_58;
            local_dc = local_54;
            local_d8 = local_50;
            FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_e0,&local_30);
          }
        }
      }
      else {
        iVar8 = DAT_01d4ddb8;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_2c = *(byte *******)(DAT_01d4ddb8 + 0x14);
          local_28 = *(byte ******)(DAT_01d4ddb8 + 0x18);
          local_30 = (byte ******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar13 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
          }
          iVar6 = (*(code *)puVar13[3])(pcVar15,&local_30);
          if (iVar6 != 0) {
            pppppbVar18 = (byte *****)(DAT_01d4ddb8 + 0x1c);
            if (*(byte *******)(DAT_01d4ddb8 + 0x20) == (byte ******)0x0) goto LAB_017f9a64;
            local_b4 = *(byte *******)(DAT_01d4ddb8 + 0x28);
            local_b0 = (byte *****)0x0;
            local_b8 = *(byte ******)(DAT_01d4ddb8 + 0x24);
            local_c0 = (byte ******)*pppppbVar18;
            local_bc = *(byte *******)(DAT_01d4ddb8 + 0x20);
            iVar6 = FUN_0139f0d0(local_40[0xd],local_40[0xe],local_3c,local_38);
            local_9c = &local_90;
            local_54 = &local_a0;
            local_90 = (byte *****)(iVar6 + 0xcc);
            local_58 = (byte ******)&local_c0;
            local_74 = (byte ******)&local_58;
            local_70 = (byte ******)&DAT_00000001;
            local_8c = (byte ******)FUN_00b1c384;
            local_a0 = (byte *****)&DAT_005ac552;
            local_50 = (byte *****)&DAT_01d2ea4c;
            local_e0 = local_30;
            local_dc = local_2c;
            local_d8 = local_28;
            local_6c = pppppbVar18;
            FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_e0,&local_74);
          }
        }
      }
      FUN_013b1740(ppppppbVar14,&local_40,puVar17 != &DAT_3b9aca00);
    }
    while (FUN_0139f724(local_f8,ppppppbVar2 + 0x22,ppppppbVar7), local_f8[0] != 0) {
      FUN_013b1740(ppppppbVar14,local_f8,1);
    }
    if (param_3 != 0) {
      while (FUN_0139f3f4(local_ec,ppppppbVar2 + 0x1d,ppppppbVar7), local_ec[0] != 0) {
        FUN_013b1740(ppppppbVar14,local_ec,0);
      }
    }
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4dbb0 - 1 < 2 ||
         ((DAT_01d4dbb0 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4dba8), cVar4 != '\0')))) &&
        (iVar8 = FUN_01aaa278(DAT_01d4dba8), iVar8 != 0)))) {
      local_b8 = (byte *****)(DAT_01d4dba8 + 0x1c);
      local_bc = (byte ******)0x0;
      local_c0 = (byte ******)&SUB_00000004;
      FUN_01aaa548(&local_e0,DAT_01d4dba8,&local_c0);
    }
    else {
      local_a8 = DAT_01d4dba8;
      local_b8 = (byte *****)0x2;
      if (DAT_01d51ae9 == '\0') {
        local_d8 = (byte *****)(DAT_01d4dba8 + 0x1c);
        local_dc = (byte ******)0x0;
        local_e0 = (byte ******)0x4;
        FUN_01aaa3e0(&local_c0,&local_e0);
      }
      local_e0 = local_c0;
      local_dc = local_bc;
      local_d8 = local_b8;
      local_d4 = local_b4;
      local_d0 = local_b0;
      pppppbStack_cc = local_ac;
      local_c8 = local_a8;
      uStack_c4 = uStack_a4;
    }
    if (local_d8 != (byte *****)0x2) {
      if (((uint)local_d8 & 1) == 0) {
        ppppppbVar20 = local_d4;
      }
      else {
        ppppppbVar20 = (byte ******)((int)local_d4 + ((int)local_d0[2] - 1U & 0xfffffff8) + 8);
      }
      (*(code *)local_d0[0xc])(ppppppbVar20,&local_e0);
    }
    if ((DAT_01d51ae9 == '\0') && (local_c8 != 0)) {
      local_54 = *(byte *******)(local_c8 + 0x10);
      local_58 = *(byte *******)(local_c8 + 0xc);
      local_c0 = (byte ******)&local_58;
      local_bc = (byte ******)&DAT_0132b6a0;
      FUN_006404a8(&local_e0,"tracing::span::active",0x15,&DAT_00594cdd,&local_c0);
    }
    while (FUN_0139f948(&local_a0,ppppppbVar2 + 0x41,ppppppbVar7), uVar21 = uStack_98,
          ppppppbVar20 = local_9c, pppppbVar18 = local_a0, local_a0 != (byte *****)0x0) {
      local_90 = local_a0;
      local_8c = local_9c;
      local_88 = uStack_98;
      iVar8 = FUN_0139f0d0(local_a0[0xd],local_a0[0xe],local_9c,uStack_98);
      puVar17 = *(undefined1 **)(iVar8 + 0x18);
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4ddb4 - 1 < 2 ||
           ((DAT_01d4ddb4 != 0 && (cVar4 = FUN_01aaafa8(&DAT_01d4ddac), cVar4 != '\0')))))) &&
         (iVar8 = FUN_01aaa278(DAT_01d4ddac), iVar8 != 0)) {
        pppppbVar19 = (byte *****)(DAT_01d4ddac + 0x1c);
        ppppppbVar22 = (byte ******)*pppppbVar19;
        ppppppbVar11 = *(byte *******)(DAT_01d4ddac + 0x20);
        pppppbVar16 = extraout_r2;
        uVar12 = extraout_r3;
        if (ppppppbVar11 != (byte ******)0x0) {
          pppppbVar16 = *(byte ******)(DAT_01d4ddac + 0x24);
          uVar12 = *(undefined4 *)(DAT_01d4ddac + 0x28);
          local_64 = 0;
          local_5c = 0x2d;
          local_60 = (byte *****)0x4631a3;
          local_74 = ppppppbVar22;
          local_70 = ppppppbVar11;
          local_6c = pppppbVar16;
          local_68 = uVar12;
        }
        if (ppppppbVar11 < (byte ******)0x2) {
LAB_017f984c:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cefa34);
        }
        local_48 = 1;
        local_58 = ppppppbVar22;
        local_54 = ppppppbVar11;
        local_50 = pppppbVar16;
        local_4c = uVar12;
        iVar8 = FUN_0139f0d0(pppppbVar18[0xd],pppppbVar18[0xe],ppppppbVar20,uVar21);
        local_b0 = &local_44;
        local_b4 = (byte ******)&local_58;
        local_bc = &local_60;
        local_44 = (byte ****)(iVar8 + 0xcc);
        local_c0 = (byte ******)&local_74;
        local_80 = (byte ******)&local_c0;
        local_7c = (byte ******)0x2;
        local_ac = (byte *****)&DAT_01d1bc88;
        local_b8 = (byte *****)&DAT_01d2ea4c;
        local_78 = pppppbVar19;
        FUN_01aaaecc(DAT_01d4ddac,&local_80);
        iVar8 = DAT_01d4ddac;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_3c = *(byte *******)(DAT_01d4ddac + 0x14);
          local_38 = *(byte ******)(DAT_01d4ddac + 0x18);
          local_40 = (byte ******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar13 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
          }
          iVar6 = (*(code *)puVar13[3])(pcVar15,&local_40);
          if (iVar6 != 0) {
            local_30 = local_40;
            local_2c = local_3c;
            local_28 = local_38;
            FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_30,&local_80);
          }
        }
      }
      else {
        iVar8 = DAT_01d4ddac;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_7c = *(byte *******)(DAT_01d4ddac + 0x14);
          local_78 = *(byte ******)(DAT_01d4ddac + 0x18);
          local_80 = (byte ******)&DAT_00000005;
          DataMemoryBarrier(0xb);
          pcVar15 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar15 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          puVar13 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
          }
          pppppbVar18 = (byte *****)(*(code *)puVar13[3])(pcVar15,&local_80);
          if (pppppbVar18 != (byte *****)0x0) {
            pppppbVar16 = (byte *****)(DAT_01d4ddac + 0x1c);
            ppppppbVar22 = (byte ******)*pppppbVar16;
            ppppppbVar20 = *(byte *******)(DAT_01d4ddac + 0x20);
            if (ppppppbVar20 != (byte ******)0x0) {
              pppppbVar18 = *(byte ******)(DAT_01d4ddac + 0x24);
              uVar21 = *(undefined4 *)(DAT_01d4ddac + 0x28);
              local_64 = 0;
              local_5c = 0x2d;
              local_60 = (byte *****)0x4631a3;
              local_74 = ppppppbVar22;
              local_70 = ppppppbVar20;
              local_6c = pppppbVar18;
              local_68 = uVar21;
            }
            if (ppppppbVar20 < (byte ******)0x2) goto LAB_017f984c;
            local_48 = 1;
            local_58 = ppppppbVar22;
            local_54 = ppppppbVar20;
            local_50 = pppppbVar18;
            local_4c = uVar21;
            iVar6 = FUN_0139f0d0(local_90[0xd],local_90[0xe],local_8c,local_88);
            local_b0 = &local_44;
            local_b4 = (byte ******)&local_58;
            local_bc = &local_60;
            local_44 = (byte ****)(iVar6 + 0xcc);
            local_c0 = (byte ******)&local_74;
            local_40 = (byte ******)&local_c0;
            local_3c = (byte ******)0x2;
            local_ac = (byte *****)&DAT_01d1bc88;
            local_b8 = (byte *****)&DAT_01d2ea4c;
            local_30 = local_80;
            local_2c = local_7c;
            local_28 = local_78;
            local_38 = pppppbVar16;
            FUN_01aaa328(iVar8,pcVar15,puVar13[4],&local_30,&local_40);
          }
        }
      }
      FUN_013b1740(ppppppbVar14,&local_90,puVar17 != &DAT_3b9aca00);
    }
    FUN_0134c39c(&local_e0);
    FUN_01834abc(&local_e0);
    while (FUN_0139f504(&local_e0,ppppppbVar2 + 0x3c,ppppppbVar7), pppppbVar18 = local_d8,
          ppppppbVar22 = local_dc, ppppppbVar20 = local_e0, local_e0 != (byte ******)0x0) {
      iVar8 = FUN_0139f0d0(local_e0[0xd],local_e0[0xe],local_dc,local_d8);
      local_b8 = pppppbVar18;
      local_bc = ppppppbVar22;
      local_c0 = ppppppbVar20;
      FUN_013b1740(ppppppbVar14,&local_c0,*(undefined1 **)(iVar8 + 0x18) != &DAT_3b9aca00);
    }
    while (FUN_0139f614(&local_e0,ppppppbVar2 + 0x46,ppppppbVar7), pppppbVar18 = local_d8,
          ppppppbVar22 = local_dc, ppppppbVar20 = local_e0, local_e0 != (byte ******)0x0) {
      iVar8 = FUN_0139f0d0(local_e0[0xd],local_e0[0xe],local_dc,local_d8);
      local_b8 = pppppbVar18;
      local_bc = ppppppbVar22;
      local_c0 = ppppppbVar20;
      FUN_013b1740(ppppppbVar14,&local_c0,*(undefined1 **)(iVar8 + 0x18) != &DAT_3b9aca00);
    }
    FUN_00a97e8c(ppppppbVar3,uVar5);
    FUN_00a97e8c(ppppppbVar2,uVar10);
  }
  return ppppppbVar1;
}


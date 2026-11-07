// FUN_01a71074 @ 01a71074 size=1892 calls_out=13 calls_in=23
// strings: tonic::codec::decode/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:260 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | Unexpected EOF decoding stream.event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:172 | tonic::codec::decode/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:260 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01a71074(uint *param_1,int *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint *****pppppuVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  undefined4 *puVar7;
  uint ***pppuVar8;
  char *pcVar9;
  uint uVar10;
  bool bVar11;
  uint *****local_200;
  int local_1fc;
  uint ***local_1f8;
  int local_1f4;
  uint ***local_1f0;
  int iStack_1ec;
  int iStack_1e8;
  int iStack_1e4;
  int local_1e0;
  int iStack_1dc;
  int iStack_1d8;
  int iStack_1d4;
  int iStack_1d0;
  int local_1cc;
  int iStack_1c8;
  int iStack_1c4;
  int iStack_1c0;
  int iStack_1bc;
  undefined4 local_1b8;
  undefined4 uStack_1b4;
  undefined4 uStack_1b0;
  undefined4 uStack_1ac;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  undefined4 uStack_1a0;
  uint uStack_19c;
  uint *****local_198;
  int local_194;
  uint ***local_190;
  int iStack_18c;
  uint ***local_188;
  int iStack_184;
  int iStack_180;
  int iStack_17c;
  int local_178;
  int iStack_174;
  int iStack_170;
  int iStack_16c;
  int iStack_168;
  int local_164;
  int iStack_160;
  int iStack_15c;
  int iStack_158;
  int iStack_154;
  undefined4 local_150;
  undefined4 uStack_14c;
  undefined4 uStack_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  uint local_134;
  uint ****local_130;
  uint ******local_12c;
  undefined1 *local_128;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  uint *****local_b8;
  code *local_b4;
  uint *local_b0;
  uint *****local_ac;
  uint ******local_a8;
  undefined4 local_a4;
  undefined4 local_a0;
  undefined4 local_9c;
  uint *****local_98;
  uint *****local_94;
  uint ***local_90;
  uint local_8c;
  undefined4 local_88;
  int local_84;
  int local_80;
  int iStack_7c;
  int local_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int iStack_68;
  int local_64;
  int iStack_60;
  int iStack_5c;
  int iStack_58;
  int iStack_54;
  
  if (param_2[0x34] == 0) {
    local_1fc = 0;
    local_200 = (uint *****)&SUB_00000004;
  }
  else {
    (**(code **)(param_2[0x35] + 0xc))(&local_200);
    if (local_200 == (uint *****)&DAT_00000005 && local_1fc == 0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    if (((uint)local_200 & 7) == 3) {
      if (local_1f8 == (uint ***)&DAT_00000003 && local_1f4 == 0) {
        local_90 = local_1f0;
        local_8c = iStack_1ec;
        local_88 = (uint ***)iStack_1e8;
        local_84 = iStack_1e4;
        FUN_01a3d128(param_2 + 0x2c);
        uVar6 = 1;
      }
      else {
        if (*param_2 == 3 && param_2[1] == 0) {
          *param_2 = (int)local_1f8;
          param_2[1] = local_1f4;
          param_2[2] = (int)local_1f0;
          param_2[3] = iStack_1ec;
          param_2[4] = iStack_1e8;
          param_2[5] = iStack_1e4;
          param_2[6] = local_1e0;
          param_2[7] = iStack_1dc;
          param_2[8] = iStack_1d8;
          param_2[9] = iStack_1d4;
          param_2[10] = iStack_1d0;
          param_2[0xb] = local_1cc;
          param_2[0xc] = iStack_1c8;
          param_2[0xd] = iStack_1c4;
          param_2[0xe] = iStack_1c0;
          param_2[0xf] = iStack_1bc;
        }
        else {
          local_88 = local_1f0;
          local_84 = iStack_1ec;
          local_80 = iStack_1e8;
          iStack_7c = iStack_1e4;
          local_78 = local_1e0;
          iStack_74 = iStack_1dc;
          iStack_70 = iStack_1d8;
          iStack_6c = iStack_1d4;
          iStack_68 = iStack_1d0;
          local_64 = local_1cc;
          iStack_60 = iStack_1c8;
          iStack_5c = iStack_1c4;
          iStack_58 = iStack_1c0;
          iStack_54 = iStack_1bc;
          local_8c = local_1f4;
          local_90 = local_1f8;
          FUN_00713444(param_2);
        }
        uVar6 = 0;
      }
      *param_1 = 3;
      param_1[1] = 0;
      *(undefined1 *)(param_1 + 2) = uVar6;
      return;
    }
    if (local_200 != (uint *****)&SUB_00000004) {
      local_198 = local_200;
      local_194 = local_1fc;
      local_190 = local_1f8;
      iStack_18c = local_1f4;
      local_188 = local_1f0;
      iStack_184 = iStack_1ec;
      iStack_180 = iStack_1e8;
      iStack_17c = iStack_1e4;
      local_178 = local_1e0;
      iStack_174 = iStack_1dc;
      iStack_170 = iStack_1d8;
      iStack_16c = iStack_1d4;
      iStack_168 = iStack_1d0;
      local_164 = local_1cc;
      iStack_160 = iStack_1c8;
      iStack_15c = iStack_1c4;
      iStack_158 = iStack_1c0;
      iStack_154 = iStack_1bc;
      local_150 = local_1b8;
      uStack_14c = uStack_1b4;
      uStack_148 = uStack_1b0;
      uStack_144 = uStack_1ac;
      local_140 = local_1a8;
      uStack_13c = uStack_1a4;
      uStack_138 = uStack_1a0;
      local_134 = uStack_19c;
      uVar10 = (uint)*(ushort *)(param_2 + 0x36);
      bVar11 = uVar10 == 0;
      if (bVar11) {
        uVar10 = uStack_19c & 0xff;
      }
      if (bVar11 && uVar10 == 1) {
        *param_1 = 3;
        param_1[1] = 0;
        *(undefined1 *)(param_1 + 2) = 0;
        FUN_01a70c28(&local_198);
        return;
      }
      FUN_01a709e4(&local_90,&local_198);
      FUN_01bed4e2(&local_130,&local_90,0x68);
      FUN_01bed4e2(&local_90,param_2 + 0x10,0x68);
      FUN_01bed4e2(param_2 + 0x10,&local_130,0x68);
      if ((local_90 != (uint ***)0x3 || local_8c != 0) &&
         (-local_8c < (uint)(local_90 < (uint ***)0x4) || ((uint)local_90 & 6) != 4)) {
        FUN_01a70c28(&local_90);
      }
      if (((DAT_01d50f88 < 2) &&
          ((DAT_01d50960 - 1 < 2 ||
           ((DAT_01d50960 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50958), cVar1 != '\0')))))) &&
         (iVar3 = FUN_01aaa278(DAT_01d50958), iVar3 != 0)) {
        local_b0 = (uint *)(DAT_01d50958 + 0x1c);
        local_90 = (uint ***)*local_b0;
        local_8c = *(uint *)(DAT_01d50958 + 0x20);
        if (local_8c == 0) {
LAB_01a717c0:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d2f8);
        }
        local_88 = *(uint ****)(DAT_01d50958 + 0x24);
        local_84 = *(undefined4 *)(DAT_01d50958 + 0x28);
        local_12c = &local_ac;
        local_b4 = (code *)0x1;
        local_a8 = &local_98;
        local_80 = 0;
        local_128 = &DAT_01d2ea4c;
        local_ac = (uint *****)&DAT_0057e68c;
        local_94 = (uint *****)FUN_01a705e4;
        local_130 = &local_90;
        local_b8 = &local_130;
        local_98 = (uint *****)&local_198;
        FUN_01a71ba0(&local_b8);
      }
      else {
        iVar3 = DAT_01d50958;
        if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
          local_c0 = *(undefined4 *)(DAT_01d50958 + 0x14);
          local_bc = *(undefined4 *)(DAT_01d50958 + 0x18);
          local_c4 = 4;
          DataMemoryBarrier(0xb);
          puVar7 = DAT_01d4edc8;
          pcVar9 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar7 = &DAT_01cfc5e0;
            pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar7[3])(pcVar9,&local_c4);
          if (iVar2 != 0) {
            local_b0 = (uint *)(DAT_01d50958 + 0x1c);
            local_90 = (uint ***)*local_b0;
            local_8c = *(uint *)(DAT_01d50958 + 0x20);
            if (local_8c == 0) goto LAB_01a717c0;
            local_88 = *(uint ****)(DAT_01d50958 + 0x24);
            local_12c = &local_ac;
            local_84 = *(undefined4 *)(DAT_01d50958 + 0x28);
            local_b4 = (code *)0x1;
            local_a8 = &local_98;
            local_80 = 0;
            local_128 = &DAT_01d2ea4c;
            local_ac = (uint *****)&DAT_0057e68c;
            local_94 = (uint *****)FUN_01a705e4;
            local_130 = &local_90;
            local_b8 = &local_130;
            local_98 = (uint *****)&local_198;
            FUN_01aaa328(iVar3,pcVar9,puVar7[4],&local_c4,&local_b8);
          }
        }
      }
      pppppuVar4 = (uint *****)&local_198;
      uVar5 = 0x68;
      goto LAB_01a71380;
    }
  }
  if (param_2[0x2d] == 0) {
    uVar10 = 0;
    pppuVar8 = (uint ***)0x3;
    uVar6 = 0;
  }
  else {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d50954 - 1 < 2 ||
         ((DAT_01d50954 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d5094c), cVar1 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d5094c), iVar3 != 0)))) {
      local_190 = (uint ***)(DAT_01d5094c + 0x1c);
      local_90 = (uint ***)*local_190;
      local_8c = *(uint *)(DAT_01d5094c + 0x20);
      if (local_8c == 0) {
LAB_01a717a8:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d2e8);
      }
      local_88 = *(uint ****)(DAT_01d5094c + 0x24);
      local_12c = &local_98;
      local_84 = *(undefined4 *)(DAT_01d5094c + 0x28);
      local_194 = 1;
      local_94 = (uint *****)&local_b8;
      local_130 = &local_90;
      local_b8 = (uint *****)(param_2 + 0x10);
      local_198 = &local_130;
      local_80 = 0;
      local_128 = &DAT_01d2ea4c;
      local_98 = (uint *****)&DAT_00571f6d;
      local_b4 = FUN_01a718a8;
      FUN_01a719b4(&local_198);
    }
    else {
      iVar3 = DAT_01d5094c;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_a0 = *(undefined4 *)(DAT_01d5094c + 0x14);
        local_9c = *(undefined4 *)(DAT_01d5094c + 0x18);
        local_a4 = 5;
        DataMemoryBarrier(0xb);
        puVar7 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar7 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar2 = (*(code *)puVar7[3])(pcVar9,&local_a4);
        if (iVar2 != 0) {
          local_190 = (uint ***)(DAT_01d5094c + 0x1c);
          local_90 = (uint ***)*local_190;
          local_8c = *(uint *)(DAT_01d5094c + 0x20);
          if (local_8c == 0) goto LAB_01a717a8;
          local_12c = &local_98;
          local_88 = *(uint ****)(DAT_01d5094c + 0x24);
          local_84 = *(undefined4 *)(DAT_01d5094c + 0x28);
          local_130 = &local_90;
          local_198 = &local_130;
          local_194 = 1;
          local_94 = (uint *****)&local_b8;
          local_80 = 0;
          local_b8 = (uint *****)(param_2 + 0x10);
          local_128 = &DAT_01d2ea4c;
          local_98 = (uint *****)&DAT_00571f6d;
          local_b4 = FUN_01a718a8;
          FUN_01aaa328(iVar3,pcVar9,puVar7[4],&local_a4,&local_198);
        }
      }
    }
    FUN_01a71aac(&local_90,0xd,
                 "Unexpected EOF decoding stream.event /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:172"
                 ,0x1f);
    uVar10 = local_8c;
    pppuVar8 = local_90;
    uVar6 = (undefined1)local_88;
    FUN_01bed4e2(&local_130,(int)&local_88 + 1,0x5f);
  }
  pppppuVar4 = &local_130;
  uVar5 = 0x5f;
  *(undefined1 *)(param_1 + 2) = uVar6;
  *param_1 = (uint)pppuVar8;
  param_1[1] = uVar10;
  param_1 = (uint *)((int)param_1 + 9);
LAB_01a71380:
  FUN_01bed4e2(param_1,pppppuVar4,uVar5);
  return;
}


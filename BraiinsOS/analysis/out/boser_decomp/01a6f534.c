// FUN_01a6f534 @ 01a6f534 size=2192 calls_out=12 calls_in=2
// strings: h2::proto::streams::prioritizestream.id/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/prioritize.rs:669 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | reclaimed | reclaimed | FieldSet corrupted (this is a bug)

undefined4
FUN_01a6f534(int param_1,undefined4 param_2,undefined4 *****param_3,undefined4 ******param_4)

{
  char *pcVar1;
  undefined8 uVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 ******ppppppuVar7;
  undefined4 *****pppppuVar8;
  undefined4 *unaff_r6;
  undefined4 ******ppppppuVar9;
  undefined4 ******unaff_r7;
  undefined4 unaff_r9;
  undefined4 *****pppppuVar10;
  undefined4 *****pppppuVar11;
  undefined4 *puVar12;
  undefined8 uVar13;
  undefined4 ******local_178;
  undefined4 local_174;
  undefined4 *local_170;
  undefined4 *****local_16c;
  undefined4 local_168;
  undefined4 ******local_164;
  undefined4 ******local_160;
  undefined4 local_15c;
  undefined4 *local_158;
  undefined4 ******local_150;
  undefined4 ******local_14c;
  undefined4 *local_148;
  undefined4 uStack_144;
  undefined4 local_140;
  undefined4 ******local_13c;
  undefined4 ******local_138;
  undefined8 local_134;
  undefined4 local_12c;
  undefined4 ******local_128;
  undefined4 local_124;
  undefined4 local_120;
  undefined4 local_11c;
  undefined4 ******local_118;
  undefined4 ******local_114;
  undefined8 local_110;
  undefined4 *****local_108;
  undefined4 *****pppppuStack_104;
  undefined4 *****local_100;
  undefined4 local_fc;
  undefined4 ******local_f8;
  undefined4 ******local_f4;
  undefined4 ******local_f0;
  undefined4 ******local_ec;
  undefined4 ******local_e8;
  undefined4 *****local_e4;
  undefined4 ******local_e0;
  undefined4 ******local_dc;
  undefined4 *****local_d8;
  uint uStack_d4;
  undefined4 ******local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined4 ******local_30;
  undefined4 local_2c;
  undefined4 *puStack_28;
  
  if ((DAT_01d50f88 == 0) &&
     ((DAT_01d50888 - 1 < 2 ||
      ((DAT_01d50888 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d50880), cVar3 != '\0')))))) {
    puVar12 = (undefined4 *)0x1a6f6d4;
    iVar4 = FUN_01aaa278(DAT_01d50880);
    if (iVar4 == 0) goto LAB_01a6f568;
    ppppppuVar7 = *(undefined4 *******)(DAT_01d50880 + 0x20);
    if (ppppppuVar7 != (undefined4 ******)0x0) {
      unaff_r6 = *(undefined4 **)(DAT_01d50880 + 0x24);
      unaff_r9 = *(undefined4 *)(DAT_01d50880 + 0x28);
      puVar12 = (undefined4 *)(DAT_01d50880 + 0x1c);
      unaff_r7 = (undefined4 ******)*puVar12;
      local_140 = 0;
      local_168 = 0x13;
      local_16c = (undefined4 *****)0x52df29;
      local_150 = unaff_r7;
      local_14c = ppppppuVar7;
      local_148 = unaff_r6;
      uStack_144 = unaff_r9;
    }
    puVar6 = &DAT_01d2d084;
    local_134 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110);
    if ((ppppppuVar7 < (undefined4 ******)0x2) ||
       (local_12c = 1, local_164 = param_4, local_13c = unaff_r7, local_138 = ppppppuVar7,
       local_134 = CONCAT44(unaff_r9,unaff_r6),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110),
       ppppppuVar7 < &DAT_00000003)) goto LAB_01a6f734;
    local_108 = (undefined4 *****)0x2;
    if (*param_4 == (undefined4 *****)0x0) {
      local_128 = (undefined4 ******)param_4[3];
    }
    else {
      local_128 = (undefined4 ******)0x0;
      if (*param_4 == (undefined4 *****)0x1) {
        local_128 = (undefined4 ******)((int)param_4[3] - (int)param_4[4]);
        if (param_4[3] < param_4[4]) {
          local_128 = (undefined4 ******)0x0;
        }
        if (param_4[5] != (undefined4 *****)0x0) {
          local_128 = (undefined4 ******)0x0;
        }
      }
    }
    local_dc = &local_128;
    local_e0 = &local_118;
    local_e8 = &local_164;
    local_ec = &local_13c;
    local_f4 = &local_16c;
    local_f8 = &local_150;
    local_178 = &local_f8;
    local_174 = 3;
    local_d8 = (undefined4 *****)&DAT_01d2dd1c;
    local_e4 = (undefined4 *****)&DAT_01d2d094;
    local_f0 = (undefined4 ******)&DAT_01d2ea4c;
    local_170 = puVar12;
    local_134._0_4_ = (undefined4 *****)unaff_r6;
    local_134._4_4_ = unaff_r9;
    local_118 = unaff_r7;
    local_114 = ppppppuVar7;
    local_110._0_4_ = (undefined4 *****)unaff_r6;
    local_110._4_4_ = (undefined4 *****)unaff_r9;
    FUN_01aaaecc(DAT_01d50880,&local_178);
    iVar4 = DAT_01d50880;
    uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110), 4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *)(DAT_01d50880 + 0x14);
      local_38 = *(undefined4 **)(DAT_01d50880 + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar12 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar12[3])(pcVar1,&local_40);
      uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      if (iVar5 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        puStack_28 = local_38;
        FUN_01aaa328(iVar4,pcVar1,puVar12[4],&local_30,&local_178);
        uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      }
    }
  }
  else {
LAB_01a6f568:
    iVar4 = DAT_01d50880;
    uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
    local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134),
       local_110 = CONCAT44(local_110._4_4_,(undefined4 *****)local_110), 4 < DAT_01d51b00)) {
      local_15c = *(undefined4 *)(DAT_01d50880 + 0x14);
      local_158 = *(undefined4 **)(DAT_01d50880 + 0x18);
      local_160 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar12 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      uVar13 = (*(code *)puVar12[3])(pcVar1,&local_160);
      uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      if ((int)uVar13 != 0) {
        ppppppuVar9 = *(undefined4 *******)(DAT_01d50880 + 0x1c);
        ppppppuVar7 = *(undefined4 *******)(DAT_01d50880 + 0x20);
        if (ppppppuVar7 != (undefined4 ******)0x0) {
          local_148 = *(undefined4 **)(DAT_01d50880 + 0x24);
          uStack_144 = *(undefined4 *)(DAT_01d50880 + 0x28);
          uVar13 = *(undefined8 *)(DAT_01d50880 + 0x24);
          local_140 = 0;
          local_174 = 0x13;
          local_178 = (undefined4 ******)0x52df29;
          local_150 = ppppppuVar9;
          local_14c = ppppppuVar7;
        }
        if (ppppppuVar7 < (undefined4 ******)0x2) {
          puVar6 = &DAT_01d2d084;
          local_134 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
          goto LAB_01a6f734;
        }
        local_12c = 1;
        puVar6 = &DAT_01d2d084;
        local_13c = ppppppuVar9;
        local_138 = ppppppuVar7;
        local_128 = param_4;
        local_134 = uVar13;
        if (ppppppuVar7 < &DAT_00000003) goto LAB_01a6f734;
        local_108 = (undefined4 *****)0x2;
        if (*param_4 == (undefined4 *****)0x2) {
          local_16c = (undefined4 *****)0x0;
        }
        else if (*param_4 == (undefined4 *****)0x1) {
          local_16c = (undefined4 *****)((int)param_4[3] - (int)param_4[4]);
          if (param_4[3] < param_4[4]) {
            local_16c = (undefined4 *****)0x0;
          }
          if (param_4[5] != (undefined4 *****)0x0) {
            local_16c = (undefined4 *****)0x0;
          }
        }
        else {
          local_16c = param_4[3];
        }
        local_dc = &local_16c;
        local_e0 = &local_118;
        local_e8 = &local_128;
        local_ec = &local_13c;
        local_f4 = &local_178;
        local_f8 = &local_150;
        local_40 = &local_f8;
        local_f0 = (undefined4 ******)&DAT_01d2ea4c;
        local_d8 = (undefined4 *****)&DAT_01d2dd1c;
        local_3c = 3;
        local_e4 = (undefined4 *****)&DAT_01d2d094;
        local_30 = local_160;
        local_2c = local_15c;
        puStack_28 = local_158;
        local_118 = ppppppuVar9;
        local_114 = ppppppuVar7;
        local_38 = (undefined4 *)(DAT_01d50880 + 0x1c);
        local_110 = uVar13;
        FUN_01aaa328(iVar4,pcVar1,puVar12[4],&local_30,&local_40);
        uVar2 = local_134;
      }
    }
  }
  local_134._4_4_ = (undefined4)((ulonglong)uVar2 >> 0x20);
  iVar4 = *(int *)(param_1 + 0x3c);
  pppppuVar11 = param_4[8];
  pppppuVar10 = param_4[9];
  *(undefined4 *)(param_1 + 0x3c) = 0;
  if (iVar4 == 1) {
    local_100 = param_4[0xc];
    ppppppuVar7 = &local_118;
    local_118 = (undefined4 ******)*param_4;
    local_114 = (undefined4 ******)param_4[1];
    ppppppuVar9 = param_4 + 2;
    local_110._0_4_ = *ppppppuVar9;
    local_110._4_4_ = param_4[3];
    local_108 = param_4[4];
    pppppuStack_104 = param_4[5];
    local_fc = CONCAT13(local_fc._3_1_,*(undefined3 *)(param_4 + 0xd));
    uVar13 = *(undefined8 *)ppppppuVar9;
    if (local_118 != (undefined4 ******)0x2) {
      if (local_118 == (undefined4 ******)&DAT_00000001) {
        pppppuVar8 = (undefined4 *****)((int)local_110._4_4_ - (int)local_108);
        if (local_110._4_4_ < local_108) {
          pppppuVar8 = (undefined4 *****)0x0;
        }
        uVar13 = *(undefined8 *)ppppppuVar9;
        if (pppppuStack_104 != (undefined4 *****)0x0) goto LAB_01a6fcc8;
      }
      else {
        pppppuVar8 = local_110._4_4_;
      }
      uVar13 = *(undefined8 *)ppppppuVar9;
      if (pppppuVar8 != (undefined4 *****)0x0) {
        if (((uint)param_4[10] & 1) != 0) {
          local_fc._0_2_ = (undefined2)*(undefined3 *)(param_4 + 0xd);
          local_fc = CONCAT13(local_fc._3_1_,
                              CONCAT12(*(undefined1 *)((int)param_4 + 0x36),(undefined2)local_fc)) |
                     0x10000;
        }
        uStack_d4 = local_fc;
        local_f8 = (undefined4 ******)((uint)local_f8 & 0xffffff00);
        local_13c = (undefined4 ******)param_3;
        local_138 = (undefined4 ******)pppppuVar11;
        local_134._0_4_ = pppppuVar10;
        local_f0 = local_118;
        local_ec = local_114;
        local_e8 = (undefined4 ******)(undefined4 *****)local_110;
        local_e4 = local_110._4_4_;
        local_e0 = (undefined4 ******)local_108;
        local_dc = (undefined4 ******)pppppuStack_104;
        local_d8 = local_100;
        iVar4 = FUN_01367cb8(param_3[0xd],param_3[0xe],pppppuVar11,pppppuVar10);
        FUN_01a7e574(iVar4 + 0x6c,param_2,&local_f8);
        iVar4 = FUN_01367c40(param_3[0xd],param_3[0xe],pppppuVar11,pppppuVar10);
        if (0 < *(int *)(iVar4 + 0x3c)) {
          FUN_01368588(param_1,&local_13c);
        }
        return 1;
      }
    }
    goto LAB_01a6fcc8;
  }
  local_134 = uVar2;
  if (iVar4 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("wasn\'t expecting a frame to reclaim",0x47,&DAT_01d2d0a4);
  }
  if (DAT_01d50f88 == 0) {
    if (1 < DAT_01d50894 - 1) {
      if (DAT_01d50894 != 0) {
        cVar3 = FUN_01aaafa8(&DAT_01d5088c);
        uVar2 = local_134;
        if (cVar3 != '\0') goto LAB_01a6fb88;
      }
      goto LAB_01a6f9e4;
    }
LAB_01a6fb88:
    iVar4 = FUN_01aaa278(DAT_01d5088c);
    uVar2 = local_134;
    if (iVar4 == 0) goto LAB_01a6f9e4;
    if (*(undefined4 *******)(DAT_01d5088c + 0x20) == (undefined4 ******)0x0) goto LAB_01a6fdc0;
    local_138 = &local_30;
    local_f0 = *(undefined4 *******)(DAT_01d5088c + 0x24);
    local_ec = *(undefined4 *******)(DAT_01d5088c + 0x28);
    local_148 = (undefined4 *)(DAT_01d5088c + 0x1c);
    local_f8 = (undefined4 ******)*local_148;
    local_13c = &local_f8;
    local_150 = &local_13c;
    local_e8 = (undefined4 ******)0x0;
    local_14c = (undefined4 ******)&DAT_00000001;
    local_134._0_4_ = (undefined4 *****)&DAT_01d2ea4c;
    local_2c = 0x53;
    local_30 = (undefined4 ******)0x52df55;
    local_f4 = *(undefined4 *******)(DAT_01d5088c + 0x20);
    FUN_01aaaecc(DAT_01d5088c,&local_150);
    iVar4 = DAT_01d5088c;
    uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
    if ((DAT_01d51ae9 == '\0') &&
       (uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134), 4 < DAT_01d51b00)) {
      local_114 = *(undefined4 *******)(DAT_01d5088c + 0x14);
      local_110._0_4_ = *(undefined4 ******)(DAT_01d5088c + 0x18);
      local_118 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar12 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar5 = (*(code *)puVar12[3])(pcVar1,&local_118);
      uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      if (iVar5 != 0) {
        FUN_01aaa328(iVar4,pcVar1,puVar12[4],&local_118,&local_150);
        uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      }
    }
  }
  else {
LAB_01a6f9e4:
    iVar4 = DAT_01d5088c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_120 = *(undefined4 *)(DAT_01d5088c + 0x14);
      local_11c = *(undefined4 *)(DAT_01d5088c + 0x18);
      local_124 = 5;
      DataMemoryBarrier(0xb);
      puVar12 = DAT_01d4edc8;
      pcVar1 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar12 = &DAT_01cfc5e0;
        pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      local_134 = uVar2;
      iVar5 = (*(code *)puVar12[3])(pcVar1,&local_124);
      uVar2 = local_134;
      if (iVar5 != 0) {
        if (*(undefined4 *******)(DAT_01d5088c + 0x20) == (undefined4 ******)0x0) {
LAB_01a6fdc0:
          puVar6 = &DAT_01d2d0b4;
LAB_01a6f734:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar6);
        }
        local_114 = &local_150;
        local_f0 = *(undefined4 *******)(DAT_01d5088c + 0x24);
        local_ec = *(undefined4 *******)(DAT_01d5088c + 0x28);
        local_118 = &local_f8;
        local_13c = &local_118;
        local_138 = (undefined4 ******)&DAT_00000001;
        local_e8 = (undefined4 ******)0x0;
        local_110._0_4_ = (undefined4 *****)&DAT_01d2ea4c;
        local_14c = (undefined4 ******)&DAT_00000053;
        local_150 = (undefined4 ******)0x52df55;
        local_134._0_4_ = (undefined4 *****)(DAT_01d5088c + 0x1c);
        local_f8 = *(undefined4 *******)(DAT_01d5088c + 0x1c);
        local_f4 = *(undefined4 *******)(DAT_01d5088c + 0x20);
        FUN_01aaa328(iVar4,pcVar1,puVar12[4],&local_124,&local_13c);
        uVar2 = CONCAT44(local_134._4_4_,(undefined4 *****)local_134);
      }
    }
  }
  ppppppuVar7 = param_4;
  uVar13 = local_110;
LAB_01a6fcc8:
  local_134 = uVar2;
  local_110 = uVar13;
  FUN_01a6322c(ppppppuVar7);
  return 0;
}


// FUN_0135d300 @ 0135d300 size=6112 calls_out=21 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs

/* WARNING: Type propagation algorithm not settling */

void FUN_0135d300(char *param_1,int param_2,int *param_3,int *param_4)

{
  bool bVar1;
  char *pcVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  undefined4 uVar7;
  uint uVar8;
  undefined *puVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  int *piVar14;
  int iVar15;
  undefined4 *****pppppuVar16;
  undefined4 *puVar17;
  undefined4 *****local_160;
  uint local_15c;
  undefined4 local_158;
  undefined4 local_154;
  undefined4 *******local_150;
  undefined4 *******local_14c;
  undefined4 *local_148;
  undefined4 ******local_144;
  undefined4 ******local_140;
  undefined4 ****local_13c;
  undefined4 *******local_138;
  undefined4 *******local_134;
  int *local_130;
  undefined4 *******local_128;
  undefined4 *******local_124;
  undefined4 *local_120;
  undefined4 *******local_11c;
  undefined4 *******local_118;
  undefined4 *******local_114;
  undefined1 *local_110;
  undefined4 local_10c;
  undefined4 *****local_108;
  uint local_104;
  undefined4 local_100;
  undefined4 local_fc;
  undefined4 local_f8;
  undefined4 local_f4;
  undefined4 local_f0;
  undefined4 local_ec;
  undefined4 local_e8;
  undefined4 local_e4;
  undefined4 local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d4;
  undefined4 local_d0;
  undefined4 local_cc;
  undefined4 ******local_c8;
  code *local_c4;
  undefined4 *****local_c0;
  code *local_bc;
  undefined4 ******local_b8;
  code *local_b4;
  undefined4 *******local_40;
  undefined4 *******local_3c;
  int *local_38;
  undefined4 *******local_30;
  undefined4 *******local_2c;
  int *local_28;
  
  pppppuVar16 = (undefined4 *****)param_3[2];
  if ((int)pppppuVar16 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("assertion failed: sz <= MAX_WINDOW_SIZE as usizeevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/codec/framed_read.rs:304"
                 ,0x30,&DAT_01ce7b54);
  }
  iVar15 = *param_4;
  iVar11 = param_4[1];
  iVar12 = param_4[2];
  local_160 = pppppuVar16;
  iVar4 = FUN_01367c40(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,iVar12);
  uVar6 = (uint)*(byte *)(iVar4 + 0x20);
  if (5 < uVar6) {
LAB_0135d384:
    iVar4 = FUN_01367c40(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,iVar12
                        );
    cVar3 = *(byte *)(iVar4 + 0x20) - 6;
    if (*(byte *)(iVar4 + 0x20) < 6) {
      cVar3 = '\x06';
    }
    if (cVar3 == '\x04') {
      cVar3 = *(char *)(iVar4 + 0x21);
LAB_0135d3c0:
      bVar1 = false;
      if (cVar3 != '\0') goto LAB_0135d3cc;
    }
    else if (cVar3 == '\x03') {
      cVar3 = *(char *)(iVar4 + 0x22);
      goto LAB_0135d3c0;
    }
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4d1cc - 1 < 2 ||
         ((DAT_01d4d1cc != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d1c4), cVar3 != '\0')))) &&
        (iVar4 = FUN_01aaa278(DAT_01d4d1c4), iVar4 != 0)))) {
      piVar14 = (int *)(DAT_01d4d1c4 + 0x1c);
      if (*(code **)(DAT_01d4d1c4 + 0x20) == (code *)0x0) {
LAB_0135eb90:
        puVar9 = &DAT_01ce7b64;
        goto LAB_0135ebbc;
      }
      local_c0 = *(undefined4 ******)(DAT_01d4d1c4 + 0x24);
      local_bc = *(code **)(DAT_01d4d1c4 + 0x28);
      local_b8 = (undefined4 ******)0x0;
      local_c8 = (undefined4 ******)*piVar14;
      local_c4 = *(code **)(DAT_01d4d1c4 + 0x20);
      iVar4 = FUN_01367c40(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,
                           iVar12);
      local_14c = &local_128;
      local_128 = (undefined4 *******)(iVar4 + 0xd4);
      local_2c = &local_150;
      local_30 = &local_c8;
      local_40 = &local_30;
      local_3c = (undefined4 *******)&DAT_00000001;
      local_124 = (undefined4 *******)FUN_00b1c384;
      local_150 = (undefined4 *******)&DAT_005aac41;
      local_28 = (int *)&DAT_01d2ea4c;
      local_38 = piVar14;
      FUN_01aaaecc(DAT_01d4d1c4,&local_40);
      iVar4 = DAT_01d4d1c4;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_118 = *(undefined4 ********)(DAT_01d4d1c4 + 0x14);
        local_114 = *(undefined4 ********)(DAT_01d4d1c4 + 0x18);
        local_11c = (undefined4 *******)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar13[3])(pcVar2,&local_11c);
        if (iVar11 != 0) {
          FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_11c,&local_40);
        }
      }
    }
    else {
      iVar4 = DAT_01d4d1c4;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_158 = *(undefined4 *)(DAT_01d4d1c4 + 0x14);
        local_154 = *(undefined4 *)(DAT_01d4d1c4 + 0x18);
        local_15c = 4;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar13[3])(pcVar2,&local_15c);
        if (iVar11 != 0) {
          piVar14 = (int *)(DAT_01d4d1c4 + 0x1c);
          if (*(code **)(DAT_01d4d1c4 + 0x20) == (code *)0x0) goto LAB_0135eb90;
          local_c0 = *(undefined4 ******)(DAT_01d4d1c4 + 0x24);
          local_bc = *(code **)(DAT_01d4d1c4 + 0x28);
          local_b8 = (undefined4 ******)0x0;
          local_c8 = (undefined4 ******)*piVar14;
          local_c4 = *(code **)(DAT_01d4d1c4 + 0x20);
          iVar11 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                                param_4[1],param_4[2]);
          local_124 = &local_40;
          local_40 = (undefined4 *******)(iVar11 + 0xd4);
          local_118 = &local_128;
          local_11c = &local_c8;
          local_30 = &local_11c;
          local_2c = (undefined4 *******)&DAT_00000001;
          local_3c = (undefined4 *******)FUN_00b1c384;
          local_128 = (undefined4 *******)&DAT_005aac41;
          local_114 = (undefined4 *******)&DAT_01d2ea4c;
          local_28 = piVar14;
          FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_15c,&local_30);
        }
      }
    }
    goto LAB_0135dda8;
  }
  uVar8 = 1;
  if (2 < uVar6) {
    uVar8 = uVar6 - 3;
  }
  bVar1 = true;
  if ((uVar8 == 0) || ((((uVar8 & 0xff) == 1 && (uVar6 < 2)) && (1 < *(byte *)(iVar4 + 0x21)))))
  goto LAB_0135d384;
LAB_0135d3cc:
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d1a8 - 1 < 2 ||
       ((DAT_01d4d1a8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d1a0), cVar3 != '\0')))))) &&
     (iVar4 = FUN_01aaa278(DAT_01d4d1a0), iVar4 != 0)) {
    puVar13 = (undefined4 *)(DAT_01d4d1a0 + 0x1c);
    if (*(undefined4 ********)(DAT_01d4d1a0 + 0x20) == (undefined4 *******)0x0) {
LAB_0135eba0:
      puVar9 = &DAT_01ce7b74;
      goto LAB_0135ebbc;
    }
    local_114 = *(undefined4 ********)(DAT_01d4d1a0 + 0x24);
    local_110 = *(undefined1 **)(DAT_01d4d1a0 + 0x28);
    local_10c = 0;
    local_13c = (undefined4 ****)
                (*(uint *)(param_2 + 0x20) & ~((int)*(uint *)(param_2 + 0x20) >> 0x1f));
    local_11c = (undefined4 *******)*puVar13;
    local_118 = *(undefined4 ********)(DAT_01d4d1a0 + 0x20);
    iVar4 = FUN_01367c40(*(undefined4 *)(iVar15 + 0x34),*(undefined4 *)(iVar15 + 0x38),iVar11,iVar12
                        );
    local_140 = &local_c8;
    local_124 = &local_144;
    local_128 = &local_11c;
    local_108 = (undefined4 *****)
                (*(uint *)(iVar4 + 0x48) & ~((int)*(uint *)(iVar4 + 0x48) >> 0x1f));
    local_14c = (undefined4 *******)&DAT_00000001;
    local_b8 = &local_108;
    local_c0 = &local_13c;
    local_150 = &local_128;
    local_c8 = &local_160;
    local_144 = (undefined4 ******)&DAT_005817b8;
    local_120 = (undefined4 *)&DAT_01d2ea4c;
    local_b4 = FUN_012fd02c;
    local_bc = FUN_012fd02c;
    local_c4 = FUN_012fd02c;
    local_148 = puVar13;
    FUN_01aaaecc(DAT_01d4d1a0,&local_150);
    iVar4 = DAT_01d4d1a0;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 ********)(DAT_01d4d1a0 + 0x14);
      local_38 = *(int **)(DAT_01d4d1a0 + 0x18);
      local_40 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar13[3])(pcVar2,&local_40);
      if (iVar11 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_30,&local_150);
      }
    }
  }
  else {
    iVar4 = DAT_01d4d1a0;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_134 = *(undefined4 ********)(DAT_01d4d1a0 + 0x14);
      local_130 = *(int **)(DAT_01d4d1a0 + 0x18);
      local_138 = (undefined4 *******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar13 = DAT_01d4edc8;
      pcVar2 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        puVar13 = &DAT_01cfc5e0;
        pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar11 = (*(code *)puVar13[3])(pcVar2,&local_138);
      if (iVar11 != 0) {
        puVar17 = (undefined4 *)(DAT_01d4d1a0 + 0x1c);
        if (*(undefined4 ********)(DAT_01d4d1a0 + 0x20) == (undefined4 *******)0x0)
        goto LAB_0135eba0;
        local_114 = *(undefined4 ********)(DAT_01d4d1a0 + 0x24);
        local_110 = *(undefined1 **)(DAT_01d4d1a0 + 0x28);
        local_10c = 0;
        local_108 = (undefined4 *****)
                    (*(uint *)(param_2 + 0x20) & ~((int)*(uint *)(param_2 + 0x20) >> 0x1f));
        local_11c = (undefined4 *******)*puVar17;
        local_118 = *(undefined4 ********)(DAT_01d4d1a0 + 0x20);
        iVar11 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                              param_4[1],param_4[2]);
        local_14c = &local_c8;
        local_3c = &local_150;
        local_40 = &local_11c;
        local_144 = (undefined4 ******)
                    (*(uint *)(iVar11 + 0x48) & ~((int)*(uint *)(iVar11 + 0x48) >> 0x1f));
        local_124 = (undefined4 *******)&DAT_00000001;
        local_b8 = &local_144;
        local_c0 = &local_108;
        local_128 = &local_40;
        local_c8 = &local_160;
        local_150 = (undefined4 *******)&DAT_005817b8;
        local_38 = (int *)&DAT_01d2ea4c;
        local_b4 = FUN_012fd02c;
        local_bc = FUN_012fd02c;
        local_c4 = FUN_012fd02c;
        local_30 = local_138;
        local_2c = local_134;
        local_28 = local_130;
        local_120 = puVar17;
        FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_30,&local_128);
      }
    }
  }
  if (bVar1) {
    if ((DAT_01d50f88 == 0) &&
       (((DAT_01d4d190 - 1 < 2 ||
         ((DAT_01d4d190 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d188), cVar3 != '\0')))) &&
        (iVar4 = FUN_01aaa278(DAT_01d4d188), iVar4 != 0)))) {
      piVar14 = (int *)(DAT_01d4d188 + 0x1c);
      if (*(code **)(DAT_01d4d188 + 0x20) == (code *)0x0) {
LAB_0135ebb4:
        puVar9 = &DAT_01ce7bc4;
        goto LAB_0135ebbc;
      }
      local_c0 = *(undefined4 ******)(DAT_01d4d188 + 0x24);
      local_bc = *(code **)(DAT_01d4d188 + 0x28);
      local_b8 = (undefined4 ******)0x0;
      local_c8 = (undefined4 ******)*piVar14;
      local_c4 = *(code **)(DAT_01d4d188 + 0x20);
      iVar4 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                           param_4[1],param_4[2]);
      local_14c = &local_128;
      local_128 = (undefined4 *******)(iVar4 + 0xd4);
      local_2c = &local_150;
      local_30 = &local_c8;
      local_40 = &local_30;
      local_3c = (undefined4 *******)&DAT_00000001;
      local_124 = (undefined4 *******)FUN_00b1c384;
      local_150 = (undefined4 *******)&DAT_005b8a5b;
      local_28 = (int *)&DAT_01d2ea4c;
      local_38 = piVar14;
      FUN_01aaaecc(DAT_01d4d188,&local_40);
      iVar4 = DAT_01d4d188;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_118 = *(undefined4 ********)(DAT_01d4d188 + 0x14);
        local_114 = *(undefined4 ********)(DAT_01d4d188 + 0x18);
        local_11c = (undefined4 *******)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar13[3])(pcVar2,&local_11c);
        if (iVar11 != 0) {
          FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_11c,&local_40);
        }
      }
    }
    else {
      iVar4 = DAT_01d4d188;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_100 = *(undefined4 *)(DAT_01d4d188 + 0x14);
        local_fc = *(undefined4 *)(DAT_01d4d188 + 0x18);
        local_104 = 5;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar13[3])(pcVar2,&local_104);
        if (iVar11 != 0) {
          piVar14 = (int *)(DAT_01d4d188 + 0x1c);
          if (*(code **)(DAT_01d4d188 + 0x20) == (code *)0x0) goto LAB_0135ebb4;
          local_c0 = *(undefined4 ******)(DAT_01d4d188 + 0x24);
          local_bc = *(code **)(DAT_01d4d188 + 0x28);
          local_b8 = (undefined4 ******)0x0;
          local_c8 = (undefined4 ******)*piVar14;
          local_c4 = *(code **)(DAT_01d4d188 + 0x20);
          iVar11 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                                param_4[1],param_4[2]);
          local_124 = &local_40;
          local_40 = (undefined4 *******)(iVar11 + 0xd4);
          local_118 = &local_128;
          local_11c = &local_c8;
          local_30 = &local_11c;
          local_2c = (undefined4 *******)&DAT_00000001;
          local_3c = (undefined4 *******)FUN_00b1c384;
          local_128 = (undefined4 *******)&DAT_005b8a5b;
          local_114 = (undefined4 *******)&DAT_01d2ea4c;
          local_28 = piVar14;
          FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_104,&local_30);
        }
      }
    }
    FUN_0135416c(param_1,param_2,pppppuVar16);
    goto LAB_0135ddd8;
  }
  FUN_01354214(&local_c8,param_2,pppppuVar16);
  cVar3 = (char)local_c8;
  if ((char)local_c8 != '\x03') {
    FUN_01bed4e2(param_1 + 1,(uint)&local_c8 | 1,0x17);
    *param_1 = cVar3;
    goto LAB_0135ddd8;
  }
  iVar12 = *param_4;
  iVar15 = param_4[1];
  iVar11 = param_4[2];
  iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,iVar11);
  if ((undefined4 *****)(*(uint *)(iVar4 + 0x48) & ~((int)*(uint *)(iVar4 + 0x48) >> 0x1f)) <
      pppppuVar16) {
    iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,iVar11
                        );
    uVar7 = 3;
  }
  else {
    piVar14 = (int *)FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),
                                  iVar15,iVar11);
    if (*piVar14 == 0) {
LAB_0135df94:
      if ((*(byte *)(param_3 + 5) & 1) != 0) {
        piVar14 = (int *)FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),
                                      iVar15,iVar11);
        if ((*piVar14 == 2 && piVar14[1] == 0) && (piVar14[2] != 0 || piVar14[3] != 0)) {
          if (((DAT_01d50f88 < 2) &&
              ((DAT_01d4d1d8 - 1 < 2 ||
               ((DAT_01d4d1d8 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d1d0), cVar3 != '\0')))))) &&
             (iVar4 = FUN_01aaa278(DAT_01d4d1d0), iVar4 != 0)) {
            piVar14 = (int *)(DAT_01d4d1d0 + 0x1c);
            if (*(code **)(DAT_01d4d1d0 + 0x20) == (code *)0x0) {
LAB_0135ec04:
              puVar9 = &DAT_01ce7ba4;
              goto LAB_0135ebbc;
            }
            local_c0 = *(undefined4 ******)(DAT_01d4d1d0 + 0x24);
            local_bc = *(code **)(DAT_01d4d1d0 + 0x28);
            local_b8 = (undefined4 ******)0x0;
            local_c8 = (undefined4 ******)*piVar14;
            local_c4 = *(code **)(DAT_01d4d1d0 + 0x20);
            iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),
                                 iVar15,iVar11);
            local_124 = &local_11c;
            local_11c = (undefined4 *******)(iVar4 + 0xd4);
            local_2c = &local_128;
            local_40 = &local_30;
            local_128 = (undefined4 *******)&DAT_0059ae4e;
            local_114 = &local_150;
            local_150 = (undefined4 *******)param_3[2];
            local_3c = (undefined4 *******)&DAT_00000001;
            local_28 = (int *)&DAT_01d2ea4c;
            local_110 = &LAB_01a6a304;
            local_118 = (undefined4 *******)FUN_00b1c384;
            local_38 = piVar14;
            local_30 = &local_c8;
            FUN_0135f01c(&local_40);
          }
          else {
            iVar4 = DAT_01d4d1d0;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_e8 = *(undefined4 *)(DAT_01d4d1d0 + 0x14);
              local_e4 = *(undefined4 *)(DAT_01d4d1d0 + 0x18);
              local_ec = 4;
              DataMemoryBarrier(0xb);
              puVar13 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar13[3])(pcVar2,&local_ec);
              if (iVar11 == 0) {
                iVar12 = *param_4;
                iVar15 = param_4[1];
                iVar11 = param_4[2];
              }
              else {
                piVar14 = (int *)(DAT_01d4d1d0 + 0x1c);
                if (*(code **)(DAT_01d4d1d0 + 0x20) == (code *)0x0) goto LAB_0135ec04;
                local_c0 = *(undefined4 ******)(DAT_01d4d1d0 + 0x24);
                local_bc = *(code **)(DAT_01d4d1d0 + 0x28);
                local_b8 = (undefined4 ******)0x0;
                iVar12 = *param_4;
                iVar15 = param_4[1];
                iVar11 = param_4[2];
                local_c8 = (undefined4 ******)*piVar14;
                local_c4 = *(code **)(DAT_01d4d1d0 + 0x20);
                iVar5 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),
                                     iVar15,iVar11);
                local_124 = &local_11c;
                local_11c = (undefined4 *******)(iVar5 + 0xd4);
                local_2c = &local_128;
                local_40 = &local_30;
                local_150 = (undefined4 *******)param_3[2];
                local_3c = (undefined4 *******)&DAT_00000001;
                local_114 = &local_150;
                local_128 = (undefined4 *******)&DAT_0059ae4e;
                local_28 = (int *)&DAT_01d2ea4c;
                local_110 = &LAB_01a6a304;
                local_118 = (undefined4 *******)FUN_00b1c384;
                local_38 = piVar14;
                local_30 = &local_c8;
                FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_ec,&local_40);
              }
            }
          }
          iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                               iVar11);
          goto LAB_0135ead0;
        }
        iVar4 = FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                             iVar11);
        FUN_0137a160(&local_c8,iVar4 + 0x20);
        if ((char)local_c8 != '\x03') {
          FUN_01396348(&local_c8);
          if ((DAT_01d50f88 < 2) &&
             (((DAT_01d4d1b4 - 1 < 2 ||
               ((DAT_01d4d1b4 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d1ac), cVar3 != '\0')))) &&
              (iVar4 = FUN_01aaa278(DAT_01d4d1ac), iVar4 != 0)))) {
            piVar14 = (int *)(DAT_01d4d1ac + 0x1c);
            if (*(code **)(DAT_01d4d1ac + 0x20) == (code *)0x0) {
LAB_0135ebf4:
              puVar9 = &DAT_01ce7b94;
              goto LAB_0135ebbc;
            }
            local_c0 = *(undefined4 ******)(DAT_01d4d1ac + 0x24);
            local_bc = *(code **)(DAT_01d4d1ac + 0x28);
            local_b8 = (undefined4 ******)0x0;
            local_c8 = (undefined4 ******)*piVar14;
            local_c4 = *(code **)(DAT_01d4d1ac + 0x20);
            iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),
                                 iVar15,iVar11);
            local_124 = &local_40;
            local_40 = (undefined4 *******)(iVar4 + 0xd4);
            local_118 = &local_128;
            local_30 = &local_11c;
            local_2c = (undefined4 *******)&DAT_00000001;
            local_3c = (undefined4 *******)FUN_00b1c384;
            local_128 = (undefined4 *******)&DAT_00585ec2;
            local_114 = (undefined4 *******)&DAT_01d2ea4c;
            local_11c = &local_c8;
            local_28 = piVar14;
            FUN_0135ef24(&local_30);
          }
          else {
            iVar4 = DAT_01d4d1ac;
            if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
              local_dc = *(undefined4 *)(DAT_01d4d1ac + 0x14);
              local_d8 = *(undefined4 *)(DAT_01d4d1ac + 0x18);
              local_e0 = 4;
              DataMemoryBarrier(0xb);
              puVar13 = DAT_01d4edc8;
              pcVar2 = DAT_01d4edc4;
              if (DAT_01d51174 != 2) {
                puVar13 = &DAT_01cfc5e0;
                pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
              }
              iVar11 = (*(code *)puVar13[3])(pcVar2,&local_e0);
              if (iVar11 != 0) {
                piVar14 = (int *)(DAT_01d4d1ac + 0x1c);
                if (*(code **)(DAT_01d4d1ac + 0x20) == (code *)0x0) goto LAB_0135ebf4;
                local_c0 = *(undefined4 ******)(DAT_01d4d1ac + 0x24);
                local_bc = *(code **)(DAT_01d4d1ac + 0x28);
                local_b8 = (undefined4 ******)0x0;
                local_c8 = (undefined4 ******)*piVar14;
                local_c4 = *(code **)(DAT_01d4d1ac + 0x20);
                iVar11 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),
                                      *(undefined4 *)(*param_4 + 0x38),param_4[1],param_4[2]);
                local_124 = &local_40;
                local_40 = (undefined4 *******)(iVar11 + 0xd4);
                local_118 = &local_128;
                local_30 = &local_11c;
                local_2c = (undefined4 *******)&DAT_00000001;
                local_3c = (undefined4 *******)FUN_00b1c384;
                local_128 = (undefined4 *******)&DAT_00585ec2;
                local_114 = (undefined4 *******)&DAT_01d2ea4c;
                local_11c = &local_c8;
                local_28 = piVar14;
                FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_e0,&local_30);
              }
            }
          }
LAB_0135dda8:
          param_1[0] = '\x01';
          param_1[1] = '\x01';
          param_1[4] = '\x01';
          param_1[5] = '\0';
          param_1[6] = '\0';
          param_1[7] = '\0';
          *(undefined ***)(param_1 + 8) = &PTR_FUN_01ceb2a4;
          param_1[0xc] = '\x01';
          param_1[0xd] = '\0';
          param_1[0xe] = '\0';
          param_1[0xf] = '\0';
          param_1[0x10] = '\0';
          param_1[0x11] = '\0';
          param_1[0x12] = '\0';
          param_1[0x13] = '\0';
          param_1[0x14] = '\0';
          param_1[0x15] = '\0';
          param_1[0x16] = '\0';
          param_1[0x17] = '\0';
          goto LAB_0135ddd8;
        }
        FUN_01396348(&local_c8);
      }
      iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                           iVar11);
      if (*(char *)(iVar4 + 0xf0) == '\x01') {
        iVar4 = FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                             iVar11);
        iVar4 = FUN_013810bc(iVar4 + 0x48,pppppuVar16);
        if (iVar4 == 0) {
          iVar4 = FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                               iVar11);
          *(int *)(iVar4 + 0xe4) = *(int *)(iVar4 + 0xe4) + (int)pppppuVar16;
          local_c0 = (undefined4 *****)*param_3;
          local_bc = (code *)param_3[1];
          local_b8 = (undefined4 ******)param_3[2];
          local_b4 = (code *)param_3[3];
          local_c8 = (undefined4 ******)0x4;
          local_c4 = (code *)0x0;
          iVar4 = FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                               iVar11);
          FUN_0138b32c(iVar4 + 0xb4,param_2 + 100,&local_c8);
          iVar4 = FUN_01367cb8(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                               iVar11);
          iVar11 = *(int *)(iVar4 + 0x50);
          *(undefined4 *)(iVar4 + 0x50) = 0;
          if (iVar11 != 0) {
            (**(code **)(iVar11 + 4))(*(undefined4 *)(iVar4 + 0x54));
          }
          *param_1 = '\x03';
          return;
        }
        param_1[0] = '\x01';
        param_1[1] = '\x01';
        param_1[4] = '\x03';
        param_1[5] = '\0';
        param_1[6] = '\0';
        param_1[7] = '\0';
        *(undefined ***)(param_1 + 8) = &PTR_FUN_01ceb2a4;
        param_1[0xc] = '\x01';
        param_1[0xd] = '\0';
        param_1[0xe] = '\0';
        param_1[0xf] = '\0';
        param_1[0x10] = '\0';
        param_1[0x11] = '\0';
        param_1[0x12] = '\0';
        param_1[0x13] = '\0';
        param_1[0x14] = '\0';
        param_1[0x15] = '\0';
        param_1[0x16] = '\0';
        param_1[0x17] = '\0';
        goto LAB_0135ddd8;
      }
      if (((DAT_01d50f88 == 0) &&
          ((DAT_01d4d1c0 - 1 < 2 ||
           ((DAT_01d4d1c0 != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d1b8), cVar3 != '\0')))))) &&
         (iVar4 = FUN_01aaa278(DAT_01d4d1b8), iVar4 != 0)) {
        piVar14 = (int *)(DAT_01d4d1b8 + 0x1c);
        if (*(code **)(DAT_01d4d1b8 + 0x20) == (code *)0x0) {
LAB_0135ebe8:
          puVar9 = &DAT_01ce7b84;
LAB_0135ebbc:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,puVar9);
        }
        local_c0 = *(undefined4 ******)(DAT_01d4d1b8 + 0x24);
        local_bc = *(code **)(DAT_01d4d1b8 + 0x28);
        local_b8 = (undefined4 ******)0x0;
        local_c8 = (undefined4 ******)*piVar14;
        local_c4 = *(code **)(DAT_01d4d1b8 + 0x20);
        iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                             iVar11);
        local_124 = &local_40;
        local_40 = (undefined4 *******)(iVar4 + 0xd4);
        local_118 = &local_128;
        local_30 = &local_11c;
        local_2c = (undefined4 *******)&DAT_00000001;
        local_3c = (undefined4 *******)FUN_00b1c384;
        local_128 = (undefined4 *******)&DAT_005a82bf;
        local_114 = (undefined4 *******)&DAT_01d2ea4c;
        local_11c = &local_c8;
        local_28 = piVar14;
        FUN_0135ee2c(&local_30);
      }
      else {
        iVar4 = DAT_01d4d1b8;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_d0 = *(undefined4 *)(DAT_01d4d1b8 + 0x14);
          local_cc = *(undefined4 *)(DAT_01d4d1b8 + 0x18);
          local_d4 = 5;
          DataMemoryBarrier(0xb);
          puVar13 = DAT_01d4edc8;
          pcVar2 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar13 = &DAT_01cfc5e0;
            pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar11 = (*(code *)puVar13[3])(pcVar2,&local_d4);
          if (iVar11 != 0) {
            piVar14 = (int *)(DAT_01d4d1b8 + 0x1c);
            if (*(code **)(DAT_01d4d1b8 + 0x20) == (code *)0x0) goto LAB_0135ebe8;
            local_c0 = *(undefined4 ******)(DAT_01d4d1b8 + 0x24);
            local_bc = *(code **)(DAT_01d4d1b8 + 0x28);
            local_b8 = (undefined4 ******)0x0;
            local_c8 = (undefined4 ******)*piVar14;
            local_c4 = *(code **)(DAT_01d4d1b8 + 0x20);
            iVar11 = FUN_01367c40(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                                  param_4[1],param_4[2]);
            local_124 = &local_40;
            local_40 = (undefined4 *******)(iVar11 + 0xd4);
            local_118 = &local_128;
            local_30 = &local_11c;
            local_2c = (undefined4 *******)&DAT_00000001;
            local_3c = (undefined4 *******)FUN_00b1c384;
            local_128 = (undefined4 *******)&DAT_005a82bf;
            local_114 = (undefined4 *******)&DAT_01d2ea4c;
            local_11c = &local_c8;
            local_28 = piVar14;
            FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_d4,&local_30);
          }
        }
      }
      local_c8 = (undefined4 ******)0x0;
      FUN_01354634(param_2,pppppuVar16,&local_c8);
      if (local_c8 != (undefined4 ******)0x0) {
        (*(code *)local_c8[3])(local_c4);
      }
      *param_1 = '\x03';
      goto LAB_0135ddd8;
    }
    uVar6 = param_3[2];
    if (*piVar14 == 1) {
      if (uVar6 == 0) goto LAB_0135df94;
    }
    else {
      uVar8 = piVar14[2];
      uVar10 = piVar14[3];
      if (uVar10 != 0 || uVar10 < (uVar6 <= uVar8)) {
        piVar14[2] = uVar8 - uVar6;
        piVar14[3] = uVar10 - (uVar8 < uVar6);
        goto LAB_0135df94;
      }
    }
    if (((DAT_01d50f88 < 2) &&
        ((DAT_01d4d19c - 1 < 2 ||
         ((DAT_01d4d19c != 0 && (cVar3 = FUN_01aaafa8(&DAT_01d4d194), cVar3 != '\0')))))) &&
       (iVar4 = FUN_01aaa278(DAT_01d4d194), iVar4 != 0)) {
      piVar14 = (int *)(DAT_01d4d194 + 0x1c);
      if (*(code **)(DAT_01d4d194 + 0x20) == (code *)0x0) {
LAB_0135ebdc:
        puVar9 = &DAT_01ce7bb4;
        goto LAB_0135ebbc;
      }
      local_c0 = *(undefined4 ******)(DAT_01d4d194 + 0x24);
      local_bc = *(code **)(DAT_01d4d194 + 0x28);
      local_b8 = (undefined4 ******)0x0;
      local_c8 = (undefined4 ******)*piVar14;
      local_c4 = *(code **)(DAT_01d4d194 + 0x20);
      iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                           iVar11);
      local_124 = &local_11c;
      local_11c = (undefined4 *******)(iVar4 + 0xd4);
      local_2c = &local_128;
      local_40 = &local_30;
      local_128 = (undefined4 *******)&DAT_00599b57;
      local_114 = &local_150;
      local_150 = (undefined4 *******)param_3[2];
      local_3c = (undefined4 *******)&DAT_00000001;
      local_28 = (int *)&DAT_01d2ea4c;
      local_110 = &LAB_01a6a304;
      local_118 = (undefined4 *******)FUN_00b1c384;
      local_38 = piVar14;
      local_30 = &local_c8;
      FUN_0135f114(&local_40);
    }
    else {
      iVar4 = DAT_01d4d194;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_f4 = *(undefined4 *)(DAT_01d4d194 + 0x14);
        local_f0 = *(undefined4 *)(DAT_01d4d194 + 0x18);
        local_f8 = 4;
        DataMemoryBarrier(0xb);
        puVar13 = DAT_01d4edc8;
        pcVar2 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          puVar13 = &DAT_01cfc5e0;
          pcVar2 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar11 = (*(code *)puVar13[3])(pcVar2,&local_f8);
        if (iVar11 == 0) {
          iVar12 = *param_4;
          iVar15 = param_4[1];
          iVar11 = param_4[2];
        }
        else {
          piVar14 = (int *)(DAT_01d4d194 + 0x1c);
          if (*(code **)(DAT_01d4d194 + 0x20) == (code *)0x0) goto LAB_0135ebdc;
          local_c0 = *(undefined4 ******)(DAT_01d4d194 + 0x24);
          local_bc = *(code **)(DAT_01d4d194 + 0x28);
          local_b8 = (undefined4 ******)0x0;
          iVar12 = *param_4;
          iVar15 = param_4[1];
          iVar11 = param_4[2];
          local_c8 = (undefined4 ******)*piVar14;
          local_c4 = *(code **)(DAT_01d4d194 + 0x20);
          iVar5 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,
                               iVar11);
          local_124 = &local_11c;
          local_11c = (undefined4 *******)(iVar5 + 0xd4);
          local_2c = &local_128;
          local_40 = &local_30;
          local_150 = (undefined4 *******)param_3[2];
          local_3c = (undefined4 *******)&DAT_00000001;
          local_114 = &local_150;
          local_128 = (undefined4 *******)&DAT_00599b57;
          local_28 = (int *)&DAT_01d2ea4c;
          local_110 = &LAB_01a6a304;
          local_118 = (undefined4 *******)FUN_00b1c384;
          local_38 = piVar14;
          local_30 = &local_c8;
          FUN_01aaa328(iVar4,pcVar2,puVar13[4],&local_f8,&local_40);
        }
      }
    }
    iVar4 = FUN_01367c40(*(undefined4 *)(iVar12 + 0x34),*(undefined4 *)(iVar12 + 0x38),iVar15,iVar11
                        );
LAB_0135ead0:
    uVar7 = 1;
  }
  *(undefined4 *)(param_1 + 4) = *(undefined4 *)(iVar4 + 0xd4);
  *(undefined4 *)(param_1 + 8) = uVar7;
  param_1[0] = '\0';
  param_1[1] = '\x01';
LAB_0135ddd8:
  (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
  return;
}


// FUN_01359a84 @ 01359a84 size=3908 calls_out=9 calls_in=3
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01359a84(undefined2 *param_1,int param_2,int param_3,int param_4)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 ******ppppppuVar6;
  int iVar7;
  int iVar8;
  char *pcVar9;
  int iVar10;
  int extraout_r1;
  int extraout_r1_00;
  undefined4 uVar11;
  undefined4 *****pppppuVar12;
  undefined4 ****ppppuVar13;
  undefined4 *puVar14;
  undefined4 uVar15;
  undefined4 ****ppppuVar16;
  undefined4 uVar17;
  int *piVar18;
  uint uVar19;
  undefined4 uVar20;
  uint uVar21;
  uint uVar22;
  bool bVar23;
  undefined8 uVar24;
  undefined4 ****local_d0;
  undefined4 ****local_cc;
  undefined4 ******local_c8;
  undefined4 ******local_c4;
  int *local_c0;
  undefined4 *****local_bc;
  undefined4 *****local_b8;
  undefined4 ******local_b4;
  undefined4 ****local_b0;
  undefined4 ****local_ac;
  undefined4 local_a8;
  undefined4 local_a4;
  undefined4 *****local_a0;
  undefined4 ******local_9c;
  undefined4 *****local_98;
  undefined4 *local_94;
  undefined4 *****local_90;
  undefined4 *****local_8c;
  undefined4 ******local_88;
  undefined4 ******local_84;
  int *local_80;
  undefined4 ******local_7c;
  undefined4 ******local_78;
  int *local_74;
  undefined4 *****local_70;
  undefined4 ******local_6c;
  undefined4 ****local_68;
  code *local_64;
  undefined4 local_60;
  undefined4 *****local_58;
  code *local_54;
  int *local_50;
  undefined *local_4c;
  int local_48;
  undefined *local_44;
  undefined4 ******local_40;
  undefined4 ******local_3c;
  int *local_38;
  undefined4 ******local_30;
  undefined4 ******local_2c;
  int *local_28;
  
  if (*(int *)(param_3 + 0x30) == 1) {
    *(bool *)(param_2 + 0x89) = *(int *)(param_3 + 0x34) != 0;
  }
  if (*(int *)(param_3 + 0x18) == 0) goto LAB_0135a8cc;
  ppppuVar16 = *(undefined4 *****)(param_3 + 0x1c);
  ppppuVar13 = *(undefined4 *****)(param_2 + 0x78);
  *(undefined4 *****)(param_2 + 0x78) = ppppuVar16;
  local_d0 = ppppuVar16;
  local_cc = ppppuVar13;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d124 - 1 < 2 ||
       ((DAT_01d4d124 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d11c), cVar2 != '\0')))) &&
      (iVar10 = FUN_01aaa278(DAT_01d4d11c), iVar10 != 0)))) {
    local_54 = *(code **)(DAT_01d4d11c + 0x20);
    if (local_54 == (code *)0x0) {
LAB_0135a968:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce76c4);
    }
    local_50 = *(int **)(DAT_01d4d11c + 0x24);
    local_78 = &local_9c;
    local_4c = *(undefined **)(DAT_01d4d11c + 0x28);
    local_80 = (int *)(DAT_01d4d11c + 0x1c);
    local_58 = (undefined4 *****)*local_80;
    local_84 = (undefined4 ******)&DAT_00000001;
    local_98 = &local_70;
    local_7c = &local_58;
    ppppppuVar6 = &local_88;
    local_68 = &local_cc;
    local_88 = &local_7c;
    local_70 = &local_d0;
    local_48 = 0;
    local_74 = (int *)&DAT_01d2ea4c;
    local_9c = (undefined4 ******)&DAT_005b6826;
    local_64 = FUN_012fd02c;
    local_6c = (undefined4 ******)FUN_012fd02c;
    FUN_01aaaecc(DAT_01d4d11c,ppppppuVar6);
    iVar10 = DAT_01d4d11c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_3c = *(undefined4 *******)(DAT_01d4d11c + 0x14);
      local_38 = *(int **)(DAT_01d4d11c + 0x18);
      local_40 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar9,&local_40);
      if (iVar3 != 0) {
        local_30 = local_40;
        local_2c = local_3c;
        local_28 = local_38;
        uVar11 = puVar14[4];
        goto LAB_01359c44;
      }
    }
  }
  else {
    iVar10 = DAT_01d4d11c;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_c4 = *(undefined4 *******)(DAT_01d4d11c + 0x14);
      local_c0 = *(int **)(DAT_01d4d11c + 0x18);
      local_c8 = (undefined4 ******)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar9,&local_c8);
      if (iVar3 != 0) {
        local_74 = (int *)(DAT_01d4d11c + 0x1c);
        local_58 = (undefined4 *****)*local_74;
        local_54 = *(code **)(DAT_01d4d11c + 0x20);
        if (local_54 == (code *)0x0) goto LAB_0135a968;
        local_40 = &local_58;
        local_7c = &local_40;
        local_50 = *(int **)(DAT_01d4d11c + 0x24);
        local_48 = 0;
        local_4c = *(undefined **)(DAT_01d4d11c + 0x28);
        local_3c = &local_88;
        local_78 = (undefined4 ******)&DAT_00000001;
        local_38 = (int *)&DAT_01d2ea4c;
        local_84 = &local_70;
        local_88 = (undefined4 ******)&DAT_005b6826;
        local_68 = &local_cc;
        local_70 = &local_d0;
        local_64 = FUN_012fd02c;
        local_6c = (undefined4 ******)FUN_012fd02c;
        local_30 = local_c8;
        local_2c = local_c4;
        local_28 = local_c0;
        ppppppuVar6 = &local_7c;
        uVar11 = puVar14[4];
LAB_01359c44:
        FUN_01aaa328(iVar10,pcVar9,uVar11,&local_30,ppppppuVar6);
      }
    }
  }
  bVar23 = local_d0 < local_cc;
  bVar1 = !bVar23 && local_d0 != local_cc;
  if (bVar1 == bVar23) goto LAB_0135a8cc;
  if ((char)(bVar1 - bVar23) != '\x01') {
    local_bc = (undefined4 *****)((int)ppppuVar13 - (int)ppppuVar16);
    if (((DAT_01d50f88 == 0) &&
        ((DAT_01d4d130 - 1 < 2 ||
         ((DAT_01d4d130 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d128), cVar2 != '\0')))))) &&
       (iVar10 = FUN_01aaa278(DAT_01d4d128), iVar10 != 0)) {
      if (*(code **)(DAT_01d4d128 + 0x20) == (code *)0x0) {
LAB_0135a9b0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce76d4);
      }
      local_2c = &local_88;
      local_50 = *(int **)(DAT_01d4d128 + 0x24);
      local_4c = *(undefined **)(DAT_01d4d128 + 0x28);
      local_38 = (int *)(DAT_01d4d128 + 0x1c);
      local_58 = (undefined4 *****)*local_38;
      local_30 = &local_58;
      local_40 = &local_30;
      local_48 = 0;
      local_3c = (undefined4 ******)&DAT_00000001;
      local_84 = &local_7c;
      local_7c = &local_bc;
      local_28 = (int *)&DAT_01d2ea4c;
      local_88 = (undefined4 ******)&DAT_00595103;
      local_78 = (undefined4 ******)FUN_012fd02c;
      local_54 = *(code **)(DAT_01d4d128 + 0x20);
      FUN_01aaaecc(DAT_01d4d128,&local_40);
      iVar10 = DAT_01d4d128;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_6c = *(undefined4 *******)(DAT_01d4d128 + 0x14);
        local_68 = *(undefined4 *****)(DAT_01d4d128 + 0x18);
        local_70 = (undefined4 *****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar14[3])(pcVar9,&local_70);
        if (iVar3 != 0) {
          uVar11 = puVar14[4];
          goto LAB_0135a0e0;
        }
      }
    }
    else {
      iVar10 = DAT_01d4d128;
      if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
        local_b4 = *(undefined4 *******)(DAT_01d4d128 + 0x14);
        local_b0 = *(undefined4 *****)(DAT_01d4d128 + 0x18);
        local_b8 = (undefined4 *****)&DAT_00000005;
        DataMemoryBarrier(0xb);
        puVar14 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar14 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar14[3])(pcVar9,&local_b8);
        if (iVar3 != 0) {
          if (*(code **)(DAT_01d4d128 + 0x20) == (code *)0x0) goto LAB_0135a9b0;
          local_2c = &local_88;
          local_50 = *(int **)(DAT_01d4d128 + 0x24);
          local_4c = *(undefined **)(DAT_01d4d128 + 0x28);
          local_30 = &local_58;
          local_40 = &local_30;
          local_48 = 0;
          local_3c = (undefined4 ******)&DAT_00000001;
          local_84 = &local_7c;
          local_7c = &local_bc;
          local_28 = (int *)&DAT_01d2ea4c;
          local_88 = (undefined4 ******)&DAT_00595103;
          local_78 = (undefined4 ******)FUN_012fd02c;
          local_70 = local_b8;
          local_6c = local_b4;
          local_68 = local_b0;
          uVar11 = puVar14[4];
          local_58 = *(undefined4 ******)(DAT_01d4d128 + 0x1c);
          local_54 = *(code **)(DAT_01d4d128 + 0x20);
          local_38 = (int *)(DAT_01d4d128 + 0x1c);
LAB_0135a0e0:
          FUN_01aaa328(iVar10,pcVar9,uVar11,&local_70,&local_40);
        }
      }
    }
    pppppuVar12 = local_bc;
    uVar22 = *(uint *)(param_4 + 0x28);
    if (uVar22 != 0) {
      iVar10 = *(int *)(param_4 + 0x14);
      uVar4 = 0;
      uVar21 = *(uint *)(param_4 + 0x18);
      uVar11 = *(undefined4 *)(param_4 + 0x34);
      uVar20 = *(undefined4 *)(param_4 + 0x38);
      uVar19 = uVar22;
      do {
        if (uVar21 <= uVar4) goto LAB_0135a95c;
        iVar3 = iVar10 + uVar4 * 0xc;
        uVar24 = FUN_01367cb8(uVar11,uVar20,*(undefined4 *)(iVar3 + 8),*(undefined4 *)(iVar3 + 4));
        iVar3 = (int)((ulonglong)uVar24 >> 0x20);
        iVar5 = (int)uVar24;
        local_a0 = pppppuVar12;
        piVar18 = (int *)(iVar5 + 0x48);
        if (DAT_01d50f88 == 0) {
          if (1 < DAT_01d4d6e8 - 1) {
            iVar3 = 0;
            if (DAT_01d4d6e8 != 0) {
              cVar2 = FUN_01aaafa8(&DAT_01d4d6e0);
              iVar3 = 0;
              if (cVar2 != '\0') goto LAB_0135a6e0;
            }
            goto LAB_0135a558;
          }
LAB_0135a6e0:
          uVar24 = FUN_01aaa278(DAT_01d4d6e0);
          iVar3 = (int)((ulonglong)uVar24 >> 0x20);
          if ((int)uVar24 == 0) goto LAB_0135a558;
          if (*(undefined4 *******)(DAT_01d4d6e0 + 0x20) == (undefined4 ******)0x0)
          goto LAB_0135a980;
          local_78 = &local_90;
          local_7c = &local_70;
          local_9c = &local_7c;
          local_94 = (undefined4 *)(DAT_01d4d6e0 + 0x1c);
          local_70 = (undefined4 *****)*local_94;
          local_68 = *(undefined4 *****)(DAT_01d4d6e0 + 0x24);
          local_64 = *(code **)(DAT_01d4d6e0 + 0x28);
          local_60 = 0;
          local_98 = (undefined4 *****)&DAT_00000001;
          local_74 = (int *)&DAT_01d2ea4c;
          local_8c = &local_58;
          local_90 = (undefined4 *****)&DAT_005a8336;
          local_48 = iVar5 + 0x4c;
          local_44 = &DAT_01380cd0;
          local_4c = &DAT_01380cd0;
          local_54 = FUN_012fd02c;
          local_58 = &local_a0;
          local_6c = *(undefined4 *******)(DAT_01d4d6e0 + 0x20);
          local_50 = piVar18;
          FUN_01aaaecc(DAT_01d4d6e0,&local_9c);
          iVar7 = DAT_01d4d6e0;
          iVar3 = extraout_r1_00;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_3c = *(undefined4 *******)(DAT_01d4d6e0 + 0x14);
            local_38 = *(int **)(DAT_01d4d6e0 + 0x18);
            local_40 = (undefined4 ******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar14 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar14 = &DAT_01cfc5e0;
            }
            pcVar9 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            uVar24 = (*(code *)puVar14[3])(pcVar9,&local_40);
            iVar3 = (int)((ulonglong)uVar24 >> 0x20);
            if ((int)uVar24 == 0) goto LAB_0135a864;
            local_30 = local_40;
            local_2c = local_3c;
            local_28 = local_38;
            ppppppuVar6 = &local_9c;
            goto LAB_0135a6b0;
          }
        }
        else {
LAB_0135a558:
          iVar7 = DAT_01d4d6e0;
          if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
            local_84 = *(undefined4 *******)(DAT_01d4d6e0 + 0x14);
            local_80 = *(int **)(DAT_01d4d6e0 + 0x18);
            local_88 = (undefined4 ******)&DAT_00000005;
            DataMemoryBarrier(0xb);
            puVar14 = DAT_01d4edc8;
            if (DAT_01d51174 != 2) {
              puVar14 = &DAT_01cfc5e0;
            }
            pcVar9 = DAT_01d4edc4;
            if (DAT_01d51174 != 2) {
              pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
            }
            uVar24 = (*(code *)puVar14[3])(pcVar9,&local_88);
            iVar3 = (int)((ulonglong)uVar24 >> 0x20);
            if ((int)uVar24 != 0) {
              if (*(undefined4 *******)(DAT_01d4d6e0 + 0x20) == (undefined4 ******)0x0) {
LAB_0135a980:
                    /* WARNING: Subroutine does not return */
                FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea7fc);
              }
              local_3c = &local_9c;
              local_64 = *(code **)(DAT_01d4d6e0 + 0x28);
              local_40 = &local_70;
              local_7c = &local_40;
              local_68 = *(undefined4 *****)(DAT_01d4d6e0 + 0x24);
              local_60 = 0;
              local_78 = (undefined4 ******)&DAT_00000001;
              local_38 = (int *)&DAT_01d2ea4c;
              local_98 = &local_58;
              local_9c = (undefined4 ******)&DAT_005a8336;
              local_48 = iVar5 + 0x4c;
              local_44 = &DAT_01380cd0;
              local_4c = &DAT_01380cd0;
              local_54 = FUN_012fd02c;
              local_58 = &local_a0;
              local_30 = local_88;
              local_2c = local_84;
              local_28 = local_80;
              ppppppuVar6 = &local_7c;
              local_74 = (int *)(DAT_01d4d6e0 + 0x1c);
              local_70 = *(undefined4 ******)(DAT_01d4d6e0 + 0x1c);
              local_6c = *(undefined4 *******)(DAT_01d4d6e0 + 0x20);
              local_50 = piVar18;
LAB_0135a6b0:
              FUN_01aaa328(iVar7,pcVar9,puVar14[4],&local_30,ppppppuVar6);
              iVar3 = extraout_r1;
            }
          }
        }
LAB_0135a864:
        iVar7 = *piVar18;
        iVar8 = iVar7 - (int)pppppuVar12;
        if (!SBORROW4(iVar7,(int)pppppuVar12)) {
          iVar3 = *(int *)(iVar5 + 0x4c);
          *(int *)(iVar5 + 0x48) = iVar8;
          iVar8 = iVar3 - (int)pppppuVar12;
        }
        if (SBORROW4(iVar7,(int)pppppuVar12) || SBORROW4(iVar3,(int)pppppuVar12)) {
          *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
          *(undefined4 *)(param_1 + 2) = 3;
          *(undefined4 *)(param_1 + 6) = 1;
          *(undefined4 *)(param_1 + 8) = 0;
          *(undefined4 *)(param_1 + 10) = 0;
          *param_1 = 0x101;
          return;
        }
        *(int *)(iVar5 + 0x4c) = iVar8;
        if (uVar22 >= uVar19) {
          uVar4 = uVar4 + 1;
        }
        uVar19 = uVar19 - (uVar22 < uVar19);
      } while (uVar4 < uVar19);
    }
    goto LAB_0135a8cc;
  }
  local_9c = (undefined4 ******)((int)ppppuVar16 - (int)ppppuVar13);
  if (((DAT_01d50f88 == 0) &&
      ((DAT_01d4d13c - 1 < 2 ||
       ((DAT_01d4d13c != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d134), cVar2 != '\0')))))) &&
     (iVar10 = FUN_01aaa278(DAT_01d4d134), iVar10 != 0)) {
    if (*(code **)(DAT_01d4d134 + 0x20) == (code *)0x0) {
LAB_0135a998:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce76e4);
    }
    local_2c = &local_88;
    local_50 = *(int **)(DAT_01d4d134 + 0x24);
    local_4c = *(undefined **)(DAT_01d4d134 + 0x28);
    local_38 = (int *)(DAT_01d4d134 + 0x1c);
    local_58 = (undefined4 *****)*local_38;
    local_30 = &local_58;
    local_40 = &local_30;
    local_48 = 0;
    ppppppuVar6 = &local_40;
    local_3c = (undefined4 ******)&DAT_00000001;
    local_84 = &local_7c;
    local_7c = &local_9c;
    local_28 = (int *)&DAT_01d2ea4c;
    local_88 = (undefined4 ******)&DAT_0057de70;
    local_78 = (undefined4 ******)FUN_012fd02c;
    local_54 = *(code **)(DAT_01d4d134 + 0x20);
    FUN_01aaaecc(DAT_01d4d134,ppppppuVar6);
    iVar10 = DAT_01d4d134;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_6c = *(undefined4 *******)(DAT_01d4d134 + 0x14);
      local_68 = *(undefined4 *****)(DAT_01d4d134 + 0x18);
      local_70 = (undefined4 *****)&DAT_00000005;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar9,&local_70);
      if (iVar3 != 0) {
        uVar11 = puVar14[4];
        pppppuVar12 = &local_70;
        goto LAB_01359f74;
      }
    }
  }
  else {
    iVar10 = DAT_01d4d134;
    if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
      local_a8 = *(undefined4 *)(DAT_01d4d134 + 0x14);
      local_a4 = *(undefined4 *)(DAT_01d4d134 + 0x18);
      local_ac = (undefined4 ****)0x5;
      DataMemoryBarrier(0xb);
      puVar14 = DAT_01d4edc8;
      if (DAT_01d51174 != 2) {
        puVar14 = &DAT_01cfc5e0;
      }
      pcVar9 = DAT_01d4edc4;
      if (DAT_01d51174 != 2) {
        pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
      }
      iVar3 = (*(code *)puVar14[3])(pcVar9,&local_ac);
      if (iVar3 != 0) {
        if (*(code **)(DAT_01d4d134 + 0x20) == (code *)0x0) goto LAB_0135a998;
        local_6c = &local_7c;
        local_50 = *(int **)(DAT_01d4d134 + 0x24);
        local_4c = *(undefined **)(DAT_01d4d134 + 0x28);
        local_70 = &local_58;
        local_30 = &local_70;
        local_48 = 0;
        local_2c = (undefined4 ******)&DAT_00000001;
        local_78 = &local_40;
        local_68 = (undefined4 ****)&DAT_01d2ea4c;
        pppppuVar12 = &local_ac;
        local_40 = &local_9c;
        ppppppuVar6 = &local_30;
        local_7c = (undefined4 ******)&DAT_0057de70;
        local_3c = (undefined4 ******)FUN_012fd02c;
        uVar11 = puVar14[4];
        local_58 = *(undefined4 ******)(DAT_01d4d134 + 0x1c);
        local_54 = *(code **)(DAT_01d4d134 + 0x20);
        local_28 = (int *)(DAT_01d4d134 + 0x1c);
LAB_01359f74:
        FUN_01aaa328(iVar10,pcVar9,uVar11,pppppuVar12,ppppppuVar6);
      }
    }
  }
  ppppppuVar6 = local_9c;
  uVar22 = *(uint *)(param_4 + 0x28);
  if (uVar22 != 0) {
    iVar10 = *(int *)(param_4 + 0x14);
    uVar19 = 0;
    uVar4 = *(uint *)(param_4 + 0x18);
    uVar11 = *(undefined4 *)(param_4 + 0x34);
    uVar20 = *(undefined4 *)(param_4 + 0x38);
    uVar21 = uVar22;
    do {
      if (uVar4 <= uVar19) {
LAB_0135a95c:
                    /* WARNING: Subroutine does not return */
        FUN_012fb0cc(&DAT_01d2ddcc);
      }
      iVar3 = iVar10 + uVar19 * 0xc;
      uVar15 = *(undefined4 *)(iVar3 + 4);
      uVar17 = *(undefined4 *)(iVar3 + 8);
      iVar3 = FUN_01367cb8(uVar11,uVar20,uVar17,uVar15);
      iVar3 = FUN_013808d0(iVar3 + 0x48,ppppppuVar6);
      if (iVar3 != 0) {
LAB_0135a32c:
        *param_1 = 0x101;
        *(undefined4 *)(param_1 + 2) = 3;
        *(undefined ***)(param_1 + 4) = &PTR_FUN_01ceb2a4;
        *(undefined4 *)(param_1 + 6) = 1;
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 10) = 0;
        return;
      }
      iVar3 = FUN_01367cb8(uVar11,uVar20,uVar17,uVar15);
      if (SCARRY4(*(int *)(iVar3 + 0x4c),(int)ppppppuVar6)) goto LAB_0135a32c;
      *(undefined **)(iVar3 + 0x4c) = (undefined *)(*(int *)(iVar3 + 0x4c) + (int)ppppppuVar6);
      if (uVar22 >= uVar21) {
        uVar19 = uVar19 + 1;
      }
      uVar21 = uVar21 - (uVar22 < uVar21);
    } while (uVar19 < uVar21);
  }
LAB_0135a8cc:
  *(undefined1 *)param_1 = 3;
  return;
}


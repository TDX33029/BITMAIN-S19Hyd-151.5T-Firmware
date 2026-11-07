// FUN_01a71cb4 @ 01a71cb4 size=1116 calls_out=13 calls_in=23
// strings: protocol error: received message with compressed-flag but no grpc-encoding was specified | tonic::codec::decode/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/codec/decode.rs:260 | InvalidParamSegmentInvalidParamInvalidCatchAll | unexpected compression flagevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:748 | InvalidParamSegmentInvalidParamInvalidCatchAll | unexpected compression flagevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:748

void FUN_01a71cb4(undefined4 *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  uint *****pppppuVar6;
  uint *puVar7;
  uint ****ppppuVar8;
  uint uVar9;
  char *pcVar10;
  undefined4 *puVar11;
  char local_79;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  uint *****local_6c;
  undefined4 local_68;
  undefined4 *puStack_64;
  undefined4 *****local_60;
  code *local_5c;
  uint *****local_58;
  code *local_54;
  undefined4 local_50;
  char *local_4c;
  undefined4 local_48;
  uint ****appppuStack_44 [3];
  uint ****local_38;
  uint ****local_34;
  undefined4 *****local_30;
  char **local_2c;
  undefined1 *local_28;
  
  puVar7 = (uint *)(param_2 + 0x40);
  if ((*puVar7 & 7) == 4) {
    if (*(uint *)(param_2 + 0xb4) < 5) goto LAB_01a71d14;
    puVar11 = (undefined4 *)(param_2 + 0xb0);
    cVar1 = *(char *)*puVar11;
    FUN_01283ef4(puVar11,1);
    if (cVar1 != '\0') {
      if (cVar1 == '\x01') {
        FUN_01a71aac(param_1,0xd,
                     "protocol error: received message with compressed-flag but no grpc-encoding was specified"
                     ,0x58);
        return;
      }
      local_79 = cVar1;
      if ((DAT_01d50f88 == 0) &&
         (((DAT_01d5096c - 1 < 2 ||
           ((DAT_01d5096c != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d50964), cVar1 != '\0')))) &&
          (iVar3 = FUN_01aaa278(DAT_01d50964), iVar3 != 0)))) {
        puStack_64 = (undefined4 *)(DAT_01d50964 + 0x1c);
        local_60 = (undefined4 *****)*puStack_64;
        local_5c = *(code **)(DAT_01d50964 + 0x20);
        if (local_5c == (code *)0x0) goto LAB_01a720f8;
        local_2c = &local_4c;
        local_58 = *(uint ******)(DAT_01d50964 + 0x24);
        local_54 = *(code **)(DAT_01d50964 + 0x28);
        local_30 = &local_60;
        local_6c = (uint *****)&local_30;
        local_50 = 0;
        local_68 = 1;
        local_48 = 0x37;
        local_28 = &DAT_01d2ea4c;
        local_4c = 
        "unexpected compression flagevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:748"
        ;
        FUN_01a72198(&local_6c);
      }
      else {
        iVar3 = DAT_01d50964;
        if ((DAT_01d51ae9 == '\0') && (4 < DAT_01d51b00)) {
          local_74 = *(undefined4 *)(DAT_01d50964 + 0x14);
          local_70 = *(undefined4 *)(DAT_01d50964 + 0x18);
          local_78 = 5;
          DataMemoryBarrier(0xb);
          puVar11 = DAT_01d4edc8;
          if (DAT_01d51174 != 2) {
            puVar11 = &DAT_01cfc5e0;
          }
          pcVar10 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            pcVar10 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar2 = (*(code *)puVar11[3])(pcVar10,&local_78);
          if (iVar2 != 0) {
            puStack_64 = (undefined4 *)(DAT_01d50964 + 0x1c);
            local_60 = (undefined4 *****)*puStack_64;
            local_5c = *(code **)(DAT_01d50964 + 0x20);
            if (local_5c == (code *)0x0) goto LAB_01a720f8;
            local_2c = &local_4c;
            local_58 = *(uint ******)(DAT_01d50964 + 0x24);
            local_54 = *(code **)(DAT_01d50964 + 0x28);
            local_30 = &local_60;
            local_6c = (uint *****)&local_30;
            local_50 = 0;
            local_68 = 1;
            local_48 = 0x37;
            local_28 = &DAT_01d2ea4c;
            local_4c = 
            "unexpected compression flagevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs:748"
            ;
            FUN_01aaa328(iVar3,pcVar10,puVar11[4],&local_78,&local_6c);
          }
        }
      }
      if (*(short *)(param_2 + 0xd8) == 1) {
        local_30 = (undefined4 *****)CONCAT22(local_30._2_2_,*(undefined2 *)(param_2 + 0xda));
        local_58 = (uint *****)&local_30;
        puVar4 = &DAT_0057b266;
        local_54 = FUN_01414064;
      }
      else {
        puVar4 = &DAT_005917f7;
      }
      local_5c = FUN_012fcc70;
      local_60 = (undefined4 *****)&local_79;
      FUN_00664898(appppuStack_44,puVar4,&local_60);
      pppppuVar6 = appppuStack_44;
      uVar5 = 0xd;
LAB_01a720c8:
      FUN_01a70fd4(param_1,uVar5,pppppuVar6);
      return;
    }
    if (*(uint *)(param_2 + 0xb4) < 4) {
      FUN_01a704bc();
LAB_01a720f8:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d348);
    }
    uVar9 = **(uint **)(param_2 + 0xb0);
    FUN_01283ef4(puVar11,4);
    local_34 = *(uint *****)(param_2 + 0xac);
    ppppuVar8 = (uint ****)
                (uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
                uVar9 >> 0x18);
    if (*(int *)(param_2 + 0xa8) == 0) {
      local_34 = (uint ****)0x400000;
    }
    local_38 = ppppuVar8;
    if (local_34 < ppppuVar8) {
      local_58 = &local_34;
      pppppuVar6 = (uint *****)&local_30;
      local_54 = FUN_012fd02c;
      local_5c = FUN_012fd02c;
      local_60 = &local_38;
      FUN_00664898(pppppuVar6,&DAT_0058904b,&local_60);
      uVar5 = 0xb;
      goto LAB_01a720c8;
    }
    if ((uint ****)(*(int *)(param_2 + 0xb8) - *(int *)(param_2 + 0xb4)) < ppppuVar8) {
      FUN_01283c9c(puVar11,ppppuVar8);
    }
    uVar9 = *puVar7;
    if ((uVar9 != 3 || *(int *)(param_2 + 0x44) != 0) &&
       ((uint)-*(int *)(param_2 + 0x44) < (uint)(uVar9 < 4) || (uVar9 & 6) != 4)) {
      FUN_01a70c28(puVar7);
    }
    *(uint *****)(param_2 + 0x48) = ppppuVar8;
    *puVar7 = 5;
    *(undefined4 *)(param_2 + 0x44) = 0;
  }
  else {
    if (*puVar7 != 5) goto LAB_01a71d14;
    ppppuVar8 = *(uint *****)(param_2 + 0x48);
  }
  if (ppppuVar8 <= *(uint *****)(param_2 + 0xb4)) {
    *param_1 = 3;
    param_1[1] = 0;
    param_1[2] = param_2 + 0xb0;
    param_1[3] = ppppuVar8;
    return;
  }
LAB_01a71d14:
  *param_1 = 3;
  param_1[1] = 0;
  param_1[2] = 0;
  return;
}


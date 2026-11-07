// FUN_013b88bc @ 013b88bc size=864 calls_out=6 calls_in=1
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

undefined8 FUN_013b88bc(int *param_1,uint param_2,uint param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ****ppppuVar6;
  uint uVar7;
  undefined4 *puVar8;
  undefined4 ****ppppuVar9;
  uint local_6c;
  undefined4 ***local_68;
  undefined4 local_64;
  undefined4 *local_60;
  undefined4 ***local_5c;
  undefined **local_58;
  undefined4 *local_54;
  undefined4 **local_50;
  int local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined *local_3c;
  uint **local_38;
  uint *local_34;
  code *local_30;
  undefined4 ***local_2c;
  undefined **local_28;
  undefined1 *local_24;
  
  if (((param_2 ^ param_3) & 1) == 0) {
    uVar7 = 0;
    if ((*param_1 == 0) && ((uint)param_1[1] <= param_3)) {
      local_6c = param_3;
      if ((DAT_01d50f88 < 2) &&
         (((DAT_01d4d8c8 - 1 < 2 ||
           ((DAT_01d4d8c8 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d8c0), cVar1 != '\0')))) &&
          (iVar2 = FUN_01aaa278(DAT_01d4d8c0), iVar2 != 0)))) {
        local_4c = *(int *)(DAT_01d4d8c0 + 0x20);
        if (local_4c == 0) {
LAB_013b8c04:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ceca14);
        }
        local_48 = *(undefined4 *)(DAT_01d4d8c0 + 0x24);
        local_44 = *(undefined4 *)(DAT_01d4d8c0 + 0x28);
        local_60 = (undefined4 *)(DAT_01d4d8c0 + 0x1c);
        local_50 = (undefined4 **)*local_60;
        local_58 = &local_3c;
        local_5c = &local_50;
        local_68 = &local_5c;
        local_40 = 0;
        local_38 = &local_34;
        uVar7 = 1;
        local_54 = (undefined4 *)&DAT_01d2ea4c;
        ppppuVar9 = &local_68;
        local_34 = &local_6c;
        local_64 = 1;
        local_3c = &DAT_005a7575;
        local_30 = FUN_00b1c384;
        FUN_01aaaecc(DAT_01d4d8c0,ppppuVar9);
        iVar2 = DAT_01d4d8c0;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_013b8bd8;
        local_28 = *(undefined ***)(DAT_01d4d8c0 + 0x14);
        local_24 = *(undefined1 **)(DAT_01d4d8c0 + 0x18);
        local_2c = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar8[3])(pcVar4,&local_2c);
        if (iVar3 == 0) goto LAB_013b8bd8;
        uVar5 = puVar8[4];
        ppppuVar6 = &local_2c;
      }
      else {
        iVar2 = DAT_01d4d8c0;
        uVar7 = 1;
        if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_013b8bd8;
        local_64 = *(undefined4 *)(DAT_01d4d8c0 + 0x14);
        local_60 = *(undefined4 **)(DAT_01d4d8c0 + 0x18);
        local_68 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar4 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar3 = (*(code *)puVar8[3])(pcVar4,&local_68);
        if (iVar3 == 0) goto LAB_013b8bd8;
        local_54 = (undefined4 *)(DAT_01d4d8c0 + 0x1c);
        local_50 = (undefined4 **)*local_54;
        local_4c = *(int *)(DAT_01d4d8c0 + 0x20);
        if (local_4c == 0) goto LAB_013b8c04;
        local_28 = &local_3c;
        local_48 = *(undefined4 *)(DAT_01d4d8c0 + 0x24);
        local_44 = *(undefined4 *)(DAT_01d4d8c0 + 0x28);
        local_2c = &local_50;
        local_5c = &local_2c;
        local_38 = &local_34;
        local_40 = 0;
        ppppuVar6 = &local_68;
        local_34 = &local_6c;
        ppppuVar9 = &local_5c;
        local_58 = (undefined **)&DAT_00000001;
        local_24 = &DAT_01d2ea4c;
        local_3c = &DAT_005a7575;
        local_30 = FUN_00b1c384;
        uVar5 = puVar8[4];
      }
      uVar7 = 1;
      FUN_01aaa328(iVar2,pcVar4,uVar5,ppppuVar6,ppppuVar9);
    }
  }
  else {
    uVar7 = (uint)((uint)param_1[0x2d] <= param_3) & ~param_1[0x2c];
  }
LAB_013b8bd8:
  return CONCAT44(1,uVar7);
}


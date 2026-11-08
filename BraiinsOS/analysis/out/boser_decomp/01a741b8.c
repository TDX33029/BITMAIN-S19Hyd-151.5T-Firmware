// FUN_01a741b8 @ 01a741b8 size=896 calls_out=10 calls_in=1
// strings: tonic::status/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | tonic::status/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/tonic-0.13.1/src/status.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01a741b8(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  undefined4 uVar5;
  undefined4 ******ppppppuVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 ******ppppppuVar11;
  undefined4 *****local_6c;
  undefined4 local_68;
  undefined4 *local_64;
  undefined4 *****local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 ****local_54;
  int local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined *local_40;
  undefined1 **local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  undefined4 *****local_30;
  undefined **local_2c;
  undefined1 *local_28;
  undefined1 uStack_21;
  
  if (*(char *)(param_2 + 4) != '\x02') {
    uVar5 = param_2[1];
    uVar7 = param_2[2];
    uVar9 = param_2[3];
    uVar10 = param_2[4];
    param_1[2] = *param_2;
    param_1[3] = uVar5;
    param_1[4] = uVar7;
    param_1[5] = uVar9;
    param_1[6] = uVar10;
    *param_1 = 3;
    param_1[1] = 0;
    return;
  }
  if ((DAT_01d50f88 < 2) &&
     (((DAT_01d50984 - 1 < 2 ||
       ((DAT_01d50984 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d5097c), cVar1 != '\0')))) &&
      (iVar2 = FUN_01aaa278(DAT_01d5097c), iVar2 != 0)))) {
    local_50 = *(int *)(DAT_01d5097c + 0x20);
    if (local_50 == 0) {
LAB_01a74520:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2d3f8);
    }
    local_5c = &local_40;
    local_4c = *(undefined4 *)(DAT_01d5097c + 0x24);
    uStack_48 = *(undefined4 *)(DAT_01d5097c + 0x28);
    local_64 = (undefined4 *)(DAT_01d5097c + 0x1c);
    local_54 = (undefined4 ****)*local_64;
    local_60 = &local_54;
    local_6c = &local_60;
    local_44 = 0;
    ppppppuVar11 = &local_6c;
    local_68 = 1;
    local_3c = &local_38;
    local_38 = &uStack_21;
    local_58 = (undefined4 *)&DAT_01d2ea4c;
    local_40 = &DAT_005ae19d;
    local_34 = 0x14119dc;
    FUN_01aaaecc(DAT_01d5097c,ppppppuVar11);
    iVar2 = DAT_01d5097c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_01a744ac;
    local_2c = *(undefined ***)(DAT_01d5097c + 0x14);
    local_28 = *(undefined1 **)(DAT_01d5097c + 0x18);
    local_30 = (undefined4 *****)&SUB_00000004;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar8[3])(pcVar4,&local_30);
    if (iVar3 == 0) goto LAB_01a744ac;
    uVar5 = puVar8[4];
    ppppppuVar6 = &local_30;
  }
  else {
    iVar2 = DAT_01d5097c;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 4)) goto LAB_01a744ac;
    local_68 = *(undefined4 *)(DAT_01d5097c + 0x14);
    local_64 = *(undefined4 **)(DAT_01d5097c + 0x18);
    local_6c = (undefined4 *****)&SUB_00000004;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar8[3])(pcVar4,&local_6c);
    if (iVar3 == 0) goto LAB_01a744ac;
    local_58 = (undefined4 *)(DAT_01d5097c + 0x1c);
    local_54 = (undefined4 ****)*local_58;
    local_50 = *(int *)(DAT_01d5097c + 0x20);
    if (local_50 == 0) goto LAB_01a74520;
    local_2c = &local_40;
    local_4c = *(undefined4 *)(DAT_01d5097c + 0x24);
    uStack_48 = *(undefined4 *)(DAT_01d5097c + 0x28);
    local_30 = &local_54;
    local_60 = &local_30;
    local_44 = 0;
    local_5c = (undefined **)&DAT_00000001;
    local_3c = &local_38;
    local_38 = &uStack_21;
    local_28 = &DAT_01d2ea4c;
    ppppppuVar11 = &local_60;
    local_40 = &DAT_005ae19d;
    ppppppuVar6 = &local_6c;
    local_34 = 0x14119dc;
    uVar5 = puVar8[4];
  }
  FUN_01aaa328(iVar2,pcVar4,uVar5,ppppppuVar6,ppppppuVar11);
LAB_01a744ac:
  iVar2 = thunk_FUN_01be5118(0x2e);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x2e);
  }
  FUN_01bed4e2(iVar2,"Couldn\'t serialize non-text grpc status header",0x2e);
  local_4c = 0x2e;
  local_54 = (undefined4 ****)0x2e;
  local_50 = iVar2;
  FUN_01a70fd4(param_1,0xd,&local_54);
  return;
}


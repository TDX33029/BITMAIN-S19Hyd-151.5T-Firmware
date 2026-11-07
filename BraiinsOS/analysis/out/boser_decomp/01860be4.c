// FUN_01860be4 @ 01860be4 size=1072 calls_out=11 calls_in=2
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_01860be4(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4,int *param_5,
                 char *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 **ppuVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 ***local_7c;
  undefined1 *local_78;
  undefined4 *local_74;
  undefined4 **local_70;
  undefined4 ***local_6c;
  undefined4 **local_68;
  uint local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 ***local_58;
  undefined4 ***local_54;
  undefined4 *local_50;
  undefined4 **local_4c;
  int iStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 **local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
  if (*param_6 == '\0') {
    cVar2 = param_6[1];
    uVar5 = *(undefined4 *)(param_6 + 8);
    if ((*param_5 == 1) &&
       (ppuVar6 = (undefined4 **)param_5[1], ppuVar6 <= (undefined4 **)param_5[10])) {
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d507f8 - 1 < 2 ||
           ((DAT_01d507f8 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d507f0), cVar2 != '\0')))) &&
          (iVar3 = FUN_01aaa278(DAT_01d507f0), iVar3 != 0)))) {
        iStack_48 = *(int *)(DAT_01d507f0 + 0x20);
        if (iStack_48 == 0) {
LAB_01860ffc:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d2caa8);
        }
        local_54 = &local_70;
        uStack_44 = *(undefined4 *)(DAT_01d507f0 + 0x24);
        uStack_40 = *(undefined4 *)(DAT_01d507f0 + 0x28);
        local_74 = (undefined4 *)(DAT_01d507f0 + 0x1c);
        local_4c = (undefined4 **)*local_74;
        local_58 = &local_4c;
        local_7c = &local_58;
        local_3c = 0;
        local_78 = (undefined1 *)0x1;
        local_6c = &local_38;
        local_38 = &local_68;
        local_50 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = (undefined4 **)&DAT_005b90de;
        local_34 = (undefined4 ****)&LAB_01a6a304;
        local_68 = ppuVar6;
        FUN_01aaaecc(DAT_01d507f0,&local_7c);
        iVar3 = DAT_01d507f0;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_2c = *(undefined4 ****)(DAT_01d507f0 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d507f0 + 0x18);
          local_30 = (undefined4 **)0x2;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar9[3])(pcVar1,&local_30);
          if (iVar4 != 0) {
            FUN_01aaa328(iVar3,pcVar1,puVar9[4],&local_30,&local_7c);
          }
        }
      }
      else {
        iVar3 = DAT_01d507f0;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_60 = *(undefined4 *)(DAT_01d507f0 + 0x14);
          local_5c = *(undefined4 *)(DAT_01d507f0 + 0x18);
          local_64 = 2;
          DataMemoryBarrier(0xb);
          puVar9 = DAT_01d4edc8;
          pcVar1 = DAT_01d4edc4;
          if (DAT_01d51174 != 2) {
            puVar9 = &DAT_01cfc5e0;
            pcVar1 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
          }
          iVar4 = (*(code *)puVar9[3])(pcVar1,&local_64);
          if (iVar4 != 0) {
            local_50 = (undefined4 *)(DAT_01d507f0 + 0x1c);
            local_4c = (undefined4 **)*local_50;
            iStack_48 = *(int *)(DAT_01d507f0 + 0x20);
            if (iStack_48 == 0) goto LAB_01860ffc;
            local_2c = &local_38;
            uStack_44 = *(undefined4 *)(DAT_01d507f0 + 0x24);
            uStack_40 = *(undefined4 *)(DAT_01d507f0 + 0x28);
            local_30 = &local_4c;
            local_58 = &local_30;
            local_3c = 0;
            local_54 = (undefined4 ***)&DAT_00000001;
            local_34 = &local_7c;
            local_28 = &DAT_01d2ea4c;
            local_38 = (undefined4 ***)&DAT_005b90de;
            local_78 = &LAB_01a6a304;
            local_7c = &local_70;
            local_70 = ppuVar6;
            FUN_01aaa328(iVar3,pcVar1,puVar9[4],&local_64,&local_58);
          }
        }
      }
      *(undefined2 *)param_1 = 0x101;
      param_1[1] = 0xb;
      param_1[2] = &DAT_01c25b04;
      param_1[3] = "too_many_internal_resets";
      param_1[4] = 0x18;
      param_1[5] = 0;
    }
    else {
      FUN_01388c88(param_5);
      FUN_018790ec(param_2 + 0xb0,uVar5,cVar2,param_3,param_4,param_5,param_2 + 0xa8);
      FUN_0135abbc(param_2,param_4,param_5);
      iVar3 = FUN_01367cb8(*(undefined4 *)(*param_4 + 0x34),*(undefined4 *)(*param_4 + 0x38),
                           param_4[1],param_4[2]);
      iVar4 = *(int *)(iVar3 + 0x50);
      *(undefined4 *)(iVar3 + 0x50) = 0;
      if (iVar4 != 0) {
        (**(code **)(iVar4 + 4))(*(undefined4 *)(iVar3 + 0x54));
      }
      *(undefined1 *)param_1 = 3;
    }
    if (*param_6 != '\x03') {
      FUN_01381bd4(param_6);
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_6 + 4);
    uVar7 = *(undefined4 *)(param_6 + 8);
    uVar8 = *(undefined4 *)(param_6 + 0xc);
    uVar10 = *(undefined4 *)(param_6 + 0x10);
    uVar11 = *(undefined4 *)(param_6 + 0x14);
    *param_1 = *(undefined4 *)param_6;
    param_1[1] = uVar5;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1[4] = uVar10;
    param_1[5] = uVar11;
  }
  return;
}


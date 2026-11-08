// FUN_017f26bc @ 017f26bc size=1008 calls_out=8 calls_in=3
// strings: h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::streams/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rsevent /nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/streams.rs:1442 | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_017f26bc(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4,int *param_5
                 ,char *param_6)

{
  char *pcVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 **ppuVar11;
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
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 ***local_38;
  undefined4 ****local_34;
  undefined4 **local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
  if (*param_6 == '\0') {
    if ((*param_5 == 1) &&
       (ppuVar11 = (undefined4 **)param_5[1], ppuVar11 <= (undefined4 **)param_5[10])) {
      if ((DAT_01d50f88 < 4) &&
         (((DAT_01d4f790 - 1 < 2 ||
           ((DAT_01d4f790 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4f788), cVar2 != '\0')))) &&
          (iVar3 = FUN_01aaa278(DAT_01d4f788), iVar3 != 0)))) {
        local_48 = *(int *)(DAT_01d4f788 + 0x20);
        if (local_48 == 0) {
LAB_017f2a94:
                    /* WARNING: Subroutine does not return */
          FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01d1d3f4);
        }
        local_44 = *(undefined4 *)(DAT_01d4f788 + 0x24);
        local_40 = *(undefined4 *)(DAT_01d4f788 + 0x28);
        local_54 = &local_70;
        local_74 = (undefined4 *)(DAT_01d4f788 + 0x1c);
        local_4c = (undefined4 **)*local_74;
        local_58 = &local_4c;
        local_78 = (undefined1 *)0x1;
        local_6c = &local_38;
        local_7c = &local_58;
        local_38 = &local_68;
        local_3c = 0;
        local_50 = (undefined4 *)&DAT_01d2ea4c;
        local_70 = (undefined4 **)&DAT_005b90de;
        local_34 = (undefined4 ****)&LAB_01a6a304;
        local_68 = ppuVar11;
        FUN_01aaaecc(DAT_01d4f788,&local_7c);
        iVar3 = DAT_01d4f788;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_2c = *(undefined4 ****)(DAT_01d4f788 + 0x14);
          local_28 = *(undefined1 **)(DAT_01d4f788 + 0x18);
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
        iVar3 = DAT_01d4f788;
        if ((DAT_01d51ae9 == '\0') && (1 < DAT_01d51b00)) {
          local_60 = *(undefined4 *)(DAT_01d4f788 + 0x14);
          local_5c = *(undefined4 *)(DAT_01d4f788 + 0x18);
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
            local_50 = (undefined4 *)(DAT_01d4f788 + 0x1c);
            local_4c = (undefined4 **)*local_50;
            local_48 = *(int *)(DAT_01d4f788 + 0x20);
            if (local_48 == 0) goto LAB_017f2a94;
            local_30 = &local_4c;
            local_44 = *(undefined4 *)(DAT_01d4f788 + 0x24);
            local_40 = *(undefined4 *)(DAT_01d4f788 + 0x28);
            local_2c = &local_38;
            local_58 = &local_30;
            local_54 = (undefined4 ***)&DAT_00000001;
            local_34 = &local_7c;
            local_3c = 0;
            local_28 = &DAT_01d2ea4c;
            local_38 = (undefined4 ***)&DAT_005b90de;
            local_78 = &LAB_01a6a304;
            local_7c = &local_70;
            local_70 = ppuVar11;
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
      uVar5 = *(undefined4 *)(param_6 + 8);
      cVar2 = param_6[1];
      param_5[10] = (int)(param_5[10] + 1);
      FUN_017baf84(param_2 + 0xb0,uVar5,cVar2,param_3,param_4,param_5,param_2 + 0xa8);
      *(undefined1 *)param_1 = 3;
    }
    if (*param_6 != '\x03') {
      FUN_01381bd4(param_6);
    }
  }
  else {
    uVar5 = *(undefined4 *)(param_6 + 4);
    uVar6 = *(undefined4 *)(param_6 + 8);
    uVar7 = *(undefined4 *)(param_6 + 0xc);
    uVar8 = *(undefined4 *)(param_6 + 0x10);
    uVar10 = *(undefined4 *)(param_6 + 0x14);
    *param_1 = *(undefined4 *)param_6;
    param_1[1] = uVar5;
    param_1[2] = uVar6;
    param_1[3] = uVar7;
    param_1[4] = uVar8;
    param_1[5] = uVar10;
  }
  return;
}


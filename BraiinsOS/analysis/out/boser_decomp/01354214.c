// FUN_01354214 @ 01354214 size=932 calls_out=7 calls_in=2
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

void FUN_01354214(undefined1 *param_1,int param_2,undefined *param_3)

{
  undefined1 uVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  uint *puVar7;
  undefined4 *puVar8;
  char *pcVar9;
  undefined *puVar10;
  undefined4 ****ppppuVar11;
  undefined *local_88;
  undefined4 ****local_84;
  undefined ***local_80;
  undefined4 *local_7c;
  undefined *local_78;
  undefined ***local_74;
  undefined *local_70;
  undefined4 **local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 ***local_60;
  undefined **local_5c;
  undefined4 *local_58;
  undefined4 **local_54;
  int iStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined **local_40;
  undefined1 *local_3c;
  undefined **local_38;
  undefined1 *local_34;
  undefined4 ***local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  puVar7 = (uint *)(param_2 + 0x20);
  puVar10 = (undefined *)(*puVar7 & ~((int)*puVar7 >> 0x1f));
  local_88 = param_3;
  if (puVar10 < param_3) {
    if ((DAT_01d50f88 < 2) &&
       (((DAT_01d4d160 - 1 < 2 ||
         ((DAT_01d4d160 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d158), cVar2 != '\0')))) &&
        (iVar3 = FUN_01aaa278(DAT_01d4d158), iVar3 != 0)))) {
      iStack_50 = *(int *)(DAT_01d4d158 + 0x20);
      if (iStack_50 == 0) {
LAB_013545a0:
                    /* WARNING: Subroutine does not return */
        FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce77d4);
      }
      local_5c = &local_78;
      uStack_4c = *(undefined4 *)(DAT_01d4d158 + 0x24);
      uStack_48 = *(undefined4 *)(DAT_01d4d158 + 0x28);
      local_7c = (undefined4 *)(DAT_01d4d158 + 0x1c);
      local_54 = (undefined4 **)*local_7c;
      local_60 = &local_54;
      local_84 = &local_60;
      local_44 = 0;
      ppppuVar11 = &local_84;
      local_80 = (undefined ***)&DAT_00000001;
      local_74 = &local_40;
      local_38 = &local_88;
      local_40 = &local_70;
      local_58 = (undefined4 *)&DAT_01d2ea4c;
      local_78 = &DAT_005ad71b;
      local_34 = &LAB_01a86300;
      local_3c = &LAB_01a86300;
      local_70 = puVar10;
      FUN_01aaaecc(DAT_01d4d158,ppppuVar11);
      iVar3 = DAT_01d4d158;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_2c = *(undefined4 *****)(DAT_01d4d158 + 0x14);
        local_28 = *(undefined1 **)(DAT_01d4d158 + 0x18);
        local_30 = (undefined4 ***)&SUB_00000004;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar8[3])(pcVar9,&local_30);
        if (iVar4 != 0) {
          uVar5 = puVar8[4];
          pppuVar6 = &local_30;
          goto LAB_01354540;
        }
      }
    }
    else {
      iVar3 = DAT_01d4d158;
      if ((DAT_01d51ae9 == '\0') && (3 < DAT_01d51b00)) {
        local_68 = *(undefined4 *)(DAT_01d4d158 + 0x14);
        local_64 = *(undefined4 *)(DAT_01d4d158 + 0x18);
        local_6c = (undefined4 **)0x4;
        DataMemoryBarrier(0xb);
        puVar8 = DAT_01d4edc8;
        if (DAT_01d51174 != 2) {
          puVar8 = &DAT_01cfc5e0;
        }
        pcVar9 = DAT_01d4edc4;
        if (DAT_01d51174 != 2) {
          pcVar9 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
        }
        iVar4 = (*(code *)puVar8[3])(pcVar9,&local_6c);
        if (iVar4 != 0) {
          local_58 = (undefined4 *)(DAT_01d4d158 + 0x1c);
          local_54 = (undefined4 **)*local_58;
          iStack_50 = *(int *)(DAT_01d4d158 + 0x20);
          if (iStack_50 == 0) goto LAB_013545a0;
          uStack_4c = *(undefined4 *)(DAT_01d4d158 + 0x24);
          uStack_48 = *(undefined4 *)(DAT_01d4d158 + 0x28);
          local_44 = 0;
          local_2c = &local_84;
          local_30 = &local_54;
          local_5c = (undefined **)&DAT_00000001;
          local_60 = &local_30;
          local_78 = (undefined *)(*puVar7 & ~((int)*puVar7 >> 0x1f));
          local_80 = &local_40;
          local_38 = &local_88;
          local_40 = &local_78;
          ppppuVar11 = &local_60;
          local_28 = &DAT_01d2ea4c;
          pppuVar6 = &local_6c;
          local_84 = (undefined4 ****)&DAT_005ad71b;
          local_34 = &LAB_01a86300;
          local_3c = &LAB_01a86300;
          uVar5 = puVar8[4];
LAB_01354540:
          FUN_01aaa328(iVar3,pcVar9,uVar5,pppuVar6,ppppuVar11);
        }
      }
    }
  }
  else {
    iVar3 = FUN_013810bc(puVar7,param_3);
    if (iVar3 == 0) {
      *(undefined **)(param_2 + 0x7c) = param_3 + *(int *)(param_2 + 0x7c);
      uVar1 = 3;
      goto LAB_01354578;
    }
  }
  uVar1 = 1;
  param_1[1] = 1;
  *(undefined4 *)(param_1 + 4) = 3;
  *(undefined ***)(param_1 + 8) = &PTR_FUN_01ceb2a4;
  *(undefined4 *)(param_1 + 0xc) = 1;
  *(undefined4 *)(param_1 + 0x10) = 0;
  *(undefined4 *)(param_1 + 0x14) = 0;
LAB_01354578:
  *param_1 = uVar1;
  return;
}


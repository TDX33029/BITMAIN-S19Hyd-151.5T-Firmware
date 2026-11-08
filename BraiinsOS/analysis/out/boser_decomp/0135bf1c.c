// FUN_0135bf1c @ 0135bf1c size=1048 calls_out=7 calls_in=4
// strings: h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::recv/nix/store/eeeeeeeeeeeeeeeeeeeeeeeeeeeeeeee-vendor-cargo-deps/c19b7c6f923b580ac259164a89f2577984ad5ab09ee9d583b888f934adbbe8d0/h2-0.3.26/src/proto/streams/recv.rs | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll

void FUN_0135bf1c(int param_1,uint param_2,int *param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 ****ppppuVar7;
  undefined4 *puVar8;
  undefined4 *****pppppuVar9;
  uint local_90;
  undefined4 *****local_8c;
  uint **local_88;
  undefined4 *local_84;
  undefined *local_80;
  uint **local_7c;
  undefined *local_78;
  undefined4 ***local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 ****local_68;
  undefined **local_64;
  undefined4 *local_60;
  undefined4 ***local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  uint *local_48;
  code *local_44;
  undefined **local_40;
  undefined *local_3c;
  int local_38;
  code *local_34;
  undefined4 ****local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
  local_90 = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d178 - 1 < 2 ||
       ((DAT_01d4d178 != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d170), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d170), iVar3 != 0)))) {
    local_58 = *(int *)(DAT_01d4d170 + 0x20);
    if (local_58 == 0) {
LAB_0135c31c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01ce78b4);
    }
    local_54 = *(undefined4 *)(DAT_01d4d170 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d170 + 0x28);
    local_84 = (undefined4 *)(DAT_01d4d170 + 0x1c);
    local_5c = (undefined4 ***)*local_84;
    local_64 = &local_80;
    local_78 = *(undefined **)(param_1 + 0x24);
    local_60 = (undefined4 *)&DAT_01d2ea4c;
    pppppuVar9 = &local_8c;
    local_7c = &local_48;
    local_38 = param_1 + 0x7c;
    local_88 = (uint **)&DAT_00000001;
    local_8c = &local_68;
    local_40 = &local_78;
    local_68 = &local_5c;
    local_48 = &local_90;
    local_4c = 0;
    local_80 = &DAT_00582526;
    local_34 = FUN_012fd02c;
    local_3c = &DAT_01380cd0;
    local_44 = FUN_012fd02c;
    FUN_01aaaecc(DAT_01d4d170,pppppuVar9);
    iVar3 = DAT_01d4d170;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0135c258;
    local_2c = *(undefined4 ******)(DAT_01d4d170 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d170 + 0x18);
    local_30 = (undefined4 ****)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar8[3])(pcVar4,&local_30);
    if (iVar2 == 0) goto LAB_0135c258;
    uVar6 = puVar8[4];
    ppppuVar7 = &local_30;
  }
  else {
    iVar3 = DAT_01d4d170;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_0135c258;
    local_70 = *(undefined4 *)(DAT_01d4d170 + 0x14);
    local_6c = *(undefined4 *)(DAT_01d4d170 + 0x18);
    local_74 = (undefined4 ***)0x5;
    DataMemoryBarrier(0xb);
    puVar8 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar8 = &DAT_01cfc5e0;
    }
    pcVar4 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar4 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar8[3])(pcVar4,&local_74);
    if (iVar2 == 0) goto LAB_0135c258;
    local_60 = (undefined4 *)(DAT_01d4d170 + 0x1c);
    local_5c = (undefined4 ***)*local_60;
    local_58 = *(int *)(DAT_01d4d170 + 0x20);
    if (local_58 == 0) goto LAB_0135c31c;
    local_54 = *(undefined4 *)(DAT_01d4d170 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d170 + 0x28);
    local_2c = &local_8c;
    local_80 = *(undefined **)(param_1 + 0x24);
    local_30 = &local_5c;
    local_88 = &local_48;
    local_4c = 0;
    local_28 = &DAT_01d2ea4c;
    local_34 = FUN_012fd02c;
    local_8c = (undefined4 *****)&DAT_00582526;
    local_38 = param_1 + 0x7c;
    local_3c = &DAT_01380cd0;
    local_40 = &local_80;
    local_64 = (undefined **)&DAT_00000001;
    local_68 = &local_30;
    local_44 = FUN_012fd02c;
    local_48 = &local_90;
    ppppuVar7 = &local_74;
    pppppuVar9 = &local_68;
    uVar6 = puVar8[4];
  }
  FUN_01aaa328(iVar3,pcVar4,uVar6,ppppuVar7,pppppuVar9);
LAB_0135c258:
  iVar3 = *(int *)(param_1 + 0x24);
  uVar5 = iVar3 + *(int *)(param_1 + 0x7c);
  if (!SCARRY4(iVar3,*(int *)(param_1 + 0x7c))) {
    if ((int)uVar5 < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("negative Window",0x1f,&DAT_01cea8bc);
    }
    if (uVar5 < param_2) {
      iVar2 = param_2 - uVar5;
      if (SCARRY4(iVar3,iVar2)) {
        return;
      }
    }
    else {
      iVar2 = -(uVar5 - param_2);
      if (SBORROW4(iVar3,uVar5 - param_2)) {
        return;
      }
    }
    iVar3 = iVar3 + iVar2;
    iVar2 = *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x24) = iVar3;
    if ((iVar2 < iVar3) && (iVar2 / 2 <= iVar3 - iVar2)) {
      iVar3 = *param_3;
      *param_3 = 0;
      if (iVar3 != 0) {
        (**(code **)(iVar3 + 4))(param_3[1]);
      }
    }
  }
  return;
}


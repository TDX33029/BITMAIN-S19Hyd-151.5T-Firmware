// FUN_013b79b8 @ 013b79b8 size=924 calls_out=7 calls_in=3
// strings: h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | assertion failed: self.window_size.0 >= sz as i32

bool FUN_013b79b8(int *param_1,int param_2,int param_3)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int extraout_r2;
  undefined4 uVar4;
  int extraout_r2_00;
  int extraout_r2_01;
  int extraout_r2_02;
  int extraout_r2_03;
  int extraout_r2_04;
  undefined4 ***pppuVar5;
  undefined4 *puVar6;
  char *pcVar7;
  bool bVar8;
  bool bVar9;
  undefined4 ****ppppuVar10;
  int local_8c;
  undefined4 ***local_88;
  int **local_84;
  undefined4 *local_80;
  undefined *local_7c;
  int **local_78;
  undefined4 **local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 ***local_68;
  undefined **local_64;
  undefined4 *local_60;
  undefined4 **local_5c;
  int local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int *local_48;
  code *local_44;
  int *local_40;
  undefined *local_3c;
  int *local_38;
  undefined *local_34;
  undefined4 **local_30;
  undefined4 ****local_2c;
  undefined1 *local_28;
  
  local_8c = param_2;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4def8 - 1 < 2 ||
       ((DAT_01d4def8 != 0 &&
        (cVar1 = FUN_01aaafa8(&DAT_01d4def0), param_3 = extraout_r2_04, cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4def0), param_3 = extraout_r2_01, iVar3 != 0)))) {
    local_58 = *(int *)(DAT_01d4def0 + 0x20);
    if (local_58 == 0) {
LAB_013b7d3c:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cf0d40);
    }
    local_54 = *(undefined4 *)(DAT_01d4def0 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4def0 + 0x28);
    local_64 = &local_7c;
    local_80 = (undefined4 *)(DAT_01d4def0 + 0x1c);
    local_5c = (undefined4 **)*local_80;
    local_84 = (int **)&DAT_00000001;
    local_78 = &local_48;
    local_68 = &local_5c;
    local_38 = param_1 + 1;
    local_44 = FUN_012fd02c;
    ppppuVar10 = &local_88;
    local_88 = &local_68;
    local_48 = &local_8c;
    local_4c = 0;
    local_60 = (undefined4 *)&DAT_01d2ea4c;
    local_7c = &DAT_005a2f27;
    local_34 = &DAT_01380cd0;
    local_3c = &DAT_01380cd0;
    local_40 = param_1;
    FUN_01aaaecc(DAT_01d4def0,ppppuVar10);
    iVar3 = DAT_01d4def0;
    param_3 = extraout_r2_02;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b7cc4;
    local_2c = *(undefined4 *****)(DAT_01d4def0 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4def0 + 0x18);
    local_30 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
    }
    pcVar7 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar6[3])(pcVar7,&local_30);
    param_3 = extraout_r2_03;
    if (iVar2 == 0) goto LAB_013b7cc4;
    uVar4 = puVar6[4];
    pppuVar5 = &local_30;
  }
  else {
    iVar3 = DAT_01d4def0;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_013b7cc4;
    local_70 = *(undefined4 *)(DAT_01d4def0 + 0x14);
    local_6c = *(undefined4 *)(DAT_01d4def0 + 0x18);
    local_74 = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar6 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar6 = &DAT_01cfc5e0;
    }
    pcVar7 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar7 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar2 = (*(code *)puVar6[3])(pcVar7,&local_74);
    param_3 = extraout_r2;
    if (iVar2 == 0) goto LAB_013b7cc4;
    local_60 = (undefined4 *)(DAT_01d4def0 + 0x1c);
    local_5c = (undefined4 **)*local_60;
    local_58 = *(int *)(DAT_01d4def0 + 0x20);
    if (local_58 == 0) goto LAB_013b7d3c;
    local_30 = &local_5c;
    local_54 = *(undefined4 *)(DAT_01d4def0 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4def0 + 0x28);
    local_2c = &local_88;
    local_68 = &local_30;
    local_4c = 0;
    local_64 = (undefined **)&DAT_00000001;
    local_84 = &local_48;
    local_28 = &DAT_01d2ea4c;
    pppuVar5 = &local_74;
    local_34 = &DAT_01380cd0;
    local_88 = (undefined4 ***)&DAT_005a2f27;
    local_38 = param_1 + 1;
    local_3c = &DAT_01380cd0;
    local_44 = FUN_012fd02c;
    local_48 = &local_8c;
    uVar4 = puVar6[4];
    ppppuVar10 = &local_68;
    local_40 = param_1;
  }
  FUN_01aaa328(iVar3,pcVar7,uVar4,pppuVar5,ppppuVar10);
  param_3 = extraout_r2_00;
LAB_013b7cc4:
  bVar8 = false;
  if (param_2 != 0) {
    iVar3 = *param_1;
    bVar9 = SBORROW4(iVar3,param_2);
    if (iVar3 < param_2) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0ec("assertion failed: self.window_size.0 >= sz as i32",0x31,&DAT_01cf0d50);
    }
    if (!bVar9) {
      param_3 = param_1[1];
      *param_1 = iVar3 - param_2;
      iVar3 = param_3 - param_2;
    }
    bVar8 = bVar9 || SBORROW4(param_3,param_2);
    if (!bVar9 && !SBORROW4(param_3,param_2)) {
      param_1[1] = iVar3;
    }
  }
  return bVar8;
}


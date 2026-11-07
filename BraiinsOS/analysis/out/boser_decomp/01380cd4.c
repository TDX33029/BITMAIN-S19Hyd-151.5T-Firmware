// FUN_01380cd4 @ 01380cd4 size=872 calls_out=6 calls_in=2
// strings: h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

bool FUN_01380cd4(int *param_1,int param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 ***pppuVar6;
  undefined4 *puVar7;
  char *pcVar8;
  undefined4 ****ppppuVar9;
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
  local_40 = param_1;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d6f4 - 1 < 2 ||
       ((DAT_01d4d6f4 != 0 && (cVar2 = FUN_01aaafa8(&DAT_01d4d6ec), cVar2 != '\0')))) &&
      (iVar4 = FUN_01aaa278(DAT_01d4d6ec), iVar4 != 0)))) {
    local_58 = *(int *)(DAT_01d4d6ec + 0x20);
    if (local_58 == 0) {
LAB_01381024:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea84c);
    }
    local_54 = *(undefined4 *)(DAT_01d4d6ec + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d6ec + 0x28);
    local_64 = &local_7c;
    local_80 = (undefined4 *)(DAT_01d4d6ec + 0x1c);
    local_5c = (undefined4 **)*local_80;
    local_84 = (int **)&DAT_00000001;
    local_78 = &local_48;
    local_68 = &local_5c;
    local_38 = param_1 + 1;
    local_44 = FUN_012fd02c;
    ppppuVar9 = &local_88;
    local_88 = &local_68;
    local_48 = &local_8c;
    local_4c = 0;
    local_60 = (undefined4 *)&DAT_01d2ea4c;
    local_7c = &DAT_0058af58;
    local_34 = &DAT_01380cd0;
    local_3c = &DAT_01380cd0;
    FUN_01aaaecc(DAT_01d4d6ec,ppppuVar9);
    iVar4 = DAT_01d4d6ec;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01380fe0;
    local_2c = *(undefined4 *****)(DAT_01d4d6ec + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d6ec + 0x18);
    local_30 = (undefined4 **)&DAT_00000005;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar8 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar7[3])(pcVar8,&local_30);
    if (iVar3 == 0) goto LAB_01380fe0;
    uVar5 = puVar7[4];
    pppuVar6 = &local_30;
  }
  else {
    iVar4 = DAT_01d4d6ec;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01380fe0;
    local_70 = *(undefined4 *)(DAT_01d4d6ec + 0x14);
    local_6c = *(undefined4 *)(DAT_01d4d6ec + 0x18);
    local_74 = (undefined4 **)0x5;
    DataMemoryBarrier(0xb);
    puVar7 = DAT_01d4edc8;
    if (DAT_01d51174 != 2) {
      puVar7 = &DAT_01cfc5e0;
    }
    pcVar8 = DAT_01d4edc4;
    if (DAT_01d51174 != 2) {
      pcVar8 = "InvalidParamSegmentInvalidParamInvalidCatchAll";
    }
    iVar3 = (*(code *)puVar7[3])(pcVar8,&local_74);
    if (iVar3 == 0) goto LAB_01380fe0;
    local_60 = (undefined4 *)(DAT_01d4d6ec + 0x1c);
    local_5c = (undefined4 **)*local_60;
    local_58 = *(int *)(DAT_01d4d6ec + 0x20);
    if (local_58 == 0) goto LAB_01381024;
    local_30 = &local_5c;
    local_54 = *(undefined4 *)(DAT_01d4d6ec + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d6ec + 0x28);
    local_2c = &local_88;
    local_68 = &local_30;
    local_4c = 0;
    local_64 = (undefined **)&DAT_00000001;
    local_84 = &local_48;
    local_28 = &DAT_01d2ea4c;
    pppuVar6 = &local_74;
    local_34 = &DAT_01380cd0;
    local_88 = (undefined4 ***)&DAT_0058af58;
    local_38 = param_1 + 1;
    local_3c = &DAT_01380cd0;
    local_44 = FUN_012fd02c;
    local_48 = &local_8c;
    uVar5 = puVar7[4];
    ppppuVar9 = &local_68;
  }
  FUN_01aaa328(iVar4,pcVar8,uVar5,pppuVar6,ppppuVar9);
LAB_01380fe0:
  bVar1 = !SBORROW4(*param_1,param_2);
  if (bVar1) {
    *param_1 = *param_1 - param_2;
  }
  return !bVar1;
}


// FUN_013808d0 @ 013808d0 size=888 calls_out=6 calls_in=9
// strings: h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | InvalidParamSegmentInvalidParamInvalidCatchAll | h2::proto::streams::flow_controlTLS_DHE_RSA_WITH_AES_128_CBC_RMD | InvalidParamSegmentInvalidParamInvalidCatchAll | FieldSet corrupted (this is a bug)

undefined4 FUN_013808d0(int *param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 ****ppppuVar5;
  undefined4 *puVar6;
  char *pcVar7;
  int iVar8;
  undefined4 *****pppppuVar9;
  int local_90;
  int local_8c;
  undefined4 *****local_88;
  int **local_84;
  undefined4 *local_80;
  undefined *local_7c;
  int **local_78;
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
  int *local_48;
  code *local_44;
  int *local_40;
  undefined *local_3c;
  int *local_38;
  code *local_34;
  undefined4 ****local_30;
  undefined4 *****local_2c;
  undefined1 *local_28;
  
  iVar8 = *param_1 + param_2;
  if (SCARRY4(*param_1,param_2)) {
    return 1;
  }
  local_90 = param_2;
  local_8c = iVar8;
  local_40 = param_1;
  if ((DAT_01d50f88 == 0) &&
     (((DAT_01d4d6dc - 1 < 2 ||
       ((DAT_01d4d6dc != 0 && (cVar1 = FUN_01aaafa8(&DAT_01d4d6d4), cVar1 != '\0')))) &&
      (iVar3 = FUN_01aaa278(DAT_01d4d6d4), iVar3 != 0)))) {
    local_58 = *(int *)(DAT_01d4d6d4 + 0x20);
    if (local_58 == 0) {
LAB_01380c30:
                    /* WARNING: Subroutine does not return */
      FUN_0130739c("FieldSet corrupted (this is a bug)",0x22,&DAT_01cea7ac);
    }
    local_54 = *(undefined4 *)(DAT_01d4d6d4 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d6d4 + 0x28);
    local_64 = &local_7c;
    local_80 = (undefined4 *)(DAT_01d4d6d4 + 0x1c);
    local_5c = (undefined4 ***)*local_80;
    local_84 = (int **)&DAT_00000001;
    local_78 = &local_48;
    local_68 = &local_5c;
    local_38 = &local_8c;
    local_3c = &DAT_01380cd0;
    pppppuVar9 = &local_88;
    local_88 = &local_68;
    local_48 = &local_90;
    local_4c = 0;
    local_60 = (undefined4 *)&DAT_01d2ea4c;
    local_7c = &DAT_0057aa71;
    local_34 = FUN_012fce60;
    local_44 = FUN_012fd02c;
    FUN_01aaaecc(DAT_01d4d6d4,pppppuVar9);
    iVar3 = DAT_01d4d6d4;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01380bfc;
    local_2c = *(undefined4 ******)(DAT_01d4d6d4 + 0x14);
    local_28 = *(undefined1 **)(DAT_01d4d6d4 + 0x18);
    local_30 = (undefined4 ****)&DAT_00000005;
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
    if (iVar2 == 0) goto LAB_01380bfc;
    uVar4 = puVar6[4];
    ppppuVar5 = &local_30;
  }
  else {
    iVar3 = DAT_01d4d6d4;
    if ((DAT_01d51ae9 != '\0') || (DAT_01d51b00 < 5)) goto LAB_01380bfc;
    local_70 = *(undefined4 *)(DAT_01d4d6d4 + 0x14);
    local_6c = *(undefined4 *)(DAT_01d4d6d4 + 0x18);
    local_74 = (undefined4 ***)0x5;
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
    if (iVar2 == 0) goto LAB_01380bfc;
    local_60 = (undefined4 *)(DAT_01d4d6d4 + 0x1c);
    local_5c = (undefined4 ***)*local_60;
    local_58 = *(int *)(DAT_01d4d6d4 + 0x20);
    if (local_58 == 0) goto LAB_01380c30;
    local_30 = &local_5c;
    local_54 = *(undefined4 *)(DAT_01d4d6d4 + 0x24);
    local_50 = *(undefined4 *)(DAT_01d4d6d4 + 0x28);
    local_2c = &local_88;
    local_68 = &local_30;
    local_4c = 0;
    local_64 = (undefined **)&DAT_00000001;
    local_84 = &local_48;
    local_28 = &DAT_01d2ea4c;
    ppppuVar5 = &local_74;
    local_34 = FUN_012fce60;
    local_88 = (undefined4 *****)&DAT_0057aa71;
    local_38 = &local_8c;
    local_3c = &DAT_01380cd0;
    local_44 = FUN_012fd02c;
    local_48 = &local_90;
    uVar4 = puVar6[4];
    pppppuVar9 = &local_68;
  }
  FUN_01aaa328(iVar3,pcVar7,uVar4,ppppuVar5,pppppuVar9);
LAB_01380bfc:
  *param_1 = iVar8;
  return 0;
}


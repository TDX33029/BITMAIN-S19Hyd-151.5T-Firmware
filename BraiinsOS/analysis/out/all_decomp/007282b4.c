// FUN_007282b4 @ 007282b4 size=764 calls_out=2 calls_in=0
// strings: RequestPayload | method | Subscribe | paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended | method | Subscribe

undefined4 FUN_007282b4(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  int iVar5;
  code *pcVar6;
  uint uVar7;
  undefined4 **ppuVar8;
  int iVar9;
  undefined4 **local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 **local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  
  ppuVar8 = (undefined4 **)*param_2;
  iVar9 = param_2[1];
  iVar5 = *param_1;
  pcVar6 = *(code **)(iVar9 + 0xc);
  iVar1 = (*pcVar6)(ppuVar8,"RequestPayload",0xe);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar6)(ppuVar8,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar6)(ppuVar8,"method",6), iVar1 == 0)) &&
         ((iVar1 = (*pcVar6)(ppuVar8,&DAT_00414a7c,2), iVar1 == 0 &&
          ((((iVar1 = (*pcVar6)(ppuVar8,(&PTR_s_Subscribe_018af788)[*(byte *)(iVar5 + 0x18)],
                                *(undefined4 *)(&DAT_0041dc04 + (uint)*(byte *)(iVar5 + 0x18) * 4)),
             iVar1 == 0 && (iVar1 = (*pcVar6)(ppuVar8,&DAT_0041950f,2), iVar1 == 0)) &&
            (iVar1 = (*pcVar6)(ppuVar8,
                               "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
                               ,6), iVar1 == 0)) &&
           ((iVar1 = (*pcVar6)(ppuVar8,&DAT_00414a7c,2), iVar1 == 0 &&
            (iVar1 = FUN_0157a500(iVar5,param_2), iVar1 == 0)))))))) {
        uVar7 = param_2[2];
LAB_00728568:
        if ((uVar7 & 0x800000) == 0) {
          uVar2 = *param_2;
          uVar4 = 2;
          pcVar6 = *(code **)(param_2[1] + 0xc);
          pcVar3 = " }";
        }
        else {
          uVar2 = *param_2;
          uVar4 = 1;
          pcVar6 = *(code **)(param_2[1] + 0xc);
          pcVar3 = "}";
        }
        uVar2 = (*pcVar6)(uVar2,pcVar3,uVar4);
        return uVar2;
      }
    }
    else {
      iVar1 = (*pcVar6)(ppuVar8,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
        local_34 = ppuVar8;
        local_30 = (undefined *)iVar9;
        local_2c = &local_44;
        iVar1 = FUN_00fb1f64(&local_34,"method",6);
        if ((((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2), iVar1 == 0)) &&
            (iVar1 = FUN_00fb1f64(&local_34,(&PTR_s_Subscribe_018af7bc)[*(byte *)(iVar5 + 0x18)],
                                  *(undefined4 *)(&DAT_0041dc38 + (uint)*(byte *)(iVar5 + 0x18) * 4)
                                 ), iVar1 == 0)) &&
           (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2), iVar1 == 0)) {
          local_3c = &local_35;
          uVar7 = param_2[2];
          local_28 = param_2[3];
          local_30 = &DAT_01880dc4;
          local_35 = 1;
          local_44 = ppuVar8;
          local_40 = iVar9;
          local_34 = &local_44;
          local_2c = (undefined4 **)uVar7;
          iVar1 = FUN_00fb1f64(&local_44,
                               "paramsV2V1ConfigureConnectionSetupV1SubscribeOrAuthorizeFailOperationalStandardOperationalExtended"
                               ,6);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) {
            iVar1 = FUN_0157a500(iVar5,&local_34);
            if (iVar1 != 0) {
              return 1;
            }
            iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
            if (iVar1 == 0) goto LAB_00728568;
          }
        }
      }
    }
  }
  return 1;
}


// FUN_0129211c @ 0129211c size=724 calls_out=3 calls_in=0
// strings: inner | inner

undefined4 FUN_0129211c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  code *pcVar5;
  uint uVar6;
  undefined4 **ppuVar7;
  int iVar8;
  undefined4 **local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 **local_34;
  undefined *local_30;
  undefined4 **local_2c;
  undefined4 local_28;
  
  ppuVar7 = (undefined4 **)*param_2;
  iVar8 = param_2[1];
  pcVar5 = *(code **)(iVar8 + 0xc);
  iVar1 = (*pcVar5)(ppuVar7,&DAT_003b6d5b,0xe);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(ppuVar7,&DAT_00414a79,3);
      if (((((iVar1 == 0) && (iVar1 = (*pcVar5)(ppuVar7,&DAT_00568e60,4), iVar1 == 0)) &&
           (iVar1 = (*pcVar5)(ppuVar7,&DAT_00414a7c,2), iVar1 == 0)) &&
          ((iVar1 = FUN_00fb8bb0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),ppuVar7,
                                 iVar8), iVar1 == 0 &&
           (iVar1 = (*pcVar5)(ppuVar7,&DAT_0041950f,2), iVar1 == 0)))) &&
         ((iVar1 = (*pcVar5)(ppuVar7,"inner",5), iVar1 == 0 &&
          ((iVar1 = (*pcVar5)(ppuVar7,&DAT_00414a7c,2), iVar1 == 0 &&
           (iVar1 = FUN_015ed828(param_1 + 0xc,param_2), iVar1 == 0)))))) {
        uVar6 = param_2[2];
LAB_012923a8:
        if ((uVar6 & 0x800000) == 0) {
          uVar2 = *param_2;
          uVar4 = 2;
          pcVar5 = *(code **)(param_2[1] + 0xc);
          pcVar3 = " }";
        }
        else {
          uVar2 = *param_2;
          uVar4 = 1;
          pcVar5 = *(code **)(param_2[1] + 0xc);
          pcVar3 = "}";
        }
        uVar2 = (*pcVar5)(uVar2,pcVar3,uVar4);
        return uVar2;
      }
    }
    else {
      iVar1 = (*pcVar5)(ppuVar7,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_44 = (undefined4 **)CONCAT31(local_44._1_3_,1);
        local_34 = ppuVar7;
        local_30 = (undefined *)iVar8;
        local_2c = &local_44;
        iVar1 = FUN_00fb1f64(&local_34,&DAT_00568e60,4);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a7c,2), iVar1 == 0)) {
          iVar1 = FUN_00fb8bb0(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_34,
                               &DAT_01880dc4);
          if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2), iVar1 == 0)) {
            local_3c = &local_35;
            local_28 = param_2[3];
            uVar6 = param_2[2];
            local_30 = &DAT_01880dc4;
            local_35 = 1;
            local_44 = ppuVar7;
            local_40 = iVar8;
            local_34 = &local_44;
            local_2c = (undefined4 **)uVar6;
            iVar1 = FUN_00fb1f64(&local_44,"inner",5);
            if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) {
              iVar1 = FUN_015ed828(param_1 + 0xc,&local_34);
              if (iVar1 != 0) {
                return 1;
              }
              iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
              if (iVar1 == 0) goto LAB_012923a8;
            }
          }
        }
      }
    }
  }
  return 1;
}


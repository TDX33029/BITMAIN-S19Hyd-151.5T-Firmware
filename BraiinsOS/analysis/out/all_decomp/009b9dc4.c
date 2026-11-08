// FUN_009b9dc4 @ 009b9dc4 size=472 calls_out=2 calls_in=0
// strings: inner | inner

undefined4 FUN_009b9dc4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  uint uVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar6 = *param_2;
  iVar7 = param_2[1];
  pcVar4 = *(code **)(iVar7 + 0xc);
  iVar1 = (*pcVar4)(uVar6,&DAT_0034a960,9);
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar6,&DAT_00414a79,3);
      if (((iVar1 == 0) && (iVar1 = (*pcVar4)(uVar6,"inner",5), iVar1 == 0)) &&
         (iVar1 = (*pcVar4)(uVar6,&DAT_00414a7c,2), iVar1 == 0)) {
        ClearExclusiveLocal();
        iVar1 = FUN_00faf408(*param_1,param_1[1],param_2);
        if (iVar1 == 0) {
          uVar5 = param_2[2];
LAB_009b9f54:
          if ((uVar5 & 0x800000) == 0) {
            uVar6 = *param_2;
            uVar3 = 2;
            pcVar4 = *(code **)(param_2[1] + 0xc);
            pcVar2 = " }";
          }
          else {
            uVar6 = *param_2;
            uVar3 = 1;
            pcVar4 = *(code **)(param_2[1] + 0xc);
            pcVar2 = "}";
          }
          uVar6 = (*pcVar4)(uVar6,pcVar2,uVar3);
          return uVar6;
        }
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar6,&DAT_00414a7e,3);
      if (iVar1 == 0) {
        local_3c = &local_35;
        uVar5 = param_2[2];
        local_28 = param_2[3];
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        local_35 = 1;
        local_44 = uVar6;
        local_40 = iVar7;
        local_2c = uVar5;
        iVar1 = FUN_00fb1f64(local_34,"inner",5);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a7c,2), iVar1 == 0)) {
          ClearExclusiveLocal();
          iVar1 = FUN_00faf408(*param_1,param_1[1],&local_34);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar1 == 0))
          goto LAB_009b9f54;
        }
      }
    }
  }
  return 1;
}


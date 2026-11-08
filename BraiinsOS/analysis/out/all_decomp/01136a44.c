// FUN_01136a44 @ 01136a44 size=716 calls_out=4 calls_in=0
// strings: StratumError

undefined4 FUN_01136a44(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 ***pppuVar5;
  int iVar6;
  uint uVar7;
  uint *puVar8;
  undefined4 ***local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 ***local_34;
  undefined *local_30;
  undefined4 ***local_2c;
  undefined4 local_28;
  
  pppuVar5 = (undefined4 ***)*param_2;
  iVar6 = param_2[1];
  iVar3 = *param_1;
  pcVar4 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar4)(pppuVar5,"StratumError",0xc);
  if (iVar1 == 0) {
    puVar8 = param_2 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(pppuVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0111ac40(*(undefined4 *)(iVar3 + 0x18),param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar7 = *puVar8;
    }
    else {
      iVar1 = (*pcVar4)(pppuVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      uVar7 = *puVar8;
      local_35 = 1;
      local_44 = pppuVar5;
      local_40 = iVar6;
      local_2c = (undefined4 ***)uVar7;
      iVar1 = FUN_0111ac40(*(undefined4 *)(iVar3 + 0x18),&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((uVar7 & 0x800000) == 0) {
      iVar6 = param_2[1];
      pppuVar5 = (undefined4 ***)*param_2;
      iVar1 = (**(code **)(iVar6 + 0xc))(pppuVar5,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),pppuVar5,iVar6);
      if (iVar1 != 0) {
        return 1;
      }
      pcVar4 = *(code **)(iVar6 + 0xc);
      iVar1 = (*pcVar4)(pppuVar5,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0112291c(iVar3 + 0xc,param_2);
      if (iVar1 == 0) {
LAB_01136cec:
        uVar2 = (*pcVar4)(pppuVar5,&DAT_00418e07,1);
        return uVar2;
      }
    }
    else {
      pppuVar5 = (undefined4 ***)*param_2;
      iVar6 = param_2[1];
      local_44 = (undefined4 ***)CONCAT31(local_44._1_3_,1);
      local_34 = pppuVar5;
      local_30 = (undefined *)iVar6;
      local_2c = &local_44;
      iVar1 = FUN_00faa4e8(*(undefined4 *)(iVar3 + 4),*(undefined4 *)(iVar3 + 8),&local_34,
                           &DAT_01880dc4);
      if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2), iVar1 == 0)) {
        local_3c = &local_35;
        local_2c = (undefined4 ***)*puVar8;
        local_28 = param_2[3];
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        local_44 = pppuVar5;
        local_40 = iVar6;
        local_34 = &local_44;
        iVar1 = FUN_0112291c(iVar3 + 0xc,&local_34);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2), iVar1 == 0)) {
          pcVar4 = *(code **)(iVar6 + 0xc);
          goto LAB_01136cec;
        }
      }
    }
  }
  return 1;
}


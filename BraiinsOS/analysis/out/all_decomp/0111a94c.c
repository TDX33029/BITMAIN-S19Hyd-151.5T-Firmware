// FUN_0111a94c @ 0111a94c size=712 calls_out=4 calls_in=0
// strings: StratumError

undefined4 FUN_0111a94c(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  undefined4 ***local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 ***local_34;
  undefined *local_30;
  undefined4 ***local_2c;
  undefined4 local_28;
  
  pppuVar4 = (undefined4 ***)*param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(pppuVar4,"StratumError",0xc);
  if (iVar1 == 0) {
    puVar7 = param_2 + 2;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(pppuVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0111ac40(*(undefined4 *)(param_1 + 0x18),param_2);
      if (iVar1 != 0) {
        return 1;
      }
      uVar6 = *puVar7;
    }
    else {
      iVar1 = (*pcVar3)(pppuVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_3c = &local_35;
      local_28 = param_2[3];
      local_30 = &DAT_01880dc4;
      local_34 = &local_44;
      uVar6 = *puVar7;
      local_35 = 1;
      local_44 = pppuVar4;
      local_40 = iVar5;
      local_2c = (undefined4 ***)uVar6;
      iVar1 = FUN_0111ac40(*(undefined4 *)(param_1 + 0x18),&local_34);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
      if (iVar1 != 0) {
        return 1;
      }
    }
    if ((uVar6 & 0x800000) == 0) {
      pppuVar4 = (undefined4 ***)*param_2;
      iVar5 = param_2[1];
      iVar1 = (**(code **)(iVar5 + 0xc))(pppuVar4,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),pppuVar4,iVar5)
      ;
      if (iVar1 != 0) {
        return 1;
      }
      pcVar3 = *(code **)(iVar5 + 0xc);
      iVar1 = (*pcVar3)(pppuVar4,&DAT_0041950f,2);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0112291c(param_1 + 0xc,param_2);
      if (iVar1 == 0) {
LAB_0111abf0:
        uVar2 = (*pcVar3)(pppuVar4,&DAT_00418e07,1);
        return uVar2;
      }
    }
    else {
      local_2c = &local_44;
      pppuVar4 = (undefined4 ***)*param_2;
      iVar5 = param_2[1];
      local_44 = (undefined4 ***)CONCAT31(local_44._1_3_,1);
      local_34 = pppuVar4;
      local_30 = (undefined *)iVar5;
      iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_34,
                           &DAT_01880dc4);
      if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2), iVar1 == 0)) {
        local_3c = &local_35;
        local_2c = (undefined4 ***)*puVar7;
        local_28 = param_2[3];
        local_34 = &local_44;
        local_35 = 1;
        local_30 = &DAT_01880dc4;
        local_44 = pppuVar4;
        local_40 = iVar5;
        iVar1 = FUN_0112291c(param_1 + 0xc,&local_34);
        if ((iVar1 == 0) && (iVar1 = FUN_00fb1f64(&local_44,&DAT_00414a81,2), iVar1 == 0)) {
          pcVar3 = *(code **)(iVar5 + 0xc);
          goto LAB_0111abf0;
        }
      }
    }
  }
  return 1;
}


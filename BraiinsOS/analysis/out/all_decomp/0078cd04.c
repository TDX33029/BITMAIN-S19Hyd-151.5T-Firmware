// FUN_0078cd04 @ 0078cd04 size=444 calls_out=3 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_0078cd04(int param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined4 ***pppuVar4;
  int iVar5;
  int local_44;
  undefined4 ***local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined4 ****local_30;
  undefined *local_2c;
  undefined4 ****local_28;
  undefined4 local_24;
  
  pppuVar4 = (undefined4 ***)*param_2;
  iVar5 = param_2[1];
  pcVar3 = *(code **)(iVar5 + 0xc);
  iVar1 = (*pcVar3)(pppuVar4,1,0);
  local_44 = param_1 + 0xc;
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(pppuVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),pppuVar4,iVar5);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (*pcVar3)(pppuVar4,&DAT_0041950f,2);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01090210(&local_44,param_2);
  }
  else {
    iVar1 = (*pcVar3)(pppuVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = (undefined4 ***)CONCAT31(local_40._1_3_,1);
    local_30 = (undefined4 ****)pppuVar4;
    local_2c = (undefined *)iVar5;
    local_28 = &local_40;
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                         &DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_28 = (undefined4 ****)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_2c = &DAT_01880dc4;
    local_40 = pppuVar4;
    local_3c = iVar5;
    local_30 = &local_40;
    iVar1 = FUN_01090210(&local_44,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}


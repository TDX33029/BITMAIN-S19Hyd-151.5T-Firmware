// FUN_015805f8 @ 015805f8 size=576 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_015805f8(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  undefined1 *puVar4;
  undefined *puVar5;
  int iVar6;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  iVar1 = *param_1 - 3;
  if (*param_1 < 3 || iVar1 == 0) {
    iVar1 = 0;
  }
  if (iVar1 == 0) {
    puVar4 = (undefined1 *)*param_2;
    iVar6 = param_2[1];
    pcVar3 = *(code **)(iVar6 + 0xc);
    iVar1 = (*pcVar3)(puVar4,"Io",2);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(puVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_015ed828(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      puVar4 = (undefined1 *)*param_2;
      pcVar3 = *(code **)(param_2[1] + 0xc);
      goto LAB_01580814;
    }
    iVar1 = (*pcVar3)(puVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar4;
    local_3c = iVar6;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_015ed828(param_1,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  else {
    if (iVar1 != 1) {
                    /* WARNING: Could not recover jumptable at 0x01580718. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"Parse",5);
      return uVar2;
    }
    puVar4 = (undefined1 *)*param_2;
    puVar5 = (undefined *)param_2[1];
    pcVar3 = *(code **)(puVar5 + 0xc);
    iVar1 = (*pcVar3)(puVar4,"Map",3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(puVar4,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_015829b0(param_1 + 4,puVar4,puVar5);
    }
    else {
      iVar1 = (*pcVar3)(puVar4,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
      local_30 = puVar4;
      local_2c = puVar5;
      local_28 = (undefined1 *)&local_40;
      iVar1 = FUN_015829b0(param_1 + 4,&local_30,&DAT_01880dc4);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_30,&DAT_00414a81,2);
    }
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_01580814:
  uVar2 = (*pcVar3)(puVar4,&DAT_00418e07,1);
  return uVar2;
}


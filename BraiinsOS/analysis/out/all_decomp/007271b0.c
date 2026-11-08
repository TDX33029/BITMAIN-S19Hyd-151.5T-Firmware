// FUN_007271b0 @ 007271b0 size=776 calls_out=4 calls_in=0
// strings: Base58Error | SerdeError

undefined4 FUN_007271b0(byte *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  char cVar4;
  code *pcVar5;
  undefined1 *puVar6;
  int iVar7;
  undefined *puVar8;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  ppuVar2 = &local_40;
  cVar4 = '\x01';
  if (5 < *param_1) {
    cVar4 = *param_1 - 6;
  }
  if (cVar4 == '\0') {
    puVar6 = (undefined1 *)*param_2;
    iVar7 = param_2[1];
    pcVar5 = *(code **)(iVar7 + 0xc);
    iVar1 = (*pcVar5)(puVar6,"SerdeError",10);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_0157c574(param_1 + 4,param_2);
    }
    else {
      iVar1 = (*pcVar5)(puVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar6;
      local_3c = iVar7;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_0157c574(param_1 + 4,&local_30);
      if (iVar1 != 0) {
        return 1;
      }
LAB_00727484:
      iVar1 = FUN_00fb1f64(ppuVar2,&DAT_00414a81,2);
    }
  }
  else if (cVar4 == '\x01') {
    puVar6 = (undefined1 *)*param_2;
    iVar7 = param_2[1];
    pcVar5 = *(code **)(iVar7 + 0xc);
    iVar1 = (*pcVar5)(puVar6,"Base58Error",0xb);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar5)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_007239d8(param_1,param_2);
      if (iVar1 != 0) {
        return 1;
      }
      puVar6 = (undefined1 *)*param_2;
      pcVar5 = *(code **)(param_2[1] + 0xc);
      goto LAB_00727494;
    }
    iVar1 = (*pcVar5)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01880dc4;
    local_28 = (undefined1 *)param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = puVar6;
    local_3c = iVar7;
    local_30 = (undefined1 *)&local_40;
    iVar1 = FUN_007239d8(param_1,&local_30);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
  }
  else {
    puVar6 = (undefined1 *)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar5 = *(code **)(puVar8 + 0xc);
    iVar1 = (*pcVar5)(puVar6,&DAT_0041200b,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar1 = (*pcVar5)(puVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
      local_30 = puVar6;
      local_2c = puVar8;
      local_28 = (undefined1 *)&local_40;
      iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                           &DAT_01880dc4);
      if (iVar1 != 0) {
        return 1;
      }
      ppuVar2 = &local_30;
      goto LAB_00727484;
    }
    iVar1 = (*pcVar5)(puVar6,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),puVar6,puVar8);
  }
  if (iVar1 != 0) {
    return 1;
  }
LAB_00727494:
  uVar3 = (*pcVar5)(puVar6,&DAT_00418e07,1);
  return uVar3;
}


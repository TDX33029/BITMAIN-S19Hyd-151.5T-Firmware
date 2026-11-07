// FUN_01061100 @ 01061100 size=724 calls_out=4 calls_in=1
// strings: Domain

undefined4 FUN_01061100(char *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined1 *puVar5;
  int iVar6;
  undefined *puVar7;
  undefined1 *local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined1 *local_28;
  undefined4 local_24;
  
  ppuVar2 = &local_40;
  if (*param_1 == '\0') {
    puVar5 = (undefined1 *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar7 + 0xc);
    iVar1 = (*pcVar4)(puVar5,"Domain",6);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),puVar5,puVar7);
      goto LAB_010613a8;
    }
    iVar1 = (*pcVar4)(puVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    local_30 = puVar5;
    local_2c = puVar7;
    local_28 = (undefined1 *)&local_40;
    iVar1 = FUN_00faa4e8(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),&local_30,
                         &DAT_01880dc4);
    if (iVar1 != 0) {
      return 1;
    }
    ppuVar2 = &local_30;
  }
  else {
    if (*param_1 == '\x01') {
      puVar5 = (undefined1 *)*param_2;
      iVar6 = param_2[1];
      pcVar4 = *(code **)(iVar6 + 0xc);
      iVar1 = (*pcVar4)(puVar5,&DAT_00569308,4);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(puVar5,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_00fb974c(param_1 + 1,param_2);
        goto LAB_010613a8;
      }
      iVar1 = (*pcVar4)(puVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar5;
      local_3c = iVar6;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_00fb974c(param_1 + 1,&local_30);
    }
    else {
      puVar5 = (undefined1 *)*param_2;
      iVar6 = param_2[1];
      pcVar4 = *(code **)(iVar6 + 0xc);
      iVar1 = (*pcVar4)(puVar5,&DAT_00568970,4);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(puVar5,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_00fb8fa0(param_1 + 1,param_2);
        goto LAB_010613a8;
      }
      iVar1 = (*pcVar4)(puVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01880dc4;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar5;
      local_3c = iVar6;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_00fb8fa0(param_1 + 1,&local_30);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = FUN_00fb1f64(ppuVar2,&DAT_00414a81,2);
LAB_010613a8:
  if (iVar1 == 0) {
    uVar3 = (*pcVar4)(puVar5,&DAT_00418e07,1);
    return uVar3;
  }
  return 1;
}


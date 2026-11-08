// FUN_013dc1fc @ 013dc1fc size=708 calls_out=4 calls_in=0
// strings: Domain

undefined4 FUN_013dc1fc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined1 **ppuVar2;
  undefined4 uVar3;
  code *pcVar4;
  char *pcVar5;
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
  pcVar5 = (char *)*param_1;
  if (*pcVar5 == '\0') {
    puVar6 = (undefined1 *)*param_2;
    puVar8 = (undefined *)param_2[1];
    pcVar4 = *(code **)(puVar8 + 0xc);
    iVar1 = (*pcVar4)(puVar6,"Domain",6);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(puVar6,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_012fb170(*(undefined4 *)(pcVar5 + 4),*(undefined4 *)(pcVar5 + 8),puVar6,puVar8);
      goto LAB_013dc494;
    }
    iVar1 = (*pcVar4)(puVar6,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_40 = (undefined1 *)CONCAT31(local_40._1_3_,1);
    local_30 = puVar6;
    local_2c = puVar8;
    local_28 = (undefined1 *)&local_40;
    iVar1 = FUN_012fb170(*(undefined4 *)(pcVar5 + 4),*(undefined4 *)(pcVar5 + 8),&local_30,
                         &DAT_01ce45f8);
    if (iVar1 != 0) {
      return 1;
    }
    ppuVar2 = &local_30;
  }
  else {
    if (*pcVar5 == '\x01') {
      puVar6 = (undefined1 *)*param_2;
      iVar7 = param_2[1];
      pcVar4 = *(code **)(iVar7 + 0xc);
      iVar1 = (*pcVar4)(puVar6,&DAT_0056f454,4);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(puVar6,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_013095bc(pcVar5 + 1,param_2);
        goto LAB_013dc494;
      }
      iVar1 = (*pcVar4)(puVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar6;
      local_3c = iVar7;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_013095bc(pcVar5 + 1,&local_30);
    }
    else {
      puVar6 = (undefined1 *)*param_2;
      iVar7 = param_2[1];
      pcVar4 = *(code **)(iVar7 + 0xc);
      iVar1 = (*pcVar4)(puVar6,&DAT_0056e984,4);
      if (iVar1 != 0) {
        return 1;
      }
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar4)(puVar6,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_01308e28(pcVar5 + 1,param_2);
        goto LAB_013dc494;
      }
      iVar1 = (*pcVar4)(puVar6,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_28 = (undefined1 *)param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = puVar6;
      local_3c = iVar7;
      local_30 = (undefined1 *)&local_40;
      iVar1 = FUN_01308e28(pcVar5 + 1,&local_30);
    }
    if (iVar1 != 0) {
      return 1;
    }
  }
  iVar1 = FUN_01302620(ppuVar2,&DAT_005312e2,2);
LAB_013dc494:
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (*pcVar4)(puVar6,&DAT_0053341b,1);
  }
  return uVar3;
}


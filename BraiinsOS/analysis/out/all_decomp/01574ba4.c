// FUN_01574ba4 @ 01574ba4 size=592 calls_out=3 calls_in=0
// strings: IpAddress | DnsName

undefined4 FUN_01574ba4(char *param_1,int *param_2)

{
  int iVar1;
  undefined4 uVar2;
  code *pcVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined *puVar7;
  undefined4 uVar8;
  int local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  int *local_34;
  undefined *local_30;
  int *local_2c;
  int local_28;
  
  if (*param_1 != '\x01') {
    piVar5 = (int *)*param_2;
    puVar7 = (undefined *)param_2[1];
    pcVar3 = *(code **)(puVar7 + 0xc);
    iVar1 = (*pcVar3)(piVar5,"DnsName",7);
    if (iVar1 != 0) {
      return 1;
    }
    uVar2 = *(undefined4 *)(param_1 + 8);
    uVar8 = *(undefined4 *)(param_1 + 0xc);
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar3)(piVar5,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00faa4e8(uVar2,uVar8,piVar5,puVar7);
    }
    else {
      iVar1 = (*pcVar3)(piVar5,"(\n",2);
      if (iVar1 != 0) {
        return 1;
      }
      local_2c = &local_44;
      local_44 = CONCAT31(local_44._1_3_,1);
      local_34 = piVar5;
      local_30 = puVar7;
      iVar1 = FUN_00faa4e8(uVar2,uVar8,&local_34,&DAT_01880dc4);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00fb1f64(&local_34,&DAT_00414a81,2);
    }
    if (iVar1 == 0) {
      uVar2 = (*pcVar3)(piVar5,&DAT_00418e07,1);
      return uVar2;
    }
    return 1;
  }
  iVar4 = *param_2;
  iVar6 = param_2[1];
  pcVar3 = *(code **)(iVar6 + 0xc);
  iVar1 = (*pcVar3)(iVar4,"IpAddress",9);
  if (iVar1 != 0) {
    return 1;
  }
  if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
    iVar1 = (*pcVar3)(iVar4,"(",1);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = FUN_01574e24(param_1 + 1,param_2);
  }
  else {
    iVar1 = (*pcVar3)(iVar4,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_3c = &local_35;
    local_30 = &DAT_01880dc4;
    local_34 = &local_44;
    local_2c = (int *)param_2[2];
    local_28 = param_2[3];
    local_35 = 1;
    local_44 = iVar4;
    local_40 = iVar6;
    iVar1 = FUN_01574e24(param_1 + 1,&local_34);
    if (iVar1 != 0) {
      return 1;
    }
    iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
  }
  if (iVar1 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}


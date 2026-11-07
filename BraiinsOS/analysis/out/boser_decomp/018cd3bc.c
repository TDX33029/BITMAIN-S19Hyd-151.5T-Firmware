// FUN_018cd3bc @ 018cd3bc size=360 calls_out=4 calls_in=0
// strings: IpAddress | DnsName

void FUN_018cd3bc(char *param_1,undefined4 *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 local_34;
  undefined4 *local_30;
  undefined1 local_2c;
  undefined1 local_2b;
  undefined4 local_28;
  undefined4 *local_24;
  undefined1 *local_20;
  undefined1 local_19;
  
  if (*param_1 == '\x01') {
    bVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,"IpAddress",9);
    local_20._0_2_ = (ushort)bVar1;
    local_28 = 0;
    local_24 = param_2;
    puVar3 = (undefined4 *)FUN_01302888(&local_28,param_1 + 1,FUN_01308e14);
  }
  else {
    iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"DnsName",7);
    uVar6 = *(undefined4 *)(param_1 + 8);
    uVar5 = *(undefined4 *)(param_1 + 0xc);
    uVar2 = 1;
    local_2b = 0;
    local_30 = param_2;
    if (iVar4 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar4 == 0) {
          uVar2 = FUN_012fb170(uVar6,uVar5,*param_2,param_2[1]);
        }
      }
      else {
        iVar4 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        uVar2 = 1;
        if (iVar4 == 0) {
          local_20 = &local_19;
          local_28 = *param_2;
          local_24 = (undefined4 *)param_2[1];
          local_19 = 1;
          iVar4 = FUN_012fb170(uVar6,uVar5,&local_28,&DAT_01ce45f8);
          if (iVar4 == 0) {
            uVar2 = FUN_01302620(&local_28,&DAT_005312e2,2);
          }
        }
      }
    }
    puVar3 = &local_34;
    local_34 = 1;
    local_2c = uVar2;
  }
  FUN_01302aa0(puVar3);
  return;
}


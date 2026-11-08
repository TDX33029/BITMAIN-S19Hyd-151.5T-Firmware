// FUN_01939214 @ 01939214 size=708 calls_out=4 calls_in=0
// strings: IpAddress | DnsName

void FUN_01939214(char *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 *puVar3;
  char *pcVar4;
  code *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 *local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  char *local_34;
  undefined *local_30;
  undefined4 *local_2c;
  undefined4 local_28;
  char *local_24;
  
  if (*param_1 == '\x01') {
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"IpAddress",9);
    local_48 = 1;
    local_47 = 0;
    local_4c = param_2;
    if (iVar2 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar2 == 0) {
          local_34 = param_1 + 2;
          if (param_1[1] == '\x01') {
            pcVar4 = "V6";
            pcVar5 = FUN_01938f64;
          }
          else {
            pcVar4 = "V4";
            pcVar5 = FUN_019390bc;
          }
          local_48 = FUN_013032f4(param_2,pcVar4,2,&local_34,pcVar5);
        }
      }
      else {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        local_48 = 1;
        if (iVar2 == 0) {
          local_3c = &local_35;
          local_2c = (undefined4 *)param_2[2];
          local_28 = param_2[3];
          local_35 = 1;
          local_44 = *param_2;
          local_40 = (undefined4 *)param_2[1];
          local_30 = &DAT_01ce45f8;
          local_24 = param_1 + 2;
          local_34 = (char *)&local_44;
          if (param_1[1] == '\x01') {
            pcVar4 = "V6";
            pcVar5 = FUN_01938f64;
          }
          else {
            pcVar4 = "V4";
            pcVar5 = FUN_019390bc;
          }
          iVar2 = FUN_013032f4(&local_34,pcVar4,2,&local_24,pcVar5);
          if (iVar2 == 0) {
            local_48 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
          }
          else {
            local_48 = 1;
          }
        }
      }
    }
    local_50 = 1;
    puVar3 = &local_50;
  }
  else {
    iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"DnsName",7);
    uVar7 = *(undefined4 *)(param_1 + 8);
    uVar6 = *(undefined4 *)(param_1 + 0xc);
    uVar1 = 1;
    local_3c._0_2_ = (ushort)(byte)local_3c;
    local_40 = param_2;
    if (iVar2 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(",1);
        if (iVar2 == 0) {
          uVar1 = FUN_012fb170(uVar7,uVar6,*param_2,param_2[1]);
        }
      }
      else {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,"(\n",2);
        uVar1 = 1;
        if (iVar2 == 0) {
          local_2c = &local_50;
          local_34 = (char *)*param_2;
          local_30 = (undefined *)param_2[1];
          local_50 = CONCAT31(local_50._1_3_,1);
          iVar2 = FUN_012fb170(uVar7,uVar6,&local_34,&DAT_01ce45f8);
          if (iVar2 == 0) {
            uVar1 = FUN_01302620(&local_34,&DAT_005312e2,2);
          }
        }
      }
    }
    puVar3 = &local_44;
    local_44 = 1;
    local_3c = (undefined1 *)CONCAT31(local_3c._1_3_,uVar1);
  }
  FUN_01302aa0(puVar3);
  return;
}


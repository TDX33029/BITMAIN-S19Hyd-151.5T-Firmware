// FUN_01094980 @ 01094980 size=872 calls_out=4 calls_in=1
// strings: SubnetExpireKeepalive

undefined4 FUN_01094980(char *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  undefined4 local_44;
  int local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  if (*param_1 == '\x01') {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0040d566,7);
    if (iVar1 == 0) {
      puVar6 = param_2 + 2;
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar2)(uVar3,"(",1);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_01094e68(*(undefined2 *)(param_1 + 2),param_2);
        if (iVar1 != 0) {
          return 1;
        }
        uVar5 = *puVar6;
      }
      else {
        iVar1 = (*pcVar2)(uVar3,"(\n",2);
        if (iVar1 != 0) {
          return 1;
        }
        local_3c = &local_35;
        local_28 = param_2[3];
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        uVar5 = *puVar6;
        local_35 = 1;
        local_44 = uVar3;
        local_40 = iVar4;
        local_2c = uVar5;
        iVar1 = FUN_01094e68(*(undefined2 *)(param_1 + 2),&local_34);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2);
        if (iVar1 != 0) {
          return 1;
        }
      }
      if ((uVar5 & 0x800000) == 0) {
        iVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0041950f,2);
        if (iVar1 != 0) {
          return 1;
        }
        iVar1 = FUN_01090d94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),param_2);
        if (iVar1 == 0) {
          uVar3 = *param_2;
          iVar4 = param_2[1];
LAB_01094cc0:
          uVar3 = (**(code **)(iVar4 + 0xc))(uVar3,&DAT_00418e07,1);
          return uVar3;
        }
      }
      else {
        local_3c = &local_35;
        local_2c = *puVar6;
        local_28 = param_2[3];
        local_30 = &DAT_01880dc4;
        local_34 = &local_44;
        uVar3 = *param_2;
        iVar4 = param_2[1];
        local_35 = 1;
        local_44 = uVar3;
        local_40 = iVar4;
        iVar1 = FUN_01090d94(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc),&local_34);
        if ((iVar1 == 0) &&
           (iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar1 == 0))
        goto LAB_01094cc0;
      }
    }
  }
  else {
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"SubnetExpireKeepalive",6);
    if (iVar1 == 0) {
      if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
        iVar1 = (*pcVar2)(uVar3,"(",1);
        if ((iVar1 == 0) && (iVar1 = FUN_01094d24(param_1 + 1,param_2), iVar1 == 0)) {
          uVar3 = *param_2;
          pcVar2 = *(code **)(param_2[1] + 0xc);
LAB_01094b20:
          uVar3 = (*pcVar2)(uVar3,&DAT_00418e07,1);
          return uVar3;
        }
      }
      else {
        iVar1 = (*pcVar2)(uVar3,"(\n",2);
        if (iVar1 == 0) {
          local_3c = &local_35;
          local_30 = &DAT_01880dc4;
          local_34 = &local_44;
          local_2c = param_2[2];
          local_28 = param_2[3];
          local_35 = 1;
          local_44 = uVar3;
          local_40 = iVar4;
          iVar1 = FUN_01094d24(param_1 + 1,&local_34);
          if ((iVar1 == 0) &&
             (iVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_00414a81,2), iVar1 == 0))
          goto LAB_01094b20;
        }
      }
    }
  }
  return 1;
}


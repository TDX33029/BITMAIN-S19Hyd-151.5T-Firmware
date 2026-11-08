// FUN_00727cc0 @ 00727cc0 size=420 calls_out=3 calls_in=1
// strings: SubnetExpireKeepalive

undefined4 FUN_00727cc0(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  char *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  if (*param_1 == '\x01') {
    local_28 = param_1 + 4;
    uVar1 = FUN_00fb2978(param_2,&DAT_0040d566,7,param_1 + 2,FUN_00786d00,&local_28,FUN_007b88ec);
    return uVar1;
  }
  uVar1 = *param_2;
  iVar4 = param_2[1];
  pcVar3 = *(code **)(iVar4 + 0xc);
  iVar2 = (*pcVar3)(uVar1,"SubnetExpireKeepalive",6);
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_01094d24(param_1 + 1,param_2);
    }
    else {
      iVar2 = (*pcVar3)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_24 = &DAT_01880dc4;
      local_28 = (char *)&local_38;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_29 = 1;
      local_38 = uVar1;
      local_34 = iVar4;
      iVar2 = FUN_01094d24(param_1 + 1,&local_28);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
    }
    if (iVar2 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
      return uVar1;
    }
  }
  return 1;
}


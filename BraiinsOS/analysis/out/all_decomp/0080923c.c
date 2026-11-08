// FUN_0080923c @ 0080923c size=1092 calls_out=6 calls_in=0
// strings: Power

undefined4 FUN_0080923c(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  code *pcVar4;
  int iVar5;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  byte *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  cVar3 = *param_1 - 4;
  if (*param_1 < 4) {
    cVar3 = '\x04';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
    local_28 = param_1 + 0xc;
    uVar1 = FUN_00fb2b98(param_2,&DAT_00355cbd,0x12,param_1 + 4,FUN_007883b8,param_1 + 8,
                         FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar1;
  case '\x01':
    local_28 = param_1 + 8;
    uVar1 = FUN_00fb2978(param_2,&DAT_00355ccf,0xc,param_1 + 4,FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar1;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x00809358. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00355cdb,0xf);
    return uVar1;
  case '\x03':
    local_28 = param_1 + 8;
    uVar1 = FUN_00fb2978(param_2,&DAT_00355cea,0xb,param_1 + 4,FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar1;
  case '\x04':
    uVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = *(code **)(iVar5 + 0xc);
    iVar2 = (*pcVar4)(uVar1,"Power",5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_008a22e0(param_1,param_2);
      goto LAB_0080966c;
    }
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_24 = &DAT_01880dc4;
    local_28 = (byte *)&local_38;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_29 = 1;
    local_38 = uVar1;
    local_34 = iVar5;
    iVar2 = FUN_008a22e0(param_1,&local_28);
    break;
  case '\x05':
    uVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = *(code **)(iVar5 + 0xc);
    iVar2 = (*pcVar4)(uVar1,&DAT_0041200b,5);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00603f68(*(undefined4 *)(param_1 + 4),param_2);
      goto LAB_0080966c;
    }
    iVar2 = (*pcVar4)(uVar1,"(\n",2);
    if (iVar2 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_29 = 1;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01880dc4;
    local_28 = (byte *)&local_38;
    local_38 = uVar1;
    local_34 = iVar5;
    iVar2 = FUN_00603f68(*(undefined4 *)(param_1 + 4),&local_28);
    break;
  case '\x06':
    uVar1 = *param_2;
    iVar5 = param_2[1];
    pcVar4 = *(code **)(iVar5 + 0xc);
    iVar2 = (*pcVar4)(uVar1,&DAT_00355cf5,0xe);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar1,"(",1);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_007f3104(param_1,param_2);
    }
    else {
      iVar2 = (*pcVar4)(uVar1,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_24 = &DAT_01880dc4;
      local_28 = (byte *)&local_38;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_29 = 1;
      local_38 = uVar1;
      local_34 = iVar5;
      iVar2 = FUN_007f3104(param_1,&local_28);
      if (iVar2 != 0) {
        return 1;
      }
      iVar2 = FUN_00fb1f64(&local_38,&DAT_00414a81,2);
    }
    goto LAB_0080966c;
  case '\a':
                    /* WARNING: Could not recover jumptable at 0x008093bc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00411fde,0xb);
    return uVar1;
  }
  if (iVar2 != 0) {
    return 1;
  }
  iVar2 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
LAB_0080966c:
  if (iVar2 == 0) {
    uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar1;
  }
  return 1;
}


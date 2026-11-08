// FUN_00c72368 @ 00c72368 size=1084 calls_out=6 calls_in=0
// strings: Power

undefined4 FUN_00c72368(undefined4 *param_1,undefined4 *param_2)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  byte *pbVar4;
  code *pcVar5;
  int iVar6;
  undefined4 local_38;
  int local_34;
  undefined1 *local_30;
  undefined1 local_29;
  byte *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
  pbVar4 = (byte *)*param_1;
  cVar1 = *pbVar4 - 4;
  if (*pbVar4 < 4) {
    cVar1 = '\x04';
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar1) {
  case '\0':
    local_28 = pbVar4 + 0xc;
    uVar2 = FUN_00fb2b98(param_2,&DAT_00355cbd,0x12,pbVar4 + 4,FUN_007883b8,pbVar4 + 8,FUN_007883b8,
                         &local_28,FUN_00d47d08);
    return uVar2;
  case '\x01':
    local_28 = pbVar4 + 8;
    uVar2 = FUN_00fb2978(param_2,&DAT_00355ccf,0xc,pbVar4 + 4,FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar2;
  case '\x02':
                    /* WARNING: Could not recover jumptable at 0x00c72484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&UNK_00355cdb,0xf);
    return uVar2;
  case '\x03':
    local_28 = pbVar4 + 8;
    uVar2 = FUN_00fb2978(param_2,&DAT_00355cea,0xb,pbVar4 + 4,FUN_007883b8,&local_28,FUN_00d47d08);
    return uVar2;
  case '\x04':
    uVar2 = *param_2;
    iVar6 = param_2[1];
    pcVar5 = *(code **)(iVar6 + 0xc);
    iVar3 = (*pcVar5)(uVar2,"Power",5);
    if (iVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar5)(uVar2,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_008e2af4(pbVar4,param_2);
      goto LAB_00c72790;
    }
    iVar3 = (*pcVar5)(uVar2,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_30 = &local_29;
    local_24 = &DAT_01880dc4;
    local_28 = (byte *)&local_38;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_29 = 1;
    local_38 = uVar2;
    local_34 = iVar6;
    iVar3 = FUN_008e2af4(pbVar4,&local_28);
    break;
  case '\x05':
    uVar2 = *param_2;
    iVar6 = param_2[1];
    pcVar5 = *(code **)(iVar6 + 0xc);
    iVar3 = (*pcVar5)(uVar2,&DAT_0041200b,5);
    if (iVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar5)(uVar2,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_00603f68(*(undefined4 *)(pbVar4 + 4),param_2);
      goto LAB_00c72790;
    }
    iVar3 = (*pcVar5)(uVar2,"(\n",2);
    if (iVar3 != 0) {
      return 1;
    }
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_29 = 1;
    local_30 = &local_29;
    local_24 = &DAT_01880dc4;
    local_28 = (byte *)&local_38;
    local_38 = uVar2;
    local_34 = iVar6;
    iVar3 = FUN_00603f68(*(undefined4 *)(pbVar4 + 4),&local_28);
    break;
  case '\x06':
    uVar2 = *param_2;
    iVar6 = param_2[1];
    pcVar5 = *(code **)(iVar6 + 0xc);
    iVar3 = (*pcVar5)(uVar2,&DAT_00355cf5,0xe);
    if (iVar3 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar3 = (*pcVar5)(uVar2,"(",1);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_007f3104(pbVar4,param_2);
    }
    else {
      iVar3 = (*pcVar5)(uVar2,"(\n",2);
      if (iVar3 != 0) {
        return 1;
      }
      local_30 = &local_29;
      local_24 = &DAT_01880dc4;
      local_28 = (byte *)&local_38;
      local_20 = param_2[2];
      local_1c = param_2[3];
      local_29 = 1;
      local_38 = uVar2;
      local_34 = iVar6;
      iVar3 = FUN_007f3104(pbVar4,&local_28);
      if (iVar3 != 0) {
        return 1;
      }
      iVar3 = FUN_00fb1f64(&local_38,&DAT_00414a81,2);
    }
    goto LAB_00c72790;
  case '\a':
                    /* WARNING: Could not recover jumptable at 0x00c724e8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00411fde,0xb);
    return uVar2;
  }
  if (iVar3 != 0) {
    return 1;
  }
  iVar3 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
LAB_00c72790:
  if (iVar3 == 0) {
    uVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
    return uVar2;
  }
  return 1;
}


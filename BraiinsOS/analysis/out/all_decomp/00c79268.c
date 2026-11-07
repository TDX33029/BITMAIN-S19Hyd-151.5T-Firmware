// FUN_00c79268 @ 00c79268 size=852 calls_out=5 calls_in=0
// strings: UnexpectedVersionV1HexDecodeBitcoinHashTimeout

undefined4 FUN_00c79268(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *local_44;
  undefined1 local_3d;
  undefined4 local_3c;
  int local_38;
  undefined1 **local_34;
  undefined4 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_30 = (undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_00fb2978(param_2,&DAT_00355d03,0x11,param_1 + 8,FUN_00809c90,&local_30,FUN_00c5a658)
    ;
    return uVar3;
  case 1:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    local_44 = param_1 + 8;
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_00355d14,0xc);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00c5a658(&local_44,param_2);
      goto LAB_00c795a0;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = (undefined1 **)&local_3d;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_2c = &DAT_01880dc4;
    local_30 = &local_3c;
    local_3d = 1;
    local_3c = uVar3;
    local_38 = iVar4;
    iVar1 = FUN_00c5a658(&local_44,&local_30);
    break;
  case 2:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,"UnexpectedVersionV1HexDecodeBitcoinHashTimeout",0x11);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_01402444(param_1 + 1,param_2);
      goto LAB_00c795a0;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = &local_44;
    local_2c = &DAT_01880dc4;
    local_30 = &local_3c;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_44 = (undefined1 *)CONCAT31(local_44._1_3_,1);
    local_3c = uVar3;
    local_38 = iVar4;
    iVar1 = FUN_01402444(param_1 + 1,&local_30);
    break;
  case 3:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    pcVar2 = *(code **)(iVar4 + 0xc);
    iVar1 = (*pcVar2)(uVar3,&DAT_0041200b,5);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar2)(uVar3,"(",1);
      if (iVar1 != 0) {
        return 1;
      }
      iVar1 = FUN_00603f68(*(undefined4 *)(param_1 + 4),param_2);
      goto LAB_00c795a0;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_34 = &local_44;
    local_44 = (undefined1 *)CONCAT31(local_44._1_3_,1);
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_2c = &DAT_01880dc4;
    local_30 = &local_3c;
    local_3c = uVar3;
    local_38 = iVar4;
    iVar1 = FUN_00603f68(*(undefined4 *)(param_1 + 4),&local_30);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_2c + 0xc))(local_30,&DAT_00414a81,2);
LAB_00c795a0:
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar3;
}


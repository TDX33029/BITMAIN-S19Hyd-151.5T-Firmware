// FUN_008a22e0 @ 008a22e0 size=852 calls_out=5 calls_in=1
// strings: UnexpectedVersionV1HexDecodeBitcoinHashTimeout

undefined4 FUN_008a22e0(undefined1 *param_1,undefined4 *param_2)

{
  int iVar1;
  code *pcVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 local_34;
  int local_30;
  undefined1 **local_2c;
  undefined4 *local_28;
  undefined *local_24;
  undefined4 local_20;
  undefined4 local_1c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    local_28 = (undefined4 *)(param_1 + 0x10);
    uVar3 = FUN_00fb2978(param_2,&DAT_00355d03,0x11,param_1 + 8,FUN_00809c90,&local_28,FUN_00c5a658)
    ;
    return uVar3;
  case 1:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    local_3c = param_1 + 8;
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
      iVar1 = FUN_00c5a658(&local_3c,param_2);
      goto LAB_008a2618;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_2c = (undefined1 **)&local_35;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01880dc4;
    local_28 = &local_34;
    local_35 = 1;
    local_34 = uVar3;
    local_30 = iVar4;
    iVar1 = FUN_00c5a658(&local_3c,&local_28);
    break;
  case 2:
    uVar3 = *param_2;
    iVar4 = param_2[1];
    local_3c = param_1 + 1;
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
      iVar1 = FUN_01135a50(&local_3c,param_2);
      goto LAB_008a2618;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_2c = (undefined1 **)&local_35;
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01880dc4;
    local_28 = &local_34;
    local_35 = 1;
    local_34 = uVar3;
    local_30 = iVar4;
    iVar1 = FUN_01135a50(&local_3c,&local_28);
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
      goto LAB_008a2618;
    }
    iVar1 = (*pcVar2)(uVar3,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_2c = &local_3c;
    local_3c = (undefined1 *)CONCAT31(local_3c._1_3_,1);
    local_20 = param_2[2];
    local_1c = param_2[3];
    local_24 = &DAT_01880dc4;
    local_28 = &local_34;
    local_34 = uVar3;
    local_30 = iVar4;
    iVar1 = FUN_00603f68(*(undefined4 *)(param_1 + 4),&local_28);
  }
  if (iVar1 != 0) {
    return 1;
  }
  iVar1 = (**(code **)(local_24 + 0xc))(local_28,&DAT_00414a81,2);
LAB_008a2618:
  uVar3 = 1;
  if (iVar1 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00418e07,1);
  }
  return uVar3;
}


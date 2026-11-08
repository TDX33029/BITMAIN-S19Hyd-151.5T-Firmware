// FUN_013a2c60 @ 013a2c60 size=1044 calls_out=3 calls_in=0
// strings: ReverseSuffix

byte FUN_013a2c60(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_98;
  undefined4 *local_94;
  byte local_90;
  byte local_8f;
  undefined4 local_8c;
  undefined4 local_88;
  undefined1 *local_84;
  undefined1 local_7d;
  undefined4 *local_7c;
  undefined *local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 *local_6c;
  int local_68;
  undefined *local_64;
  int local_60;
  undefined *local_5c;
  int local_58;
  undefined *local_54;
  int local_50;
  undefined *local_4c;
  int local_48;
  undefined *local_44;
  int local_40;
  undefined *local_3c;
  int local_38;
  undefined *local_34;
  int local_30;
  undefined *local_2c;
  undefined4 **local_28;
  undefined *local_24;
  
  local_98 = param_1 + 0xc10;
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar4,"ReverseSuffix",0xd);
  bVar1 = 1;
  local_94 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_005675a0,4);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_28 = &local_7c;
            local_38 = param_1 + 0xac4;
            local_40 = param_1 + 0xaa8;
            local_48 = param_1 + 0xa90;
            local_50 = param_1 + 0xc08;
            local_58 = param_1 + 0xc04;
            local_60 = param_1 + 0xa80;
            local_68 = param_1 + 0xc00;
            local_24 = &DAT_01893678;
            local_2c = &DAT_01893668;
            local_34 = &DAT_01893658;
            local_3c = &DAT_01893648;
            local_4c = &DAT_01893628;
            local_7c = (undefined4 *)(param_1 + 0x510);
            local_5c = &DAT_01893608;
            local_44 = &DAT_01893638;
            local_54 = &DAT_01893618;
            local_64 = &DAT_018935f8;
            local_30 = param_1;
            bVar1 = FUN_00fb36b8(param_2,&DAT_00567cbc,4,&DAT_01893688,9,&local_68,9);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_8c = *param_2;
        local_88 = param_2[1];
        local_74 = param_2[2];
        local_70 = param_2[3];
        local_84 = &local_7d;
        local_7c = &local_8c;
        local_7d = 1;
        local_78 = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_7c,&DAT_005675a0,4);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_8c,&DAT_00414a7c,2), iVar2 == 0)) {
          local_28 = &local_6c;
          local_38 = param_1 + 0xac4;
          local_40 = param_1 + 0xaa8;
          local_48 = param_1 + 0xa90;
          local_50 = param_1 + 0xc08;
          local_58 = param_1 + 0xc04;
          local_60 = param_1 + 0xa80;
          local_68 = param_1 + 0xc00;
          local_24 = &DAT_01893678;
          local_2c = &DAT_01893668;
          local_34 = &DAT_01893658;
          local_3c = &DAT_01893648;
          local_5c = &DAT_01893608;
          local_6c = (undefined4 *)(param_1 + 0x510);
          local_44 = &DAT_01893638;
          local_4c = &DAT_01893628;
          local_54 = &DAT_01893618;
          local_64 = &DAT_018935f8;
          local_30 = param_1;
          iVar2 = FUN_00fb36b8(&local_7c,&DAT_00567cbc,4,&DAT_01893688,9,&local_68,9);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_78 + 0xc))(local_7c,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_8f = 1;
  local_90 = bVar1;
  FUN_00fb2258(&local_94,&DAT_003ceba6,3,&local_98,FUN_013ccc48);
  if (local_8f != 1 || (local_90 & 1) != 0) {
    return (local_8f | local_90) & 1;
  }
  if ((*(byte *)((int)local_94 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_94[1] + 0xc))(*local_94," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_94[1] + 0xc))(*local_94,"}",1);
  return bVar1 & 1;
}


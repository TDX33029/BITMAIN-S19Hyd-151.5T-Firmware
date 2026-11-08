// FUN_013ab2a8 @ 013ab2a8 size=676 calls_out=3 calls_in=0
// strings: group_info

byte FUN_013ab2a8(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  code *pcVar3;
  undefined4 uVar4;
  int local_54;
  undefined4 *local_50;
  byte local_4c;
  byte local_4b;
  undefined4 local_48;
  undefined4 local_44;
  undefined1 *local_40;
  undefined1 local_39;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  int local_28;
  
  uVar4 = *param_2;
  pcVar3 = *(code **)(param_2[1] + 0xc);
  local_54 = param_1;
  iVar2 = (*pcVar3)(uVar4,"Pre",3);
  bVar1 = 1;
  local_50 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003ceba6,3);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_38 = (undefined4 *)(param_1 + 5);
            bVar1 = FUN_00fb2978(param_2,&DAT_003cebdb,7,param_1 + 4,FUN_0078955c,&local_38,
                                 FUN_01135a50);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar4,&DAT_00414a7e,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        local_48 = *param_2;
        local_44 = param_2[1];
        local_30 = param_2[2];
        local_2c = param_2[3];
        local_40 = &local_39;
        local_38 = &local_48;
        local_39 = 1;
        local_34 = &DAT_01880dc4;
        iVar2 = FUN_00fb1f64(local_38,&DAT_003ceba6,3);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_48,&DAT_00414a7c,2), iVar2 == 0)) {
          local_28 = param_1 + 5;
          iVar2 = FUN_00fb2978(&local_38,&DAT_003cebdb,7,param_1 + 4,FUN_0078955c,&local_28,
                               FUN_01135a50);
          if (iVar2 == 0) {
            bVar1 = (**(code **)(local_34 + 0xc))(local_38,&DAT_00414a81,2);
          }
          else {
            bVar1 = 1;
          }
        }
      }
    }
  }
  local_4b = 1;
  local_4c = bVar1;
  FUN_00fb2258(&local_50,"group_info",10,&local_54,FUN_013bc33c);
  if (local_4b != 1 || (local_4c & 1) != 0) {
    return (local_4b | local_4c) & 1;
  }
  if ((*(byte *)((int)local_50 + 10) & 0x80) == 0) {
    bVar1 = (**(code **)(local_50[1] + 0xc))(*local_50," }",2);
    return bVar1 & 1;
  }
  bVar1 = (**(code **)(local_50[1] + 0xc))(*local_50,"}",1);
  return bVar1 & 1;
}


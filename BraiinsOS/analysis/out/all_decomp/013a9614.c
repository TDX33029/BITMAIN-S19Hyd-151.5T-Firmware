// FUN_013a9614 @ 013a9614 size=912 calls_out=3 calls_in=0
// strings: SearcherVithkuqi | SearcherVithkuqi

byte FUN_013a9614(int param_1,undefined4 *param_2)

{
  byte bVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
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
  
  uVar3 = *param_2;
  local_54 = param_1 + 0x18c;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar4)(uVar3,&DAT_003ceb75,5);
  bVar1 = 1;
  local_50 = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar4)(uVar3,&DAT_00414a79,3);
      bVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00569d78,8);
        bVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_00414a7c,2);
          bVar1 = 1;
          if (iVar2 == 0) {
            local_38 = (undefined4 *)(param_1 + 0x2c);
            bVar1 = FUN_00fb34b0(param_2,"SearcherVithkuqi",8,&DAT_0056a850,8,param_1 + 0x18,
                                 FUN_013c44b4,&DAT_003ceb56,9,param_1,FUN_013a9ba0,&DAT_003ceb5f,0xb
                                 ,param_1 + 0x1c,FUN_005fdfac,&DAT_003ceb6a,0xb,&local_38,
                                 FUN_00d47d08);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar4)(uVar3,&DAT_00414a7e,3);
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
        iVar2 = FUN_00fb1f64(local_38,&DAT_00569d78,8);
        if ((iVar2 == 0) && (iVar2 = FUN_00fb1f64(&local_48,&DAT_00414a7c,2), iVar2 == 0)) {
          local_28 = param_1 + 0x2c;
          iVar2 = FUN_00fb34b0(&local_38,"SearcherVithkuqi",8,&DAT_0056a850,8,param_1 + 0x18,
                               FUN_013c44b4,&DAT_003ceb56,9,param_1,FUN_013a9ba0,&DAT_003ceb5f,0xb,
                               param_1 + 0x1c,FUN_005fdfac,&DAT_003ceb6a,0xb,&local_28,FUN_00d47d08)
          ;
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
  uVar3 = FUN_00fb2258(&local_50,&DAT_003cebbe,0xb,param_1 + 0x30,FUN_005f04f0);
  FUN_00fb2258(uVar3,&DAT_003ceb6a,0xb,&local_54,FUN_00d47d08);
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


// FUN_00c37b48 @ 00c37b48 size=1076 calls_out=3 calls_in=0
// strings: frequency

byte FUN_00c37b48(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  byte bVar2;
  int iVar3;
  undefined *puVar4;
  undefined4 uVar5;
  int local_a0;
  undefined4 *local_9c;
  byte local_98;
  byte local_97;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 *local_8c;
  undefined1 local_85;
  undefined4 *local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined4 local_78;
  undefined4 *local_74;
  int local_70;
  undefined *local_6c;
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
  
  local_a0 = param_1 + 4;
  local_98 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_003545ba,0xc);
  local_97 = '\0';
  local_9c = param_2;
  FUN_00fb2258(&local_9c,"frequency",9,param_1,FUN_008c38c0);
  puVar1 = local_9c;
  bVar2 = 1;
  if (local_98 == '\0') {
    if ((*(byte *)((int)local_9c + 10) & 0x80) == 0) {
      puVar4 = &DAT_0041950f;
      if (local_97 == '\0') {
        puVar4 = &DAT_00414a79;
      }
      uVar5 = 3;
      if (local_97 != '\0') {
        uVar5 = 2;
      }
      iVar3 = (**(code **)(local_9c[1] + 0xc))(*local_9c,puVar4,uVar5);
      bVar2 = 1;
      if (iVar3 == 0) {
        iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_003545c6,6);
        bVar2 = 1;
        if (iVar3 == 0) {
          iVar3 = (**(code **)(puVar1[1] + 0xc))(*puVar1,&DAT_00414a7c,2);
          bVar2 = 1;
          if (iVar3 == 0) {
            local_28 = &local_84;
            local_30 = param_1 + 0xb;
            local_38 = param_1 + 10;
            local_40 = param_1 + 0x12;
            local_48 = param_1 + 0x11;
            local_58 = param_1 + 0x10;
            local_60 = param_1 + 0xf;
            local_68 = param_1 + 0xe;
            local_70 = param_1 + 0xd;
            local_3c = &DAT_01873590;
            local_44 = &DAT_01873590;
            local_54 = &DAT_01873590;
            local_5c = &DAT_01873590;
            local_64 = &DAT_01873590;
            local_6c = &DAT_01873590;
            local_84 = (undefined4 *)(param_1 + 0xc);
            local_24 = &DAT_018735d0;
            local_2c = &DAT_018735c0;
            local_34 = &DAT_018735b0;
            local_4c = &DAT_018735a0;
            local_50 = param_1 + 8;
            bVar2 = FUN_00fb36b8(puVar1,&DAT_00563d50,0x10,&DAT_018735e0,10,&local_70,10);
          }
        }
      }
    }
    else {
      if (local_97 == '\0') {
        iVar3 = (**(code **)(local_9c[1] + 0xc))(*local_9c,&DAT_00414a7e,3);
        bVar2 = 1;
        if (iVar3 != 0) goto LAB_00c37bc0;
      }
      local_94 = *puVar1;
      local_90 = puVar1[1];
      local_7c = puVar1[2];
      local_78 = puVar1[3];
      local_8c = &local_85;
      local_84 = &local_94;
      local_80 = &DAT_01880dc4;
      bVar2 = 1;
      local_85 = 1;
      iVar3 = FUN_00fb1f64(local_84,&DAT_003545c6,6);
      if ((iVar3 == 0) && (iVar3 = FUN_00fb1f64(&local_94,&DAT_00414a7c,2), iVar3 == 0)) {
        local_28 = &local_74;
        local_30 = param_1 + 0xb;
        local_38 = param_1 + 10;
        local_40 = param_1 + 0x12;
        local_48 = param_1 + 0x11;
        local_58 = param_1 + 0x10;
        local_60 = param_1 + 0xf;
        local_68 = param_1 + 0xe;
        local_70 = param_1 + 0xd;
        local_3c = &DAT_01873590;
        local_44 = &DAT_01873590;
        local_54 = &DAT_01873590;
        local_5c = &DAT_01873590;
        local_64 = &DAT_01873590;
        local_6c = &DAT_01873590;
        local_74 = (undefined4 *)(param_1 + 0xc);
        local_24 = &DAT_018735d0;
        local_2c = &DAT_018735c0;
        local_34 = &DAT_018735b0;
        local_4c = &DAT_018735a0;
        local_50 = param_1 + 8;
        iVar3 = FUN_00fb36b8(&local_84,&DAT_00563d50,0x10,&DAT_018735e0,10,&local_70,10);
        if (iVar3 == 0) {
          bVar2 = (**(code **)(local_80 + 0xc))(local_84,&DAT_00414a81,2);
        }
        else {
          bVar2 = 1;
        }
      }
    }
  }
LAB_00c37bc0:
  local_97 = 1;
  local_98 = bVar2;
  FUN_00fb2258(&local_9c,&DAT_00569548,4,&local_a0,FUN_008b8e48);
  if (local_97 != 1 || (local_98 & 1) != 0) {
    return (local_97 | local_98) & 1;
  }
  if ((*(byte *)((int)local_9c + 10) & 0x80) == 0) {
    bVar2 = (**(code **)(local_9c[1] + 0xc))(*local_9c," }",2);
    return bVar2 & 1;
  }
  bVar2 = (**(code **)(local_9c[1] + 0xc))(*local_9c,"}",1);
  return bVar2 & 1;
}


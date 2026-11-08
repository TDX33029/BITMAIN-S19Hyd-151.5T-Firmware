// FUN_016b00a8 @ 016b00a8 size=340 calls_out=5 calls_in=6
// strings: 

void FUN_016b00a8(int *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  undefined8 uVar4;
  uint local_84;
  undefined1 auStack_80 [3];
  undefined4 *local_7d;
  undefined4 local_79;
  undefined4 local_75;
  undefined4 local_71;
  uint local_68;
  uint local_64;
  uint local_60;
  undefined4 local_5c;
  uint uStack_58;
  uint local_54;
  uint uStack_50;
  uint uStack_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  uint local_30;
  uint uStack_2c;
  
  uVar4 = thunk_FUN_016de0ee(param_1,0x2c0);
  puVar3 = (uint *)((int)uVar4 + (int)((ulonglong)uVar4 >> 0x20));
  if ((char)puVar3[4] == '\x01') {
    local_84 = puVar3[2];
    local_44 = puVar3[1];
    local_3c = puVar3[3];
    local_48 = *puVar3;
  }
  else {
    FUN_015f62e4(&local_68);
    local_84 = local_60;
    puVar3[2] = local_60;
    puVar3[3] = local_5c;
    *(undefined1 *)(puVar3 + 4) = 1;
    local_44 = local_64;
    local_3c = local_5c;
    local_48 = local_68;
  }
  *puVar3 = local_48 + 1;
  puVar3[1] = local_44 + (0xfffffffe < local_48);
  local_79 = 0;
  local_75 = 0;
  local_71 = 0;
  local_7d = &DAT_005674cc;
  local_5c = local_5c & 0xffffff00;
  local_60 = 0;
  local_64 = 1;
  local_68 = 1;
  FUN_016dd1aa((int)&local_5c + 1,auStack_80,0x13);
  local_40 = local_84;
  local_30 = local_30 & 0xffffff00;
  local_34 = 1;
  local_38 = 0;
  puVar3 = (uint *)thunk_FUN_016d4a50(0x40);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x40);
  }
  *puVar3 = local_68;
  puVar3[1] = local_64;
  puVar3[2] = local_60;
  puVar3[3] = local_5c;
  puVar3[4] = uStack_58;
  puVar3[5] = local_54;
  puVar3[6] = uStack_50;
  puVar3[7] = uStack_4c;
  puVar3[8] = local_48;
  puVar3[9] = local_44;
  puVar3[10] = local_40;
  puVar3[0xb] = local_3c;
  puVar3[0xc] = local_38;
  puVar3[0xd] = local_34;
  puVar3[0xe] = local_30;
  puVar3[0xf] = uStack_2c;
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 + 1;
  if ((int)uVar2 < 0) {
    software_udf(0xfdee,0x16b01bc);
    return;
  }
  *param_1 = (int)puVar3;
  param_1[1] = (int)puVar3;
  param_1[2] = 0;
  return;
}


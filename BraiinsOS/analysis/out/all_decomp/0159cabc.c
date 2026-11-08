// FUN_0159cabc @ 0159cabc size=412 calls_out=7 calls_in=0
// strings: 

void FUN_0159cabc(undefined4 *param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  uint *puVar4;
  undefined8 uVar5;
  uint local_70;
  uint local_6c;
  uint local_68;
  uint local_64;
  undefined4 *local_60;
  undefined4 local_5c;
  undefined4 *local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  uint uStack_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  *pcVar2 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018ac42c);
  }
  uVar5 = thunk_FUN_016de0ee(pcVar2,0x2c0);
  puVar4 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)puVar4[4] == '\x01') {
    local_70 = *puVar4;
    local_6c = puVar4[1];
    local_68 = puVar4[2];
    local_3c = puVar4[3];
  }
  else {
    FUN_015f62e4(&local_70);
    puVar4[2] = local_68;
    puVar4[3] = local_64;
    *(undefined1 *)(puVar4 + 4) = 1;
    local_3c = local_64;
  }
  *puVar4 = local_70 + 1;
  puVar4[1] = local_6c + (0xfffffffe < local_70);
  local_38 = 1;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_58 = &DAT_005674cc;
  local_48 = (undefined4 *)local_70;
  local_44 = local_6c;
  local_40 = local_68;
  local_60 = (undefined4 *)thunk_FUN_016d4a50(0x30);
  if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(8,0x30);
  }
  *local_60 = local_58;
  local_60[1] = local_54;
  local_60[2] = uStack_50;
  local_60[3] = uStack_4c;
  local_60[4] = local_48;
  local_60[5] = local_44;
  local_60[6] = local_40;
  local_60[7] = local_3c;
  local_60[8] = local_38;
  local_60[9] = local_34;
  local_60[10] = local_30;
  local_60[0xb] = local_2c;
  local_5c = 0;
  local_70 = 0;
  local_6c = 0;
  local_68 = 0;
  local_64 = local_64 & 0xffffff00;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x94);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0x94);
  }
  *puVar3 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = local_34 & 0xffffff00;
  local_58 = (undefined4 *)local_70;
  local_54 = local_6c;
  uStack_50 = local_68;
  uStack_4c = local_64;
  local_48 = local_60;
  local_44 = local_5c;
  if (DAT_018dd9f0 != 0) {
    FUN_0159d404(&DAT_018dd9f4);
    DataMemoryBarrier(0xb);
    thunk_FUN_016d3fb4(DAT_018dda1c);
  }
  DAT_018dd9f0 = 1;
  DAT_018dd9f4 = (uint)local_58;
  DAT_018dd9f8 = local_54;
  DAT_018dd9fc = uStack_50;
  DAT_018dda00 = uStack_4c;
  DAT_018dda04 = local_48;
  DAT_018dda08 = local_44;
  DAT_018dda0c = local_40;
  DAT_018dda10 = local_3c;
  DAT_018dda14 = local_38;
  DAT_018dda18 = local_34;
  DAT_018dda1c = puVar3;
  DAT_018dda20 = 0;
  return;
}


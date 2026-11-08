// FUN_01978958 @ 01978958 size=432 calls_out=7 calls_in=0
// strings: 

void FUN_01978958(undefined4 *param_1)

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
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 *local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  pcVar2 = (char *)*param_1;
  cVar1 = *pcVar2;
  *pcVar2 = '\0';
  if (cVar1 != '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d29414);
  }
  uVar5 = thunk_FUN_01bee35a(pcVar2,0x2c0);
  puVar4 = (uint *)((int)uVar5 + (int)((ulonglong)uVar5 >> 0x20));
  if ((char)puVar4[4] == '\x01') {
    local_6c = puVar4[1];
    local_68 = puVar4[2];
    local_70 = *puVar4;
    local_64 = puVar4[3];
  }
  else {
    FUN_019ae6ac(&local_70);
    puVar4[2] = local_68;
    puVar4[3] = local_64;
    *(undefined1 *)(puVar4 + 4) = 1;
  }
  *puVar4 = local_70 + 1;
  puVar4[1] = local_6c + (0xfffffffe < local_70);
  local_58 = &DAT_0056d238;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  local_38 = 1;
  local_34 = 0;
  local_30 = 0;
  local_2c = 0;
  local_48 = (undefined4 *)local_70;
  local_44 = local_6c;
  local_40 = local_68;
  local_3c = local_64;
  local_60 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (local_60 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x30);
  }
  *local_60 = local_58;
  local_60[1] = uStack_54;
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
  local_64 = 0;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x94);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x94);
  }
  *puVar3 = 0;
  local_40 = 0;
  local_3c = 0;
  local_38 = 0;
  local_34 = 0;
  local_58 = (undefined4 *)local_70;
  uStack_54 = local_6c;
  uStack_50 = local_68;
  uStack_4c = local_64;
  local_48 = local_60;
  local_44 = local_5c;
  if (DAT_01d51a30 != 0) {
    FUN_01979190(&DAT_01d51a34);
    DataMemoryBarrier(0xb);
    thunk_FUN_01be4678(DAT_01d51a5c);
  }
  DAT_01d51a30 = 1;
  DAT_01d51a34 = (uint)local_58;
  DAT_01d51a38 = uStack_54;
  DAT_01d51a3c = uStack_50;
  DAT_01d51a40 = uStack_4c;
  DAT_01d51a44 = local_48;
  DAT_01d51a48 = local_44;
  DAT_01d51a4c = local_40;
  DAT_01d51a50 = local_3c;
  DAT_01d51a54 = local_38;
  DAT_01d51a58 = local_34;
  DAT_01d51a5c = puVar3;
  DAT_01d51a60 = 0;
  return;
}


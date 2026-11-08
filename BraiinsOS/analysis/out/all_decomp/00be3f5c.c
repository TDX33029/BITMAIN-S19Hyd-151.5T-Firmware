// FUN_00be3f5c @ 00be3f5c size=356 calls_out=5 calls_in=1
// strings: Development API of bosminer; one command per line

void FUN_00be3f5c(int param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined1 auStack_498 [364];
  undefined1 auStack_32c [324];
  uint local_1e8;
  undefined1 auStack_1c0 [104];
  int local_158;
  int local_154;
  int local_150;
  uint local_110;
  undefined4 local_10c;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined2 local_28;
  
  FUN_016dd1aa(auStack_1c0,param_2,0x16c);
  local_28 = 0x100;
  local_2c = 8;
  local_30 = &DAT_0056a148;
  local_34 = 0;
  local_38 = 4;
  local_3c = 0;
  local_40 = 0;
  local_44 = 4;
  local_48 = 0;
  local_4c = 0;
  local_50 = 4;
  local_54 = 0;
  if (local_150 == local_158) {
    FUN_00f98cc8(&local_158);
  }
  puVar1 = (undefined4 *)(local_154 + local_150 * 0x30);
  *puVar1 = 0;
  puVar1[1] = 4;
  puVar1[2] = 0;
  puVar1[4] = 4;
  puVar1[7] = 4;
  puVar1[9] = &DAT_0056a148;
  *(undefined2 *)(puVar1 + 0xb) = 0x100;
  puVar1[10] = 8;
  puVar1[3] = 0;
  puVar1[5] = 0;
  puVar1[6] = 0;
  puVar1[8] = 0;
  local_150 = local_150 + 1;
  FUN_016dd1aa(auStack_498,auStack_1c0,0x16c);
  FUN_00bed9fc(auStack_32c,auStack_498);
  local_1e8 = local_1e8 | 0x10200;
  FUN_00ba1060(auStack_1c0,auStack_32c,"Development API of bosminer, one command per line",0x31);
  if ((local_110 & 0x7fffffff) != 0) {
    thunk_FUN_016d3fb4(local_10c);
  }
  local_110 = 0x80000000;
  FUN_016dd1aa(param_1,auStack_1c0,0x16c);
  *(uint *)(param_1 + 0x144) = *(uint *)(param_1 + 0x144) | 0x180800;
  *(uint *)(param_1 + 0x148) = *(uint *)(param_1 + 0x148) | 0x180000;
  return;
}


// FUN_01917cdc @ 01917cdc size=140 calls_out=3 calls_in=3
// strings: 

void FUN_01917cdc(uint *param_1)

{
  undefined1 auStack_118 [8];
  uint local_110;
  uint uStack_10c;
  uint uStack_108;
  uint uStack_104;
  uint local_100;
  uint uStack_fc;
  uint uStack_f8;
  uint uStack_f4;
  int local_98 [2];
  undefined1 auStack_90 [120];
  
  FUN_01aefc50(local_98);
  if (local_98[0] != 1) {
    FUN_01bed4e2((uint)auStack_118 | 4,(uint)local_98 | 4,0x7c);
    FUN_01bed4e2(param_1 + 1,(uint)auStack_118 | 4,0x7c);
  }
  else {
    FUN_01917d68(&local_110,auStack_90);
    param_1[2] = local_110;
    param_1[3] = uStack_10c;
    param_1[4] = uStack_108;
    param_1[5] = uStack_104;
    param_1[6] = local_100;
    param_1[7] = uStack_fc;
    param_1[8] = uStack_f8;
    param_1[9] = uStack_f4;
  }
  *param_1 = (uint)(local_98[0] == 1);
  return;
}


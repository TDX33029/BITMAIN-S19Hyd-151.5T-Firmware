// FUN_00f2ffe4 @ 00f2ffe4 size=172 calls_out=3 calls_in=0
// strings: 

void FUN_00f2ffe4(int *param_1,undefined4 param_2)

{
  undefined1 auStack_440 [528];
  int local_230 [134];
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd942 != '\x02') {
    FUN_01110ec4();
  }
  FUN_014f471c(local_230,param_2,0x10,0);
  if (local_230[0] == 2) {
    *param_1 = 2;
    return;
  }
  FUN_016dd1aa(auStack_440,(uint)local_230 | 4,0x20c);
  *param_1 = local_230[0];
  FUN_016dd1aa(param_1 + 1,auStack_440,0x20c);
  param_1[0x84] = (int)&DAT_018a6ed0;
  return;
}


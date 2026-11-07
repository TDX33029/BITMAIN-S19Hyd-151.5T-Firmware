// FUN_00705658 @ 00705658 size=164 calls_out=2 calls_in=0
// strings: 

void FUN_00705658(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 auStack_4e8 [244];
  undefined1 auStack_3f4 [244];
  int local_300;
  undefined1 auStack_2fc [492];
  undefined1 auStack_110 [248];
  
  if (param_3 == 0x20) {
    FUN_007056fc(&local_300,param_2,0x20);
    if (local_300 == 0) {
      FUN_01bed4e2(auStack_4e8,auStack_2fc,0x1e8);
      FUN_01bed4e2(auStack_110,auStack_4e8,0xf4);
      FUN_01bed4e2(param_1 + 0xf8,auStack_3f4,0xf4);
      FUN_01bed4e2((uint)&local_300 | 3,auStack_110,0xf4);
      *param_1 = 2;
      FUN_01bed4e2(param_1 + 1,&local_300,0xf7);
      return;
    }
  }
  *param_1 = 4;
  return;
}


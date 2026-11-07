// FUN_01b0ced4 @ 01b0ced4 size=64 calls_out=0 calls_in=2
// strings: 

bool FUN_01b0ced4(int param_1,int param_2,uint param_3)

{
  byte bVar1;
  
  bVar1 = 0;
  for (; param_3 < (uint)(param_2 << 2); param_3 = param_3 + 1) {
    bVar1 = bVar1 | *(byte *)(param_1 + param_3);
  }
  return bVar1 == 0;
}


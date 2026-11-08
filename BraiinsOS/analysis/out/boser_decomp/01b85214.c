// FUN_01b85214 @ 01b85214 size=92 calls_out=0 calls_in=4
// strings: 

byte FUN_01b85214(int param_1,int param_2,int param_3)

{
  bool bVar1;
  
  if (param_3 != 0) {
    return 1;
  }
  if (param_1 == 1) {
    return 0;
  }
  bVar1 = param_1 - 3U == 2;
  if (param_1 - 3U < 3) {
    bVar1 = param_2 == 1;
  }
  return bVar1 ^ 1;
}


// FUN_018dbf80 @ 018dbf80 size=80 calls_out=0 calls_in=1
// strings: 

byte FUN_018dbf80(int param_1,short *param_2,int param_3,short *param_4)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_1 == param_3) {
    if (*param_2 == *param_4) {
      bVar1 = *param_2 != 0x178 || param_2[1] == param_4[1];
    }
  }
  return bVar1 ^ 1;
}


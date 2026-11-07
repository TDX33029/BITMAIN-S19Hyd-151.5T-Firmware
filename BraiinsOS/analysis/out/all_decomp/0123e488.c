// FUN_0123e488 @ 0123e488 size=100 calls_out=0 calls_in=2
// strings: 

bool FUN_0123e488(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  
  bVar1 = 0x50;
  if (param_1 == 0) {
    bVar1 = (&DAT_004205f4)[param_2 & 0xff];
  }
  if (param_3 == 0) {
    return bVar1 < (byte)(&DAT_0042061e)[param_4 & 0xff];
  }
  return bVar1 < 0x50;
}


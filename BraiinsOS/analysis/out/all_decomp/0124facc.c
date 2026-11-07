// FUN_0124facc @ 0124facc size=100 calls_out=0 calls_in=1
// strings: 

bool FUN_0124facc(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  
  bVar1 = 0x50;
  if (param_1 == 0) {
    bVar1 = (&DAT_00420a38)[param_2 & 0xff];
  }
  if (param_3 == 0) {
    return bVar1 < (byte)(&DAT_00420a62)[param_4 & 0xff];
  }
  return bVar1 < 0x50;
}


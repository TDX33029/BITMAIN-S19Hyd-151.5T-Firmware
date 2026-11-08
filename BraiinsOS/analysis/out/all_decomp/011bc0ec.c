// FUN_011bc0ec @ 011bc0ec size=100 calls_out=0 calls_in=4
// strings: 

bool FUN_011bc0ec(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  
  bVar1 = 0x50;
  if (param_1 == 0) {
    bVar1 = (&DAT_00420362)[param_2 & 0xff];
  }
  if (param_3 == 0) {
    return bVar1 < (byte)(&DAT_0042038c)[param_4 & 0xff];
  }
  return bVar1 < 0x50;
}


// FUN_0153ac68 @ 0153ac68 size=76 calls_out=0 calls_in=1
// strings: 

bool FUN_0153ac68(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0x50;
  bVar2 = 0x50;
  if (param_1 == 0) {
    bVar2 = (&DAT_005371ba)[param_2 & 0xff];
  }
  if (param_3 == 0) {
    bVar1 = (&DAT_005371e4)[param_4 & 0xff];
  }
  return bVar2 < bVar1;
}


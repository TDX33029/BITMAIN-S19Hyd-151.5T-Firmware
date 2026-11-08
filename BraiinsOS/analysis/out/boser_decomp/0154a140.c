// FUN_0154a140 @ 0154a140 size=76 calls_out=0 calls_in=1
// strings: 

bool FUN_0154a140(int param_1,uint param_2,int param_3,uint param_4)

{
  byte bVar1;
  byte bVar2;
  
  bVar1 = 0x50;
  bVar2 = 0x50;
  if (param_1 == 0) {
    bVar2 = (&DAT_0053720e)[param_2 & 0xff];
  }
  if (param_3 == 0) {
    bVar1 = (&DAT_00537238)[param_4 & 0xff];
  }
  return bVar2 < bVar1;
}


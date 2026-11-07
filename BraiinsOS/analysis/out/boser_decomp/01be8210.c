// FUN_01be8210 @ 01be8210 size=76 calls_out=3 calls_in=2
// strings: 

bool FUN_01be8210(byte *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  int iVar2;
  byte bVar3;
  byte *pbVar4;
  
  iVar2 = FUN_01bedc64(param_1,0xff,param_3,param_4,param_4);
  if ((iVar2 - 1U < 0xfe) && (iVar2 = FUN_01be6fec(0,param_1), iVar2 != -1)) {
    do {
      pbVar4 = param_1;
      bVar3 = *pbVar4 >> 7;
      if (*pbVar4 - 0x2d < 2) {
        bVar3 = 1;
      }
      param_1 = pbVar4 + 1;
    } while ((bVar3 != 0) || (iVar2 = FUN_01be2cb0(), iVar2 != 0));
    bVar1 = *pbVar4 == 0;
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


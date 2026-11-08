// FUN_0140c33c @ 0140c33c size=112 calls_out=0 calls_in=2
// strings: 

int FUN_0140c33c(byte *param_1,int param_2)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  
  if (param_2 != 3) {
    return 0;
  }
  bVar2 = *param_1;
  if (0xf6 < (byte)(bVar2 - 0x3a)) {
    pbVar1 = param_1 + 1;
    uVar3 = *pbVar1 - 0x30 & 0xff;
    if (uVar3 < 10) {
      param_1 = (byte *)(param_1[2] - 0x30);
      uVar3 = (uint)param_1 & 0xff;
    }
    if (uVar3 < 10) {
      return (short)(bVar2 - 0x30 & 0xff) * 100 + ((*pbVar1 - 0x30) * 10 & 0xff) +
             ((uint)param_1 & 0xff);
    }
  }
  return 0;
}


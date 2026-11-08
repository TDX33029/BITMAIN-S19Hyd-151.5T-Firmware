// FUN_01291f24 @ 01291f24 size=80 calls_out=0 calls_in=1
// strings: 

int FUN_01291f24(uint param_1,uint param_2)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  
  uVar1 = (param_1 & 0x1fff) >> 4;
  iVar3 = uVar1 + (param_1 & 7);
  uVar4 = iVar3 + ((uint)((short)iVar3 * 0x2493) >> 0x10) * -7;
  sVar2 = (short)uVar4;
  if ((uVar4 & 0xff) < (param_2 & 0xff)) {
    sVar2 = sVar2 + 7;
  }
  return (int)(short)((((short)uVar1 + ((ushort)param_2 & 0xff)) - sVar2) + 6) / 7;
}


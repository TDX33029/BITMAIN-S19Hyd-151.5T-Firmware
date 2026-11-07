// FUN_0132023c @ 0132023c size=172 calls_out=0 calls_in=1
// strings: 

longlong FUN_0132023c(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    uVar6 = 0;
    uVar2 = 0;
  }
  else {
    uVar6 = 0;
    uVar2 = 0;
    uVar1 = 0;
    do {
      bVar5 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar1));
      if (7 < bVar5) {
        return CONCAT44(uVar1,1);
      }
      iVar3 = 7 - uVar1;
      uVar1 = uVar1 + 1;
      uVar4 = iVar3 * 3;
      uVar6 = uVar6 | (uint)bVar5 << (uVar4 & 0xff);
      uVar2 = uVar2 | (byte)((bVar5 >> 1) >> ((uVar4 ^ 0x1f) & 0xff));
    } while (uVar1 != param_3);
  }
  if (param_5 != 0) {
    uVar1 = 0x10;
    do {
      uVar4 = uVar1 & 0x38;
      uVar1 = uVar1 - 8;
      bVar5 = (byte)(uVar6 >> uVar4) | (byte)(uVar2 << (0x20 - uVar4 & 0xff));
      if (-1 < (int)(uVar4 - 0x20)) {
        bVar5 = (byte)(uVar2 >> (uVar4 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar5;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


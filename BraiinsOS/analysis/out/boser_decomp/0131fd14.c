// FUN_0131fd14 @ 0131fd14 size=180 calls_out=0 calls_in=1
// strings: 

longlong FUN_0131fd14(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  
  if (param_3 == 0) {
    uVar6 = 0;
    uVar4 = 0;
  }
  else {
    uVar6 = 0;
    uVar4 = 0;
    uVar1 = 0;
    do {
      bVar2 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar1));
      if (0x3f < bVar2) {
        return CONCAT44(uVar1,1);
      }
      iVar3 = 3 - uVar1;
      uVar1 = uVar1 + 1;
      uVar6 = uVar6 | (uint)bVar2 << (iVar3 * 6 & 0xffU);
      uVar4 = uVar4 | (byte)((bVar2 >> 1) >> ((iVar3 * 6 ^ 0x1fU) & 0xff));
    } while (uVar1 != param_3);
  }
  if (param_5 != 0) {
    uVar1 = 0x10;
    do {
      uVar5 = uVar1 & 0x38;
      uVar1 = uVar1 - 8;
      bVar2 = (byte)(uVar6 >> uVar5) | (byte)(uVar4 << (0x20 - uVar5 & 0xff));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar2 = (byte)(uVar4 >> (uVar5 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar2;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


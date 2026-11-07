// FUN_0131fdc8 @ 0131fdc8 size=204 calls_out=0 calls_in=1
// strings: 

longlong FUN_0131fdc8(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  
  if (param_3 == 0) {
    uVar7 = 0;
    uVar8 = 0;
  }
  else {
    uVar7 = 0;
    uVar8 = 0;
    uVar3 = 0;
    do {
      bVar4 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar3));
      uVar5 = (uint)bVar4;
      if (0x3f < uVar5) {
        return CONCAT44(uVar3,1);
      }
      uVar2 = uVar3 + 1;
      uVar6 = uVar3 * 6 - 0x20;
      uVar1 = (uint)(bVar4 >> (uVar3 * -6 + 0x20 & 0xff));
      uVar3 = uVar5 << (uVar3 * 6 & 0xff);
      if (-1 < (int)uVar6) {
        uVar1 = uVar5 << (uVar6 & 0xff);
        uVar3 = 0;
      }
      uVar8 = uVar1 | uVar8;
      uVar7 = uVar3 | uVar7;
      uVar3 = uVar2;
    } while (uVar2 != param_3);
  }
  if (param_5 != 0) {
    uVar3 = 0;
    do {
      uVar5 = uVar3 & 0x38;
      uVar3 = uVar3 + 8;
      bVar4 = (byte)(uVar7 >> uVar5) | (byte)(uVar8 << (0x20 - uVar5 & 0xff));
      if (-1 < (int)(uVar5 - 0x20)) {
        bVar4 = (byte)(uVar8 >> (uVar5 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar4;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


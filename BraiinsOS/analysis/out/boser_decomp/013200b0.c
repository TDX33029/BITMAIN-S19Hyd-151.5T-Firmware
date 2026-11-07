// FUN_013200b0 @ 013200b0 size=200 calls_out=0 calls_in=1
// strings: 

longlong FUN_013200b0(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    uVar5 = 0;
    do {
      bVar2 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar5));
      uVar4 = (uint)bVar2;
      if (0xf < uVar4) {
        return CONCAT44(uVar5,1);
      }
      uVar3 = uVar5 * 4 - 0x20;
      uVar1 = (uint)(bVar2 >> (uVar5 * -4 + 0x20 & 0xff));
      if (-1 < (int)uVar3) {
        uVar1 = uVar4 << (uVar3 & 0xff);
      }
      uVar7 = uVar1 | uVar7;
      uVar1 = uVar5 + 1;
      uVar4 = uVar4 << ((uVar5 & 0x3f) << 2);
      if (-1 < (int)uVar3) {
        uVar4 = 0;
      }
      uVar6 = uVar4 | uVar6;
      uVar5 = uVar1;
    } while (uVar1 != param_3);
  }
  if (param_5 != 0) {
    uVar5 = 0;
    do {
      uVar4 = uVar5 & 0x38;
      uVar5 = uVar5 + 8;
      bVar2 = (byte)(uVar6 >> uVar4) | (byte)(uVar7 << (0x20 - uVar4 & 0xff));
      if (-1 < (int)(uVar4 - 0x20)) {
        bVar2 = (byte)(uVar7 >> (uVar4 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar2;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


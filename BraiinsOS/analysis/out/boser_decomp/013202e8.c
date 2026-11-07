// FUN_013202e8 @ 013202e8 size=188 calls_out=0 calls_in=1
// strings: 

longlong FUN_013202e8(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
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
      bVar5 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar3));
      uVar2 = (uint)bVar5;
      if (7 < uVar2) {
        return CONCAT44(uVar3,1);
      }
      uVar1 = uVar3 + 1;
      uVar6 = uVar3 * 3 - 0x20;
      uVar4 = uVar2 << (uVar3 * 3 & 0xff);
      if (-1 < (int)uVar6) {
        uVar4 = 0;
      }
      uVar7 = uVar4 | uVar7;
      uVar3 = (uint)(bVar5 >> (uVar3 * -3 + 0x20 & 0xff));
      if (-1 < (int)uVar6) {
        uVar3 = uVar2 << (uVar6 & 0xff);
      }
      uVar8 = uVar3 | uVar8;
      uVar3 = uVar1;
    } while (uVar1 != param_3);
  }
  if (param_5 != 0) {
    uVar3 = 0;
    do {
      uVar2 = uVar3 & 0x38;
      uVar3 = uVar3 + 8;
      bVar5 = (byte)(uVar7 >> uVar2) | (byte)(uVar8 << (0x20 - uVar2 & 0xff));
      if (-1 < (int)(uVar2 - 0x20)) {
        bVar5 = (byte)(uVar8 >> (uVar2 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar5;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


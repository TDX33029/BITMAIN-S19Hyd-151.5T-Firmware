// FUN_013205d4 @ 013205d4 size=184 calls_out=0 calls_in=1
// strings: 

longlong FUN_013205d4(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  uint uVar6;
  uint uVar7;
  
  if (param_3 == 0) {
    uVar6 = 0;
    uVar7 = 0;
  }
  else {
    uVar6 = 0;
    uVar7 = 0;
    uVar1 = 0;
    do {
      bVar5 = *(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar1));
      uVar2 = (uint)bVar5;
      if (1 < uVar2) {
        return CONCAT44(uVar1,1);
      }
      uVar3 = uVar2 << (uVar1 & 0xff);
      uVar4 = uVar1 - 0x20;
      if (-1 < (int)uVar4) {
        uVar3 = 0;
      }
      uVar6 = uVar3 | uVar6;
      uVar3 = 0x20 - uVar1;
      uVar1 = uVar1 + 1;
      uVar3 = (uint)(bVar5 >> (uVar3 & 0xff));
      if (-1 < (int)uVar4) {
        uVar3 = uVar2 << (uVar4 & 0xff);
      }
      uVar7 = uVar3 | uVar7;
    } while (param_3 != uVar1);
  }
  if (param_5 != 0) {
    uVar1 = 0;
    do {
      uVar2 = uVar1 & 0x38;
      uVar1 = uVar1 + 8;
      bVar5 = (byte)(uVar6 >> uVar2) | (byte)(uVar7 << (0x20 - uVar2 & 0xff));
      if (-1 < (int)(uVar2 - 0x20)) {
        bVar5 = (byte)(uVar7 >> (uVar2 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar5;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


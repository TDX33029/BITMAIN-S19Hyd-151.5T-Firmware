// FUN_0132000c @ 0132000c size=164 calls_out=0 calls_in=1
// strings: 

longlong FUN_0132000c(int param_1,int param_2,uint param_3,byte *param_4,int param_5)

{
  int iVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_3 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = 0;
    uVar2 = 0;
    do {
      uVar4 = (uint)*(byte *)(param_1 + (uint)*(byte *)(param_2 + uVar2));
      if (0xf < uVar4) {
        return CONCAT44(uVar2,1);
      }
      iVar1 = uVar2 * -4;
      uVar2 = uVar2 + 1;
      uVar5 = uVar5 | uVar4 << (iVar1 + 4U & 0xff);
    } while (uVar2 != param_3);
  }
  if (param_5 != 0) {
    uVar2 = 0;
    do {
      uVar4 = uVar2 & 0x38;
      uVar2 = uVar2 + 0x38;
      bVar3 = (byte)(uVar5 >> uVar4) | (byte)(0 << (0x20 - uVar4 & 0xff));
      if (-1 < (int)(uVar4 - 0x20)) {
        bVar3 = (byte)(0 >> (uVar4 - 0x20 & 0xff));
      }
      param_5 = param_5 + -1;
      *param_4 = bVar3;
      param_4 = param_4 + 1;
    } while (param_5 != 0);
  }
  return (ulonglong)param_3 << 0x20;
}


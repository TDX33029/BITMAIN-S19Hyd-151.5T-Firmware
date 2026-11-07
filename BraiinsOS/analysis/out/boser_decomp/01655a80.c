// FUN_01655a80 @ 01655a80 size=124 calls_out=0 calls_in=1
// strings: 

longlong FUN_01655a80(undefined4 *param_1,byte *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 != (byte *)param_1[1]) {
    param_2 = pbVar4 + 1;
    uVar1 = (uint)*pbVar4;
    uVar2 = uVar1 - 0x30;
    if (0x39 < uVar1) {
      uVar2 = (uVar1 - 0x41 & 0xffffffdf) + 10;
    }
    if ((uVar2 < 0x10) && (param_2 != (byte *)param_1[1])) {
      uVar1 = (uint)*param_2;
      uVar3 = uVar1 - 0x30;
      if (0x39 < uVar1) {
        uVar3 = (uVar1 - 0x41 & 0xffffffdf) + 10;
      }
      if (uVar3 < 0x10) {
        uVar1 = uVar3 | uVar2 << 4;
        *param_1 = pbVar4 + 2;
      }
      return CONCAT44(uVar1,(uint)(uVar3 < 0x10));
    }
  }
  return ZEXT48(param_2) << 0x20;
}


// FUN_01668e84 @ 01668e84 size=208 calls_out=0 calls_in=1
// strings: 

bool FUN_01668e84(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)param_1[1]) {
    return true;
  }
  bVar1 = *pbVar5;
  uVar3 = (uint)bVar1;
  *param_1 = pbVar5 + 1;
  if (-1 < (char)bVar1) {
    return 9 < uVar3 - 0x30;
  }
  *param_1 = pbVar5 + 2;
  bVar1 = pbVar5[1];
  if (uVar3 < 0xe0) {
    return 9 < (bVar1 & 0x3f | (uVar3 & 0x1f) << 6) - 0x30;
  }
  bVar2 = pbVar5[2];
  *param_1 = pbVar5 + 3;
  uVar4 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
  if (uVar3 < 0xf0) {
    return 9 < (uVar4 | (uVar3 & 0x1f) << 0xc) - 0x30;
  }
  bVar1 = pbVar5[3];
  *param_1 = pbVar5 + 4;
  return 9 < (bVar1 & 0x3f | uVar4 << 6 | (uVar3 & 7) << 0x12) - 0x30;
}


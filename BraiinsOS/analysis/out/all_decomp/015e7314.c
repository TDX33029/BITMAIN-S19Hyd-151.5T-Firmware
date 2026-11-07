// FUN_015e7314 @ 015e7314 size=160 calls_out=0 calls_in=1
// strings: 

longlong FUN_015e7314(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)param_1[1]) {
    return (ulonglong)param_2 << 0x20;
  }
  bVar1 = *pbVar5;
  uVar3 = (uint)bVar1;
  *param_1 = pbVar5 + 1;
  if (-1 < (char)bVar1) {
    return CONCAT44(uVar3,1);
  }
  *param_1 = pbVar5 + 2;
  bVar1 = pbVar5[1];
  if (uVar3 < 0xe0) {
    return CONCAT44(bVar1 & 0x3f | (uVar3 & 0x1f) << 6,1);
  }
  bVar2 = pbVar5[2];
  *param_1 = pbVar5 + 3;
  uVar4 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
  if (uVar3 < 0xf0) {
    return CONCAT44(uVar4 | (uVar3 & 0x1f) << 0xc,1);
  }
  bVar1 = pbVar5[3];
  *param_1 = pbVar5 + 4;
  return CONCAT44(bVar1 & 0x3f | uVar4 << 6 | (uVar3 & 7) << 0x12,1);
}


// FUN_00734c78 @ 00734c78 size=152 calls_out=0 calls_in=14
// strings: 

undefined1 * FUN_00734c78(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  uint uVar5;
  
  pbVar4 = (byte *)*param_1;
  if (pbVar4 == (byte *)param_1[1]) {
    return &DAT_00110000;
  }
  bVar1 = *pbVar4;
  puVar3 = (undefined1 *)(uint)bVar1;
  *param_1 = pbVar4 + 1;
  if ((uint)(int)(char)bVar1 < 0x80000000) {
    return puVar3;
  }
  *param_1 = pbVar4 + 2;
  bVar1 = pbVar4[1];
  if (puVar3 < (undefined1 *)0xe0) {
    return (undefined1 *)(bVar1 & 0x3f | ((uint)puVar3 & 0x1f) << 6);
  }
  bVar2 = pbVar4[2];
  *param_1 = pbVar4 + 3;
  uVar5 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
  if (puVar3 < (undefined1 *)0xf0) {
    return (undefined1 *)(uVar5 | ((uint)puVar3 & 0x1f) << 0xc);
  }
  bVar1 = pbVar4[3];
  *param_1 = pbVar4 + 4;
  return (undefined1 *)(bVar1 & 0x3f | uVar5 << 6 | ((uint)puVar3 & 7) << 0x12);
}


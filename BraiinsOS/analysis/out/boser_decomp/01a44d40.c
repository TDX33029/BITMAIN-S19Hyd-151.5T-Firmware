// FUN_01a44d40 @ 01a44d40 size=172 calls_out=0 calls_in=1
// strings: 

bool FUN_01a44d40(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  uint uVar4;
  byte *pbVar5;
  
  pbVar5 = (byte *)*param_1;
  if (pbVar5 == (byte *)param_1[1]) {
    return true;
  }
  bVar1 = *pbVar5;
  puVar3 = (undefined1 *)(uint)bVar1;
  *param_1 = pbVar5 + 1;
  if (0x7fffffff < (uint)(int)(char)bVar1) {
    *param_1 = pbVar5 + 2;
    bVar1 = pbVar5[1];
    if (puVar3 < (undefined1 *)0xe0) {
      puVar3 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar3 & 0x1f) << 6);
    }
    else {
      bVar2 = pbVar5[2];
      *param_1 = pbVar5 + 3;
      uVar4 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
      if (puVar3 < (undefined1 *)0xf0) {
        puVar3 = (undefined1 *)(uVar4 | ((uint)puVar3 & 0x1f) << 0xc);
      }
      else {
        bVar1 = pbVar5[3];
        *param_1 = pbVar5 + 4;
        puVar3 = (undefined1 *)(bVar1 & 0x3f | uVar4 << 6 | ((uint)puVar3 & 7) << 0x12);
        if (puVar3 == &DAT_00110000) {
          return true;
        }
      }
    }
  }
  return (undefined1 *)0x9 < puVar3 + -0x30;
}


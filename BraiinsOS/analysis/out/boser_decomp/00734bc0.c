// FUN_00734bc0 @ 00734bc0 size=180 calls_out=0 calls_in=1
// strings: 

void FUN_00734bc0(undefined4 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  
  pbVar5 = (byte *)*param_2;
  if (pbVar5 == (byte *)param_2[1]) {
    puVar4 = &DAT_00110000;
  }
  else {
    bVar1 = *pbVar5;
    puVar4 = (undefined1 *)(uint)bVar1;
    *param_2 = pbVar5 + 1;
    if (0x7fffffff < (uint)(int)(char)bVar1) {
      *param_2 = pbVar5 + 2;
      bVar1 = pbVar5[1];
      if (puVar4 < (undefined1 *)0xe0) {
        puVar4 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar4 & 0x1f) << 6);
      }
      else {
        bVar2 = pbVar5[2];
        *param_2 = pbVar5 + 3;
        uVar6 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (puVar4 < (undefined1 *)0xf0) {
          puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
        }
        else {
          bVar1 = pbVar5[3];
          *param_2 = pbVar5 + 4;
          puVar4 = (undefined1 *)(bVar1 & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
        }
      }
    }
  }
  puVar3 = &DAT_005259cd;
  if (puVar4 == &DAT_00110000) {
    puVar4 = (undefined1 *)0x12;
  }
  else {
    puVar3 = (undefined *)0x0;
  }
  *param_1 = puVar3;
  param_1[1] = puVar4;
  return;
}


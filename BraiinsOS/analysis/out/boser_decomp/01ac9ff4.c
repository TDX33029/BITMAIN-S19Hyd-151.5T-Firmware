// FUN_01ac9ff4 @ 01ac9ff4 size=216 calls_out=0 calls_in=12
// strings: 

undefined1 * FUN_01ac9ff4(undefined4 *param_1)

{
  byte bVar1;
  byte bVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  
  pbVar5 = (byte *)*param_1;
  do {
    if (pbVar5 == (byte *)param_1[1]) {
      return &DAT_00110000;
    }
    pbVar6 = pbVar5 + 1;
    bVar1 = *pbVar5;
    puVar3 = (undefined1 *)(uint)bVar1;
    *param_1 = pbVar6;
    if ((char)bVar1 < '\0') {
      bVar1 = pbVar5[1];
      pbVar6 = pbVar5 + 2;
      *param_1 = pbVar6;
      if (puVar3 < (undefined1 *)0xe0) {
        puVar3 = (undefined1 *)(bVar1 & 0x3f | ((uint)puVar3 & 0x1f) << 6);
      }
      else {
        bVar2 = pbVar5[2];
        pbVar6 = pbVar5 + 3;
        *param_1 = pbVar6;
        uVar7 = bVar2 & 0x3f | (bVar1 & 0x3f) << 6;
        if (puVar3 < (undefined1 *)0xf0) {
          puVar3 = (undefined1 *)(uVar7 | ((uint)puVar3 & 0x1f) << 0xc);
        }
        else {
          bVar1 = pbVar5[3];
          pbVar6 = pbVar5 + 4;
          *param_1 = pbVar6;
          puVar3 = (undefined1 *)(bVar1 & 0x3f | uVar7 << 6 | ((uint)puVar3 & 7) << 0x12);
          if (puVar3 == &DAT_00110000) {
            return &DAT_00110000;
          }
        }
      }
    }
    if (puVar3 < (undefined1 *)0xe) {
      puVar4 = &DAT_00110000;
      if ((1 << ((uint)puVar3 & 0xff) & 0x2600U) == 0) {
        puVar4 = puVar3;
      }
    }
    else {
      puVar4 = puVar3;
    }
    pbVar5 = pbVar6;
  } while (puVar4 == &DAT_00110000);
  return puVar4;
}


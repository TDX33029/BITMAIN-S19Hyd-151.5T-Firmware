// FUN_01acbbe8 @ 01acbbe8 size=168 calls_out=1 calls_in=3
// strings: 

undefined4 FUN_01acbbe8(byte *param_1,int param_2,undefined4 param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  
  pbVar3 = param_1;
  do {
    if (pbVar3 == param_1 + param_2) {
      return 1;
    }
    pbVar4 = pbVar3 + 1;
    puVar5 = (undefined1 *)(uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pbVar4 = pbVar3 + 2;
      }
      else {
        uVar2 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (puVar5 < (undefined1 *)0xf0) {
          puVar5 = (undefined1 *)(uVar2 | ((uint)puVar5 & 0x1f) << 0xc);
          pbVar4 = pbVar3 + 3;
        }
        else {
          puVar5 = (undefined1 *)(pbVar3[3] & 0x3f | uVar2 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 == &DAT_00110000) {
            return 1;
          }
          pbVar4 = pbVar3 + 4;
        }
      }
    }
    puVar1 = (undefined1 *)FUN_01ac9ff4(param_3);
    pbVar3 = pbVar4;
  } while (puVar5 == puVar1);
  return 0;
}


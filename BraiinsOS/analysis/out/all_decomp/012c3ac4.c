// FUN_012c3ac4 @ 012c3ac4 size=368 calls_out=0 calls_in=1
// strings: 

undefined4 FUN_012c3ac4(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  bool bVar6;
  
  if (param_2 == 0) {
    return 0;
  }
  pbVar5 = param_1 + 1;
  uVar2 = (uint)(char)*param_1;
  uVar3 = (uint)*param_1;
  if (0x7fffffff < uVar2) {
    uVar2 = param_1[1] & 0x3f;
    if (uVar3 < 0xe0) {
      uVar3 = uVar2 | (uVar3 & 0x1f) << 6;
      pbVar5 = param_1 + 2;
    }
    else {
      uVar2 = param_1[2] & 0x3f | uVar2 << 6;
      if (uVar3 < 0xf0) {
        uVar3 = uVar2 | (uVar3 & 0x1f) << 0xc;
        pbVar5 = param_1 + 3;
      }
      else {
        pbVar5 = param_1 + 4;
        uVar2 = param_1[3] & 0x3f | uVar2 << 6;
        uVar3 = uVar2 | (uVar3 & 7) << 0x12;
      }
    }
  }
  bVar6 = 0x5e < uVar3;
  if (uVar3 != 0x5f) {
    uVar2 = (uVar3 & 0xffffffdf) - 0x41;
    bVar6 = 0x18 < uVar2;
  }
  if (!bVar6 || (uVar3 == 0x5f || uVar2 == 0x19)) {
    do {
      if (pbVar5 == param_1 + param_2) {
        return 1;
      }
      puVar4 = (undefined1 *)(uint)*pbVar5;
      pbVar1 = pbVar5 + 1;
      if (0x7fffffff < (uint)(int)(char)*pbVar5) {
        if (puVar4 < (undefined1 *)0xe0) {
          puVar4 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
          pbVar1 = pbVar5 + 2;
        }
        else {
          uVar2 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
          if (puVar4 < (undefined1 *)0xf0) {
            puVar4 = (undefined1 *)(uVar2 | ((uint)puVar4 & 0x1f) << 0xc);
            pbVar1 = pbVar5 + 3;
          }
          else {
            puVar4 = (undefined1 *)(pbVar5[3] & 0x3f | uVar2 << 6 | ((uint)puVar4 & 7) << 0x12);
            if (puVar4 == &DAT_00110000) {
              return 1;
            }
            pbVar1 = pbVar5 + 4;
          }
        }
      }
      pbVar5 = pbVar1;
    } while (((puVar4 == (undefined1 *)0x5f) ||
             (0xffffffe4 < ((uint)puVar4 & 0x1fffdf) - 0x5b && ((uint)puVar4 & 0x1fffdf) != 0x40))
            || ((undefined1 *)0xfffffff4 < puVar4 + -0x3a && puVar4 != (undefined1 *)0x2f));
  }
  return 0;
}


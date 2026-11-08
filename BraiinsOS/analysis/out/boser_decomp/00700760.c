// FUN_00700760 @ 00700760 size=224 calls_out=1 calls_in=1
// strings: 

void FUN_00700760(byte *param_1,undefined4 *param_2)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  byte *pbVar5;
  
  pbVar5 = *(byte **)param_1;
  pbVar1 = param_1;
  if (pbVar5 != (byte *)0x0) {
    pbVar1 = *(byte **)(param_1 + 4);
  }
  if (pbVar5 != (byte *)0x0 && pbVar5 != pbVar1) {
    uVar4 = *param_2;
    uVar3 = (uint)((int)pbVar1 - (int)pbVar5) >> 2;
    do {
      FUN_00700840(uVar4,*(undefined4 *)pbVar5);
      uVar3 = uVar3 - 1;
      pbVar5 = pbVar5 + 4;
    } while (uVar3 != 0);
  }
  pbVar1 = *(byte **)(param_1 + 8);
  if (pbVar1 != (byte *)0x0) {
    param_1 = *(byte **)(param_1 + 0xc);
  }
  if (pbVar1 != (byte *)0x0 && pbVar1 != param_1) {
    uVar4 = *param_2;
    do {
      pbVar5 = pbVar1 + 1;
      puVar2 = (undefined1 *)(uint)*pbVar1;
      if (0x7fffffff < (uint)(int)(char)*pbVar1) {
        if (puVar2 < (undefined1 *)0xe0) {
          puVar2 = (undefined1 *)(pbVar1[1] & 0x3f | ((uint)puVar2 & 0x1f) << 6);
          pbVar5 = pbVar1 + 2;
        }
        else {
          uVar3 = pbVar1[2] & 0x3f | (pbVar1[1] & 0x3f) << 6;
          if (puVar2 < (undefined1 *)0xf0) {
            puVar2 = (undefined1 *)(uVar3 | ((uint)puVar2 & 0x1f) << 0xc);
            pbVar5 = pbVar1 + 3;
          }
          else {
            puVar2 = (undefined1 *)(pbVar1[3] & 0x3f | uVar3 << 6 | ((uint)puVar2 & 7) << 0x12);
            if (puVar2 == &DAT_00110000) {
              return;
            }
            pbVar5 = pbVar1 + 4;
          }
        }
      }
      FUN_00700840(uVar4,puVar2);
      pbVar1 = pbVar5;
    } while (pbVar5 != param_1);
  }
  return;
}


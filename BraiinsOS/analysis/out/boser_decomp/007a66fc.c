// FUN_007a66fc @ 007a66fc size=232 calls_out=0 calls_in=2
// strings: 

undefined4 FUN_007a66fc(byte *param_1,int param_2)

{
  byte *pbVar1;
  uint uVar2;
  undefined1 *puVar3;
  byte *pbVar4;
  
  if (((0xffffffc0 < param_2 - 0x40U) && (*param_1 != 0x2d)) &&
     (pbVar4 = param_1 + param_2, pbVar4[-1] != 0x2d)) {
    do {
      if (param_1 == pbVar4) {
        return 1;
      }
      puVar3 = (undefined1 *)(uint)*param_1;
      pbVar1 = param_1 + 1;
      if (0x7fffffff < (uint)(int)(char)*param_1) {
        if (puVar3 < (undefined1 *)0xe0) {
          puVar3 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar3 & 0x1f) << 6);
          pbVar1 = param_1 + 2;
        }
        else {
          uVar2 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          if (puVar3 < (undefined1 *)0xf0) {
            puVar3 = (undefined1 *)(uVar2 | ((uint)puVar3 & 0x1f) << 0xc);
            pbVar1 = param_1 + 3;
          }
          else {
            puVar3 = (undefined1 *)(param_1[3] & 0x3f | uVar2 << 6 | ((uint)puVar3 & 7) << 0x12);
            if (puVar3 == &DAT_00110000) {
              return 1;
            }
            pbVar1 = param_1 + 4;
          }
        }
      }
      param_1 = pbVar1;
    } while (((puVar3 == (undefined1 *)0x2d) ||
             ((undefined1 *)0xfffffff4 < puVar3 + -0x3a && puVar3 != (undefined1 *)0x2f)) ||
            (0xffffffe4 < ((uint)puVar3 & 0xffffffdf) - 0x5b && ((uint)puVar3 & 0xffffffdf) != 0x40)
            );
  }
  return 0;
}


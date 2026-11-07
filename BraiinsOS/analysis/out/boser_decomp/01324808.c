// FUN_01324808 @ 01324808 size=408 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01324808(byte *param_1,int param_2)

{
  uint uVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  undefined1 *puVar7;
  byte *pbVar8;
  bool bVar9;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    pbVar8 = param_1 + param_2;
    do {
      puVar7 = (undefined1 *)(uint)*param_1;
      pbVar2 = param_1 + 1;
      if ((uint)(int)(char)*param_1 < 0x80000000) {
LAB_013248a8:
        param_1 = pbVar2;
        if (((undefined1 *)0x9 < puVar7 + -0x30) && (0x19 < ((uint)puVar7 & 0x5f) - 0x41)) {
LAB_013248c8:
          if (((undefined1 *)0x1e < puVar7 + -0x21) ||
             ((1 << ((uint)(puVar7 + -0x21) & 0xff) & 0x5000567dU) == 0)) {
            puVar3 = puVar7 + -0x7b;
            bVar9 = (undefined1 *)0x3 < puVar3;
            if (bVar9) {
              puVar3 = puVar7 + -0x5e;
            }
            if (bVar9 && (undefined1 *)0x2 < puVar3) {
              uVar6 = (uint)puVar7 >> 8 & 0xff;
              uVar1 = (int)puVar7 << 0x18 | uVar6 << 0x10 | ((uint)puVar7 >> 0x10) << 8;
              if ((uint)puVar7 >> 0x10 != 0) {
                return 0;
              }
              if ((0x1d < uVar6 - 0xc2 || 0xbfffffff < uVar1) || -1 < (int)uVar1) {
                return 0;
              }
            }
          }
        }
      }
      else {
        if (puVar7 < (undefined1 *)0xe0) {
          puVar7 = (undefined1 *)(param_1[1] & 0x3f | ((uint)puVar7 & 0x1f) << 6);
          param_1 = param_1 + 2;
        }
        else {
          uVar6 = param_1[2] & 0x3f | (param_1[1] & 0x3f) << 6;
          if (puVar7 < (undefined1 *)0xf0) {
            puVar7 = (undefined1 *)(uVar6 | ((uint)puVar7 & 0x1f) << 0xc);
            param_1 = param_1 + 3;
          }
          else {
            puVar7 = (undefined1 *)(param_1[3] & 0x3f | uVar6 << 6 | ((uint)puVar7 & 7) << 0x12);
            if (puVar7 == &DAT_00110000) break;
            param_1 = param_1 + 4;
          }
        }
        pbVar2 = param_1;
        if (puVar7 < (undefined1 *)0x80) goto LAB_013248a8;
        if ((puVar7 < (undefined1 *)0xaa) ||
           ((iVar4 = FUN_0130743c(puVar7), iVar4 == 0 &&
            ((puVar7 < (undefined1 *)0xb2 || (iVar4 = FUN_013077ac(puVar7), iVar4 == 0))))))
        goto LAB_013248c8;
      }
    } while (param_1 != pbVar8);
    uVar5 = 1;
  }
  return uVar5;
}


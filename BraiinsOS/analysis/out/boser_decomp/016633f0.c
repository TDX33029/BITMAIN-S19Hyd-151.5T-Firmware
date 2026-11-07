// FUN_016633f0 @ 016633f0 size=340 calls_out=1 calls_in=5
// strings: UVWXYZabcdefghijklmnopqrstuvwxyz@@@@@@@@@@@@@@

void FUN_016633f0(undefined4 *param_1,byte *param_2,int param_3,int param_4,uint param_5)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (param_3 != 0) {
    uVar4 = 0;
    uVar7 = 0;
    uVar6 = 0;
    pbVar8 = param_2;
    do {
      pbVar3 = pbVar8 + 1;
      puVar1 = (undefined1 *)(uint)*pbVar8;
      if (0x7fffffff < (uint)(int)(char)*pbVar8) {
        if (puVar1 < (undefined1 *)0xe0) {
          puVar1 = (undefined1 *)(pbVar8[1] & 0x3f | ((uint)puVar1 & 0x1f) << 6);
          pbVar3 = pbVar8 + 2;
        }
        else {
          uVar5 = pbVar8[2] & 0x3f | (pbVar8[1] & 0x3f) << 6;
          if (puVar1 < (undefined1 *)0xf0) {
            puVar1 = (undefined1 *)(uVar5 | ((uint)puVar1 & 0x1f) << 0xc);
            pbVar3 = pbVar8 + 3;
          }
          else {
            puVar1 = (undefined1 *)(pbVar8[3] & 0x3f | uVar5 << 6 | ((uint)puVar1 & 7) << 0x12);
            if (puVar1 == &DAT_00110000) break;
            pbVar3 = pbVar8 + 4;
          }
        }
      }
      puVar2 = (undefined1 *)0x80000000;
      if ((undefined1 *)0x60 < puVar1 + -0x20) goto LAB_01663514;
      if (puVar1 + -0x20 == (undefined1 *)0x60) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(0x60,0x60,&DAT_01d06e34);
      }
      uVar5 = (uint)(byte)"UVWXYZabcdefghijklmnopqrstuvwxyz@@@@@@@@@@@@@@"[(int)puVar1];
      if (uVar5 == 0x40) goto LAB_01663514;
      if (uVar4 != 0) {
        if (param_5 <= uVar7) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar7,param_5,&DAT_01d06e44);
        }
        *(byte *)(param_4 + uVar7) =
             (byte)"UVWXYZabcdefghijklmnopqrstuvwxyz@@@@@@@@@@@@@@"[(int)puVar1] >> (6 - uVar4 & 7)
             | (byte)(uVar6 << (uVar4 & 7));
        uVar7 = uVar7 + 1;
        if (uVar7 == param_5) break;
        uVar5 = uVar5 & 0x3fU >> (uVar4 & 7);
      }
      uVar4 = uVar4 + 2;
      if (6 < (int)uVar4) {
        uVar4 = 0;
      }
      uVar6 = uVar5;
      pbVar8 = pbVar3;
    } while (pbVar3 != param_2 + param_3);
  }
  puVar2 = &DAT_80000004;
LAB_01663514:
  *param_1 = puVar2;
  return;
}


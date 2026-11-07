// FUN_01662e44 @ 01662e44 size=272 calls_out=1 calls_in=2
// strings: 

void FUN_01662e44(undefined4 *param_1,byte *param_2,int param_3,uint param_4)

{
  byte *pbVar1;
  undefined1 *puVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  uint uVar6;
  byte *pbVar7;
  
  pbVar7 = param_2 + param_3;
  uVar3 = 0;
  uVar4 = 0;
  do {
    if (param_2 == pbVar7) {
LAB_01662f14:
      puVar2 = (undefined1 *)0x80000001;
      if (uVar4 < param_4) goto LAB_01662f38;
      break;
    }
    puVar5 = (undefined1 *)(uint)*param_2;
    pbVar1 = param_2 + 1;
    if (0x7fffffff < (uint)(int)(char)*param_2) {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)(param_2[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pbVar1 = param_2 + 2;
      }
      else {
        uVar6 = param_2[2] & 0x3f | (param_2[1] & 0x3f) << 6;
        if (puVar5 < (undefined1 *)0xf0) {
          puVar5 = (undefined1 *)(uVar6 | ((uint)puVar5 & 0x1f) << 0xc);
          pbVar1 = param_2 + 3;
        }
        else {
          puVar5 = (undefined1 *)(param_2[3] & 0x3f | uVar6 << 6 | ((uint)puVar5 & 7) << 0x12);
          if (puVar5 == &DAT_00110000) goto LAB_01662f14;
          pbVar1 = param_2 + 4;
        }
      }
    }
    param_2 = pbVar1;
    puVar2 = (undefined1 *)0x80000000;
    if ((undefined1 *)0x60 < puVar5 + -0x20) goto LAB_01662f38;
    if (puVar5 + -0x20 == (undefined1 *)0x60) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(0x60,0x60,&DAT_01d06e14);
    }
    if ((byte)(&DAT_004c4f4e)[(int)puVar5] == 0x40) goto LAB_01662f38;
    uVar3 = (uint)(byte)(&DAT_004c4f4e)[(int)puVar5] << 0x1a | uVar3 >> 6;
    uVar4 = uVar4 + 1;
  } while (param_4 != uVar4);
  param_1[1] = uVar3 >> (param_4 * 0x1a & 0x1e);
  puVar2 = &DAT_80000004;
LAB_01662f38:
  *param_1 = puVar2;
  return;
}


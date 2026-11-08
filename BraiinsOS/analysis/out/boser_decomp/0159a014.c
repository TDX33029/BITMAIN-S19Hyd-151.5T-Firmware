// FUN_0159a014 @ 0159a014 size=492 calls_out=0 calls_in=1
// strings: 

byte FUN_0159a014(undefined4 param_1,char *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  byte bVar8;
  uint uVar9;
  
  bVar8 = 1;
  if ((*param_2 == '\x03') && (*(int *)(param_2 + 0xc) != 0)) {
    pbVar4 = *(byte **)(param_2 + 8);
    pbVar2 = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar2 = pbVar4 + 2;
      }
      else {
        uVar9 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar9 | (uVar6 & 0x1f) << 0xc;
          pbVar2 = pbVar4 + 3;
        }
        else {
          uVar6 = pbVar4[3] & 0x3f | uVar9 << 6 | (uVar6 & 7) << 0x12;
          pbVar2 = pbVar4 + 4;
        }
      }
    }
    bVar8 = 0;
    if (uVar6 == 0x2f) {
      bVar8 = 1;
      if (pbVar2 != pbVar4 + *(int *)(param_2 + 0xc)) {
        bVar7 = false;
        do {
          pbVar3 = pbVar2 + 1;
          puVar5 = (undefined1 *)(uint)*pbVar2;
          if (0x7fffffff < (uint)(int)(char)*pbVar2) {
            if (puVar5 < (undefined1 *)0xe0) {
              puVar5 = (undefined1 *)(pbVar2[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
              pbVar3 = pbVar2 + 2;
            }
            else {
              uVar6 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
              if (puVar5 < (undefined1 *)0xf0) {
                puVar5 = (undefined1 *)(uVar6 | ((uint)puVar5 & 0x1f) << 0xc);
                pbVar3 = pbVar2 + 3;
              }
              else {
                puVar5 = (undefined1 *)(pbVar2[3] & 0x3f | uVar6 << 6 | ((uint)puVar5 & 7) << 0x12);
                pbVar3 = pbVar2 + 4;
              }
            }
          }
          if (puVar5 < (undefined1 *)0x7e) {
            bVar1 = false;
            if ((undefined1 *)0x1 < puVar5 + -0x30) {
              if (puVar5 != (undefined1 *)0x2f) goto LAB_0159a188;
LAB_0159a15c:
              bVar1 = false;
              if (bVar7) {
                return 0;
              }
            }
          }
          else if (puVar5 == (undefined1 *)0x7e) {
            bVar1 = true;
            if (bVar7 != false) {
              return 0;
            }
          }
          else {
            if (puVar5 == &DAT_00110000) break;
LAB_0159a188:
            bVar1 = false;
            if (bVar7 != false || (undefined1 *)0x2e < puVar5) {
              if (puVar5 + -0x30 < (undefined1 *)0x4e) goto LAB_0159a15c;
              bVar1 = false;
              if (bVar7 != false || puVar5 + -0x110000 < (undefined1 *)0xffef007f) {
                return 0;
              }
            }
          }
          bVar7 = bVar1;
          pbVar2 = pbVar3;
        } while (pbVar3 != pbVar4 + *(int *)(param_2 + 0xc));
        bVar8 = bVar7 ^ 1;
      }
    }
  }
  return bVar8;
}


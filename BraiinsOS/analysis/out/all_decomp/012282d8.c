// FUN_012282d8 @ 012282d8 size=528 calls_out=0 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

bool FUN_012282d8(undefined4 param_1,char *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  bool bVar7;
  uint uVar8;
  
  bVar7 = true;
  if ((*param_2 == '\x03') && (*(int *)(param_2 + 0xc) != 0)) {
    pbVar4 = *(byte **)(param_2 + 8);
    pbVar3 = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar3 = pbVar4 + 2;
      }
      else {
        uVar8 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar8 | (uVar6 & 0x1f) << 0xc;
          pbVar3 = pbVar4 + 3;
        }
        else {
          uVar6 = pbVar4[3] & 0x3f | uVar8 << 6 | (uVar6 & 7) << 0x12;
          pbVar3 = pbVar4 + 4;
        }
      }
    }
    bVar7 = false;
    if (uVar6 == 0x2f) {
      bVar7 = true;
      if (pbVar3 != pbVar4 + *(int *)(param_2 + 0xc)) {
        bVar7 = false;
        do {
          puVar5 = (undefined1 *)(uint)*pbVar3;
          pbVar2 = pbVar3 + 1;
          if ((uint)(int)(char)*pbVar3 < 0x80000000) {
joined_r0x01228418:
            pbVar3 = pbVar2;
            if ((undefined1 *)0x7d < puVar5) goto LAB_01228448;
LAB_0122841c:
            bVar1 = false;
            if ((undefined1 *)0x1 < puVar5 + -0x30) {
              if (puVar5 != (undefined1 *)0x2f) goto LAB_01228468;
LAB_01228398:
              bVar1 = false;
              if (bVar7) {
                return false;
              }
            }
          }
          else {
            if (puVar5 < (undefined1 *)0xe0) {
              puVar5 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
              pbVar2 = pbVar3 + 2;
              goto joined_r0x01228418;
            }
            uVar6 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
            if (&DAT_000000f0 <= puVar5) {
              puVar5 = (undefined1 *)(pbVar3[3] & 0x3f | uVar6 << 6 | ((uint)puVar5 & 7) << 0x12);
              pbVar2 = pbVar3 + 4;
              goto joined_r0x01228418;
            }
            puVar5 = (undefined1 *)(uVar6 | ((uint)puVar5 & 0x1f) << 0xc);
            pbVar3 = pbVar3 + 3;
            if (puVar5 < (undefined1 *)0x7e) goto LAB_0122841c;
LAB_01228448:
            if (puVar5 == (undefined1 *)0x7e) {
              bVar1 = true;
              if (bVar7 != false) {
                return false;
              }
            }
            else {
              if (puVar5 == &DAT_00110000) break;
LAB_01228468:
              bVar1 = false;
              if (bVar7 != false || (undefined1 *)0x2e < puVar5) {
                if (puVar5 + -0x30 < (undefined1 *)0x4e) goto LAB_01228398;
                bVar1 = false;
                if (bVar7 != false || puVar5 + -0x110000 < (undefined1 *)0xffef007f) {
                  return false;
                }
              }
            }
          }
          bVar7 = bVar1;
        } while (pbVar3 != pbVar4 + *(int *)(param_2 + 0xc));
        bVar7 = (bool)(bVar7 ^ 1);
      }
    }
  }
  return bVar7;
}


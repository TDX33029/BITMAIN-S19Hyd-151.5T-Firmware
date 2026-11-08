// FUN_015a4a58 @ 015a4a58 size=1184 calls_out=0 calls_in=1
// strings: 

bool FUN_015a4a58(undefined4 param_1,char *param_2)

{
  bool bVar1;
  byte *pbVar2;
  byte *pbVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  uint uVar6;
  bool bVar7;
  
  if (*param_2 != '\x03') {
    return true;
  }
  if (*(int *)(param_2 + 0xc) != 0) {
    pbVar2 = *(byte **)(param_2 + 8);
    pbVar5 = pbVar2 + 1;
    puVar4 = (undefined1 *)(uint)*pbVar2;
    if (0x7fffffff < (uint)(int)(char)*pbVar2) {
      if (puVar4 < (undefined1 *)0xe0) {
        puVar4 = (undefined1 *)(pbVar2[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
        pbVar5 = pbVar2 + 2;
      }
      else {
        uVar6 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
        if (puVar4 < (undefined1 *)0xf0) {
          puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
          pbVar5 = pbVar2 + 3;
        }
        else {
          puVar4 = (undefined1 *)(pbVar2[3] & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
          pbVar5 = pbVar2 + 4;
        }
      }
    }
    if (puVar4 != &DAT_00110000) {
      pbVar2 = pbVar2 + *(int *)(param_2 + 0xc);
      if (puVar4 == (undefined1 *)0x30) {
        if (pbVar5 == pbVar2) {
          return true;
        }
        pbVar3 = pbVar5 + 1;
        puVar4 = (undefined1 *)(uint)*pbVar5;
        if (0x7fffffff < (uint)(int)(char)*pbVar5) {
          if (puVar4 < (undefined1 *)0xe0) {
            puVar4 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
            pbVar3 = pbVar5 + 2;
          }
          else {
            uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
            if (puVar4 < (undefined1 *)0xf0) {
              puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
              pbVar3 = pbVar5 + 3;
            }
            else {
              puVar4 = (undefined1 *)(pbVar5[3] & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
              pbVar3 = pbVar5 + 4;
            }
          }
        }
        if (puVar4 != (undefined1 *)0x23) {
          if (puVar4 != (undefined1 *)0x2f) {
            return puVar4 == &DAT_00110000;
          }
          if (pbVar3 == pbVar2) {
            return true;
          }
          bVar7 = false;
          do {
            pbVar5 = pbVar3 + 1;
            puVar4 = (undefined1 *)(uint)*pbVar3;
            if (0x7fffffff < (uint)(int)(char)*pbVar3) {
              if (puVar4 < (undefined1 *)0xe0) {
                puVar4 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
                pbVar5 = pbVar3 + 2;
              }
              else {
                uVar6 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
                if (puVar4 < (undefined1 *)0xf0) {
                  puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
                  pbVar5 = pbVar3 + 3;
                }
                else {
                  puVar4 = (undefined1 *)
                           (pbVar3[3] & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
                  pbVar5 = pbVar3 + 4;
                }
              }
            }
            if (puVar4 < (undefined1 *)0x7e) {
              bVar1 = false;
              if ((undefined1 *)0x1 < puVar4 + -0x30) {
                if (puVar4 != (undefined1 *)0x2f) goto LAB_015a4e90;
LAB_015a4e64:
                bVar1 = false;
                if (bVar7) {
                  return false;
                }
              }
            }
            else if (puVar4 == (undefined1 *)0x7e) {
              bVar1 = true;
              if (bVar7 != false) {
                return false;
              }
            }
            else {
              if (puVar4 == &DAT_00110000) break;
LAB_015a4e90:
              bVar1 = false;
              if (bVar7 != false || (undefined1 *)0x2e < puVar4) {
                if (puVar4 + -0x30 < (undefined1 *)0x4e) goto LAB_015a4e64;
                if (bVar7 != false || puVar4 + -0x110000 < (undefined1 *)0xffef007f) {
                  return false;
                }
              }
            }
            bVar7 = bVar1;
            pbVar3 = pbVar5;
          } while (pbVar5 != pbVar2);
          goto LAB_015a4ef0;
        }
LAB_015a4d58:
        if (pbVar3 == pbVar2) {
          return true;
        }
        if ((0x7fffffff < (uint)(int)(char)*pbVar3) && (uVar6 = (uint)*pbVar3, 0xdf < uVar6)) {
          if (uVar6 < 0xf0) {
            return false;
          }
          return (undefined1 *)
                 ((pbVar3[2] & 0x3f) << 6 | (pbVar3[1] & 0x3f) << 0xc | pbVar3[3] & 0x3f |
                 (uVar6 & 7) << 0x12) == &DAT_00110000;
        }
      }
      else if (puVar4 + -0x30 < (undefined1 *)0xa) {
        do {
          if (pbVar5 == pbVar2) {
            return true;
          }
          pbVar3 = pbVar5 + 1;
          puVar4 = (undefined1 *)(uint)*pbVar5;
          if (0x7fffffff < (uint)(int)(char)*pbVar5) {
            if (puVar4 < (undefined1 *)0xe0) {
              puVar4 = (undefined1 *)(pbVar5[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
              pbVar3 = pbVar5 + 2;
            }
            else {
              uVar6 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
              if (puVar4 < (undefined1 *)0xf0) {
                puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
                pbVar3 = pbVar5 + 3;
              }
              else {
                puVar4 = (undefined1 *)(pbVar5[3] & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
                if (puVar4 == &DAT_00110000) {
                  return true;
                }
                pbVar3 = pbVar5 + 4;
              }
            }
          }
          if (puVar4 == (undefined1 *)0x23) goto LAB_015a4d58;
          if (puVar4 == (undefined1 *)0x2f) {
            if (pbVar3 == pbVar2) {
              return true;
            }
            bVar7 = false;
            goto LAB_015a4c1c;
          }
          pbVar5 = pbVar3;
        } while (puVar4 + -0x30 < &DAT_0000000a);
      }
    }
  }
  return false;
LAB_015a4c1c:
  do {
    pbVar5 = pbVar3 + 1;
    puVar4 = (undefined1 *)(uint)*pbVar3;
    if (0x7fffffff < (uint)(int)(char)*pbVar3) {
      if (puVar4 < (undefined1 *)0xe0) {
        puVar4 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar4 & 0x1f) << 6);
        pbVar5 = pbVar3 + 2;
      }
      else {
        uVar6 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
        if (puVar4 < (undefined1 *)0xf0) {
          puVar4 = (undefined1 *)(uVar6 | ((uint)puVar4 & 0x1f) << 0xc);
          pbVar5 = pbVar3 + 3;
        }
        else {
          puVar4 = (undefined1 *)(pbVar3[3] & 0x3f | uVar6 << 6 | ((uint)puVar4 & 7) << 0x12);
          pbVar5 = pbVar3 + 4;
        }
      }
    }
    if (puVar4 < (undefined1 *)0x7e) {
      bVar1 = false;
      if ((undefined1 *)0x1 < puVar4 + -0x30) {
        if (puVar4 != (undefined1 *)0x2f) goto LAB_015a4cd8;
LAB_015a4cac:
        bVar1 = false;
        if (bVar7) {
          return false;
        }
      }
    }
    else if (puVar4 == (undefined1 *)0x7e) {
      bVar1 = true;
      if (bVar7) {
        return false;
      }
    }
    else {
      if (puVar4 == &DAT_00110000) break;
LAB_015a4cd8:
      bVar1 = false;
      if ((bool)(bVar7 | (undefined1 *)0x2e < puVar4)) {
        if (puVar4 + -0x30 < (undefined1 *)0x4e) goto LAB_015a4cac;
        if ((bool)(bVar7 | puVar4 + -0x110000 < (undefined1 *)0xffef007f)) {
          return false;
        }
      }
    }
    bVar7 = bVar1;
    pbVar3 = pbVar5;
  } while (pbVar5 != pbVar2);
LAB_015a4ef0:
  return (bool)(bVar7 ^ 1);
}


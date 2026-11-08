// FUN_01235770 @ 01235770 size=1188 calls_out=0 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

uint FUN_01235770(undefined4 param_1,char *param_2)

{
  int iVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined1 *puVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  
  if (*param_2 != '\x03') {
    return 1;
  }
  iVar1 = *(int *)(param_2 + 0xc);
  if (iVar1 == 0) {
    return 0;
  }
  pbVar2 = *(byte **)(param_2 + 8);
  pbVar4 = pbVar2 + 1;
  uVar6 = (uint)*pbVar2;
  if (0x7fffffff < (uint)(int)(char)*pbVar2) {
    if (uVar6 < 0xe0) {
      uVar6 = pbVar2[1] & 0x3f | (uVar6 & 0x1f) << 6;
      pbVar4 = pbVar2 + 2;
    }
    else {
      uVar7 = pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
      if (uVar6 < 0xf0) {
        uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
        pbVar4 = pbVar2 + 3;
      }
      else {
        uVar6 = pbVar2[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
        pbVar4 = pbVar2 + 4;
      }
    }
  }
  uVar6 = uVar6 - 0x30;
  if (uVar6 == 0) {
    pbVar8 = pbVar2 + iVar1;
    if (pbVar4 == pbVar8) {
      return 1;
    }
    pbVar3 = pbVar4 + 1;
    uVar6 = (uint)*pbVar4;
    if (0x7fffffff < (uint)(int)(char)*pbVar4) {
      if (uVar6 < 0xe0) {
        uVar6 = pbVar4[1] & 0x3f | (uVar6 & 0x1f) << 6;
        pbVar3 = pbVar4 + 2;
      }
      else {
        uVar7 = pbVar4[2] & 0x3f | (pbVar4[1] & 0x3f) << 6;
        if (uVar6 < 0xf0) {
          uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
          pbVar3 = pbVar4 + 3;
        }
        else {
          uVar6 = pbVar4[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
          pbVar3 = pbVar4 + 4;
        }
      }
    }
    if (uVar6 == 0x2f) {
      if (pbVar3 == pbVar8) {
        return 1;
      }
      uVar6 = 0;
      do {
        puVar5 = (undefined1 *)(uint)*pbVar3;
        pbVar4 = pbVar3 + 1;
        if ((uint)(int)(char)*pbVar3 < 0x80000000) {
joined_r0x01235b54:
          pbVar3 = pbVar4;
          if ((undefined1 *)0x7d < puVar5) goto LAB_01235b84;
LAB_01235b58:
          uVar7 = 0;
          if ((undefined1 *)0x1 < puVar5 + -0x30) {
            if (puVar5 != (undefined1 *)0x2f) goto LAB_01235ba4;
LAB_01235ad4:
            uVar7 = 0;
            if (uVar6 != 0) {
              return 0;
            }
          }
        }
        else {
          if (puVar5 < (undefined1 *)0xe0) {
            puVar5 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
            pbVar4 = pbVar3 + 2;
            goto joined_r0x01235b54;
          }
          uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
          if (puVar5 < &DAT_000000f0) {
            puVar5 = (undefined1 *)(uVar7 | ((uint)puVar5 & 0x1f) << 0xc);
            pbVar4 = pbVar3 + 3;
            goto joined_r0x01235b54;
          }
          puVar5 = (undefined1 *)(pbVar3[3] & 0x3f | uVar7 << 6 | ((uint)puVar5 & 7) << 0x12);
          pbVar3 = pbVar3 + 4;
          if (puVar5 < (undefined1 *)0x7e) goto LAB_01235b58;
LAB_01235b84:
          if (puVar5 == (undefined1 *)0x7e) {
            uVar7 = 1;
            if (uVar6 != 0) {
              return 0;
            }
          }
          else {
            if (puVar5 == &DAT_00110000) break;
LAB_01235ba4:
            uVar7 = 0;
            if (uVar6 != 0 || (undefined1 *)0x2e < puVar5) {
              if (puVar5 + -0x30 < (undefined1 *)0x4e) goto LAB_01235ad4;
              if (uVar6 != 0 || puVar5 + -0x110000 < (undefined1 *)0xffef007f) {
                return 0;
              }
            }
          }
        }
        uVar6 = uVar7;
      } while (pbVar3 != pbVar8);
      return uVar6 ^ 1;
    }
    if (uVar6 == 0x23) {
LAB_01235a90:
      if (pbVar3 == pbVar2 + iVar1) {
        return 1;
      }
    }
  }
  else {
    pbVar8 = pbVar2 + iVar1;
    pbVar3 = pbVar4;
    for (; uVar6 < 10; uVar6 = uVar6 - 0x30) {
      if (pbVar3 == pbVar8) {
        return 1;
      }
      uVar6 = (uint)*pbVar3;
      pbVar4 = pbVar3 + 1;
      if (0x7fffffff < (uint)(int)(char)*pbVar3) {
        if (uVar6 < 0xe0) {
          uVar6 = pbVar3[1] & 0x3f | (uVar6 & 0x1f) << 6;
          pbVar4 = pbVar3 + 2;
        }
        else {
          uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
          if (uVar6 < 0xf0) {
            uVar6 = uVar7 | (uVar6 & 0x1f) << 0xc;
            pbVar4 = pbVar3 + 3;
          }
          else {
            uVar6 = pbVar3[3] & 0x3f | uVar7 << 6 | (uVar6 & 7) << 0x12;
            pbVar4 = pbVar3 + 4;
          }
        }
      }
      pbVar3 = pbVar4;
      if (uVar6 == 0x23) goto LAB_01235a90;
      if (uVar6 == 0x2f) {
        if (pbVar3 == pbVar8) {
          return 1;
        }
        uVar6 = 0;
        goto LAB_01235964;
      }
    }
  }
  return 0;
LAB_01235964:
  do {
    puVar5 = (undefined1 *)(uint)*pbVar3;
    pbVar4 = pbVar3 + 1;
    if ((uint)(int)(char)*pbVar3 < 0x80000000) {
joined_r0x012359d4:
      pbVar3 = pbVar4;
      if ((undefined1 *)0x7d < puVar5) goto LAB_01235a04;
LAB_012359d8:
      uVar7 = 0;
      if ((undefined1 *)0x1 < puVar5 + -0x30) {
        if (puVar5 != (undefined1 *)0x2f) goto LAB_01235a24;
LAB_01235954:
        uVar7 = 0;
        if (uVar6 != 0) {
          return 0;
        }
      }
    }
    else {
      if (puVar5 < (undefined1 *)0xe0) {
        puVar5 = (undefined1 *)(pbVar3[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
        pbVar4 = pbVar3 + 2;
        goto joined_r0x012359d4;
      }
      uVar7 = pbVar3[2] & 0x3f | (pbVar3[1] & 0x3f) << 6;
      if (puVar5 < &DAT_000000f0) {
        puVar5 = (undefined1 *)(uVar7 | ((uint)puVar5 & 0x1f) << 0xc);
        pbVar4 = pbVar3 + 3;
        goto joined_r0x012359d4;
      }
      puVar5 = (undefined1 *)(pbVar3[3] & 0x3f | uVar7 << 6 | ((uint)puVar5 & 7) << 0x12);
      pbVar3 = pbVar3 + 4;
      if (puVar5 < (undefined1 *)0x7e) goto LAB_012359d8;
LAB_01235a04:
      if (puVar5 == (undefined1 *)0x7e) {
        uVar7 = 1;
        if (uVar6 != 0) {
          return 0;
        }
      }
      else {
        if (puVar5 == &DAT_00110000) break;
LAB_01235a24:
        uVar7 = 0;
        if (uVar6 != 0 || (undefined1 *)0x2e < puVar5) {
          if (puVar5 + -0x30 < (undefined1 *)0x4e) goto LAB_01235954;
          if (uVar6 != 0 || puVar5 + -0x110000 < (undefined1 *)0xffef007f) {
            return 0;
          }
        }
      }
    }
    uVar6 = uVar7;
  } while (pbVar3 != pbVar8);
  return uVar6 ^ 1;
}


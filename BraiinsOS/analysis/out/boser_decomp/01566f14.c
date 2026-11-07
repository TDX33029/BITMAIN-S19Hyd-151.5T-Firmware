// FUN_01566f14 @ 01566f14 size=860 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01566f14(int *param_1,int param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  undefined1 *puVar4;
  byte *pbVar5;
  undefined1 *puVar6;
  byte *pbVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  byte *pbVar12;
  undefined1 *puVar13;
  int iVar14;
  int iVar15;
  bool bVar16;
  undefined8 uVar17;
  int local_30;
  int local_2c;
  int local_28;
  
  puVar4 = *(undefined1 **)(param_2 + 0x28);
  do {
    uVar17 = FUN_014379b8(param_2);
    iVar9 = (int)((ulonglong)uVar17 >> 0x20);
    pbVar5 = (byte *)uVar17;
    if (pbVar5 == (byte *)0x0) goto LAB_0156723c;
    local_28 = 0;
    local_2c = 1;
    local_30 = 0;
    if (iVar9 == 0) {
      local_2c = 1;
      local_28 = 0;
      goto LAB_01567260;
    }
    iVar15 = 1;
    pbVar7 = pbVar5;
    do {
      iVar14 = local_28;
      pbVar12 = pbVar7 + 1;
      puVar13 = (undefined1 *)(uint)*pbVar7;
      if (0x7fffffff < (uint)(int)(char)*pbVar7) {
        if (puVar13 < (undefined1 *)0xe0) {
          puVar13 = (undefined1 *)(pbVar7[1] & 0x3f | ((uint)puVar13 & 0x1f) << 6);
          pbVar12 = pbVar7 + 2;
        }
        else {
          uVar10 = pbVar7[2] & 0x3f | (pbVar7[1] & 0x3f) << 6;
          if (puVar13 < (undefined1 *)0xf0) {
            puVar13 = (undefined1 *)(uVar10 | ((uint)puVar13 & 0x1f) << 0xc);
            pbVar12 = pbVar7 + 3;
          }
          else {
            puVar13 = (undefined1 *)(pbVar7[3] & 0x3f | uVar10 << 6 | ((uint)puVar13 & 7) << 0x12);
            if (puVar13 == &DAT_00110000) break;
            pbVar12 = pbVar7 + 4;
          }
        }
      }
      if (puVar13 == (undefined1 *)0x5c) {
        if (pbVar12 != pbVar5 + iVar9) {
          uVar10 = (uint)*pbVar12;
          pbVar7 = pbVar12 + 1;
          if (0x7fffffff < (uint)(int)(char)*pbVar12) {
            if (uVar10 < 0xe0) {
              uVar10 = pbVar12[1] & 0x3f | (uVar10 & 0x1f) << 6;
              pbVar7 = pbVar12 + 2;
            }
            else {
              uVar11 = pbVar12[2] & 0x3f | (pbVar12[1] & 0x3f) << 6;
              if (uVar10 < 0xf0) {
                uVar10 = uVar11 | (uVar10 & 0x1f) << 0xc;
                pbVar7 = pbVar12 + 3;
              }
              else {
                uVar10 = pbVar12[3] & 0x3f | uVar11 << 6 | (uVar10 & 7) << 0x12;
                pbVar7 = pbVar12 + 4;
              }
            }
          }
          pbVar12 = pbVar7;
          if (((uVar10 - 0x24 < 0xc) && ((1 << (uVar10 - 0x24 & 0xff) & 0xe01U) != 0)) ||
             (uVar10 == 0x5f)) {
            if (local_30 == local_28) {
              FUN_01af7b44(&local_30,local_28,1,1,1);
            }
            iVar14 = iVar14 + 1;
            *(char *)(local_2c + local_28) = (char)uVar10;
            iVar15 = local_2c;
            goto LAB_01567198;
          }
        }
LAB_01567224:
        FUN_019bb7e0(local_30,local_2c);
        goto LAB_01567230;
      }
      puVar6 = puVar13 + -0x30;
      bVar16 = (undefined1 *)0x9 < puVar6;
      if (bVar16) {
        puVar6 = (undefined1 *)(((uint)puVar13 & 0xffffffdf) - 0x41);
      }
      if (bVar16 && (undefined1 *)0x19 < puVar6) {
        bVar16 = true;
        if (puVar13 == (undefined1 *)0x2d || puVar13 == (undefined1 *)0x2f) {
          uVar10 = 1;
        }
        else {
          uVar10 = 1;
          if (puVar13 != (undefined1 *)0x5f) goto LAB_01567224;
        }
      }
      else {
        bVar16 = true;
        uVar10 = 1;
        if ((undefined1 *)0x7f < puVar13) {
          uVar10 = 2;
          bVar16 = false;
          if (((undefined1 *)0x7ff < puVar13) && (uVar10 = 4, puVar13 < (undefined1 *)0x10000)) {
            uVar10 = 3;
          }
        }
      }
      if ((uint)(local_30 - local_28) < uVar10) {
        FUN_01af7b44(&local_30,local_28,uVar10,1,1);
        iVar15 = local_2c;
      }
      pbVar7 = (byte *)(iVar15 + local_28);
      if (bVar16) {
        *pbVar7 = (byte)puVar13;
      }
      else {
        bVar1 = (byte)puVar13 & 0x3f | 0x80;
        bVar8 = (byte)((uint)puVar13 >> 6);
        if (puVar13 < (undefined1 *)0x800) {
          pbVar7[1] = bVar1;
          bVar8 = bVar8 | 0xc0;
        }
        else {
          bVar2 = bVar8 & 0x3f | 0x80;
          bVar3 = (byte)((uint)puVar13 >> 0xc);
          if ((uint)puVar13 >> 0x10 == 0) {
            pbVar7[2] = bVar1;
            bVar8 = bVar3 | 0xe0;
            pbVar7[1] = bVar2;
          }
          else {
            bVar8 = (byte)((uint)puVar13 >> 0x12) | 0xf0;
            pbVar7[3] = bVar1;
            pbVar7[2] = bVar2;
            pbVar7[1] = bVar3 & 0x3f | 0x80;
          }
        }
        *pbVar7 = bVar8;
      }
      iVar14 = uVar10 + iVar14;
LAB_01567198:
      pbVar7 = pbVar12;
      local_28 = iVar14;
    } while (pbVar12 != pbVar5 + iVar9);
  } while (local_30 == -0x7fffffff);
  if (local_30 == -0x80000000) {
LAB_01567230:
    *puVar4 = 1;
LAB_0156723c:
    *param_1 = -0x80000000;
  }
  else {
LAB_01567260:
    *param_1 = local_30;
    param_1[1] = local_2c;
    param_1[2] = local_28;
  }
  return;
}


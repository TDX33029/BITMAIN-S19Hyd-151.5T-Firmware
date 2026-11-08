// FUN_007a67e4 @ 007a67e4 size=540 calls_out=1 calls_in=2
// strings: 

void FUN_007a67e4(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  int iVar4;
  byte bVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  byte *pbVar9;
  uint uVar10;
  byte *pbVar11;
  undefined1 *puVar12;
  int local_30;
  int local_2c;
  int local_28;
  
  pbVar9 = (byte *)param_2[1];
  uVar10 = param_2[2];
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (uVar10 != 0) {
    pbVar11 = (byte *)*param_2;
    if (pbVar9 != pbVar11) {
      uVar6 = (int)pbVar9 - (int)pbVar11;
      uVar8 = uVar6 >> 2;
      if ((uVar6 & 3) != 0) {
        uVar8 = (uVar6 >> 2) + 1;
      }
      if (uVar10 < uVar8) {
        uVar8 = uVar10;
      }
      FUN_016092cc(&local_30,0,uVar8,1,1);
    }
    do {
      iVar4 = local_28;
      if (pbVar11 == pbVar9) break;
      pbVar7 = pbVar11 + 1;
      puVar12 = (undefined1 *)(uint)*pbVar11;
      if ((char)*pbVar11 < '\0') {
        if (puVar12 < (undefined1 *)0xe0) {
          puVar12 = (undefined1 *)(pbVar11[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
          pbVar7 = pbVar11 + 2;
        }
        else {
          uVar8 = pbVar11[2] & 0x3f | (pbVar11[1] & 0x3f) << 6;
          if (puVar12 < (undefined1 *)0xf0) {
            puVar12 = (undefined1 *)(uVar8 | ((uint)puVar12 & 0x1f) << 0xc);
            pbVar7 = pbVar11 + 3;
          }
          else {
            puVar12 = (undefined1 *)(pbVar11[3] & 0x3f | uVar8 << 6 | ((uint)puVar12 & 7) << 0x12);
            if (puVar12 == &DAT_00110000) break;
            pbVar7 = pbVar11 + 4;
          }
        }
        if (puVar12 < (undefined1 *)0x80) goto LAB_007a68c0;
        uVar8 = 2;
        bVar3 = false;
        if (((undefined1 *)0x7ff < puVar12) && (uVar8 = 4, puVar12 < (undefined1 *)0x10000)) {
          uVar8 = 3;
        }
      }
      else {
LAB_007a68c0:
        bVar3 = true;
        uVar8 = 1;
      }
      if ((uint)(local_30 - local_28) < uVar8) {
        FUN_016092cc(&local_30,local_28,uVar8,1,1);
      }
      pbVar11 = (byte *)(local_2c + local_28);
      if (bVar3) {
        *pbVar11 = (byte)puVar12;
      }
      else {
        bVar1 = (byte)puVar12 & 0x3f | 0x80;
        bVar5 = (byte)((uint)puVar12 >> 6);
        if (puVar12 < (undefined1 *)0x800) {
          bVar5 = bVar5 | 0xc0;
          pbVar11[1] = bVar1;
        }
        else {
          bVar2 = bVar5 & 0x3f | 0x80;
          bVar5 = (byte)((uint)puVar12 >> 0xc);
          if ((uint)puVar12 >> 0x10 != 0) {
            pbVar11[3] = bVar1;
            pbVar11[2] = bVar2;
            pbVar11[1] = bVar5 & 0x3f | 0x80;
            *pbVar11 = (byte)((uint)puVar12 >> 0x12) | 0xf0;
            goto LAB_007a6978;
          }
          pbVar11[1] = bVar2;
          bVar5 = bVar5 | 0xe0;
          pbVar11[2] = bVar1;
        }
        *pbVar11 = bVar5;
      }
LAB_007a6978:
      uVar10 = uVar10 - 1;
      local_28 = uVar8 + iVar4;
      pbVar11 = pbVar7;
    } while (uVar10 != 0);
  }
  *param_1 = local_30;
  param_1[1] = local_2c;
  param_1[2] = local_28;
  return;
}


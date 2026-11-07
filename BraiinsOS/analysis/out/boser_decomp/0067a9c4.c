// FUN_0067a9c4 @ 0067a9c4 size=740 calls_out=3 calls_in=2
// strings: 

void FUN_0067a9c4(int *param_1,int *param_2,uint param_3)

{
  byte bVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  int iVar6;
  uint uVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  undefined1 *puVar12;
  byte *pbVar13;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  uVar11 = param_2[2];
  pbVar13 = (byte *)param_2[1];
  if (uVar11 < 0x10) {
    uVar4 = 0;
    if (uVar11 != 0) {
      pbVar10 = pbVar13;
      uVar7 = uVar11;
      do {
        if (-0x41 < (char)*pbVar10) {
          uVar4 = uVar4 + 1;
        }
        uVar7 = uVar7 - 1;
        pbVar10 = pbVar10 + 1;
      } while (uVar7 != 0);
    }
  }
  else {
    uVar4 = FUN_012fa650(pbVar13,uVar11);
  }
  if (uVar4 <= param_3) {
    iVar6 = param_2[1];
    iVar9 = param_2[2];
    *param_1 = *param_2;
    param_1[1] = iVar6;
    param_1[2] = iVar9;
    return;
  }
  local_28 = 0;
  local_2c = 1;
  local_30 = 0;
  if (uVar11 != 0) {
    uVar4 = uVar11 >> 2;
    if ((uVar11 & 3) != 0) {
      uVar4 = (uVar11 >> 2) + 1;
    }
    if (param_3 < uVar4) {
      uVar4 = param_3;
    }
    FUN_0132b898(&local_30,0,uVar4,1,1);
  }
  pbVar10 = pbVar13;
  do {
    iVar6 = local_28;
    if (pbVar10 == pbVar13 + uVar11) break;
    pbVar8 = pbVar10 + 1;
    puVar12 = (undefined1 *)(uint)*pbVar10;
    if ((char)*pbVar10 < '\0') {
      if (puVar12 < (undefined1 *)0xe0) {
        puVar12 = (undefined1 *)(pbVar10[1] & 0x3f | ((uint)puVar12 & 0x1f) << 6);
        pbVar8 = pbVar10 + 2;
      }
      else {
        uVar4 = pbVar10[2] & 0x3f | (pbVar10[1] & 0x3f) << 6;
        if (puVar12 < (undefined1 *)0xf0) {
          puVar12 = (undefined1 *)(uVar4 | ((uint)puVar12 & 0x1f) << 0xc);
          pbVar8 = pbVar10 + 3;
        }
        else {
          puVar12 = (undefined1 *)(pbVar10[3] & 0x3f | uVar4 << 6 | ((uint)puVar12 & 7) << 0x12);
          if (puVar12 == &DAT_00110000) break;
          pbVar8 = pbVar10 + 4;
        }
      }
      if (puVar12 < (undefined1 *)0x80) goto LAB_0067aaf8;
      uVar4 = 2;
      bVar3 = false;
      if (((undefined1 *)0x7ff < puVar12) && (uVar4 = 4, puVar12 < (undefined1 *)0x10000)) {
        uVar4 = 3;
      }
    }
    else {
LAB_0067aaf8:
      bVar3 = true;
      uVar4 = 1;
    }
    if ((uint)(local_30 - local_28) < uVar4) {
      FUN_0132b898(&local_30,local_28,uVar4,1,1);
    }
    pbVar10 = (byte *)(local_2c + local_28);
    if (bVar3) {
      *pbVar10 = (byte)puVar12;
    }
    else {
      bVar1 = (byte)puVar12 & 0x3f | 0x80;
      bVar5 = (byte)((uint)puVar12 >> 6);
      if (puVar12 < (undefined1 *)0x800) {
        bVar5 = bVar5 | 0xc0;
        pbVar10[1] = bVar1;
      }
      else {
        bVar2 = bVar5 & 0x3f | 0x80;
        bVar5 = (byte)((uint)puVar12 >> 0xc);
        if ((uint)puVar12 >> 0x10 != 0) {
          pbVar10[3] = bVar1;
          pbVar10[2] = bVar2;
          pbVar10[1] = bVar5 & 0x3f | 0x80;
          *pbVar10 = (byte)((uint)puVar12 >> 0x12) | 0xf0;
          goto LAB_0067aba8;
        }
        pbVar10[1] = bVar2;
        bVar5 = bVar5 | 0xe0;
        pbVar10[2] = bVar1;
      }
      *pbVar10 = bVar5;
    }
LAB_0067aba8:
    param_3 = param_3 - 1;
    local_28 = uVar4 + iVar6;
    pbVar10 = pbVar8;
  } while (param_3 != 0);
  local_40 = local_30;
  local_3c = local_2c;
  local_38 = local_28;
  if ((uint)(local_30 - local_28) < 3) {
    FUN_0132b898(&local_40,local_28,3,1,1);
  }
  *(undefined2 *)(local_3c + local_38) = 0x2e2e;
  *(undefined1 *)((undefined2 *)(local_3c + local_38) + 1) = 0x2e;
  local_38 = local_38 + 3;
  *param_1 = local_40;
  param_1[1] = local_3c;
  param_1[2] = local_38;
  FUN_019bb7e0(*param_2,pbVar13);
  return;
}


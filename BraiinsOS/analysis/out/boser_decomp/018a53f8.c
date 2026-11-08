// FUN_018a53f8 @ 018a53f8 size=832 calls_out=5 calls_in=1
// strings: internal error: entered unreachable code

undefined1 * FUN_018a53f8(undefined4 *param_1)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  uint uVar4;
  undefined1 *puVar5;
  int iVar6;
  byte *pbVar7;
  uint uVar8;
  uint uVar9;
  byte *pbVar10;
  int iVar11;
  char *local_50;
  int local_4c;
  char local_48;
  byte local_47 [3];
  byte *local_44;
  int local_40;
  undefined4 local_3c;
  undefined1 *local_38;
  byte *local_34;
  byte **local_30;
  undefined1 *local_2c;
  undefined4 *local_28;
  code *local_24;
  
  uVar3 = param_1[4];
  if ((uint)param_1[1] < uVar3) {
    return (undefined1 *)0x110001;
  }
  pbVar7 = (byte *)*param_1;
  iVar11 = param_1[1] - uVar3;
  *param_1 = pbVar7 + uVar3;
  param_1[1] = iVar11;
  if (uVar3 != 2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d22274);
  }
  uVar8 = (uint)*pbVar7;
  uVar4 = uVar8 - 0x30;
  if (0x39 < uVar8) {
    uVar4 = (uVar8 - 0x41 & 0xffffffdf) + 10;
  }
  if (0xf < uVar4) {
LAB_018a5714:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0cc(&DAT_01d22284);
  }
  uVar9 = (uint)pbVar7[1];
  uVar8 = uVar9 - 0x30;
  if (0x39 < uVar9) {
    uVar8 = (uVar9 - 0x41 & 0xffffffdf) + 10;
  }
  if (0xf < uVar8) goto LAB_018a5714;
  uVar8 = uVar8 | uVar4 << 4;
  local_48 = (char)uVar8;
  if (local_48 < '\0') {
    if (uVar8 < 0xc0) {
      return &DAT_00110000;
    }
    local_4c = 2;
    if (0xdf < uVar8) {
      local_4c = 3;
    }
    if ((0xef < uVar8) && (local_4c = 4, 0xf7 < uVar8)) {
      return &DAT_00110000;
    }
    pbVar10 = pbVar7 + uVar3 + 1;
    iVar6 = 0;
    local_47[2] = 0;
    local_47[0] = 0;
    local_47[1] = 0;
    pbVar7 = local_47;
    do {
      local_50 = &local_48;
      if ((uint)(iVar11 + iVar6) < 2) {
        return &DAT_00110000;
      }
      uVar3 = (uint)pbVar10[-1];
      *param_1 = pbVar10 + 1;
      param_1[1] = iVar11 + -2 + iVar6;
      uVar4 = uVar3 - 0x30;
      if (0x39 < uVar3) {
        uVar4 = (uVar3 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar4) goto LAB_018a5714;
      uVar3 = (uint)*pbVar10;
      uVar8 = uVar3 - 0x30;
      if (0x39 < uVar3) {
        uVar8 = (uVar3 - 0x41 & 0xffffffdf) + 10;
      }
      if (0xf < uVar8) goto LAB_018a5714;
      *pbVar7 = (byte)uVar8 | (byte)(uVar4 << 4);
      iVar6 = iVar6 + -2;
      pbVar10 = pbVar10 + 2;
      pbVar7 = pbVar7 + 1;
    } while (local_4c * 2 + -2 + iVar6 != 0);
  }
  else {
    local_4c = 1;
    local_47[2] = 0;
    local_47[0] = 0;
    local_47[1] = 0;
  }
  local_50 = &local_48;
  FUN_012fbd94(&local_38,local_50);
  puVar5 = &DAT_00110000;
  if (local_38 == (undefined1 *)0x0) {
    local_40 = (int)local_30;
    local_44 = local_34;
    if (local_30 == (byte **)0x0) {
      puVar5 = &DAT_00110000;
      pbVar7 = local_34;
    }
    else {
      puVar5 = (undefined1 *)(uint)*local_34;
      pbVar7 = local_34 + 1;
      if (0x7fffffff < (uint)(int)(char)*local_34) {
        if (puVar5 < (undefined1 *)0xe0) {
          puVar5 = (undefined1 *)(local_34[1] & 0x3f | ((uint)puVar5 & 0x1f) << 6);
          pbVar7 = local_34 + 2;
        }
        else {
          uVar3 = local_34[2] & 0x3f | (local_34[1] & 0x3f) << 6;
          if (puVar5 < (undefined1 *)0xf0) {
            puVar5 = (undefined1 *)(uVar3 | ((uint)puVar5 & 0x1f) << 0xc);
            pbVar7 = local_34 + 3;
          }
          else {
            puVar5 = (undefined1 *)(local_34[3] & 0x3f | uVar3 << 6 | ((uint)puVar5 & 7) << 0x12);
            pbVar7 = local_34 + 4;
          }
        }
      }
    }
    if (pbVar7 == local_34 + (int)local_30) {
      bVar2 = true;
    }
    else {
      bVar1 = *pbVar7;
      if (((uint)(int)(char)bVar1 < 0x80000000) || (bVar1 < 0xf0)) goto LAB_018a565c;
      bVar2 = (undefined1 *)
              ((pbVar7[2] & 0x3f) << 6 | (pbVar7[1] & 0x3f) << 0xc | pbVar7[3] & 0x3f |
              (bVar1 & 7) << 0x12) == &DAT_00110000;
    }
    if (puVar5 == &DAT_00110000 || !bVar2) {
LAB_018a565c:
      local_3c = FUN_018a5758(local_34);
      local_28 = &local_3c;
      local_30 = &local_44;
      local_24 = FUN_012fd02c;
      local_2c = &LAB_01674ec4;
      local_34 = &LAB_018a67c8;
      local_38 = (undefined1 *)&local_50;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_005b09e6,&local_38,&DAT_01d22294);
    }
  }
  return puVar5;
}


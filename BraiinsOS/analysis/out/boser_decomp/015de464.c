// FUN_015de464 @ 015de464 size=1060 calls_out=8 calls_in=0
// strings: 

undefined4 FUN_015de464(int *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte *pbVar5;
  uint **ppuVar6;
  undefined4 **ppuVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  byte *pbVar14;
  undefined4 *puVar15;
  undefined4 ***local_58;
  undefined4 *local_54;
  undefined4 ***local_50;
  undefined1 *local_4c;
  undefined4 ***local_44;
  undefined4 **local_40;
  undefined1 *local_3c;
  uint **local_38;
  undefined4 *local_34;
  int local_30;
  undefined4 ***local_2c;
  undefined1 *local_28;
  
  ppuVar7 = (undefined4 **)*param_1;
  uVar11 = *param_2;
  uVar9 = param_2[1];
  if (ppuVar7[3] == (undefined4 *)0x80000000) {
    local_34 = (undefined4 *)thunk_FUN_01be5118(4);
    if (local_34 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    local_30 = 4;
    *local_34 = 0x656e6f4e;
    local_38 = (uint **)0x4;
    goto LAB_015de81c;
  }
  pbVar14 = (byte *)ppuVar7[4];
  puVar15 = ppuVar7[5];
  FUN_012fbd94(&local_44,pbVar14,puVar15);
  if (local_44 != (undefined4 ***)0x1) {
    local_2c = (undefined4 ***)local_40;
    local_58 = &local_2c;
    local_28 = local_3c;
    local_54 = (undefined4 *)&LAB_018a13b8;
    FUN_00664898(&local_38,&DAT_0059f7ad,&local_58);
    goto LAB_015de81c;
  }
  ppuVar6 = (uint **)((int)puVar15 * 2 + 2);
  uVar13 = 0;
  if ((int)ppuVar6 < 0) {
LAB_015de4e8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar13,ppuVar6);
  }
  if (ppuVar6 == (uint **)0x0) {
    local_54 = (undefined4 *)&DAT_00000001;
    local_58 = (undefined4 ***)0x0;
LAB_015de57c:
    local_50 = (undefined4 ***)0x0;
    FUN_006520b4(&local_58,0,2,1,1);
  }
  else {
    uVar13 = 1;
    local_54 = (undefined4 *)FUN_01298504(ppuVar6,1);
    if (local_54 == (undefined4 *)0x0) goto LAB_015de4e8;
    local_50 = (undefined4 ***)0x0;
    local_58 = (undefined4 ***)ppuVar6;
    if (ppuVar6 < (uint **)0x2) goto LAB_015de57c;
  }
  iVar8 = (int)local_50 + 2;
  *(undefined2 *)((int)local_54 + (int)local_50) = 0x7830;
  for (; local_50 = (undefined4 ***)iVar8, puVar15 != (undefined4 *)0x0;
      puVar15 = (undefined4 *)((int)puVar15 + -1)) {
    bVar1 = *pbVar14;
    uVar10 = 1;
    uVar12 = *(uint *)("0" + (bVar1 >> 2 & 0x3c));
    if (0x7f < uVar12) {
      uVar10 = 2;
    }
    if ((0x7ff < uVar12) && (uVar10 = 4, uVar12 < 0x10000)) {
      uVar10 = 3;
    }
    if ((uint)((int)local_58 - iVar8) < uVar10) {
      FUN_006520b4(&local_58,iVar8,uVar10,1,1,ppuVar7);
    }
    pbVar5 = (byte *)((int)local_54 + (int)local_50);
    if (uVar12 < 0x80) {
      *pbVar5 = (byte)uVar12;
    }
    else {
      bVar3 = (byte)uVar12 & 0x3f | 0x80;
      bVar2 = (byte)(uVar12 >> 6);
      if (uVar12 < 0x800) {
        pbVar5[1] = bVar3;
        *pbVar5 = bVar2 | 0xc0;
      }
      else {
        bVar2 = bVar2 & 0x3f | 0x80;
        bVar4 = (byte)(uVar12 >> 0xc);
        if (uVar12 >> 0x10 == 0) {
          pbVar5[1] = bVar2;
          pbVar5[2] = bVar3;
          *pbVar5 = bVar4 | 0xe0;
        }
        else {
          pbVar5[3] = bVar3;
          pbVar5[2] = bVar2;
          pbVar5[1] = bVar4 & 0x3f | 0x80;
          *pbVar5 = (byte)(uVar12 >> 0x12) | 0xf0;
        }
      }
    }
    iVar8 = uVar10 + iVar8;
    uVar10 = 1;
    uVar12 = *(uint *)("0" + (bVar1 & 0xf) * 4);
    if (0x7f < uVar12) {
      uVar10 = 2;
    }
    if ((0x7ff < uVar12) && (uVar10 = 4, uVar12 < 0x10000)) {
      uVar10 = 3;
    }
    local_50 = (undefined4 ***)iVar8;
    if ((uint)((int)local_58 - iVar8) < uVar10) {
      FUN_006520b4(&local_58,iVar8,uVar10,1,1,ppuVar7);
    }
    pbVar5 = (byte *)((int)local_54 + (int)local_50);
    if (uVar12 < 0x80) {
      *pbVar5 = (byte)uVar12;
    }
    else {
      bVar1 = (byte)uVar12 & 0x3f | 0x80;
      bVar3 = (byte)(uVar12 >> 6);
      if (uVar12 < 0x800) {
        pbVar5[1] = bVar1;
        *pbVar5 = bVar3 | 0xc0;
      }
      else {
        bVar3 = bVar3 & 0x3f | 0x80;
        bVar2 = (byte)(uVar12 >> 0xc);
        if (uVar12 >> 0x10 == 0) {
          pbVar5[1] = bVar3;
          pbVar5[2] = bVar1;
          *pbVar5 = bVar2 | 0xe0;
        }
        else {
          pbVar5[3] = bVar1;
          pbVar5[2] = bVar3;
          pbVar5[1] = bVar2 & 0x3f | 0x80;
          *pbVar5 = (byte)(uVar12 >> 0x12) | 0xf0;
        }
      }
    }
    iVar8 = uVar10 + iVar8;
    pbVar14 = pbVar14 + 1;
  }
  local_2c = &local_38;
  local_28 = &LAB_00632348;
  local_38 = (uint **)local_58;
  local_34 = local_54;
  local_30 = iVar8;
  FUN_00664898(&local_58,&DAT_00593cf2,&local_2c);
  FUN_0134bd64(local_38,local_34);
  local_38 = (uint **)local_58;
  local_34 = local_54;
  local_30 = (int)local_50;
LAB_015de81c:
  local_44 = &local_38;
  local_50 = &local_44;
  local_4c = &LAB_0193a90c;
  local_54 = (undefined4 *)&LAB_0193a90c;
  local_58 = &local_2c;
  local_2c = (undefined4 ***)ppuVar7;
  uVar9 = FUN_012fa178(uVar11,uVar9,&DAT_005a75d0,&local_58);
  FUN_0134bd64(local_38,local_34);
  return uVar9;
}


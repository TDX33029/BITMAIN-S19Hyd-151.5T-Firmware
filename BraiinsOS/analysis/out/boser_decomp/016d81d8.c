// FUN_016d81d8 @ 016d81d8 size=1108 calls_out=7 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_016d81d8(undefined4 *param_1,int *param_2)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  byte *pbVar4;
  int iVar5;
  byte bVar6;
  byte bVar7;
  int iVar8;
  undefined4 uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int *piVar14;
  int iVar15;
  int iVar16;
  int local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  int local_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40 [7];
  
  iVar16 = *param_2;
  if (*(int *)(iVar16 + 0x40) != 0) {
    FUN_01306fc8(&DAT_01d09de8);
    *(int *)(iVar16 + 0x40) = *(int *)(iVar16 + 0x40) + 1;
                    /* WARNING: Subroutine does not return */
    FUN_01be040c();
  }
  *(undefined4 *)(iVar16 + 0x4c) = 0;
  *(undefined4 *)(iVar16 + 0x40) = 0xffffffff;
  piVar14 = (int *)(iVar16 + 0x50);
  iVar15 = param_2[2];
  while (*piVar14 != iVar15) {
    uVar2 = FUN_016d4a28(param_2);
    if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
      if (uVar2 < 0x80) break;
      uVar3 = uVar2 >> 8;
      if (uVar3 < 0x20) {
        if (uVar3 == 0) {
          bVar7 = (&DAT_00533bcd)[uVar2 & 0xff] & 1;
joined_r0x016d82b8:
          if (bVar7 == 0) break;
        }
        else if ((uVar3 != 0x16) || (uVar2 != 0x1680)) break;
      }
      else {
        if (uVar3 == 0x20) {
          bVar7 = (&DAT_00533bcd)[uVar2 & 0xff] & 2;
          goto joined_r0x016d82b8;
        }
        if (uVar3 != 0x30 || uVar2 != 0x3000) break;
      }
    }
    FUN_016d4fe8(param_2);
  }
  iVar8 = *piVar14;
  uVar9 = *(undefined4 *)(iVar16 + 0x54);
  uVar13 = *(undefined4 *)(iVar16 + 0x58);
  while (((*piVar14 != iVar15 && (uVar2 = FUN_016d4a28(param_2), 0x2f < uVar2)) &&
         (uVar2 = FUN_016d4a28(param_2), uVar2 < 0x3a))) {
    uVar3 = FUN_016d4a28(param_2);
    iVar11 = *(int *)(iVar16 + 0x4c);
    uVar2 = 1;
    if (0x7f < uVar3) {
      uVar2 = 2;
    }
    if ((0x7ff < uVar3) && (uVar2 = 4, uVar3 < 0x10000)) {
      uVar2 = 3;
    }
    iVar5 = iVar11;
    if ((uint)(*(int *)(iVar16 + 0x44) - iVar11) < uVar2) {
      FUN_006520b4((int *)(iVar16 + 0x44),iVar11,uVar2,1,1);
      iVar5 = *(int *)(iVar16 + 0x4c);
    }
    pbVar4 = (byte *)(*(int *)(iVar16 + 0x48) + iVar5);
    if (uVar3 < 0x80) {
      *pbVar4 = (byte)uVar3;
    }
    else {
      bVar7 = (byte)uVar3 & 0x3f | 0x80;
      bVar6 = (byte)(uVar3 >> 6);
      if (uVar3 < 0x800) {
        bVar6 = bVar6 | 0xc0;
        pbVar4[1] = bVar7;
      }
      else {
        bVar1 = bVar6 & 0x3f | 0x80;
        bVar6 = (byte)(uVar3 >> 0xc);
        if (uVar3 >> 0x10 != 0) {
          pbVar4[3] = bVar7;
          pbVar4[2] = bVar1;
          pbVar4[1] = bVar6 & 0x3f | 0x80;
          *pbVar4 = (byte)(uVar3 >> 0x12) | 0xf0;
          goto LAB_016d83c0;
        }
        pbVar4[1] = bVar1;
        bVar6 = bVar6 | 0xe0;
        pbVar4[2] = bVar7;
      }
      *pbVar4 = bVar6;
    }
LAB_016d83c0:
    *(uint *)(iVar16 + 0x4c) = uVar2 + iVar11;
    FUN_016d819c(param_2);
  }
  local_8c = *piVar14;
  uStack_88 = *(undefined4 *)(iVar16 + 0x54);
  uStack_84 = *(undefined4 *)(iVar16 + 0x58);
  local_98 = iVar8;
  uStack_94 = uVar9;
  uStack_90 = uVar13;
  while (*piVar14 != iVar15) {
    uVar2 = FUN_016d4a28(param_2);
    if ((4 < uVar2 - 9) && (uVar2 != 0x20)) {
      if (uVar2 < 0x80) break;
      uVar3 = uVar2 >> 8;
      if (uVar3 < 0x20) {
        if (uVar3 == 0) {
          bVar7 = (&DAT_00533bcd)[uVar2 & 0xff] & 1;
joined_r0x016d84bc:
          if (bVar7 == 0) break;
        }
        else if ((uVar3 != 0x16) || (uVar2 != 0x1680)) break;
      }
      else {
        if (uVar3 == 0x20) {
          bVar7 = (&DAT_00533bcd)[uVar2 & 0xff] & 2;
          goto joined_r0x016d84bc;
        }
        if (uVar3 != 0x30 || uVar2 != 0x3000) break;
      }
    }
    FUN_016d819c(param_2);
  }
  uVar2 = *(uint *)(iVar16 + 0x4c);
  if (uVar2 == 0) {
    local_40[0] = 5;
    FUN_016d4540(&local_80,param_2[1],iVar15,&local_98,local_40);
  }
  else {
    pbVar4 = *(byte **)(iVar16 + 0x48);
    if (uVar2 == 1) {
      bVar7 = *pbVar4;
      if (bVar7 != 0x2b && bVar7 != 0x2d) goto LAB_016d851c;
    }
    else {
      bVar7 = *pbVar4;
LAB_016d851c:
      if (bVar7 == 0x2b) {
        pbVar4 = pbVar4 + 1;
        uVar2 = uVar2 - 1;
      }
      if (uVar2 < 9) {
        uVar3 = 0;
        for (; uVar2 != 0; uVar2 = uVar2 - 1) {
          bVar7 = *pbVar4;
          if (9 < bVar7 - 0x30) goto LAB_016d85b4;
          pbVar4 = pbVar4 + 1;
          uVar3 = (bVar7 - 0x30) + uVar3 * 10;
        }
LAB_016d8560:
        *param_1 = 0x22;
        param_1[1] = uVar3;
        goto LAB_016d85f8;
      }
      uVar3 = 0;
      while( true ) {
        if (uVar2 == 0) goto LAB_016d8560;
        uVar10 = (uint)((ulonglong)uVar3 * 10);
        if ((int)((ulonglong)uVar3 * 10 >> 0x20) != 0) break;
        uVar12 = *pbVar4 - 0x30;
        uVar3 = uVar12 + uVar10;
        if ((9 < uVar12) || (uVar2 = uVar2 - 1, pbVar4 = pbVar4 + 1, CARRY4(uVar12,uVar10))) break;
      }
    }
LAB_016d85b4:
    local_40[0] = 6;
    FUN_016d4540(&local_80,param_2[1],iVar15,&local_98,local_40);
  }
  *param_1 = local_80;
  param_1[1] = uStack_7c;
  param_1[2] = uStack_78;
  param_1[3] = uStack_74;
  param_1[4] = uStack_70;
  param_1[5] = local_6c;
  param_1[6] = uStack_68;
  param_1[7] = uStack_64;
  param_1[8] = uStack_60;
  param_1[9] = uStack_5c;
  param_1[10] = local_58;
  param_1[0xb] = uStack_54;
  param_1[0xc] = uStack_50;
  param_1[0xd] = uStack_4c;
  param_1[0xe] = uStack_48;
  param_1[0xf] = uStack_44;
LAB_016d85f8:
  *(int *)(iVar16 + 0x40) = *(int *)(iVar16 + 0x40) + 1;
  return;
}


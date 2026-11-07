// FUN_00ab9e90 @ 00ab9e90 size=1048 calls_out=6 calls_in=2
// strings: 

/* WARNING: Heritage AFTER dead removal. Example location: s1 : 0x00ab9eb4 */
/* WARNING: Restarted to delay deadcode elimination for space: register */

void FUN_00ab9e90(undefined4 *param_1)

{
  byte *pbVar1;
  byte bVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  uint uVar13;
  undefined4 uVar14;
  uint *puVar15;
  uint *puVar16;
  uint *unaff_r9;
  int iVar17;
  uint uVar18;
  uint in_fpscr;
  double dVar19;
  uint *local_50;
  uint local_4c;
  int local_48;
  uint *local_44;
  uint local_40;
  int local_3c;
  uint *local_38;
  uint local_30;
  uint local_2c;
  
  uVar12 = param_1[3];
  dVar19 = (double)VectorUnsignedToFloat(uVar12,(byte)(in_fpscr >> 0x16) & 3);
  dVar19 = dVar19 / 0.1;
  FUN_01be5bd8(SUB84(dVar19,0),(int)((ulonglong)dVar19 >> 0x20),0);
  uVar4 = (uint)(0.0 < dVar19) * (int)(longlong)dVar19;
  if (uVar4 <= uVar12) {
    uVar4 = uVar12;
  }
  if (uVar4 == 0) {
    local_50 = (uint *)*param_1;
    local_4c = param_1[1];
    local_48 = param_1[2];
    local_44 = (uint *)param_1[3];
    *param_1 = &DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    if (uVar4 < 0xf) {
      uVar6 = (uVar4 & 8) + 8;
      if (uVar4 < 4) {
        uVar6 = 4;
      }
    }
    else {
      if (0x1fffffff < uVar4) {
        return;
      }
      iVar8 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
      uVar6 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar4 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    if (param_1[1] + 1 <= uVar6) {
      return;
    }
    if (uVar12 != 0) {
      if (uVar4 < 0xf) {
        iVar8 = (uVar4 & 8) + 8;
        if (uVar4 < 4) {
          iVar8 = 4;
        }
      }
      else {
        iVar8 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
        iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar4 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
      }
      FUN_0125e7e8(&local_50,0x60,8,iVar8);
      local_38 = local_44;
      iVar8 = local_48;
      uVar4 = local_4c;
      puVar7 = local_50;
      if (local_50 == (uint *)0x0) {
        return;
      }
      FUN_01bed93e(local_50,0xff,local_4c + 5);
      local_40 = local_4c;
      puVar15 = (uint *)*param_1;
      local_44 = local_50;
      local_4c = 0x60;
      local_48 = 8;
      local_3c = iVar8;
      uVar13 = ~*puVar15 & 0x80808080;
      iVar17 = 0;
      uVar6 = uVar12;
      puVar16 = puVar15;
      local_50 = param_1 + 4;
      do {
        if (uVar13 == 0) {
          do {
            puVar16 = puVar16 + 1;
            iVar17 = iVar17 + 4;
          } while ((*puVar16 & 0x80808080) == 0x80808080);
          uVar13 = *puVar16 & 0x80808080 ^ 0x80808080;
        }
        iVar9 = 0;
        uVar18 = iVar17 + ((uint)LZCOUNT(uVar13 << 0x18 | (uVar13 >> 8 & 0xff) << 0x10 |
                                         (uVar13 >> 0x10 & 0xff) << 8 | uVar13 >> 0x18) >> 3);
        local_30 = puVar15[uVar18 * -0x18 + -0x18];
        uVar5 = 0x84222325;
        local_2c = (puVar15 + uVar18 * -0x18 + -0x18)[1];
        do {
          pbVar1 = (byte *)((int)&local_30 + iVar9);
          iVar9 = iVar9 + 1;
          lVar3 = (ulonglong)(uVar5 ^ *pbVar1) * 0x1b3;
          uVar5 = (uint)lVar3;
        } while (iVar9 != 8);
        uVar5 = uVar4 & uVar5;
        uVar10 = *(uint *)((int)puVar7 + uVar5) & 0x80808080;
        if (uVar10 == 0) {
          iVar9 = 4;
          do {
            uVar5 = uVar5 + iVar9;
            iVar9 = iVar9 + 4;
            uVar5 = uVar5 & uVar4;
            uVar10 = *(uint *)((int)puVar7 + uVar5) & 0x80808080;
          } while (uVar10 == 0);
        }
        uVar5 = uVar5 + ((uint)LZCOUNT(uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 |
                                       (uVar10 >> 0x10 & 0xff) << 8 | uVar10 >> 0x18) >> 3) & uVar4;
        if (-1 < *(char *)((int)puVar7 + uVar5)) {
          uVar5 = *puVar7 & 0x80808080;
          uVar5 = (uint)LZCOUNT((*puVar7 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3;
        }
        uVar13 = uVar13 - 1 & uVar13;
        bVar2 = (byte)((ulonglong)lVar3 >> 0x18) >> 1;
        *(byte *)((int)puVar7 + uVar5) = bVar2;
        uVar6 = uVar6 - 1;
        *(byte *)((int)puVar7 + (uVar5 - 4 & uVar4) + 4) = bVar2;
        FUN_01bed4e2(puVar7 + ~uVar5 * 0x18,puVar15 + ~uVar18 * 0x18,0x60);
      } while (uVar6 != 0);
      local_38 = (uint *)uVar12;
      local_3c = iVar8 - uVar12;
      iVar8 = 0;
      do {
        puVar7 = (uint *)param_1[iVar8];
        param_1[iVar8] = (&local_44)[iVar8];
        iVar17 = iVar8 + 1;
        (&local_44)[iVar8] = puVar7;
        iVar8 = iVar17;
      } while (iVar17 != 4);
      FUN_016660b8(&local_50);
      return;
    }
    if (uVar4 < 0xf) {
      iVar8 = (uVar4 & 8) + 8;
      if (uVar4 < 4) {
        iVar8 = 4;
      }
    }
    else {
      iVar8 = (int)((ulonglong)(uVar4 << 3) * 0x24924925 >> 0x20);
      iVar8 = (0xffffffffU >> LZCOUNT((iVar8 + (uVar4 * 8 - iVar8 >> 1) >> 2) - 1)) + 1;
    }
    FUN_0125e7e8(&local_50,0x60,8,iVar8);
    if (local_50 != (uint *)0x0) {
      FUN_01bed93e(local_50,0xff,local_4c + 5);
      unaff_r9 = local_44;
    }
    puVar7 = (uint *)*param_1;
    uVar11 = param_1[1];
    uVar14 = param_1[2];
    local_44 = (uint *)param_1[3];
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    param_1[3] = unaff_r9;
    local_50 = puVar7;
    local_4c = uVar11;
    local_48 = uVar14;
  }
  FUN_00929818(&local_50);
  return;
}


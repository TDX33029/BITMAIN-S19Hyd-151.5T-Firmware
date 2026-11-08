// FUN_015e9c7c @ 015e9c7c size=1664 calls_out=5 calls_in=1
// strings: 

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_015e9c7c(undefined4 param_1)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  byte *pbVar5;
  int iVar6;
  int iVar7;
  undefined4 **ppuVar8;
  uint uVar9;
  uint *puVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  undefined4 uVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  byte *pbVar20;
  uint *puVar21;
  uint *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  undefined *puVar26;
  undefined4 local_30;
  undefined4 *local_2c;
  undefined4 *local_28;
  
  local_30 = param_1;
  pbVar5 = (byte *)FUN_01842f04();
  local_28 = (undefined4 *)0x0;
  FUN_018430e4(param_1,0,0xf,0,&local_28);
  puVar4 = local_28;
  iVar6 = FUN_01843c08(param_1);
  local_2c = &local_30;
  if (pbVar5 == (byte *)0x0) {
    return 0;
  }
  pbVar19 = pbVar5 + 1;
  bVar1 = *pbVar5;
  uVar24 = (uint)bVar1;
  if (uVar24 == 0xff) goto LAB_015e9ecc;
  uVar9 = (uVar24 & 0x7f) >> 4;
  uVar16 = 5;
  if (5 < uVar9) {
    return 5;
  }
  puVar26 = &UNK_018aac0c;
  ppuVar8 = &local_2c;
  switch(uVar9) {
  case 1:
    goto switchD_015e9d2c_caseD_1;
  case 2:
    goto switchD_015e9d2c_caseD_2;
  case 3:
    puVar26 = &UNK_018aac24;
    ppuVar8 = &local_28;
switchD_015e9d2c_caseD_2:
    local_28 = local_2c;
    iVar7 = (**(code **)(puVar26 + 0x14))(ppuVar8);
    if (iVar7 != 0) goto switchD_015e9d2c_caseD_1;
    break;
  case 4:
    if (iVar6 == 0) {
      return 5;
    }
switchD_015e9d2c_caseD_1:
    switch(uVar24 & 0xf) {
    case 0:
    case 3:
    case 0xb:
      pbVar19 = pbVar5 + 5;
      break;
    case 1:
      pbVar5 = pbVar19;
      do {
        pbVar19 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar19;
      } while ((char)bVar1 < '\0');
      break;
    case 2:
      goto LAB_015e9eb8;
    case 4:
    case 0xc:
      pbVar19 = pbVar5 + 9;
      break;
    case 5:
    case 6:
    case 7:
    case 8:
      goto switchD_015e9f80_caseD_5;
    case 9:
      pbVar5 = pbVar19;
      do {
        pbVar19 = pbVar5 + 1;
        bVar1 = *pbVar5;
        pbVar5 = pbVar19;
      } while ((char)bVar1 < '\0');
      break;
    case 10:
LAB_015e9eb8:
      pbVar19 = pbVar5 + 3;
      break;
    default:
      goto switchD_015e9d8c_default;
    }
    goto LAB_015e9ecc;
  case 5:
    pbVar19 = (byte *)((uint)(pbVar5 + 4) & 0xfffffffc);
  }
  if ((bVar1 & 0xf) != 0) {
switchD_015e9f80_caseD_5:
    return 5;
  }
  pbVar19 = pbVar19 + 4;
LAB_015e9ecc:
  pbVar20 = pbVar19 + 1;
  pbVar5 = pbVar20;
  if (*pbVar19 != 0xff) {
    do {
      pbVar20 = pbVar5 + 1;
      bVar1 = *pbVar5;
      pbVar5 = pbVar20;
    } while ((char)bVar1 < '\0');
  }
  bVar1 = *pbVar20;
  uVar24 = ((uint)puVar4 & 0xfffffffe) - 1;
  uVar13 = 0;
  uVar9 = 0;
  puVar21 = (uint *)(pbVar20 + 1);
  do {
    puVar10 = puVar21;
    puVar21 = (uint *)((int)puVar10 + 1);
    uVar12 = uVar13 & 0x3f;
    uVar13 = uVar13 + 7;
    uVar15 = ((int)(char)(byte)*puVar10 & 0x7fU) << uVar12;
    if (-1 < (int)(uVar12 - 0x20)) {
      uVar15 = 0;
    }
    uVar9 = uVar15 | uVar9;
  } while ((char)(byte)*puVar10 < 0);
  if (bVar1 < 0x10) {
    puVar10 = (uint *)((int)puVar10 + uVar9 + 1);
    while ((uVar16 = 4, puVar21 < puVar10 && (uVar16 = 5, bVar1 < 0xd))) {
      switch(bVar1) {
      case 0:
      case 3:
      case 0xb:
        uVar13 = *puVar21;
        uVar15 = puVar21[1];
        uVar9 = puVar21[2];
        puVar22 = puVar21 + 3;
        break;
      case 1:
        uVar9 = 0;
        uVar13 = 0;
        do {
          puVar22 = (uint *)((int)puVar21 + 1);
          uVar12 = *puVar21;
          uVar17 = uVar9 & 0x3f;
          uVar9 = uVar9 + 7;
          uVar15 = ((int)(char)(byte)uVar12 & 0x7fU) << uVar17;
          if (-1 < (int)(uVar17 - 0x20)) {
            uVar15 = 0;
          }
          uVar13 = uVar15 | uVar13;
          puVar21 = puVar22;
        } while ((char)(byte)uVar12 < 0);
        uVar9 = 0;
        uVar15 = 0;
        do {
          puVar21 = (uint *)((int)puVar22 + 1);
          uVar17 = *puVar22;
          uVar18 = uVar9 & 0x3f;
          uVar9 = uVar9 + 7;
          uVar12 = ((int)(char)(byte)uVar17 & 0x7fU) << uVar18;
          if (-1 < (int)(uVar18 - 0x20)) {
            uVar12 = 0;
          }
          uVar15 = uVar12 | uVar15;
          puVar22 = puVar21;
        } while ((char)(byte)uVar17 < 0);
        uVar12 = 0;
        uVar9 = 0;
        do {
          puVar22 = (uint *)((int)puVar21 + 1);
          uVar18 = *puVar21;
          uVar23 = uVar12 & 0x3f;
          uVar12 = uVar12 + 7;
          uVar17 = ((int)(char)(byte)uVar18 & 0x7fU) << uVar23;
          if (-1 < (int)(uVar23 - 0x20)) {
            uVar17 = 0;
          }
          uVar9 = uVar17 | uVar9;
          puVar21 = puVar22;
        } while ((char)(byte)uVar18 < 0);
        break;
      case 2:
        uVar9 = (uint)(ushort)puVar21[1];
        uVar15 = (uint)*(ushort *)((int)puVar21 + 2);
        uVar13 = (uint)(ushort)*puVar21;
        goto LAB_015ea210;
      case 4:
      case 0xc:
        uVar15 = puVar21[2];
        uVar9 = puVar21[4];
        puVar22 = puVar21 + 6;
        uVar13 = *puVar21;
        break;
      default:
        goto switchD_015e9f80_caseD_5;
      case 9:
        uVar13 = 0;
        uVar9 = 0;
        do {
          uVar12 = uVar9;
          puVar22 = (uint *)((int)puVar21 + 1);
          bVar2 = (byte)*puVar21;
          uVar9 = uVar12 + 7;
          uVar15 = ((int)(char)bVar2 & 0x7fU) << (uVar12 & 0x3f);
          if (-1 < (int)((uVar12 & 0x3f) - 0x20)) {
            uVar15 = 0;
          }
          uVar13 = uVar15 | uVar13;
          puVar21 = puVar22;
        } while ((char)bVar2 < 0);
        if ((uVar9 < 0x40) && (0x3f < bVar2)) {
          uVar9 = -1 << (uVar9 & 0xff);
          if (-1 < (int)(uVar12 - 0x19)) {
            uVar9 = 0;
          }
          uVar13 = uVar13 | uVar9;
        }
        uVar15 = 0;
        uVar9 = 0;
        do {
          uVar17 = uVar9;
          puVar21 = (uint *)((int)puVar22 + 1);
          bVar2 = (byte)*puVar22;
          uVar9 = uVar17 + 7;
          uVar12 = ((int)(char)bVar2 & 0x7fU) << (uVar17 & 0x3f);
          if (-1 < (int)((uVar17 & 0x3f) - 0x20)) {
            uVar12 = 0;
          }
          uVar15 = uVar12 | uVar15;
          puVar22 = puVar21;
        } while ((char)bVar2 < 0);
        if ((uVar9 < 0x40) && (0x3f < bVar2)) {
          uVar9 = -1 << (uVar9 & 0xff);
          if (-1 < (int)(uVar17 - 0x19)) {
            uVar9 = 0;
          }
          uVar15 = uVar15 | uVar9;
        }
        uVar9 = 0;
        uVar12 = 0;
        do {
          uVar18 = uVar12;
          puVar22 = (uint *)((int)puVar21 + 1);
          bVar2 = (byte)*puVar21;
          uVar12 = uVar18 + 7;
          uVar17 = ((int)(char)bVar2 & 0x7fU) << (uVar18 & 0x3f);
          if (-1 < (int)((uVar18 & 0x3f) - 0x20)) {
            uVar17 = 0;
          }
          uVar9 = uVar17 | uVar9;
          puVar21 = puVar22;
        } while ((char)bVar2 < 0);
        if ((uVar12 < 0x40) && (0x3f < bVar2)) {
          uVar12 = -1 << (uVar12 & 0xff);
          if (-1 < (int)(uVar18 - 0x19)) {
            uVar12 = 0;
          }
          uVar9 = uVar9 | uVar12;
        }
        break;
      case 10:
        uVar9 = (uint)(short)(ushort)puVar21[1];
        uVar15 = (uint)(short)*(ushort *)((int)puVar21 + 2);
        uVar13 = (uint)(short)(ushort)*puVar21;
LAB_015ea210:
        puVar22 = (uint *)((int)puVar21 + 6);
      }
      uVar17 = 0;
      uVar18 = 0;
      uVar12 = 0;
      do {
        puVar21 = (uint *)((int)puVar22 + 1);
        uVar3 = *puVar22;
        uVar11 = uVar17 & 0x3f;
        uVar25 = uVar11 - 0x20;
        uVar17 = uVar17 + 7;
        uVar14 = (int)(char)(byte)uVar3 & 0x7f;
        uVar23 = uVar14 << uVar11;
        if (-1 < (int)uVar25) {
          uVar23 = 0;
        }
        uVar18 = uVar23 | uVar18;
        uVar23 = uVar14 >> (0x20 - uVar11 & 0xff);
        if (-1 < (int)uVar25) {
          uVar23 = uVar14 << (uVar25 & 0xff);
        }
        uVar12 = uVar23 | uVar12;
        puVar22 = puVar21;
      } while ((char)(byte)uVar3 < 0);
      if (uVar24 < iVar6 + uVar13) {
        return 4;
      }
      if (uVar24 < iVar6 + uVar13 + uVar15) {
        if (uVar9 == 0) {
          return 0;
        }
        if (uVar18 == 0 && uVar12 == 0) {
          return 1;
        }
        uVar13 = 0;
        uVar9 = 0;
        uVar24 = 0;
        pbVar5 = (byte *)((int)puVar10 + (uVar18 - 1));
        do {
          uVar12 = uVar24;
          bVar1 = *pbVar5;
          uVar18 = uVar12 & 0x3f;
          uVar23 = uVar18 - 0x20;
          uVar24 = uVar12 + 7;
          uVar17 = (int)(char)bVar1 & 0x7f;
          uVar15 = uVar17 << uVar18;
          if (-1 < (int)uVar23) {
            uVar15 = 0;
          }
          uVar13 = uVar15 | uVar13;
          uVar15 = uVar17 >> (0x20 - uVar18 & 0xff);
          if (-1 < (int)uVar23) {
            uVar15 = uVar17 << (uVar23 & 0xff);
          }
          uVar9 = uVar15 | uVar9;
          pbVar5 = pbVar5 + 1;
        } while ((char)bVar1 < 0);
        if ((uVar24 < 0x40) && (0x3f < bVar1)) {
          uVar12 = uVar12 - 0x19;
          uVar15 = -1 << (uVar24 & 0xff);
          if (-1 < (int)uVar12) {
            uVar15 = 0;
          }
          uVar13 = uVar13 | uVar15;
          uVar24 = 0xffffffffU >> (0x20 - uVar24 & 0xff) | -1 << (uVar24 & 0xff);
          if (-1 < (int)uVar12) {
            uVar24 = -1 << (uVar12 & 0xff);
          }
          uVar9 = uVar9 | uVar24;
        }
        uVar16 = 3;
        if ((int)-(uVar9 + (uVar13 != 0)) < 0 !=
            (SBORROW4(0,uVar9) != SBORROW4(-uVar9,(uint)(uVar13 != 0)))) {
          uVar16 = 2;
        }
        if (uVar13 == 0 && uVar9 == 0) {
          uVar16 = 1;
        }
        return uVar16;
      }
    }
  }
  else {
    uVar16 = 4;
    if (0 < (int)uVar9) {
      uVar16 = 5;
    }
  }
switchD_015e9d8c_default:
  return uVar16;
}


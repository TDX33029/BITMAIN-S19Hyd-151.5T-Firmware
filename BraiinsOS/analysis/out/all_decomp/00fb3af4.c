// FUN_00fb3af4 @ 00fb3af4 size=1140 calls_out=0 calls_in=15
// strings: 

/* WARNING: Removing unreachable block (ram,0x00fb3c94) */
/* WARNING: Removing unreachable block (ram,0x00fb3c9c) */

void FUN_00fb3af4(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  int iVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  uint local_24;
  
  pbVar2 = (byte *)*param_2;
  iVar4 = param_2[1];
  if (iVar4 == 0) goto LAB_00fb3bd8;
  pbVar7 = pbVar2 + 1;
  uVar13 = *pbVar2 - 0x30;
  if (uVar13 < 10) {
    iVar6 = iVar4 + -1;
    if (iVar6 == 0) {
LAB_00fb3b94:
      bVar14 = iVar4 != 1;
      pbVar7 = pbVar2 + iVar4;
      iVar6 = 0;
    }
    else {
      bVar14 = false;
      if (pbVar2[1] - 0x30 < 10) {
        iVar6 = iVar4 + -2;
        uVar13 = (pbVar2[1] - 0x30) + uVar13 * 10;
        if (iVar6 == 0) goto LAB_00fb3b94;
        bVar14 = true;
        if (pbVar2[2] - 0x30 < 10) {
          iVar6 = iVar4 + -3;
          uVar13 = (pbVar2[2] - 0x30) + uVar13 * 10;
          if (iVar6 == 0) goto LAB_00fb3b94;
          pbVar7 = pbVar2 + 3;
          if (*pbVar7 - 0x30 < 10) goto LAB_00fb3b84;
        }
        else {
          pbVar7 = pbVar2 + 2;
        }
      }
    }
    bVar14 = (bool)((*pbVar2 != 0x30 | ~bVar14) & uVar13 < 0x100);
    if (!bVar14) {
      iVar6 = iVar4;
      pbVar7 = pbVar2;
    }
  }
  else {
LAB_00fb3b84:
    bVar14 = false;
    iVar6 = iVar4;
    pbVar7 = pbVar2;
  }
  if (((!bVar14 || iVar6 == 0) || (*pbVar7 != 0x2e)) || (iVar6 - 1U == 0)) goto LAB_00fb3bd8;
  local_24 = pbVar7[1] - 0x30;
  if (9 < local_24) goto LAB_00fb3bd8;
  uVar11 = iVar6 - 2;
  if (uVar11 == 0) {
LAB_00fb3cac:
    bVar14 = iVar6 != 2;
    pbVar8 = pbVar7 + iVar6;
    uVar11 = 0;
  }
  else if (pbVar7[2] - 0x30 < 10) {
    uVar11 = iVar6 - 3;
    local_24 = (pbVar7[2] - 0x30) + local_24 * 10;
    if (uVar11 == 0) goto LAB_00fb3cac;
    bVar14 = true;
    if (pbVar7[3] - 0x30 < 10) {
      uVar11 = iVar6 - 4;
      local_24 = (pbVar7[3] - 0x30) + local_24 * 10;
      if (uVar11 == 0) goto LAB_00fb3cac;
      pbVar8 = pbVar7 + 4;
      if (*pbVar8 - 0x30 < 10) goto LAB_00fb3bd8;
    }
    else {
      pbVar8 = pbVar7 + 3;
    }
  }
  else {
    pbVar8 = pbVar7 + 2;
    bVar14 = false;
  }
  bVar14 = (bool)((pbVar7[1] != 0x30 | ~bVar14) & local_24 < 0x100);
  uVar5 = iVar6 - 1U;
  pbVar7 = pbVar7 + 1;
  if (bVar14) {
    uVar5 = uVar11;
    pbVar7 = pbVar8;
  }
  if (((!bVar14 || uVar5 == 0) || (*pbVar7 != 0x2e)) || (iVar6 = uVar5 - 1, iVar6 == 0))
  goto LAB_00fb3bd8;
  uVar12 = pbVar7[1] - 0x30;
  pbVar8 = pbVar7 + 1;
  if (uVar12 < 10) {
    iVar9 = uVar5 - 2;
    if (iVar9 == 0) {
LAB_00fb3db8:
      pbVar10 = pbVar7 + uVar5;
      iVar9 = 0;
      uVar11 = (uint)(uVar5 != 2);
    }
    else if (pbVar7[2] - 0x30 < 10) {
      iVar9 = uVar5 - 3;
      uVar12 = (pbVar7[2] - 0x30) + uVar12 * 10;
      if (iVar9 == 0) goto LAB_00fb3db8;
      uVar11 = 1;
      if (pbVar7[3] - 0x30 < 10) {
        iVar9 = uVar5 - 4;
        uVar12 = (pbVar7[3] - 0x30) + uVar12 * 10;
        if (iVar9 == 0) goto LAB_00fb3db8;
        pbVar10 = pbVar7 + 4;
        if (*pbVar10 - 0x30 < 10) goto LAB_00fb3db0;
      }
      else {
        pbVar10 = pbVar7 + 3;
      }
    }
    else {
      pbVar10 = pbVar7 + 2;
      uVar11 = 0;
    }
    uVar5 = ((uint)(pbVar7[1] != 0x30) | ~uVar11) & (uint)(uVar12 < 0x100);
    if (uVar5 != 0) {
      pbVar8 = pbVar10;
      iVar6 = iVar9;
    }
  }
  else {
LAB_00fb3db0:
    uVar5 = 0;
  }
  if ((uVar5 == 0 || iVar6 == 0) || (*pbVar8 != 0x2e)) goto LAB_00fb3bd8;
  iVar9 = iVar6 + -1;
  if (iVar9 == 0) {
LAB_00fb3ec4:
    bVar14 = false;
    *param_2 = pbVar8 + 1;
    param_2[1] = iVar9;
  }
  else {
    bVar1 = pbVar8[1];
    uVar11 = bVar1 - 0x30;
    if (9 < uVar11) goto LAB_00fb3ec4;
    iVar3 = iVar6 + -2;
    if (iVar3 == 0) {
LAB_00fb3ecc:
      pbVar7 = pbVar8 + iVar6;
      bVar14 = iVar6 != 2;
      iVar3 = 0;
    }
    else if (pbVar8[2] - 0x30 < 10) {
      iVar3 = iVar6 + -3;
      uVar11 = (pbVar8[2] - 0x30) + uVar11 * 10;
      if (iVar3 == 0) goto LAB_00fb3ecc;
      if (pbVar8[3] - 0x30 < 10) {
        iVar3 = iVar6 + -4;
        uVar11 = (pbVar8[3] - 0x30) + uVar11 * 10;
        if (iVar3 == 0) goto LAB_00fb3ecc;
        pbVar7 = pbVar8 + 4;
        bVar14 = true;
        if (*pbVar7 - 0x30 < 10) goto LAB_00fb3ec4;
      }
      else {
        pbVar7 = pbVar8 + 3;
        bVar14 = true;
      }
    }
    else {
      pbVar7 = pbVar8 + 2;
      bVar14 = false;
    }
    *param_2 = pbVar7;
    param_2[1] = iVar3;
    bVar14 = (bool)((bVar1 != 0x30 | ~bVar14) & uVar11 < 0x100);
    if (!bVar14) {
      *param_2 = pbVar8 + 1;
      param_2[1] = iVar9;
    }
  }
  if (bVar14) {
    *param_1 = 1;
    *(uint *)(param_1 + 1) =
         uVar11 << 0x18 | (uVar12 & 0xff) << 0x10 | (local_24 & 0xff) << 8 | uVar13 & 0xff;
    return;
  }
LAB_00fb3bd8:
  *param_2 = pbVar2;
  param_2[1] = iVar4;
  *param_1 = 0;
  return;
}


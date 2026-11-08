// FUN_01304258 @ 01304258 size=1128 calls_out=0 calls_in=4
// strings: 

void FUN_01304258(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  byte *pbVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  bool bVar15;
  uint local_24;
  
  pbVar2 = (byte *)*param_2;
  iVar4 = param_2[1];
  if (iVar4 == 0) goto LAB_0130433c;
  pbVar8 = pbVar2 + 1;
  uVar14 = *pbVar2 - 0x30;
  if (uVar14 < 10) {
    iVar6 = iVar4 + -1;
    if (iVar6 == 0) {
LAB_013042f8:
      bVar15 = iVar4 != 1;
      pbVar8 = pbVar2 + iVar4;
      iVar6 = 0;
    }
    else {
      bVar15 = false;
      if (pbVar2[1] - 0x30 < 10) {
        iVar6 = iVar4 + -2;
        uVar14 = (pbVar2[1] - 0x30) + uVar14 * 10;
        if (iVar6 == 0) goto LAB_013042f8;
        bVar15 = true;
        if (pbVar2[2] - 0x30 < 10) {
          iVar6 = iVar4 + -3;
          uVar14 = (pbVar2[2] - 0x30) + uVar14 * 10;
          if (iVar6 == 0) goto LAB_013042f8;
          pbVar8 = pbVar2 + 3;
          if (*pbVar8 - 0x30 < 10) goto LAB_013042e8;
        }
        else {
          pbVar8 = pbVar2 + 2;
        }
      }
    }
    bVar15 = (bool)((*pbVar2 != 0x30 | ~bVar15) & uVar14 < 0x100);
    if (!bVar15) {
      iVar6 = iVar4;
      pbVar8 = pbVar2;
    }
  }
  else {
LAB_013042e8:
    bVar15 = false;
    iVar6 = iVar4;
    pbVar8 = pbVar2;
  }
  if (((!bVar15 || iVar6 == 0) || (*pbVar8 != 0x2e)) || (uVar12 = iVar6 - 1, uVar12 == 0))
  goto LAB_0130433c;
  uVar11 = (uint)pbVar8[1];
  uVar5 = uVar11 - 0x30;
  pbVar7 = pbVar8 + 1;
  if (uVar5 < 10) {
    uVar13 = iVar6 - 2;
    local_24 = uVar5;
    if (uVar13 == 0) {
LAB_01304404:
      bVar15 = iVar6 != 2;
      pbVar9 = pbVar8 + iVar6;
      uVar13 = 0;
    }
    else if (pbVar8[2] - 0x30 < 10) {
      uVar13 = iVar6 - 3;
      local_24 = (pbVar8[2] - 0x30) + uVar5 * 10;
      if (uVar13 == 0) goto LAB_01304404;
      bVar15 = true;
      if (pbVar8[3] - 0x30 < 10) {
        uVar13 = iVar6 - 4;
        local_24 = (pbVar8[3] - 0x30) + local_24 * 10;
        if (uVar13 == 0) goto LAB_01304404;
        pbVar9 = pbVar8 + 4;
        if (*pbVar9 - 0x30 < 10) goto LAB_013043f0;
      }
      else {
        pbVar9 = pbVar8 + 3;
      }
    }
    else {
      pbVar9 = pbVar8 + 2;
      bVar15 = false;
    }
    bVar15 = (bool)((uVar11 != 0x30 | ~bVar15) & local_24 < 0x100);
    if (bVar15) {
      pbVar7 = pbVar9;
      uVar12 = uVar13;
    }
  }
  else {
LAB_013043f0:
    bVar15 = false;
    uVar13 = uVar11;
  }
  if (((!bVar15 || uVar12 == 0) || (*pbVar7 != 0x2e)) || (iVar6 = uVar12 - 1, iVar6 == 0))
  goto LAB_0130433c;
  uVar5 = pbVar7[1] - 0x30;
  pbVar8 = pbVar7 + 1;
  if (uVar5 < 10) {
    iVar10 = uVar12 - 2;
    if (iVar10 == 0) {
LAB_01304510:
      pbVar9 = pbVar7 + uVar12;
      iVar10 = 0;
      uVar13 = (uint)(uVar12 != 2);
    }
    else if (pbVar7[2] - 0x30 < 10) {
      iVar10 = uVar12 - 3;
      uVar5 = (pbVar7[2] - 0x30) + uVar5 * 10;
      if (iVar10 == 0) goto LAB_01304510;
      uVar13 = 1;
      if (pbVar7[3] - 0x30 < 10) {
        iVar10 = uVar12 - 4;
        uVar5 = (pbVar7[3] - 0x30) + uVar5 * 10;
        if (iVar10 == 0) goto LAB_01304510;
        pbVar9 = pbVar7 + 4;
        if (*pbVar9 - 0x30 < 10) goto LAB_01304508;
      }
      else {
        pbVar9 = pbVar7 + 3;
      }
    }
    else {
      pbVar9 = pbVar7 + 2;
      uVar13 = 0;
    }
    uVar12 = ((uint)(pbVar7[1] != 0x30) | ~uVar13) & (uint)(uVar5 < 0x100);
    if (uVar12 != 0) {
      pbVar8 = pbVar9;
      iVar6 = iVar10;
    }
  }
  else {
LAB_01304508:
    uVar12 = 0;
  }
  if ((uVar12 == 0 || iVar6 == 0) || (*pbVar8 != 0x2e)) goto LAB_0130433c;
  iVar10 = iVar6 + -1;
  if (iVar10 == 0) {
LAB_0130461c:
    bVar15 = false;
    *param_2 = pbVar8 + 1;
    param_2[1] = iVar10;
  }
  else {
    bVar1 = pbVar8[1];
    uVar13 = bVar1 - 0x30;
    if (9 < uVar13) goto LAB_0130461c;
    iVar3 = iVar6 + -2;
    if (iVar3 == 0) {
LAB_01304624:
      pbVar7 = pbVar8 + iVar6;
      bVar15 = iVar6 != 2;
      iVar3 = 0;
    }
    else if (pbVar8[2] - 0x30 < 10) {
      iVar3 = iVar6 + -3;
      uVar13 = (pbVar8[2] - 0x30) + uVar13 * 10;
      if (iVar3 == 0) goto LAB_01304624;
      if (pbVar8[3] - 0x30 < 10) {
        iVar3 = iVar6 + -4;
        uVar13 = (pbVar8[3] - 0x30) + uVar13 * 10;
        if (iVar3 == 0) goto LAB_01304624;
        pbVar7 = pbVar8 + 4;
        bVar15 = true;
        if (*pbVar7 - 0x30 < 10) goto LAB_0130461c;
      }
      else {
        pbVar7 = pbVar8 + 3;
        bVar15 = true;
      }
    }
    else {
      pbVar7 = pbVar8 + 2;
      bVar15 = false;
    }
    *param_2 = pbVar7;
    param_2[1] = iVar3;
    bVar15 = (bool)((bVar1 != 0x30 | ~bVar15) & uVar13 < 0x100);
    if (!bVar15) {
      *param_2 = pbVar8 + 1;
      param_2[1] = iVar10;
    }
  }
  if (bVar15) {
    *param_1 = 1;
    *(uint *)(param_1 + 1) =
         uVar13 << 0x18 | (uVar5 & 0xff) << 0x10 | (local_24 & 0xff) << 8 | uVar14 & 0xff;
    return;
  }
LAB_0130433c:
  *param_2 = pbVar2;
  param_2[1] = iVar4;
  *param_1 = 0;
  return;
}


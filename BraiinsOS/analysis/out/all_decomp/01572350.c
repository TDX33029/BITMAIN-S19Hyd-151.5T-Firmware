// FUN_01572350 @ 01572350 size=1536 calls_out=0 calls_in=3
// strings: 

void FUN_01572350(undefined1 *param_1,undefined4 *param_2)

{
  byte bVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  bool bVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  byte *pbVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  int local_3c;
  int local_38;
  byte *local_30;
  byte *local_2c;
  
  pbVar2 = (byte *)*param_2;
  iVar3 = param_2[1];
  if (iVar3 == 0) goto LAB_01572464;
  pbVar4 = pbVar2 + 1;
  uVar10 = (uint)*pbVar2;
  uVar16 = uVar10 - 0x30;
  if (9 < uVar16) goto LAB_01572464;
  iVar9 = iVar3 + -1;
  if (iVar9 == 0) {
LAB_01572424:
    iVar9 = 0;
    iVar12 = iVar3;
    pbVar4 = pbVar2 + iVar3;
  }
  else if (pbVar2[1] - 0x30 < 10) {
    uVar16 = (uVar16 * 10 & 0xff) + (pbVar2[1] - 0x30 & 0xff);
    if ((uVar16 & 0xffffff00) != 0) goto LAB_01572464;
    iVar9 = iVar3 + -2;
    if (iVar9 == 0) goto LAB_01572424;
    if (pbVar2[2] - 0x30 < 10) {
      uVar16 = (uVar16 & 0xff) * 4 + (uVar16 & 0xff);
      if ((uVar16 >> 7 != 0) ||
         (uVar16 = (uVar16 * 2 & 0xff) + (pbVar2[2] - 0x30 & 0xff), (uVar16 & 0xffffff00) != 0))
      goto LAB_01572464;
      iVar9 = iVar3 + -3;
      if (iVar9 == 0) goto LAB_01572424;
      iVar12 = 3;
      pbVar4 = pbVar2 + 3;
      if (pbVar2[3] - 0x30 < 10) goto LAB_01572464;
    }
    else {
      pbVar4 = pbVar2 + 2;
      iVar12 = 2;
    }
  }
  else {
    iVar12 = 1;
  }
  if (uVar10 == 0x30 && iVar12 != 1) {
    iVar9 = iVar3;
    pbVar4 = pbVar2;
  }
  if (((iVar9 == 0 || uVar10 == 0x30 && iVar12 != 1) || (*pbVar4 != 0x2e)) ||
     (iVar12 = iVar9 + -1, iVar12 == 0)) goto LAB_01572464;
  uVar8 = (uint)pbVar4[1];
  uVar10 = uVar8 - 0x30;
  if (9 < uVar10) goto LAB_01572464;
  pbVar11 = pbVar4 + iVar9;
  iVar13 = iVar9 + -2;
  if (iVar13 == 0) {
LAB_01572554:
    iVar13 = 0;
    iVar9 = iVar12;
  }
  else if (pbVar4[2] - 0x30 < 10) {
    uVar10 = (uVar10 * 10 & 0xff) + (pbVar4[2] - 0x30 & 0xff);
    if ((uVar10 & 0xffffff00) != 0) goto LAB_01572464;
    iVar13 = iVar9 + -3;
    if (iVar13 == 0) goto LAB_01572554;
    if (pbVar4[3] - 0x30 < 10) {
      uVar10 = (uVar10 & 0xff) * 4 + (uVar10 & 0xff);
      if ((uVar10 >> 7 != 0) ||
         (uVar10 = (uVar10 * 2 & 0xff) + (pbVar4[3] - 0x30 & 0xff), (uVar10 & 0xffffff00) != 0))
      goto LAB_01572464;
      iVar13 = iVar9 + -4;
      if (iVar13 == 0) goto LAB_01572554;
      pbVar11 = pbVar4 + 4;
      iVar9 = 3;
      if (*pbVar11 - 0x30 < 10) goto LAB_01572464;
    }
    else {
      pbVar11 = pbVar4 + 3;
      iVar9 = 2;
    }
  }
  else {
    pbVar11 = pbVar4 + 2;
    iVar9 = 1;
  }
  pbVar4 = pbVar4 + 1;
  if (uVar8 != 0x30 || iVar9 == 1) {
    iVar12 = iVar13;
    pbVar4 = pbVar11;
  }
  if (((iVar12 == 0 || uVar8 == 0x30 && iVar9 != 1) || (*pbVar4 != 0x2e)) ||
     (iVar9 = iVar12 + -1, iVar9 == 0)) goto LAB_01572464;
  uVar8 = pbVar4[1] - 0x30;
  if (9 < uVar8) goto LAB_01572464;
  local_2c = pbVar4 + iVar12;
  iVar13 = iVar12 + -2;
  if (iVar13 == 0) {
    iVar13 = 0;
  }
  else if (pbVar4[2] - 0x30 < 10) {
    uVar8 = (uVar8 * 10 & 0xff) + (pbVar4[2] - 0x30 & 0xff);
    if ((uVar8 & 0xffffff00) != 0) goto LAB_01572464;
    iVar13 = iVar12 + -3;
    if (iVar13 == 0) {
      iVar13 = 0;
    }
    else if (pbVar4[3] - 0x30 < 10) {
      uVar8 = (uVar8 & 0xff) * 4 + (uVar8 & 0xff);
      if ((uVar8 >> 7 != 0) ||
         (uVar8 = (uVar8 * 2 & 0xff) + (pbVar4[3] - 0x30 & 0xff), (uVar8 & 0xffffff00) != 0))
      goto LAB_01572464;
      iVar13 = iVar12 + -4;
      if (iVar13 == 0) {
        iVar13 = 0;
      }
      else {
        local_2c = pbVar4 + 4;
        iVar9 = 3;
        if (*local_2c - 0x30 < 10) goto LAB_01572464;
      }
    }
    else {
      local_2c = pbVar4 + 3;
      iVar9 = 2;
    }
    if (pbVar4[1] == 0x30 && iVar9 != 1) goto LAB_01572464;
  }
  else {
    local_2c = pbVar4 + 2;
  }
  if (iVar13 == 0) goto LAB_01572464;
  iVar9 = iVar13 + -1;
  pbVar4 = local_2c + 1;
  bVar1 = *local_2c;
  *param_2 = pbVar4;
  param_2[1] = iVar9;
  if (bVar1 != 0x2e) goto LAB_01572464;
  uVar15 = 0;
  if (iVar9 == 0) {
LAB_015727c4:
    bVar5 = false;
    *param_2 = pbVar4;
    param_2[1] = iVar9;
    uVar7 = uVar15;
  }
  else {
    uVar6 = (uint)local_2c[1];
    local_38 = iVar13 + -2;
    local_30 = local_2c + 2;
    *param_2 = local_30;
    param_2[1] = local_38;
    uVar14 = uVar6 - 0x30;
    if (9 < uVar14) {
      uVar15 = 0;
      *param_2 = pbVar4;
      param_2[1] = iVar9;
      goto LAB_015727c4;
    }
    if (local_38 == 0) {
      bVar5 = uVar6 != 0x30 || iVar13 == 2;
      uVar7 = uVar14;
    }
    else {
      iVar12 = iVar13 + -3;
      bVar1 = local_2c[2];
      param_2[1] = iVar12;
      *param_2 = local_2c + 3;
      if (bVar1 - 0x30 < 10) {
        uVar7 = (uVar14 * 10 & 0xff) + (bVar1 - 0x30 & 0xff);
        uVar15 = uVar14;
        if ((uVar7 & 0xffffff00) == 0) {
          if (iVar12 == 0) {
            local_3c = iVar9;
            goto LAB_01572880;
          }
          local_30 = local_2c + 4;
          local_38 = iVar13 + -4;
          param_2[1] = local_38;
          bVar1 = local_2c[3];
          *param_2 = local_30;
          local_3c = 2;
          if (9 < bVar1 - 0x30) {
            uVar14 = uVar7;
            local_38 = iVar12;
            local_30 = local_2c + 3;
            goto LAB_01572874;
          }
          uVar14 = (uVar7 & 0xff) * 4 + (uVar7 & 0xff);
          uVar15 = uVar7;
          if ((uVar14 >> 7 == 0) &&
             (uVar14 = (uVar14 * 2 & 0xff) + (bVar1 - 0x30 & 0xff), (uVar14 & 0xffffff00) == 0)) {
            if (local_38 == 0) {
              uVar7 = uVar14;
              local_3c = iVar9;
              goto LAB_01572880;
            }
            param_2[1] = iVar13 + -5;
            bVar1 = local_2c[4];
            *param_2 = local_2c + 5;
            local_3c = 3;
            uVar15 = uVar14;
            if (9 < bVar1 - 0x30) goto LAB_01572874;
          }
        }
        goto LAB_015727c4;
      }
      local_3c = 1;
LAB_01572874:
      *param_2 = local_30;
      param_2[1] = local_38;
      uVar7 = uVar14;
LAB_01572880:
      bVar5 = uVar6 != 0x30 || local_3c == 1;
      if (uVar6 == 0x30 && local_3c != 1) {
        *param_2 = pbVar4;
        param_2[1] = iVar9;
      }
    }
  }
  if (bVar5) {
    *param_1 = 1;
    *(uint *)(param_1 + 1) =
         uVar7 << 0x18 | (uVar8 & 0xff) << 0x10 | (uVar10 & 0xff) << 8 | uVar16 & 0xff;
    return;
  }
LAB_01572464:
  *param_2 = pbVar2;
  param_2[1] = iVar3;
  *param_1 = 0;
  return;
}


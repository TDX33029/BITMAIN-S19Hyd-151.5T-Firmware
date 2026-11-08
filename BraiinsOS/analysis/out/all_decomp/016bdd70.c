// FUN_016bdd70 @ 016bdd70 size=820 calls_out=1 calls_in=2
// strings: 

void FUN_016bdd70(undefined4 *param_1)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  byte *pbVar5;
  byte *pbVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  byte *pbVar10;
  int iVar11;
  byte *pbVar12;
  bool bVar13;
  int local_38;
  byte *local_34;
  uint local_30;
  int local_2c;
  
  FUN_00fab1e0(&local_38);
  uVar2 = local_30;
  if (local_38 == 1) {
    *param_1 = 5;
    return;
  }
  if (local_30 < 2) {
    if (local_30 == 0) goto LAB_016bdf70;
LAB_016bde48:
    iVar11 = 0;
    pbVar12 = local_34 + local_30;
    bVar1 = 1;
    pbVar5 = local_34;
  }
  else {
    bVar1 = *local_34;
    if (bVar1 != 0x7b) {
      if (8 < local_30) {
        bVar13 = bVar1 == 0x75;
        if (bVar13) {
          bVar1 = local_34[1];
        }
        if ((bVar13 && bVar1 == 0x72) && (local_34[2] == 0x6e)) {
          bVar1 = local_34[3];
          bVar13 = bVar1 == 0x3a;
          if (bVar13) {
            bVar1 = local_34[4];
          }
          if (bVar13 && bVar1 == 0x75) {
            bVar1 = local_34[5];
            bVar13 = bVar1 == 0x75;
            if (bVar13) {
              bVar1 = local_34[6];
            }
            if (bVar13 && bVar1 == 0x69) {
              bVar1 = local_34[7];
              bVar13 = bVar1 == 100;
              if (bVar13) {
                bVar1 = local_34[8];
              }
              if (bVar13 && bVar1 == 0x3a) {
                iVar3 = -9;
                iVar11 = 9;
                goto LAB_016bddd4;
              }
            }
          }
        }
      }
      goto LAB_016bde48;
    }
    if (local_34[local_30 - 1] != 0x7d) goto LAB_016bde48;
    iVar3 = -2;
    iVar11 = 1;
LAB_016bddd4:
    bVar1 = 0;
    if (local_30 + iVar3 == 0) {
      uVar7 = 0;
      goto LAB_016be088;
    }
    pbVar12 = local_34 + iVar11 + local_30 + iVar3;
    pbVar5 = local_34 + iVar11;
  }
  local_2c = 0;
  local_30 = 0;
  local_34 = (byte *)0x0;
  local_38 = 0;
  uVar7 = 0;
  pbVar9 = (byte *)0x0;
  do {
    pbVar6 = pbVar5 + 1;
    uVar8 = (uint)*pbVar5;
    if ((char)*pbVar5 < '\0') {
      if (uVar8 < 0xe0) {
        uVar8 = pbVar5[1] & 0x3f | (uVar8 & 0x1f) << 6;
        pbVar6 = pbVar5 + 2;
      }
      else {
        uVar4 = pbVar5[2] & 0x3f | (pbVar5[1] & 0x3f) << 6;
        if (uVar8 < 0xf0) {
          uVar8 = uVar4 | (uVar8 & 0x1f) << 0xc;
          pbVar6 = pbVar5 + 3;
        }
        else {
          pbVar6 = pbVar5 + 4;
          uVar8 = pbVar5[3] & 0x3f | uVar4 << 6 | (uVar8 & 7) << 0x12;
        }
      }
      if (0xff < uVar8) goto LAB_016bdf38;
      pbVar10 = pbVar6 + ((int)pbVar9 - (int)pbVar5);
      if (uVar8 != 0x2d) goto LAB_016bdf1c;
LAB_016bde5c:
      if (uVar7 < 4) {
        (&local_38)[uVar7] = (int)pbVar9;
      }
      uVar7 = uVar7 + 1;
    }
    else {
      pbVar10 = pbVar6 + ((int)pbVar9 - (int)pbVar5);
      if (uVar8 == 0x2d) goto LAB_016bde5c;
LAB_016bdf1c:
      if ((9 < uVar8 - 0x30) && (5 < (uVar8 & 0xdf) - 0x41)) {
LAB_016bdf38:
        *param_1 = 0;
        param_1[1] = pbVar9 + iVar11 + 1;
        param_1[2] = uVar8;
        return;
      }
    }
    pbVar5 = pbVar6;
    pbVar9 = pbVar10;
  } while (pbVar6 != pbVar12);
  if ((bool)(bVar1 & uVar7 == 0)) {
LAB_016bdf70:
    *param_1 = 1;
    param_1[1] = uVar2;
    return;
  }
  if (uVar7 == 4) {
    iVar3 = 0;
    if ((((local_38 == 8) && (iVar3 = 1, local_38 = (int)local_34, local_34 == (byte *)0xd)) &&
        (iVar3 = 2, local_38 = local_30, local_30 == 0x12)) &&
       (iVar3 = 3, local_38 = local_2c, local_2c == 0x17)) {
      param_1[2] = uVar2 - 0x18;
      *param_1 = 4;
      param_1[1] = 4;
      param_1[3] = iVar11 + 0x19;
      return;
    }
    *param_1 = 4;
    param_1[1] = iVar3;
    iVar3 = (&DAT_00418b40)[iVar3];
    param_1[2] = local_38 - iVar3;
    param_1[3] = iVar11 + iVar3 + 1;
    return;
  }
LAB_016be088:
  *param_1 = 3;
  param_1[1] = uVar7 + 1;
  return;
}


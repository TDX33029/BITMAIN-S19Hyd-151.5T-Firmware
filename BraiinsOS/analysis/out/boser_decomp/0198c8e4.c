// FUN_0198c8e4 @ 0198c8e4 size=1044 calls_out=0 calls_in=2
// strings: 

void FUN_0198c8e4(undefined4 *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  undefined1 uVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int *piVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  int iVar15;
  uint uVar16;
  uint uVar17;
  byte bVar18;
  uint uVar19;
  undefined4 uVar20;
  byte *pbVar21;
  byte *pbVar22;
  bool bVar23;
  uint local_28;
  
  piVar11 = param_1 + 4;
  iVar10 = *param_2;
  iVar13 = param_2[1];
  uVar9 = 0;
  if (iVar13 == 0) {
    bVar18 = 0;
    uVar2 = 0x13;
  }
  else {
    uVar16 = 0;
    iVar12 = 0;
    uVar5 = 0;
    iVar6 = iVar13;
    do {
      iVar15 = iVar6 + -1;
      pbVar3 = (byte *)(iVar10 + iVar12);
      bVar18 = *pbVar3;
      pbVar21 = pbVar3 + 1;
      if ((uVar9 == 0x3f) && (1 < bVar18)) {
        uVar2 = 6;
        bVar18 = 0;
        *param_2 = (int)pbVar21;
        param_2[1] = iVar15;
        uVar9 = 0x3f;
        goto LAB_0198ca10;
      }
      uVar19 = uVar9 & 0x3f;
      uVar8 = uVar19 - 0x20;
      uVar1 = bVar18 & 0x7f;
      uVar17 = uVar1 << uVar19;
      if (-1 < (int)uVar8) {
        uVar17 = 0;
      }
      uVar19 = uVar1 >> (0x20 - uVar19 & 0xff);
      uVar16 = uVar17 | uVar16;
      if (-1 < (int)uVar8) {
        uVar19 = uVar1 << (uVar8 & 0xff);
      }
      uVar5 = uVar19 | uVar5;
      if ((uint)(int)(char)bVar18 < 0x80000000) {
        uVar9 = 0;
        bVar18 = 0;
        *param_2 = (int)pbVar21;
        param_2[1] = iVar15;
        if (iVar15 == 0) goto LAB_0198cb1c;
        pbVar22 = (byte *)0x0;
        pbVar21 = pbVar3 + iVar6;
        local_28 = 0;
        goto LAB_0198ca7c;
      }
      iVar12 = iVar12 + 1;
      uVar9 = uVar9 + 7;
      iVar6 = iVar15;
    } while (iVar13 != iVar12);
    uVar9 = 0;
    *param_2 = iVar10 + iVar13;
    param_2[1] = 0;
    uVar2 = 0x13;
    iVar10 = iVar10 + iVar13;
  }
LAB_0198ca10:
  *param_1 = 0x2e;
  *piVar11 = iVar10;
  param_1[1] = 0;
  param_1[3] = iVar10;
  *(byte *)((int)param_1 + 9) = bVar18;
  *(undefined1 *)(param_1 + 2) = uVar2;
  param_1[5] = uVar9;
  return;
LAB_0198ca7c:
  iVar6 = iVar15 + -1;
  iVar7 = iVar10 + iVar12;
  bVar18 = *(byte *)(iVar7 + 1);
  pbVar3 = (byte *)(iVar7 + 2);
  if ((uVar9 == 0x3f) && (1 < bVar18)) {
    bVar18 = 0;
    *param_2 = (int)pbVar3;
    param_2[1] = iVar6;
    uVar2 = 6;
    uVar20 = 0x3f;
    goto LAB_0198cb38;
  }
  uVar8 = uVar9 & 0x3f;
  uVar19 = bVar18 & 0x7f;
  uVar17 = uVar19 << uVar8;
  uVar1 = uVar19 >> (0x20 - uVar8 & 0xff);
  if (-1 < (int)(uVar8 - 0x20)) {
    uVar17 = 0;
    uVar1 = uVar19 << (uVar8 - 0x20 & 0xff);
  }
  pbVar22 = (byte *)(uVar1 | (uint)pbVar22);
  local_28 = uVar17 | local_28;
  if ((uint)(int)(char)bVar18 < 0x80000000) {
    uVar9 = 0;
    *param_2 = (int)pbVar3;
    param_2[1] = iVar6;
    bVar18 = 0;
    if (iVar6 == 0) goto LAB_0198cc24;
    uVar8 = 0;
    uVar1 = 0;
    pbVar3 = (byte *)(iVar7 + 3);
    pbVar21 = (byte *)(iVar7 + 1) + iVar15;
    uVar17 = 0;
    iVar10 = (iVar13 + -3) - iVar12;
    goto LAB_0198cbac;
  }
  uVar9 = uVar9 + 7;
  iVar12 = iVar12 + 1;
  iVar15 = iVar6;
  if (iVar13 + -1 == iVar12) {
    *param_2 = (int)pbVar21;
    param_2[1] = 0;
LAB_0198cb1c:
    uVar20 = 0;
    uVar2 = 0x13;
    pbVar22 = pbVar21;
LAB_0198cb38:
    *(undefined1 *)(param_1 + 2) = uVar2;
    *param_1 = 0x2e;
    param_1[1] = 0;
    *piVar11 = (int)pbVar22;
    param_1[3] = pbVar22;
    *(byte *)((int)param_1 + 9) = bVar18;
    param_1[5] = uVar20;
    return;
  }
  goto LAB_0198ca7c;
  while( true ) {
    uVar4 = uVar1 & 0x3f;
    uVar9 = bVar18 & 0x7f;
    uVar14 = uVar4 - 0x20;
    uVar19 = uVar9 << uVar4;
    if (-1 < (int)uVar14) {
      uVar19 = 0;
    }
    uVar8 = uVar19 | uVar8;
    uVar19 = uVar9 >> (0x20 - uVar4 & 0xff);
    if (-1 < (int)uVar14) {
      uVar19 = uVar9 << (uVar14 & 0xff);
    }
    uVar17 = uVar19 | uVar17;
    if ((uint)(int)(char)bVar18 < 0x80000000) {
      *param_2 = (int)pbVar3;
      param_2[1] = iVar10;
      *piVar11 = 0x2e;
      param_1[5] = 0;
      param_1[0xe] = 0;
      param_1[0xf] = 0;
      param_1[0x10] = 0;
      param_1[0x11] = 0;
      param_1[1] = 0;
      param_1[2] = param_3;
      param_1[3] = param_4;
      param_1[8] = uVar16;
      param_1[9] = uVar5;
      *param_1 = 0x1f;
      param_1[10] = local_28;
      param_1[0xb] = pbVar22;
      param_1[0xc] = uVar8;
      param_1[0xd] = uVar17;
      return;
    }
    pbVar3 = pbVar3 + 1;
    uVar1 = uVar1 + 7;
    bVar23 = iVar10 == 0;
    iVar10 = iVar10 + -1;
    if (bVar23) break;
LAB_0198cbac:
    bVar18 = pbVar3[-1];
    if ((uVar1 == 0x3f) && (1 < bVar18)) {
      bVar18 = 0;
      *param_2 = (int)pbVar3;
      param_2[1] = iVar10;
      uVar2 = 6;
      goto LAB_0198cc48;
    }
  }
  *param_2 = (int)pbVar21;
  param_2[1] = 0;
  pbVar3 = pbVar21;
LAB_0198cc24:
  uVar9 = 0;
  uVar2 = 0x13;
LAB_0198cc48:
  *(undefined1 *)(param_1 + 2) = uVar2;
  *param_1 = 0x2e;
  param_1[1] = 0;
  *piVar11 = (int)pbVar3;
  param_1[3] = pbVar3;
  *(byte *)((int)param_1 + 9) = bVar18;
  param_1[5] = uVar9;
  return;
}


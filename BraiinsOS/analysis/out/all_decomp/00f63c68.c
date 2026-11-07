// FUN_00f63c68 @ 00f63c68 size=476 calls_out=1 calls_in=1
// strings: 

void FUN_00f63c68(undefined4 *param_1,int *param_2)

{
  int iVar1;
  undefined1 uVar2;
  undefined2 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  byte bVar8;
  int iVar9;
  uint uVar10;
  int iStack_1c;
  byte *pbStack_18;
  uint uStack_14;
  
  iVar5 = *param_2;
  iVar9 = param_2[1];
  iVar1 = iVar5 + iVar9;
  if (iVar9 == 0) {
    iVar7 = 0;
    iVar6 = 0;
  }
  else {
    iVar6 = 0;
    do {
      if (*(byte *)(iVar5 + iVar6) - 0x3a < 0xfffffff6) {
        iVar7 = iVar9 - iVar6;
        iVar1 = iVar5 + iVar6;
        goto LAB_00f63cc4;
      }
      iVar6 = iVar6 + 1;
    } while (iVar9 != iVar6);
    iVar7 = 0;
    iVar6 = iVar9;
  }
LAB_00f63cc4:
  *param_2 = iVar1;
  param_2[2] = param_2[2] + iVar6;
  param_2[1] = iVar7;
  FUN_00fab1e0(&iStack_1c,iVar5,iVar6);
  if (iStack_1c == 1) {
    *param_1 = pbStack_18;
    param_1[1] = uStack_14;
    param_1[2] = 0x3b9aca0f;
    return;
  }
  if (uStack_14 == 0) {
    *(undefined1 *)param_1 = 0;
    param_1[2] = &DAT_3b9aca08;
    return;
  }
  if (uStack_14 == 1) {
    bVar8 = *pbStack_18;
    if ((bVar8 == 0x2b) || (bVar8 == 0x2d)) {
      *(undefined1 *)param_1 = 1;
      param_1[2] = &DAT_3b9aca08;
      return;
    }
  }
  else {
    bVar8 = *pbStack_18;
  }
  uVar4 = 0;
  uVar3 = 0;
  if (bVar8 == 0x2b) {
    pbStack_18 = pbStack_18 + 1;
    uStack_14 = uStack_14 - 1;
  }
  if (uStack_14 < 5) {
    for (; uStack_14 != 0; uStack_14 = uStack_14 - 1) {
      bVar8 = *pbStack_18;
      if (9 < bVar8 - 0x30) {
LAB_00f63e10:
        *(undefined1 *)param_1 = 1;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
      pbStack_18 = pbStack_18 + 1;
      uVar4 = (bVar8 - 0x30) + uVar4 * 10;
      uVar3 = (undefined2)uVar4;
    }
  }
  else {
    while (uVar3 = (undefined2)uVar4, uStack_14 != 0) {
      uVar4 = (uVar4 & 0xffff) * 4 + (uVar4 & 0xffff);
      if (uVar4 >> 0xf != 0) {
        uVar2 = 1;
        if (*pbStack_18 - 0x30 < 10) {
          uVar2 = 2;
        }
        *(undefined1 *)param_1 = uVar2;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
      uVar10 = *pbStack_18 - 0x30;
      if (9 < uVar10) goto LAB_00f63e10;
      uStack_14 = uStack_14 - 1;
      uVar4 = (uVar4 * 2 & 0xffff) + (uVar10 & 0xffff);
      pbStack_18 = pbStack_18 + 1;
      if ((uVar4 & 0x10000) != 0) {
        *(undefined1 *)param_1 = 2;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
    }
  }
  *(undefined2 *)param_1 = uVar3;
  param_1[2] = 0x3b9aca10;
  return;
}


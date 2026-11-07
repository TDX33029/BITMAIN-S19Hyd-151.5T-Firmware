// FUN_00f63e44 @ 00f63e44 size=504 calls_out=1 calls_in=1
// strings: 

void FUN_00f63e44(undefined4 *param_1,int *param_2)

{
  int iVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  undefined1 uVar9;
  int iStack_24;
  byte *pbStack_20;
  uint uStack_1c;
  
  iVar4 = *param_2;
  iVar7 = param_2[1];
  iVar1 = iVar4 + iVar7;
  if (iVar7 == 0) {
    iVar6 = 0;
    iVar5 = 0;
  }
  else {
    iVar5 = 0;
    do {
      if (*(byte *)(iVar4 + iVar5) - 0x3a < 0xfffffff6) {
        iVar6 = iVar7 - iVar5;
        iVar1 = iVar4 + iVar5;
        goto LAB_00f63ea0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar7 != iVar5);
    iVar6 = 0;
    iVar5 = iVar7;
  }
LAB_00f63ea0:
  *param_2 = iVar1;
  param_2[2] = param_2[2] + iVar5;
  param_2[1] = iVar6;
  FUN_00fab1e0(&iStack_24,iVar4,iVar5);
  if (iStack_24 == 1) {
    *param_1 = pbStack_20;
    param_1[1] = uStack_1c;
    param_1[2] = 0x3b9aca0f;
    return;
  }
  if (uStack_1c == 0) {
    *(undefined1 *)param_1 = 0;
    param_1[2] = &DAT_3b9aca08;
    return;
  }
  if (uStack_1c == 1) {
    bVar2 = *pbStack_20;
    if ((bVar2 == 0x2b) || (bVar2 == 0x2d)) goto LAB_00f63f14;
  }
  else {
    bVar2 = *pbStack_20;
  }
  if (bVar2 == 0x2b) {
    pbStack_20 = pbStack_20 + 1;
    uStack_1c = uStack_1c - 1;
  }
  if (uStack_1c < 3) {
    if (uStack_1c == 0) {
      uVar3 = 0;
    }
    else {
      uVar3 = *pbStack_20 - 0x30;
      if (9 < uVar3) {
LAB_00f63f14:
        *(undefined1 *)param_1 = 1;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
      if (uStack_1c != 1) {
        if (9 < pbStack_20[1] - 0x30) goto LAB_00f63f14;
        uVar3 = (pbStack_20[1] - 0x30) + uVar3 * 10;
      }
    }
  }
  else {
    uVar3 = 0;
    while (uStack_1c != 0) {
      uVar3 = (uVar3 & 0xff) * 4 + (uVar3 & 0xff);
      if (uVar3 >> 7 != 0) {
        uVar9 = 1;
        if (*pbStack_20 - 0x30 < 10) {
          uVar9 = 2;
        }
        *(undefined1 *)param_1 = uVar9;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
      uVar8 = *pbStack_20 - 0x30;
      if (9 < uVar8) {
        *(undefined1 *)param_1 = 1;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
      uStack_1c = uStack_1c - 1;
      uVar3 = (uVar3 * 2 & 0xff) + (uVar8 & 0xff);
      pbStack_20 = pbStack_20 + 1;
      if ((uVar3 & 0xffffff00) != 0) {
        *(undefined1 *)param_1 = 2;
        param_1[2] = &DAT_3b9aca08;
        return;
      }
    }
  }
  *(char *)param_1 = (char)uVar3;
  param_1[2] = 0x3b9aca10;
  return;
}


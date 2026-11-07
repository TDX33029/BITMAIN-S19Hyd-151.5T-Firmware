// FUN_01285a38 @ 01285a38 size=456 calls_out=1 calls_in=1
// strings: 

void FUN_01285a38(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 uVar4;
  int iVar5;
  uint uVar6;
  bool bVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  int iVar11;
  uint uVar12;
  int local_24;
  byte *local_20;
  uint local_1c;
  
  iVar5 = *param_2;
  iVar11 = param_2[1];
  iVar2 = iVar5 + iVar11;
  if (iVar11 == 0) {
    iVar9 = 0;
    iVar8 = 0;
  }
  else {
    iVar8 = 0;
    do {
      if (*(byte *)(iVar5 + iVar8) - 0x3a < 0xfffffff6) {
        iVar9 = iVar11 - iVar8;
        iVar2 = iVar5 + iVar8;
        goto LAB_01285a94;
      }
      iVar8 = iVar8 + 1;
    } while (iVar11 != iVar8);
    iVar9 = 0;
    iVar8 = iVar11;
  }
LAB_01285a94:
  *param_2 = iVar2;
  param_2[2] = param_2[2] + iVar8;
  param_2[1] = iVar9;
  FUN_012fbd94(&local_24,iVar5,iVar8);
  uVar3 = 0x3b9aca08;
  if (local_24 == 1) {
    uVar3 = 0x3b9aca0f;
    *param_1 = local_20;
    param_1[1] = local_1c;
    goto LAB_01285be0;
  }
  if (local_1c == 0) {
    uVar4 = 0;
  }
  else {
    if (local_1c == 1) {
      bVar10 = *local_20;
      uVar4 = 1;
      if ((bVar10 == 0x2b) || (bVar10 == 0x2d)) goto LAB_01285bcc;
    }
    else {
      bVar10 = *local_20;
    }
    if (bVar10 == 0x2b) {
      local_20 = local_20 + 1;
      local_1c = local_1c - 1;
    }
    if (local_1c < 3) {
      if (local_1c == 0) {
        uVar4 = 0;
      }
      else {
        bVar7 = local_1c == 1;
        iVar2 = 0;
        do {
          bVar10 = *local_20;
          if (9 < bVar10 - 0x30) goto LAB_01285bc8;
          local_20 = local_20 + 1;
          bVar1 = !bVar7;
          bVar7 = true;
          iVar2 = (bVar10 - 0x30) + iVar2 * 10;
          uVar4 = (undefined1)iVar2;
        } while (bVar1);
      }
LAB_01285bd8:
      *(undefined1 *)param_1 = uVar4;
      uVar3 = 0x3b9aca10;
      goto LAB_01285be0;
    }
    uVar6 = 0;
    do {
      uVar4 = (undefined1)uVar6;
      if (local_1c == 0) goto LAB_01285bd8;
      uVar6 = (uVar6 & 0xff) * 4 + (uVar6 & 0xff);
      if (uVar6 >> 7 != 0) {
        uVar4 = 1;
        if (*local_20 - 0x30 < 10) {
          uVar4 = 2;
        }
        goto LAB_01285bcc;
      }
      uVar12 = *local_20 - 0x30;
      if (9 < uVar12) goto LAB_01285bc8;
      local_1c = local_1c - 1;
      uVar6 = (uVar6 * 2 & 0xff) + (uVar12 & 0xff);
      local_20 = local_20 + 1;
    } while ((uVar6 & 0xffffff00) == 0);
    uVar4 = 2;
  }
LAB_01285bcc:
  *(undefined1 *)param_1 = uVar4;
LAB_01285be0:
  param_1[2] = uVar3;
  return;
LAB_01285bc8:
  uVar4 = 1;
  goto LAB_01285bcc;
}


// FUN_00f63940 @ 00f63940 size=808 calls_out=1 calls_in=1
// strings: 

void FUN_00f63940(uint *param_1,int *param_2)

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
  int iStack_1c;
  byte *pbStack_18;
  uint uStack_14;
  
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
        goto LAB_00f6399c;
      }
      iVar5 = iVar5 + 1;
    } while (iVar7 != iVar5);
    iVar6 = 0;
    iVar5 = iVar7;
  }
LAB_00f6399c:
  *param_2 = iVar1;
  param_2[2] = param_2[2] + iVar5;
  param_2[1] = iVar6;
  FUN_00fab1e0(&iStack_1c,iVar4,iVar5);
  if (iStack_1c == 1) {
    *param_1 = (uint)pbStack_18;
    param_1[1] = uStack_14;
    param_1[2] = 0x3b9aca0f;
    return;
  }
  if (uStack_14 == 0) {
    *(undefined1 *)param_1 = 0;
    param_1[2] = (uint)&DAT_3b9aca08;
    return;
  }
  if (uStack_14 == 1) {
    bVar2 = *pbStack_18;
    if (bVar2 == 0x2b || bVar2 == 0x2d) goto LAB_00f63a0c;
  }
  else {
    bVar2 = *pbStack_18;
  }
  if (bVar2 == 0x2d) {
    iVar1 = uStack_14 - 1;
    pbStack_18 = pbStack_18 + 1;
    uVar3 = 0;
    if (uStack_14 < 9) {
      for (; iVar1 != 0; iVar1 = iVar1 + -1) {
        bVar2 = *pbStack_18;
        if (9 < bVar2 - 0x30) goto LAB_00f63be8;
        pbStack_18 = pbStack_18 + 1;
        uVar3 = uVar3 * 10 - (bVar2 - 0x30);
      }
    }
    else {
      do {
        iVar4 = (int)((longlong)(int)uVar3 * 10);
        if ((int)((ulonglong)((longlong)(int)uVar3 * 10) >> 0x20) != iVar4 >> 0x1f) {
          uVar9 = 3;
          goto LAB_00f63c34;
        }
        uVar8 = *pbStack_18 - 0x30;
        if (9 < uVar8) goto LAB_00f63be8;
        uVar3 = iVar4 - uVar8;
        if (SBORROW4(iVar4,uVar8)) {
          *(undefined1 *)param_1 = 3;
          param_1[2] = (uint)&DAT_3b9aca08;
          return;
        }
        iVar1 = iVar1 + -1;
        pbStack_18 = pbStack_18 + 1;
      } while (iVar1 != 0);
    }
  }
  else {
    if (bVar2 == 0x2b) {
      uStack_14 = uStack_14 - 1;
      pbStack_18 = pbStack_18 + 1;
    }
    if (uStack_14 < 8) {
      if (uStack_14 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *pbStack_18 - 0x30;
        if (9 < uVar3) {
LAB_00f63a0c:
          *(undefined1 *)param_1 = 1;
          param_1[2] = (uint)&DAT_3b9aca08;
          return;
        }
        if (uStack_14 != 1) {
          if (9 < pbStack_18[1] - 0x30) goto LAB_00f63a0c;
          uVar3 = (pbStack_18[1] - 0x30) + uVar3 * 10;
          if (uStack_14 != 2) {
            if (9 < pbStack_18[2] - 0x30) goto LAB_00f63a0c;
            uVar3 = (pbStack_18[2] - 0x30) + uVar3 * 10;
            if (uStack_14 != 3) {
              if (9 < pbStack_18[3] - 0x30) goto LAB_00f63a0c;
              uVar3 = (pbStack_18[3] - 0x30) + uVar3 * 10;
              if (uStack_14 != 4) {
                if (9 < pbStack_18[4] - 0x30) goto LAB_00f63a0c;
                uVar3 = (pbStack_18[4] - 0x30) + uVar3 * 10;
                if (uStack_14 != 5) {
                  if (9 < pbStack_18[5] - 0x30) goto LAB_00f63a0c;
                  uVar3 = (pbStack_18[5] - 0x30) + uVar3 * 10;
                  if (uStack_14 != 6) {
                    if (9 < pbStack_18[6] - 0x30) goto LAB_00f63a0c;
                    uVar3 = (pbStack_18[6] - 0x30) + uVar3 * 10;
                  }
                }
              }
            }
          }
        }
      }
    }
    else {
      uVar3 = 0;
      do {
        iVar1 = (int)((longlong)(int)uVar3 * 10);
        if ((int)((ulonglong)((longlong)(int)uVar3 * 10) >> 0x20) != iVar1 >> 0x1f) {
          uVar9 = 2;
LAB_00f63c34:
          if (9 < *pbStack_18 - 0x30) {
            uVar9 = 1;
          }
          *(undefined1 *)param_1 = uVar9;
          param_1[2] = (uint)&DAT_3b9aca08;
          return;
        }
        uVar8 = *pbStack_18 - 0x30;
        if (9 < uVar8) {
LAB_00f63be8:
          *(undefined1 *)param_1 = 1;
          param_1[2] = (uint)&DAT_3b9aca08;
          return;
        }
        uVar3 = iVar1 + uVar8;
        if (SCARRY4(iVar1,uVar8)) {
          *(undefined1 *)param_1 = 2;
          param_1[2] = (uint)&DAT_3b9aca08;
          return;
        }
        uStack_14 = uStack_14 - 1;
        pbStack_18 = pbStack_18 + 1;
      } while (uStack_14 != 0);
    }
  }
  *param_1 = uVar3;
  param_1[2] = 0x3b9aca10;
  return;
}


// FUN_00c49650 @ 00c49650 size=548 calls_out=0 calls_in=4
// strings: 

void FUN_00c49650(undefined1 *param_1,byte *param_2,uint param_3)

{
  longlong lVar1;
  ulonglong uVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  
  if (param_3 == 1) {
    bVar4 = *param_2;
    if (bVar4 == 0x2d || bVar4 == 0x2b) {
      param_1[1] = 1;
      *param_1 = 1;
      return;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      *param_1 = 1;
      return;
    }
    bVar4 = *param_2;
  }
  if (bVar4 == 0x2d) {
    iVar9 = param_3 - 1;
    param_2 = param_2 + 1;
    if (0x10 < param_3) {
      uVar6 = 0;
      uVar8 = 0;
      do {
        uVar10 = (uint)((ulonglong)uVar6 * 10);
        lVar1 = (longlong)(int)uVar8 * 10 + ((ulonglong)uVar6 * 10 >> 0x20);
        uVar5 = (uint)lVar1;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar6 != (int)uVar5 >> 0x1f || (int)(uVar6 ^ uVar5) < 0) {
          if (9 < *param_2 - 0x30) goto LAB_00c49860;
LAB_00c49848:
          uVar3 = 3;
          goto LAB_00c4984c;
        }
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_00c49860;
        uVar6 = uVar10 - uVar8;
        uVar8 = uVar5 - (uVar10 < uVar8);
        uVar2 = CONCAT44(uVar8,uVar6);
        if ((int)(uVar5 & (uVar5 ^ uVar8)) < 0) goto LAB_00c49848;
        iVar9 = iVar9 + -1;
        param_2 = param_2 + 1;
      } while (iVar9 != 0);
      goto LAB_00c49814;
    }
    if (iVar9 != 0) {
      uVar6 = 0;
      iVar7 = 0;
      do {
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_00c49860;
        uVar2 = (ulonglong)uVar6;
        uVar5 = (uint)(uVar2 * 10);
        param_2 = param_2 + 1;
        uVar6 = uVar5 - uVar8;
        iVar7 = ((int)(uVar2 * 10 >> 0x20) + iVar7 * 10) - (uint)(uVar5 < uVar8);
        uVar2 = CONCAT44(iVar7,uVar6);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
      goto LAB_00c49814;
    }
  }
  else {
    if (bVar4 == 0x2b) {
      param_3 = param_3 - 1;
      param_2 = param_2 + 1;
    }
    if (0xf < param_3) {
      uVar6 = 0;
      uVar8 = 0;
      do {
        uVar10 = (uint)((ulonglong)uVar6 * 10);
        lVar1 = (longlong)(int)uVar8 * 10 + ((ulonglong)uVar6 * 10 >> 0x20);
        uVar5 = (uint)lVar1;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar6 != (int)uVar5 >> 0x1f || (int)(uVar6 ^ uVar5) < 0) {
          if (*param_2 - 0x30 < 10) {
LAB_00c49834:
            uVar3 = 2;
LAB_00c4984c:
            param_1[1] = uVar3;
            *param_1 = 1;
            return;
          }
          goto LAB_00c49860;
        }
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_00c49860;
        uVar6 = uVar10 + uVar8;
        uVar8 = uVar5 + CARRY4(uVar10,uVar8);
        uVar2 = CONCAT44(uVar8,uVar6);
        if ((int)((uVar5 ^ uVar8) & ~uVar5) < 0) goto LAB_00c49834;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
      } while (param_3 != 0);
      goto LAB_00c49814;
    }
    if (param_3 != 0) {
      uVar2 = 0;
      do {
        bVar4 = *param_2;
        if (9 < bVar4 - 0x30) {
LAB_00c49860:
          param_1[1] = 1;
          *param_1 = 1;
          return;
        }
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,bVar4 - 0x30);
      } while (param_3 != 0);
      goto LAB_00c49814;
    }
  }
  uVar2 = 0;
LAB_00c49814:
  *(ulonglong *)(param_1 + 8) = uVar2;
  *param_1 = 0;
  return;
}


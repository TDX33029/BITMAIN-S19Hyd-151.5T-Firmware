// FUN_01ac0f88 @ 01ac0f88 size=524 calls_out=0 calls_in=1
// strings: 

void FUN_01ac0f88(undefined1 *param_1,byte *param_2,uint param_3)

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
      uVar3 = 1;
      param_1[1] = 1;
      goto LAB_01ac118c;
    }
  }
  else {
    if (param_3 == 0) {
      param_1[1] = 0;
      uVar3 = 1;
      goto LAB_01ac118c;
    }
    bVar4 = *param_2;
  }
  if (bVar4 == 0x2d) {
    iVar9 = param_3 - 1;
    param_2 = param_2 + 1;
    if (param_3 < 0x11) {
      if (iVar9 == 0) goto LAB_01ac10e0;
      uVar6 = 0;
      iVar7 = 0;
      do {
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_01ac1180;
        uVar2 = (ulonglong)uVar6;
        uVar5 = (uint)(uVar2 * 10);
        param_2 = param_2 + 1;
        uVar6 = uVar5 - uVar8;
        iVar7 = ((int)(uVar2 * 10 >> 0x20) + iVar7 * 10) - (uint)(uVar5 < uVar8);
        uVar2 = CONCAT44(iVar7,uVar6);
        iVar9 = iVar9 + -1;
      } while (iVar9 != 0);
    }
    else {
      uVar6 = 0;
      uVar8 = 0;
      do {
        uVar10 = (uint)((ulonglong)uVar6 * 10);
        lVar1 = (longlong)(int)uVar8 * 10 + ((ulonglong)uVar6 * 10 >> 0x20);
        uVar5 = (uint)lVar1;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar6 != (int)uVar5 >> 0x1f || (int)(uVar6 ^ uVar5) < 0) {
          if (9 < *param_2 - 0x30) goto LAB_01ac1180;
LAB_01ac1170:
          uVar3 = 3;
          goto LAB_01ac1174;
        }
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_01ac1180;
        uVar6 = uVar10 - uVar8;
        uVar8 = uVar5 - (uVar10 < uVar8);
        uVar2 = CONCAT44(uVar8,uVar6);
        if ((int)(uVar5 & (uVar5 ^ uVar8)) < 0) goto LAB_01ac1170;
        iVar9 = iVar9 + -1;
        param_2 = param_2 + 1;
      } while (iVar9 != 0);
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
      while( true ) {
        uVar10 = (uint)((ulonglong)uVar6 * 10);
        lVar1 = (longlong)(int)uVar8 * 10 + ((ulonglong)uVar6 * 10 >> 0x20);
        uVar5 = (uint)lVar1;
        uVar6 = (uint)((ulonglong)lVar1 >> 0x20);
        if (uVar6 != (int)uVar5 >> 0x1f || (int)(uVar6 ^ uVar5) < 0) break;
        uVar8 = *param_2 - 0x30;
        if (9 < uVar8) goto LAB_01ac1180;
        uVar6 = uVar10 + uVar8;
        uVar8 = uVar5 + CARRY4(uVar10,uVar8);
        uVar2 = CONCAT44(uVar8,uVar6);
        if ((int)((uVar5 ^ uVar8) & ~uVar5) < 0) goto LAB_01ac115c;
        param_3 = param_3 - 1;
        param_2 = param_2 + 1;
        if (param_3 == 0) goto LAB_01ac1144;
      }
      if (*param_2 - 0x30 < 10) {
LAB_01ac115c:
        uVar3 = 2;
LAB_01ac1174:
        param_1[1] = uVar3;
        uVar3 = 1;
        goto LAB_01ac118c;
      }
LAB_01ac1180:
      uVar3 = 1;
      param_1[1] = 1;
      goto LAB_01ac118c;
    }
    if (param_3 == 0) {
LAB_01ac10e0:
      uVar2 = 0;
    }
    else {
      uVar2 = 0;
      do {
        bVar4 = *param_2;
        if (9 < bVar4 - 0x30) goto LAB_01ac1180;
        param_2 = param_2 + 1;
        param_3 = param_3 - 1;
        uVar2 = (uVar2 & 0xffffffff) * 10 + CONCAT44((int)(uVar2 >> 0x20) * 10,bVar4 - 0x30);
      } while (param_3 != 0);
    }
  }
LAB_01ac1144:
  *(ulonglong *)(param_1 + 8) = uVar2;
  uVar3 = 0;
LAB_01ac118c:
  *param_1 = uVar3;
  return;
}


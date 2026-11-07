// FUN_00f6a46c @ 00f6a46c size=416 calls_out=1 calls_in=1
// strings: 

void FUN_00f6a46c(int *param_1,int param_2,uint param_3,uint param_4)

{
  int iVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  undefined1 uVar10;
  uint uVar11;
  
  uVar10 = 4;
  if (param_3 < param_4) {
LAB_00f6a480:
    *(undefined1 *)(param_1 + 1) = uVar10;
    *param_1 = 0;
    return;
  }
  uVar3 = 0;
  uVar5 = 0;
  uVar11 = 0;
  uVar10 = 0;
  do {
    if (param_4 == uVar3 || param_3 == uVar3) {
      uVar3 = param_4;
      if ((param_4 < param_3) && (*(char *)(param_2 + param_4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,param_4,param_3,&DAT_018801f4);
      }
LAB_00f6a528:
      uVar8 = *(uint *)("" + param_4 * 8);
      uVar7 = *(uint *)(&DAT_0035cbcc + param_4 * 8);
      lVar2 = (ulonglong)uVar8 * (ulonglong)uVar11 +
              ((ulonglong)(((int)uVar11 >> 0x1f) * uVar8) << 0x20 |
              (ulonglong)uVar8 * (ulonglong)uVar5 >> 0x20);
      uVar4 = (uint)((ulonglong)lVar2 >> 0x20);
      lVar2 = (ulonglong)uVar7 * (ulonglong)uVar5 +
              CONCAT44(uVar5 * ((int)uVar7 >> 0x1f),(int)lVar2);
      iVar6 = (int)lVar2;
      uVar9 = (uint)((ulonglong)lVar2 >> 0x20);
      iVar1 = iVar6 >> 0x1f;
      if ((longlong)(int)uVar7 * (longlong)(int)uVar11 +
          CONCAT44(((int)uVar4 >> 0x1f) + ((int)uVar9 >> 0x1f) + (uint)CARRY4(uVar4,uVar9),
                   uVar4 + uVar9) == CONCAT44(iVar1,iVar1)) {
        *param_1 = param_2 + uVar3;
        param_1[1] = param_3 - uVar3;
        param_1[2] = (int)((ulonglong)uVar8 * (ulonglong)uVar5);
        param_1[3] = iVar6;
        return;
      }
      *param_1 = 0;
      *(undefined1 *)(param_1 + 1) = 0;
      return;
    }
    uVar4 = *(byte *)(param_2 + uVar3) - 0x30 & 0xff;
    if (9 < uVar4) {
      uVar10 = 3;
      if (uVar3 < param_4) goto LAB_00f6a480;
      if (uVar3 < param_3) {
        if (-0x41 < *(char *)(param_2 + uVar3)) goto LAB_00f6a528;
      }
      else if (uVar3 == param_3) goto LAB_00f6a528;
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,uVar3,param_3,&DAT_01880204);
    }
    uVar8 = (uint)((ulonglong)uVar5 * 10);
    lVar2 = (longlong)(int)uVar11 * 10 + ((ulonglong)uVar5 * 10 >> 0x20);
    uVar7 = (uint)lVar2;
    uVar5 = (uint)((ulonglong)lVar2 >> 0x20);
    if (uVar5 != (int)uVar7 >> 0x1f || (int)(uVar5 ^ uVar7) < 0) goto LAB_00f6a480;
    uVar5 = uVar8 + uVar4;
    uVar11 = uVar7 + CARRY4(uVar8,uVar4);
    if ((int)((uVar7 ^ uVar11) & ~uVar7) < 0) goto LAB_00f6a480;
    uVar3 = uVar3 + 1;
  } while( true );
}


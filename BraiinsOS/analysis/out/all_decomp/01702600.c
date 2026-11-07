// FUN_01702600 @ 01702600 size=320 calls_out=0 calls_in=9
// strings: 

undefined8 FUN_01702600(int param_1)

{
  int iVar1;
  longlong lVar2;
  longlong lVar3;
  int *piVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int *piVar11;
  int iVar12;
  uint uVar13;
  int *piVar14;
  
  piVar4 = (int *)(param_1 + -4);
  uVar5 = 8;
  do {
    uVar13 = 0;
    uVar10 = 0x100 >> (uVar5 & 0xff);
    piVar7 = (int *)(&DAT_00429040 + (4 << (uVar5 & 0xff)));
    iVar1 = uVar10 * 2;
    do {
      piVar14 = piVar4 + uVar10;
      piVar7 = piVar7 + -1;
      iVar12 = *piVar7;
      uVar9 = uVar13;
      piVar11 = (int *)(param_1 + uVar13 * 4);
      do {
        iVar6 = *piVar11;
        uVar9 = uVar9 + 1;
        piVar14 = piVar14 + 1;
        *piVar11 = *piVar14 + iVar6;
        lVar2 = (longlong)(iVar6 - *piVar14) * (longlong)-iVar12;
        uVar8 = (uint)lVar2;
        lVar3 = (longlong)(int)(uVar8 * 0x3802001) * -0x7fe001;
        *piVar14 = (int)((ulonglong)lVar2 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) +
                   (uint)CARRY4((uint)lVar3,uVar8);
        piVar11 = piVar11 + 1;
      } while (uVar9 < uVar10);
      uVar10 = uVar10 + iVar1;
      uVar13 = uVar13 + iVar1;
    } while (uVar13 < 0x100);
    uVar5 = uVar5 - 1;
  } while (uVar5 != 0);
  do {
    piVar4 = piVar4 + 1;
    uVar5 = (uint)((longlong)*piVar4 * 0xa3fa);
    lVar2 = (longlong)(int)(uVar5 * 0x3802001) * -0x7fe001;
    *piVar4 = (int)((ulonglong)((longlong)*piVar4 * 0xa3fa) >> 0x20) +
              (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar5);
  } while ((int *)(param_1 + 0x3fc) != piVar4);
  return 0;
}


// FUN_01b28d84 @ 01b28d84 size=272 calls_out=0 calls_in=6
// strings: 

undefined8 FUN_01b28d84(int param_1)

{
  uint uVar1;
  longlong lVar2;
  longlong lVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  int *piVar11;
  uint uVar12;
  uint uVar13;
  
  uVar13 = 8;
  do {
    uVar4 = 0;
    uVar1 = 0x100 >> (uVar13 & 0xff);
    piVar10 = (int *)(param_1 + uVar1 * 4);
    piVar11 = (int *)(&DAT_0053ac80 + (4 << (uVar13 & 0xff)));
    do {
      piVar11 = piVar11 + -1;
      iVar6 = *piVar11;
      uVar5 = uVar1 + uVar4;
      piVar8 = (int *)(param_1 + uVar4 * 4);
      piVar9 = piVar10;
      do {
        iVar7 = *piVar8;
        uVar4 = uVar4 + 1;
        *piVar8 = iVar7 + *piVar9;
        lVar2 = (longlong)(iVar7 - *piVar9) * (longlong)-iVar6;
        uVar12 = (uint)lVar2;
        lVar3 = (longlong)(int)(uVar12 * 0x3802001) * -0x7fe001;
        *piVar9 = (int)((ulonglong)lVar2 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) +
                  (uint)CARRY4((uint)lVar3,uVar12);
        piVar8 = piVar8 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar4 < uVar5);
      uVar4 = uVar1 + uVar5;
      piVar10 = piVar10 + uVar1 * 2;
    } while (uVar4 < 0x100);
    uVar13 = uVar13 - 1;
  } while (uVar13 != 0);
  piVar10 = (int *)(param_1 + -4);
  do {
    piVar10 = piVar10 + 1;
    uVar13 = (uint)((longlong)*piVar10 * 0xa3fa);
    lVar2 = (longlong)(int)(uVar13 * 0x3802001) * -0x7fe001;
    *piVar10 = (int)((ulonglong)((longlong)*piVar10 * 0xa3fa) >> 0x20) +
               (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar13);
  } while ((int *)(param_1 + 0x3fc) != piVar10);
  return 0;
}


// FUN_01b25490 @ 01b25490 size=212 calls_out=0 calls_in=11
// strings: 

undefined8 FUN_01b25490(int param_1)

{
  uint uVar1;
  longlong lVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  int *piVar9;
  int *piVar10;
  uint uVar11;
  uint uVar12;
  
  uVar12 = 1;
  do {
    uVar1 = 0x100 >> (uVar12 & 0xff);
    piVar9 = (int *)(param_1 + uVar1 * 4);
    uVar4 = 0;
    piVar7 = (int *)(&DAT_0053ac80 + (4 << (uVar12 - 1 & 0xff)));
    do {
      iVar5 = *piVar7;
      uVar11 = uVar1 + uVar4;
      piVar8 = (int *)(param_1 + uVar4 * 4);
      piVar10 = piVar9;
      do {
        uVar4 = uVar4 + 1;
        uVar3 = (uint)((longlong)*piVar10 * (longlong)iVar5);
        lVar2 = (longlong)(int)(uVar3 * 0x3802001) * -0x7fe001;
        iVar6 = (int)((ulonglong)((longlong)*piVar10 * (longlong)iVar5) >> 0x20) +
                (int)((ulonglong)lVar2 >> 0x20) + (uint)CARRY4((uint)lVar2,uVar3);
        *piVar10 = *piVar8 - iVar6;
        *piVar8 = *piVar8 + iVar6;
        piVar8 = piVar8 + 1;
        piVar10 = piVar10 + 1;
      } while (uVar4 < uVar11);
      uVar4 = uVar1 + uVar11;
      piVar9 = piVar9 + uVar1 * 2;
      piVar7 = piVar7 + 1;
    } while (uVar4 < 0x100);
    uVar12 = uVar12 + 1;
  } while (uVar12 != 9);
  return 0;
}


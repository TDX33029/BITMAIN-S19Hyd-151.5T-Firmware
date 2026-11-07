// FUN_01b1d9b4 @ 01b1d9b4 size=168 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_01b1d9b4(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  longlong lVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  
  iVar7 = 0;
  do {
    iVar6 = 0;
    puVar5 = (undefined4 *)(param_1 + iVar7 * 0x400);
    do {
      lVar3 = 0;
      iVar4 = 0;
      do {
        iVar1 = iVar4 * 0x400;
        iVar2 = iVar4 * 0x400;
        iVar4 = iVar4 + 1;
        lVar3 = (longlong)*(int *)(param_3 + iVar6 + iVar2) *
                (longlong)*(int *)(iVar7 * 0x1c00 + param_2 + iVar6 + iVar1) + lVar3;
      } while (iVar4 != 7);
      iVar6 = iVar6 + 4;
      *puVar5 = (int)((ulonglong)((longlong)((int)lVar3 * 0x3802001) * -0x7fe001 + lVar3) >> 0x20);
      puVar5 = puVar5 + 1;
    } while (iVar6 != 0x400);
    iVar7 = iVar7 + 1;
  } while (iVar7 != 8);
  return 0;
}


// FUN_0003af20 @ 0003af20  size=112  callers=0
// program: bmminer


uint FUN_0003af20(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  
  uVar5 = 0;
  iVar3 = 0;
  do {
    iVar1 = FUN_000201d8(iVar3);
    if ((iVar1 != 0) && (iVar1 = FUN_0002002c(), iVar1 != 0)) {
      piVar6 = (int *)(param_1 + -4 + iVar3 * 0x400);
      iVar4 = 0;
      do {
        piVar6 = piVar6 + 1;
        iVar7 = *piVar6;
        iVar4 = iVar4 + 1;
        iVar2 = FUN_0002006c();
        uVar5 = iVar7 * iVar2 + uVar5;
      } while (iVar1 != iVar4);
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 != 4);
  return uVar5 / 1000;
}


// FUN_00ac4ae0 @ 00ac4ae0 size=208 calls_out=3 calls_in=1
// strings: 

void FUN_00ac4ae0(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int unaff_r6;
  int iVar5;
  int iVar6;
  bool bVar7;
  
  iVar5 = *(int *)(param_1 + 0x14);
  iVar6 = *(int *)(param_1 + 0x10);
  if (iVar5 != 0) {
    iVar3 = 0;
    do {
      iVar5 = iVar5 + -1;
      bVar7 = *(int *)(iVar6 - iVar3) != 0;
      iVar1 = 0;
      if (bVar7) {
        unaff_r6 = iVar6 - iVar3;
        iVar1 = *(int *)(unaff_r6 + 4);
      }
      if (bVar7 && iVar1 != 0) {
        (**(code **)(iVar1 + 0xc))(*(undefined4 *)(unaff_r6 + 8));
      }
      iVar3 = iVar3 + -0xc;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xc) != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  piVar4 = (int *)(param_1 + 0x20);
  FUN_00aa3264(piVar4);
  piVar2 = (int *)*piVar4;
  if (piVar2 != (int *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar2;
      bVar7 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar7);
    *piVar2 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_007824b0(*piVar4);
      return;
    }
  }
  return;
}


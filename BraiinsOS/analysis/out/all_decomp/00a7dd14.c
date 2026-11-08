// FUN_00a7dd14 @ 00a7dd14 size=312 calls_out=3 calls_in=2
// strings: 

void FUN_00a7dd14(int *param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int *piVar11;
  
  if (*param_1 != 0) {
    iVar5 = param_1[1];
    iVar2 = param_1[3];
    for (iVar9 = 0; iVar9 != ((uint)(iVar2 - iVar5) >> 2) * -0x55555555; iVar9 = iVar9 + 1) {
      piVar11 = (int *)(iVar5 + iVar9 * 0xc);
      iVar7 = piVar11[2];
      if (iVar7 != 0) {
        iVar8 = piVar11[1];
        iVar6 = 0;
        do {
          iVar10 = iVar6 + 1;
          puVar3 = (undefined4 *)(iVar8 + iVar6 * 0x18);
          piVar4 = (int *)*puVar3;
          DataMemoryBarrier(0xb);
          do {
            iVar6 = *piVar4;
            bVar1 = (bool)hasExclusiveAccess(piVar4);
          } while (!bVar1);
          *piVar4 = iVar6 + -1;
          if (iVar6 == 1) {
            DataMemoryBarrier(0xb);
            FUN_015614d8(*puVar3,puVar3[1]);
          }
          iVar6 = iVar10;
        } while (iVar10 != iVar7);
      }
      if (*piVar11 != 0) {
        thunk_FUN_016d3fb4(piVar11[1]);
      }
    }
    if (param_1[2] != 0) {
      thunk_FUN_016d3fb4(*param_1);
    }
  }
  if (param_1[4] != 0) {
    FUN_00a864b0();
  }
  if (param_1[8] == 0) {
    return;
  }
  FUN_00a864b0(param_1 + 8);
  return;
}


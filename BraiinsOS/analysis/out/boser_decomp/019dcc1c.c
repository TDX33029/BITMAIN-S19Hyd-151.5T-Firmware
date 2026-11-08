// FUN_019dcc1c @ 019dcc1c size=120 calls_out=2 calls_in=2
// strings: 

void FUN_019dcc1c(undefined4 *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  
  iVar7 = param_1[1];
  iVar2 = param_1[3];
  if (iVar2 - iVar7 != 0) {
    uVar5 = 0;
    do {
      piVar3 = *(int **)(iVar7 + uVar5 * 4);
      uVar6 = uVar5 + 1;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db52c(*(undefined4 *)(iVar7 + uVar5 * 4));
      }
      uVar5 = uVar6;
    } while (uVar6 != (uint)(iVar2 - iVar7) >> 2);
  }
  FUN_0134c054(param_1[2],*param_1,4,4);
  return;
}


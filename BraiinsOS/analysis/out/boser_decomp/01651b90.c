// FUN_01651b90 @ 01651b90 size=120 calls_out=2 calls_in=1
// strings: 

void FUN_01651b90(undefined4 *param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  
  iVar6 = param_1[1];
  iVar7 = param_1[2];
  if (iVar7 != 0) {
    iVar4 = 0;
    do {
      iVar5 = iVar4 + 1;
      puVar2 = (undefined4 *)(iVar6 + iVar4 * 0xc);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_019db128(*puVar2);
      }
      iVar4 = iVar5;
    } while (iVar5 != iVar7);
    iVar6 = param_1[1];
  }
  FUN_0134c054(*param_1,iVar6,4,0xc);
  return;
}


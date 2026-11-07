// FUN_016382fc @ 016382fc size=108 calls_out=2 calls_in=0
// strings: 

void FUN_016382fc(undefined4 param_1)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int local_1c [2];
  int local_14;
  
  while (FUN_01638144(local_1c,param_1), local_1c[0] != 0) {
    iVar2 = local_1c[0] + local_14 * 8;
    puVar3 = (undefined4 *)(iVar2 + 0xb0);
    piVar4 = (int *)*puVar3;
    DataMemoryBarrier(0xb);
    do {
      iVar5 = *piVar4;
      bVar1 = (bool)hasExclusiveAccess(piVar4);
    } while (!bVar1);
    *piVar4 = iVar5 + -1;
    if (iVar5 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0089ddfc(*puVar3,*(undefined4 *)(iVar2 + 0xb4));
    }
  }
  return;
}


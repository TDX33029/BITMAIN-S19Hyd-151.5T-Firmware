// FUN_00c70410 @ 00c70410 size=164 calls_out=3 calls_in=0
// strings: 

void FUN_00c70410(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  FUN_00ce0644(&local_30,*(undefined4 *)(param_1 + 0x2d8),*(undefined4 *)(param_1 + 0x2dc));
  iVar7 = *(int *)(param_1 + 0x2e8);
  if (iVar7 != 0) {
    iVar5 = *(int *)(param_1 + 0x2e4);
    iVar4 = 0;
    do {
      iVar6 = iVar4 + 1;
      puVar2 = (undefined4 *)(iVar5 + iVar4 * 0x50 + 0x40);
      piVar3 = (int *)*puVar2;
      DataMemoryBarrier(0xb);
      do {
        iVar4 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar4 + -1;
      if (iVar4 == 1) {
        DataMemoryBarrier(0xb);
        FUN_008f31e8(*puVar2);
      }
      iVar4 = iVar6;
    } while (iVar6 != iVar7);
  }
  if (*(int *)(param_1 + 0x2e0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0x2e4));
  }
  *(int *)(param_1 + 0x2e0) = local_30;
  *(undefined4 *)(param_1 + 0x2e4) = uStack_2c;
  *(undefined4 *)(param_1 + 0x2e8) = uStack_28;
  return;
}


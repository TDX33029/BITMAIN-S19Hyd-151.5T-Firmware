// FUN_0072c520 @ 0072c520 size=256 calls_out=5 calls_in=2
// strings: 

void FUN_0072c520(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  int iVar5;
  short *psVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  
  FUN_0071bed0();
  FUN_00644904(param_1 + 0x20);
  iVar5 = *(int *)(param_1 + 0xd8);
  if (iVar5 != 0) {
    psVar6 = (short *)(*(int *)(param_1 + 0xd4) + 0x24);
    do {
      iVar2 = 0;
      if (psVar6[-0x12] != 0) {
        iVar2 = *(int *)(psVar6 + -0x10);
      }
      if (psVar6[-0x12] != 0 && iVar2 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar6 + -0xe));
      }
      iVar2 = 0;
      if (*psVar6 != 0) {
        iVar2 = *(int *)(psVar6 + 2);
      }
      if (*psVar6 != 0 && iVar2 != 0) {
        thunk_FUN_016d3fb4(*(undefined4 *)(psVar6 + 4));
      }
      psVar6 = psVar6 + 0x22;
      iVar5 = iVar5 + -1;
    } while (iVar5 != 0);
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    thunk_FUN_016d3fb4(*(undefined4 *)(param_1 + 0xd4));
  }
  uVar7 = *(undefined4 *)(param_1 + 200);
  puVar8 = *(undefined4 **)(param_1 + 0xcc);
  pcVar4 = (code *)*puVar8;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar7);
  }
  if (puVar8[1] != 0) {
    thunk_FUN_016d3fb4(uVar7);
  }
  piVar3 = *(int **)(param_1 + 0x184);
  DataMemoryBarrier(0xb);
  do {
    iVar5 = *piVar3;
    bVar1 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar1);
  *piVar3 = iVar5 + -1;
  if (iVar5 == 1) {
    DataMemoryBarrier(0xb);
    FUN_007910a4(*(undefined4 *)(param_1 + 0x184));
  }
  if (*(short *)(param_1 + 0xdc) == 0x1b) {
    return;
  }
  FUN_00728ed0((short *)(param_1 + 0xdc));
  return;
}


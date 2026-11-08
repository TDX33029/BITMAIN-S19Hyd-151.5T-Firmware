// FUN_007248ec @ 007248ec size=260 calls_out=6 calls_in=1
// strings: 

void FUN_007248ec(int param_1)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  
  piVar2 = *(int **)(param_1 + 0x138);
  DataMemoryBarrier(0xb);
  do {
    iVar3 = *piVar2;
    bVar1 = (bool)hasExclusiveAccess(piVar2);
  } while (!bVar1);
  *piVar2 = iVar3 + -1;
  if (iVar3 == 1) {
    DataMemoryBarrier(0xb);
    FUN_0071ce80();
  }
  FUN_007249b4(param_1 + 0x13c);
  FUN_00724a14(*(undefined4 *)(param_1 + 0x14c),*(undefined4 *)(param_1 + 0x150));
  FUN_0134c054(*(undefined4 *)(param_1 + 0x128),*(undefined4 *)(param_1 + 300),8,0x18);
  FUN_01be6d98(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0xc));
  iVar3 = *(int *)(param_1 + 0x14);
  puVar4 = (undefined4 *)(iVar3 + 4);
  for (iVar5 = *(int *)(param_1 + 0x18); iVar5 != 0; iVar5 = iVar5 + -1) {
    FUN_019bb7e0(puVar4[-1],*puVar4);
    puVar4 = puVar4 + 3;
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 0x10),iVar3,4,0xc,unaff_r4,unaff_r5);
  iVar5 = *(int *)(param_1 + 0x20);
  iVar6 = *(int *)(param_1 + 0x24);
  for (iVar3 = 0; iVar6 != iVar3; iVar3 = iVar3 + 1) {
    puVar4 = (undefined4 *)(iVar5 + iVar3 * 8);
    FUN_01be6d98(*puVar4,puVar4[1]);
  }
  FUN_0134c054(*(undefined4 *)(param_1 + 0x1c),iVar5,4,8);
  return;
}


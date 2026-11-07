// FUN_01177f84 @ 01177f84 size=268 calls_out=7 calls_in=10
// strings: 

void FUN_01177f84(int param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  iVar2 = *(int *)(param_1 + 0x30);
  if (iVar2 != 4 || *(int *)(param_1 + 0x34) != 0) {
    if (iVar2 == 3 && *(int *)(param_1 + 0x34) == 0) {
      uVar5 = *(undefined4 *)(param_1 + 0x38);
      puVar6 = *(undefined4 **)(param_1 + 0x3c);
      pcVar4 = (code *)*puVar6;
      if (pcVar4 != (code *)0x0) {
        (*pcVar4)(uVar5);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_01be4678(uVar5);
      }
    }
    else {
      puVar6 = *(undefined4 **)(param_1 + 0x84);
      FUN_019bb7e0(*puVar6,puVar6[1]);
      FUN_019bb7e0(puVar6[3],puVar6[4]);
      FUN_019bb7e0(puVar6[6],puVar6[7]);
      FUN_019bb7e0(puVar6[9],puVar6[10]);
      FUN_019bb7e0(puVar6[0xc],puVar6[0xd]);
      uVar5 = puVar6[0x11];
      FUN_00deef6c(uVar5,puVar6[0x12]);
      FUN_0132b958(puVar6[0x10],uVar5,4,0x24);
      thunk_FUN_01be4678(puVar6);
      if (*(int *)(param_1 + 0x78) != -0x80000000) {
        FUN_006a41c0();
      }
      FUN_00d383c8((int *)(param_1 + 0x30));
    }
  }
  if (param_1 != -1) {
    piVar3 = (int *)(param_1 + 4);
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      thunk_FUN_01be4678(param_1);
      return;
    }
  }
  return;
}


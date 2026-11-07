// FUN_014913e8 @ 014913e8 size=220 calls_out=3 calls_in=0
// strings: 

void FUN_014913e8(int *param_1)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint *puVar4;
  uint uVar5;
  int local_b0;
  int iStack_ac;
  
  iVar2 = *param_1;
  if (iVar2 != 0) {
    puVar4 = (uint *)(iVar2 + 0xb8);
    do {
      uVar5 = *puVar4;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar5 | 4;
    DataMemoryBarrier(0xb);
    if ((uVar5 & 10) == 8) {
      (**(code **)(*(int *)(iVar2 + 0xa8) + 8))(*(undefined4 *)(iVar2 + 0xac));
    }
    if ((uVar5 & 2) != 0) {
      FUN_016dd1aa(&local_b0,(undefined4 *)(iVar2 + 8),0xa0);
      *(undefined4 *)(iVar2 + 8) = 5;
      *(undefined4 *)(iVar2 + 0xc) = 0;
      if (local_b0 != 5 || iStack_ac != 0) {
        FUN_0146bde8(&local_b0);
      }
    }
    piVar3 = (int *)*param_1;
    if (piVar3 != (int *)0x0) {
      DataMemoryBarrier(0xb);
      do {
        iVar2 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar2 + -1;
      if (iVar2 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0149d868(*param_1);
        return;
      }
    }
  }
  return;
}


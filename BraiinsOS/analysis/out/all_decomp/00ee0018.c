// FUN_00ee0018 @ 00ee0018 size=380 calls_out=8 calls_in=2
// strings: 

void FUN_00ee0018(int param_1,undefined4 param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  
  piVar4 = (int *)(param_1 + 0x98);
  if (*piVar4 == 0) {
    bVar1 = (bool)hasExclusiveAccess(piVar4);
    if (bVar1) {
      *piVar4 = 8;
      DataMemoryBarrier(0xb);
      goto LAB_00ee0048;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_0127e06c(piVar4);
LAB_00ee0048:
  FUN_0128236c(piVar4);
  FUN_0128236c((uint)piVar4 | 1);
  piVar5 = *(int **)(param_1 + 0x9c);
  iVar2 = piVar5[2];
  *(bool *)param_2 = iVar2 != 3;
  if (iVar2 != 3) {
    puVar3 = (undefined4 *)thunk_FUN_016d4a50(0x60);
    if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600874(8,0x60);
    }
    *puVar3 = 1;
    puVar3[1] = 1;
    puVar3[2] = 3;
    DataMemoryBarrier(0xb);
    do {
      iVar2 = *piVar5;
      bVar1 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar1);
    *piVar5 = iVar2 + -1;
    if (iVar2 == 1) {
      DataMemoryBarrier(0xb);
      FUN_00aaca60(*(undefined4 *)(param_1 + 0x9c));
    }
    *(undefined4 **)(param_1 + 0x9c) = puVar3;
  }
  piVar5 = (int *)(param_1 + 0xa0);
  DataMemoryBarrier(0xb);
  do {
    bVar1 = (bool)hasExclusiveAccess(piVar5);
  } while (!bVar1);
  *piVar5 = *piVar5 + 2;
  FUN_01282570(piVar4);
  FUN_01282570((uint)piVar4 | 1);
  if (*piVar4 == 8) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(piVar4);
      if (bVar1) {
        *piVar4 = 0;
        goto LAB_00ee0134;
      }
    } while (*piVar4 == 8);
  }
  ClearExclusiveLocal();
  FUN_0127db4c(piVar4);
LAB_00ee0134:
  FUN_0163b708(param_1 + 8);
  FUN_0163b708(param_1 + 0x18);
  FUN_0163b708(param_1 + 0x28);
  FUN_0163b708(param_1 + 0x38);
  FUN_0163b708(param_1 + 0x48);
  FUN_0163b708(param_1 + 0x58);
  FUN_0163b708(param_1 + 0x68);
  FUN_0163b708(param_1 + 0x78);
  return;
}


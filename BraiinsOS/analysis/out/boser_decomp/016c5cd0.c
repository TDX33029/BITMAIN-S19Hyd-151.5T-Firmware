// FUN_016c5cd0 @ 016c5cd0 size=320 calls_out=4 calls_in=1
// strings: 

void FUN_016c5cd0(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int local_20;
  int iStack_1c;
  undefined *local_18;
  undefined1 *local_14;
  
  local_20 = param_2;
  iStack_1c = param_1;
  if (*(int *)(param_1 + 0x20) == 1) {
    piVar2 = *(int **)(param_1 + 0x28);
    DataMemoryBarrier(0xb);
    do {
      iVar3 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar3 + -1;
    if (iVar3 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0070451c(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c));
    }
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  FUN_016c393c(&local_20);
  uVar4 = *(uint *)(*(int *)(param_2 + 0x278) + 0x148);
  if ((int)uVar4 < 0) {
    local_14 = &LAB_01a6a304;
    local_18 = &DAT_0056e3b4;
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_00595e91,&local_18,&DAT_01d092e0);
  }
  *(undefined4 *)(param_1 + 0x48) = 0;
  if (*(uint *)(param_1 + 0x38) < uVar4) {
    FUN_016c1078(param_1 + 0x30,uVar4 - *(uint *)(param_1 + 0x38));
  }
  else {
    *(uint *)(param_1 + 0x38) = uVar4;
  }
  if (*(uint *)(param_1 + 0x44) < uVar4) {
    FUN_016c1078(param_1 + 0x3c,uVar4 - *(uint *)(param_1 + 0x44));
  }
  else {
    *(uint *)(param_1 + 0x44) = uVar4;
  }
  *(undefined4 *)(param_1 + 100) = 0;
  if (*(uint *)(param_1 + 0x54) < uVar4) {
    FUN_016c1078(param_1 + 0x4c,uVar4 - *(uint *)(param_1 + 0x54));
  }
  else {
    *(uint *)(param_1 + 0x54) = uVar4;
  }
  if (*(uint *)(param_1 + 0x60) < uVar4) {
    FUN_016c1078(param_1 + 0x58,uVar4 - *(uint *)(param_1 + 0x60));
  }
  else {
    *(uint *)(param_1 + 0x60) = uVar4;
  }
  *(undefined4 *)(param_1 + 0xb0) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  return;
}


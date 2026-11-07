// FUN_0118d02c @ 0118d02c size=104 calls_out=2 calls_in=2
// strings: invalid unlocked state

void FUN_0118d02c(int param_1)

{
  bool bVar1;
  undefined4 *puVar2;
  int *piVar3;
  
  puVar2 = (undefined4 *)(param_1 + 0xe8);
  DataMemoryBarrier(0xb);
  do {
    piVar3 = (int *)*puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = 0;
  DataMemoryBarrier(0xb);
  if (piVar3 == (int *)&DAT_00000001) {
    return;
  }
  if (piVar3 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("invalid unlocked state",0x16,&DAT_01c209ac);
  }
  (**(code **)(*piVar3 + 4))(piVar3[1]);
  thunk_FUN_01be4678(piVar3);
  return;
}


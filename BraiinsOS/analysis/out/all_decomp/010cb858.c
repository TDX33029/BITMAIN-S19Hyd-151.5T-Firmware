// FUN_010cb858 @ 010cb858 size=256 calls_out=4 calls_in=0
// strings: A Tokio 1.x context was found; but timers are disabled. Call `enable_time` on the runtime builder to enable timers.

void FUN_010cb858(uint *param_1)

{
  bool bVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if ((*param_1 & 1) != 0) {
    iVar4 = 0x180;
    if (param_1[0xc] != 0) {
      iVar4 = 0xb8;
    }
    if (*(undefined1 **)(param_1[0xd] + iVar4 + 0x90) == &DAT_3b9aca00) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74b8("A Tokio 1.x context was found, but timers are disabled. Call `enable_time` on the runtime builder to enable timers."
                   ,0x73,&DAT_018aceec);
    }
    FUN_0165b454(param_1[0xd] + iVar4 + 0x58,param_1 + 2);
  }
  if (param_1[0xc] == 0) {
    piVar2 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_01659344(param_1[0xd]);
    }
  }
  else {
    piVar2 = (int *)param_1[0xd];
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar2;
      bVar1 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar1);
    *piVar2 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_016586fc(param_1[0xd]);
    }
  }
  uVar3 = 0;
  if (*param_1 != 0 || param_1[1] != 0) {
    uVar3 = param_1[8];
  }
  if ((*param_1 != 0 || param_1[1] != 0) && uVar3 != 0) {
                    /* WARNING: Could not recover jumptable at 0x010cb93c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(uVar3 + 0xc))(param_1[9]);
    return;
  }
  return;
}


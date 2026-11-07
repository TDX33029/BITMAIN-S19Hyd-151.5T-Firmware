// FUN_0007b1a0 @ 0007b1a0  size=180  callers=1
// program: bmminer


void FUN_0007b1a0(int param_1)

{
  bool bVar1;
  char cVar2;
  int local_c;
  
  cVar2 = DAT_00945398;
  if (DAT_00945394 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(0x945398);
    } while (!bVar1);
    DAT_00945398 = '\x01';
    if (cVar2 == '\x01') {
      do {
        sched_yield();
        DataMemoryBarrier(0xb);
      } while (DAT_00945394 == 0);
    }
    else {
      local_c = param_1;
      if (param_1 == 0) {
        local_c = FUN_0007b128();
      }
      DataMemoryBarrier(0xb);
      DAT_00945394 = local_c;
    }
  }
  return;
}


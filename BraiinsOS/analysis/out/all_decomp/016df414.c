// FUN_016df414 @ 016df414 size=198 calls_out=3 calls_in=1
// strings: 

undefined4 FUN_016df414(int *param_1,code *param_2)

{
  bool bVar1;
  int iVar2;
  undefined1 auStack_24 [16];
  
  if (*param_1 == 2) {
    DataMemoryBarrier(0x1b);
    return 0;
  }
  do {
    DataMemoryBarrier(0x1b);
    do {
      ExclusiveAccess(param_1);
      iVar2 = *param_1;
      if (iVar2 != 0) break;
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = 1;
      }
      iVar2 = 0;
    } while (!bVar1);
    DataMemoryBarrier(0x1b);
    switch(iVar2) {
    case 0:
      FUN_016de282(auStack_24,&LAB_016df308_1,param_1);
      (*param_2)();
      FUN_016de28a(auStack_24,0);
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(param_1);
        iVar2 = *param_1;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = 2;
      DataMemoryBarrier(0x1b);
      if (iVar2 != 3) {
        return 0;
      }
      software_interrupt(0);
      if (param_1 == (int *)0xffffffda) {
        software_interrupt(0);
        return 0;
      }
      return 0;
    case 1:
      DataMemoryBarrier(0x1b);
      do {
        ExclusiveAccess(param_1);
        if (*param_1 != 1) goto LAB_016df3cc;
        bVar1 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar1);
      *param_1 = 3;
LAB_016df3cc:
      DataMemoryBarrier(0x1b);
    case 3:
      FUN_016ddfc0(param_1,0,3,1);
      break;
    case 2:
      return 0;
    }
  } while( true );
}


// FUN_01639cac @ 01639cac size=444 calls_out=6 calls_in=6
// strings: 

void FUN_01639cac(int *param_1)

{
  bool bVar1;
  bool bVar2;
  int *piVar3;
  int local_24;
  int *local_20;
  undefined1 *local_1c;
  
  if (*param_1 == 2) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
      if (bVar1) {
        *param_1 = 0;
        DataMemoryBarrier(0xb);
        return;
      }
    } while (*param_1 == 2);
  }
  ClearExclusiveLocal();
  piVar3 = param_1 + 2;
  DataMemoryBarrier(0xb);
  if ((char)*piVar3 == '\0') {
    bVar1 = (bool)hasExclusiveAccess(piVar3);
    if (bVar1) {
      *(char *)piVar3 = '\x01';
      DataMemoryBarrier(0xb);
      goto LAB_01639d10;
    }
  }
  else {
    ClearExclusiveLocal();
  }
  FUN_01280da8(piVar3);
LAB_01639d10:
  FUN_0128236c(piVar3);
  local_24 = *param_1;
  if (local_24 == 0) {
    bVar1 = true;
    DataMemoryBarrier(0xb);
    do {
      bVar2 = (bool)hasExclusiveAccess(param_1);
      if (bVar2) {
        *param_1 = 1;
        goto LAB_01639d4c;
      }
      local_24 = *param_1;
    } while (local_24 == 0);
  }
  bVar1 = false;
  ClearExclusiveLocal();
LAB_01639d4c:
  DataMemoryBarrier(0xb);
  if (!bVar1) {
    if (local_24 != 2) {
      local_20 = &local_24;
      local_1c = &LAB_00fac484;
                    /* WARNING: Subroutine does not return */
      FUN_00faa478(&DAT_0057f434,&local_20,&DAT_018ac58c);
    }
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = 0;
LAB_01639dd0:
    DataMemoryBarrier(0xb);
    FUN_01282570(piVar3);
    if ((char)*piVar3 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(piVar3);
        if (bVar1) {
          *(char *)piVar3 = '\0';
          return;
        }
      } while ((char)*piVar3 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(piVar3);
    return;
  }
  do {
    FUN_0127fd30(param_1 + 1,piVar3);
    if (*param_1 == 2) {
      DataMemoryBarrier(0xb);
      do {
        bVar1 = (bool)hasExclusiveAccess(param_1);
        if (bVar1) {
          *param_1 = 0;
          goto LAB_01639dd0;
        }
      } while (*param_1 == 2);
    }
    ClearExclusiveLocal();
    DataMemoryBarrier(0xb);
  } while( true );
}


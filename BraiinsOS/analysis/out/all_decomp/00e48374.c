// FUN_00e48374 @ 00e48374 size=224 calls_out=3 calls_in=4
// strings: 

void FUN_00e48374(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int *local_18;
  byte local_14;
  
  if (*param_1 != 1) {
    return;
  }
  piVar3 = param_1 + 1;
  do {
    if (*piVar3 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680();
      goto LAB_00e483b0;
    }
    bVar2 = (bool)hasExclusiveAccess(piVar3);
  } while (!bVar2);
  *piVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_00e483b0:
  local_14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[2];
  }
  else {
    local_14 = FUN_015bf3f8();
    local_14 = local_14 ^ 1;
    cVar1 = (char)param_1[2];
  }
  if (cVar1 != '\0') {
    local_18 = piVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_0187a7c0,&DAT_01886a94);
  }
  return;
}


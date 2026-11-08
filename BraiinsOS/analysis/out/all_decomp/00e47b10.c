// FUN_00e47b10 @ 00e47b10 size=224 calls_out=3 calls_in=2
// strings: 

void FUN_00e47b10(uint *param_1)

{
  char cVar1;
  bool bVar2;
  uint *puVar3;
  uint *local_18;
  byte local_14;
  
  if ((*param_1 & 1) == 0) {
    return;
  }
  puVar3 = param_1 + 2;
  do {
    if (*puVar3 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680();
      goto LAB_00e47b4c;
    }
    bVar2 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar2);
  *puVar3 = 1;
  DataMemoryBarrier(0xb);
LAB_00e47b4c:
  local_14 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    cVar1 = (char)param_1[3];
  }
  else {
    local_14 = FUN_015bf3f8();
    local_14 = local_14 ^ 1;
    cVar1 = (char)param_1[3];
  }
  if (cVar1 != '\0') {
    local_18 = puVar3;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_0187a7b0,&DAT_01886a94);
  }
  return;
}


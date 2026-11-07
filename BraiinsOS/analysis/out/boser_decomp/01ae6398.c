// FUN_01ae6398 @ 01ae6398 size=96 calls_out=2 calls_in=3
// strings: 

void FUN_01ae6398(void)

{
  bool bVar1;
  uint *puVar2;
  uint uVar3;
  
  puVar2 = (uint *)thunk_FUN_01be5118(0x18);
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  puVar2[5] = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = 0;
  puVar2[3] = 0;
  do {
    uVar3 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar3 + 1;
  if (uVar3 < 0x80000000) {
    return;
  }
  software_udf(0xfdee,0x1ae63e8);
  return;
}


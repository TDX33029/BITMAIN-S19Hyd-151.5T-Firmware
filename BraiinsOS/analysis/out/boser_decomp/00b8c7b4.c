// FUN_00b8c7b4 @ 00b8c7b4 size=92 calls_out=2 calls_in=27
// strings: 

uint * FUN_00b8c7b4(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  
  if ((char)param_1[1] != '\0') {
    if ((char)param_1[1] == '\x01') {
                    /* WARNING: Subroutine does not return */
      FUN_013079f0();
    }
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c13dac);
  }
  puVar3 = *(uint **)(*param_1 + 0x188);
  do {
    uVar2 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar2 + 1;
  if (uVar2 < 0x80000000) {
    *(bool *)(param_1 + 1) = uVar2 < 0x80000000;
    param_1 = puVar3;
  }
  if ((int)uVar2 < 0) {
    software_udf(0xfdee,0xb8c7f4);
    return param_1;
  }
  return param_1;
}


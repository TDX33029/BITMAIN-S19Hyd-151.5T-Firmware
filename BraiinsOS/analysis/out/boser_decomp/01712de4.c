// FUN_01712de4 @ 01712de4 size=128 calls_out=3 calls_in=1
// strings: 

undefined8 FUN_01712de4(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_c0;
  undefined4 local_bc;
  undefined4 local_10;
  
  local_bc = 0;
  local_10 = 0;
  local_c4 = 1;
  local_c8 = 1;
  local_c0 = 5;
  puVar3 = (uint *)thunk_FUN_01be5118(0xc0);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xc0);
  }
  FUN_01bed4e2(puVar3,&local_c8,0xc0);
  do {
    uVar4 = *puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = uVar4 + 1;
  puVar5 = (uint *)(uVar4 + 1);
  puVar2 = (uint *)uVar4;
  if (uVar4 < 0x80000000) {
    puVar5 = puVar3;
    puVar2 = puVar3;
  }
  if ((int)uVar4 < 0) {
    software_udf(0xfdee,0x1712e54);
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar5,puVar2);
}


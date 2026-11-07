// FUN_017cceac @ 017cceac size=128 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_017cceac(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 local_c8;
  undefined4 local_c4;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined4 local_10;
  
  local_b4 = 0;
  local_10 = 0;
  local_c4 = 1;
  local_c8 = 1;
  local_b8 = 5;
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
    software_udf(0xfdee,0x17ccf1c);
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar5,puVar2);
}


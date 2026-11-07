// FUN_00a574f4 @ 00a574f4 size=128 calls_out=3 calls_in=11
// strings: 

undefined8 FUN_00a574f4(void)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  undefined4 local_310;
  undefined4 local_30c;
  undefined4 local_308;
  undefined4 local_304;
  undefined4 local_18;
  
  local_304 = 0;
  local_18 = 0;
  local_30c = 1;
  local_310 = 1;
  local_308 = 0x1e;
  puVar3 = (uint *)thunk_FUN_01be5118(0x300);
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x300);
  }
  FUN_01bed4e2(puVar3,&local_310,0x300);
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
    software_udf(0xfdee,0xa57564);
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar5,puVar2);
}


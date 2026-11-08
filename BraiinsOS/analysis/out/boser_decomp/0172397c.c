// FUN_0172397c @ 0172397c size=52 calls_out=0 calls_in=1
// strings: 

undefined8 FUN_0172397c(int param_1)

{
  bool bVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  
  puVar2 = (uint *)(param_1 + -8);
  do {
    uVar4 = *puVar2;
    bVar1 = (bool)hasExclusiveAccess(puVar2);
  } while (!bVar1);
  *puVar2 = uVar4 + 1;
  iVar3 = 0;
  if (uVar4 < 0x80000000) {
    puVar2 = (uint *)0x5f5968;
    iVar3 = param_1;
  }
  if ((int)uVar4 < 0) {
    software_udf(0xfdee,0x17239ac);
    return CONCAT44(iVar3,puVar2);
  }
  return CONCAT44(iVar3,puVar2 + 0x5c8e6b);
}


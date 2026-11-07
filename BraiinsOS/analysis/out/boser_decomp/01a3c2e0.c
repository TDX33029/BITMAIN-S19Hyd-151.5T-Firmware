// FUN_01a3c2e0 @ 01a3c2e0 size=196 calls_out=4 calls_in=18
// strings: 

uint * FUN_01a3c2e0(uint *param_1)

{
  bool bVar1;
  uint *puVar2;
  uint *puVar3;
  int local_24;
  int local_20;
  undefined1 local_1c;
  int local_18;
  undefined1 local_14;
  
  FUN_01656cb0(&local_24,param_1 + 6);
  if (local_24 == 1) {
    local_14 = local_1c;
    local_18 = local_20;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533467,0x2b,&local_18,&DAT_01d2bd10,&DAT_01d2bc80);
  }
  if (*(int *)(local_20 + 0x1c) == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_0052cebe,0x2d,&DAT_01d2bc90);
  }
  *(int *)(local_20 + 0x1c) = *(int *)(local_20 + 0x1c) + 1;
  FUN_00a97e8c(local_20,local_1c);
  do {
    puVar3 = (uint *)*param_1;
    bVar1 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar1);
  *param_1 = (int)puVar3 + 1;
  puVar2 = puVar3;
  if (puVar3 < 0x80000000) {
    puVar2 = param_1;
  }
  if ((int)puVar3 < 0) {
    software_udf(0xfdee,0x1a3c350);
    return puVar2;
  }
  return puVar2;
}


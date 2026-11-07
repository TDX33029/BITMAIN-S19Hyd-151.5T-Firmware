// FUN_00f6cd1c @ 00f6cd1c size=128 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_00f6cd1c(undefined4 *param_1)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined1 auStack_5d8 [1472];
  int *local_18;
  undefined1 local_14;
  
  local_18 = (int *)*param_1;
  do {
    iVar3 = *local_18;
    bVar2 = (bool)hasExclusiveAccess(local_18);
  } while (!bVar2);
  *local_18 = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0xf6cd98);
    (*pcVar1)();
  }
  local_14 = 0;
  iVar3 = thunk_FUN_01be5118(0x5c8);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x5c8);
  }
  FUN_01bed4e2(iVar3,auStack_5d8,0x5c8);
  return CONCAT44(&UNK_01c1993c,iVar3);
}


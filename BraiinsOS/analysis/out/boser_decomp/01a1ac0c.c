// FUN_01a1ac0c @ 01a1ac0c size=144 calls_out=3 calls_in=0
// strings: 

undefined8 FUN_01a1ac0c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int *local_60 [5];
  undefined4 local_4c;
  undefined1 local_18;
  
  local_60[0] = (int *)*param_1;
  do {
    iVar3 = *local_60[0];
    bVar2 = (bool)hasExclusiveAccess(local_60[0]);
  } while (!bVar2);
  *local_60[0] = iVar3 + 1;
  if (iVar3 < 0) {
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1a1ac98);
    (*pcVar1)();
  }
  FUN_01bed4e2((uint)local_60 | 4,param_2,0x10);
  local_18 = 0;
  local_4c = param_3;
  iVar3 = thunk_FUN_01be5118(0x4c);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x4c);
  }
  FUN_01bed4e2(iVar3,local_60,0x4c);
  return CONCAT44(&UNK_01d2a610,iVar3);
}


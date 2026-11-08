// FUN_012385dc @ 012385dc size=248 calls_out=3 calls_in=2
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_012385dc(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_280 [72];
  int local_238 [28];
  int local_1c8 [28];
  undefined1 local_158;
  undefined1 auStack_14c [296];
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 4;
  if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb100("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_01c24c1c);
  }
  FUN_01bed4e2(auStack_280,param_2,0x48);
  local_238[0] = iVar1;
  FUN_01bed4e2((uint)local_238 | 4,param_2 + 0x4c,0x6c);
  FUN_01a56a10(local_1c8,local_238);
  FUN_01bed4e2(local_1c8,local_238,0x70);
  local_158 = 0;
  FUN_01a56a10(auStack_14c,local_1c8);
                    /* WARNING: Could not recover jumptable at 0x012386a8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_012386ac + *(int *)(&LAB_012386ac + local_1c8[0] * 4)))();
  return;
}


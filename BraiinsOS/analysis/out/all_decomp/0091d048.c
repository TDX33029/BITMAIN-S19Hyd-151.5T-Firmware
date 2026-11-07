// FUN_0091d048 @ 0091d048 size=200 calls_out=2 calls_in=2
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_0091d048(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_118 [244];
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 4;
  if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_0187eedc);
  }
  FUN_016dd1aa(auStack_118,param_2,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091d0f4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0091d0f8 + *(int *)(&LAB_0091d0f8 + iVar1 * 4)))();
  return;
}


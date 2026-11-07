// FUN_0091dfac @ 0091dfac size=216 calls_out=2 calls_in=5
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_0091dfac(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_178 [328];
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 4;
  if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_0187eedc);
  }
  FUN_016dd1aa(auStack_178,param_2,0x48);
                    /* WARNING: Could not recover jumptable at 0x0091e068. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_0091e06c + *(int *)(&LAB_0091e06c + iVar1 * 4)))
            (*(undefined4 *)(param_2 + 0xa4),*(undefined4 *)(param_2 + 0x5c),
             *(undefined4 *)(param_2 + 0x74),param_2 + 0x7c);
  return;
}


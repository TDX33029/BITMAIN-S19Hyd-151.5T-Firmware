// FUN_00f41a04 @ 00f41a04 size=188 calls_out=2 calls_in=1
// strings: no more values in next_value_seed; internal error in ValueDeserializer

void FUN_00f41a04(undefined4 param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_e8 [196];
  
  iVar1 = *(int *)(param_2 + 0x48);
  *(undefined4 *)(param_2 + 0x48) = 4;
  if (iVar1 == 4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("no more values in next_value_seed, internal error in ValueDeserializer",0x8d,
                 &DAT_0187eedc);
  }
  FUN_016dd1aa(auStack_e8,param_2,0x48);
                    /* WARNING: Could not recover jumptable at 0x00f41aa4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_00f41aa8 + *(int *)(&LAB_00f41aa8 + iVar1 * 4)))
            (param_2 + 0x7c,*(undefined4 *)(param_2 + 0xa8),*(undefined4 *)(param_2 + 0x58),
             *(undefined4 *)(param_2 + 0x60));
  return;
}


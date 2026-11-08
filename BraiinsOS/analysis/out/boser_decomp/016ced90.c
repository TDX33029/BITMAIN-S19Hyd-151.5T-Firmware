// FUN_016ced90 @ 016ced90 size=136 calls_out=3 calls_in=8
// strings: 

void FUN_016ced90(undefined4 param_1,int param_2,uint param_3)

{
  if (*(int *)(param_2 + 0x20) != 0) {
    FUN_01306fc8(&DAT_01d09c28);
                    /* WARNING: Subroutine does not return */
    FUN_012fb100(&DAT_004ce300,0x49,&DAT_01d07c4c);
  }
  *(undefined4 *)(param_2 + 0x20) = 0xffffffff;
  if (*(uint *)(param_2 + 0x3c) <= param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_3,*(uint *)(param_2 + 0x3c),&DAT_01d07c3c);
  }
                    /* WARNING: Could not recover jumptable at 0x016cedd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_016ceddc +
            *(int *)(&LAB_016ceddc + *(int *)(*(int *)(param_2 + 0x38) + param_3 * 0x10) * 4)))(4);
  return;
}


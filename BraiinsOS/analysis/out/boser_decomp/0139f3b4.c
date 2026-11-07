// FUN_0139f3b4 @ 0139f3b4 size=60 calls_out=1 calls_in=7
// strings: 

undefined4 FUN_0139f3b4(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) <= param_2) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(param_2,*(uint *)(param_1 + 8),&DAT_01d2c104);
  }
  return *(undefined4 *)(*(int *)(param_1 + 4) + param_2 * 0xc + 8);
}


// FUN_00667f28 @ 00667f28 size=84 calls_out=1 calls_in=1
// strings: 

void FUN_00667f28(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    return;
  }
  if (((param_2 != 0) && (param_2 < *(uint *)(param_1 + 8))) &&
     (*(char *)(*(int *)(param_1 + 4) + param_2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec(&DAT_00532886,0x30,&DAT_01c04088);
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}


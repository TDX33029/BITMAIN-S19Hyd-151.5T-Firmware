// FUN_0060434c @ 0060434c size=84 calls_out=1 calls_in=1
// strings: 

void FUN_0060434c(int param_1,uint param_2)

{
  if (*(uint *)(param_1 + 8) < param_2) {
    return;
  }
  if (((param_2 != 0) && (param_2 < *(uint *)(param_1 + 8))) &&
     (*(char *)(*(int *)(param_1 + 4) + param_2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00418707,0x30,&DAT_018576c0);
  }
  *(uint *)(param_1 + 8) = param_2;
  return;
}


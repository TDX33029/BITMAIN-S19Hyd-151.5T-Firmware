// FUN_016a8800 @ 016a8800 size=176 calls_out=3 calls_in=0
// strings: invalid match span

void FUN_016a8800(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  uint uVar1;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_3[4];
  if (uVar1 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if ((uVar1 < (uint)param_3[3]) && (*(char *)(param_1 + 4) == *(char *)(param_3[2] + uVar1))) {
LAB_016a8884:
        FUN_016cc64c(param_4,0);
        return;
      }
    }
    else {
      FUN_0167c8ac(&local_1c,(char *)(param_1 + 4),param_3[2],param_3[3],uVar1,param_3[5]);
      if (local_1c != 0) {
        if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
        }
        goto LAB_016a8884;
      }
    }
  }
  return;
}


// FUN_016a84e0 @ 016a84e0 size=216 calls_out=2 calls_in=0
// strings: invalid match span

void FUN_016a84e0(undefined4 *param_1,int param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_4[4];
  if ((uint)param_4[5] < uVar1) {
    uVar2 = 0;
  }
  else {
    if (*param_4 - 1U < 2) {
      uVar2 = 0;
      if ((uVar1 < (uint)param_4[3]) && (*(char *)(param_2 + 4) == *(char *)(param_4[2] + uVar1))) {
        param_1[1] = uVar1;
        param_1[2] = uVar1 + 1;
        uVar2 = 1;
        param_1[3] = 0;
      }
      *param_1 = uVar2;
      return;
    }
    FUN_0167c8ac(&local_1c,(char *)(param_2 + 4),param_4[2],param_4[3],uVar1,param_4[5]);
    uVar2 = 0;
    if (local_1c == 1) {
      if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
      param_1[1] = local_18;
      param_1[2] = local_14;
      param_1[3] = 0;
      uVar2 = 1;
    }
  }
  *param_1 = uVar2;
  return;
}


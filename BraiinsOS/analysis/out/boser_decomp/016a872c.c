// FUN_016a872c @ 016a872c size=204 calls_out=2 calls_in=0
// strings: invalid match span

undefined4 FUN_016a872c(int param_1,undefined4 param_2,int *param_3,int *param_4,uint param_5)

{
  undefined4 uVar1;
  uint uVar2;
  int local_24;
  uint local_20;
  uint local_1c;
  
  uVar2 = param_3[4];
  uVar1 = 0;
  if (uVar2 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if ((uint)param_3[3] <= uVar2) {
        return 0;
      }
      if (*(char *)(param_1 + 4) != *(char *)(param_3[2] + uVar2)) {
        return 0;
      }
      local_1c = uVar2 + 1;
      local_20 = uVar2;
    }
    else {
      FUN_0167c8ac(&local_24,(char *)(param_1 + 4),param_3[2],param_3[3],uVar2,param_3[5]);
      if (local_24 != 1) {
        return 0;
      }
      if (local_1c < local_20) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
    }
    uVar1 = 1;
    if (param_5 != 0) {
      *param_4 = local_20 + 1;
    }
    if (1 < param_5) {
      param_4[1] = local_1c + 1;
    }
  }
  return uVar1;
}


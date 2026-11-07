// FUN_016a70c8 @ 016a70c8 size=176 calls_out=3 calls_in=0
// strings: invalid match span

void FUN_016a70c8(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int *param_4)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar1 = param_4[4];
  uVar3 = param_4[5];
  if (uVar3 < uVar1) {
    uVar2 = 0;
  }
  else {
    if (*param_4 - 1U < 2) {
      FUN_016c7c50(&local_1c,param_2,param_4[2],param_4[3],uVar1,uVar3);
    }
    else {
      FUN_016c7bac(&local_1c,param_2,param_4[2],param_4[3],uVar1,uVar3);
    }
    uVar2 = 0;
    if (local_1c == 1) {
      if (local_14 < local_18) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
      param_1[1] = local_18;
      uVar2 = 1;
      param_1[2] = local_14;
      param_1[3] = 0;
    }
  }
  *param_1 = uVar2;
  return;
}


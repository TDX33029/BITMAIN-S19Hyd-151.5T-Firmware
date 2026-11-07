// FUN_016a6bc0 @ 016a6bc0 size=196 calls_out=4 calls_in=0
// strings: invalid match span

void FUN_016a6bc0(undefined4 param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  if (uVar2 <= uVar3) {
    if (*param_3 - 1U < 2) {
      FUN_016bc70c(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar3);
    }
    else {
      FUN_016bc5b0(&local_1c,param_1,param_3[2],param_3[3],uVar2,uVar3);
    }
    bVar1 = false;
    if ((local_1c == 1) && (bVar1 = true, local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
    if (bVar1) {
      FUN_016cc64c(param_4,0);
      return;
    }
  }
  return;
}


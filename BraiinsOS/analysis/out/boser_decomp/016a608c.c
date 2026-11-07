// FUN_016a608c @ 016a608c size=152 calls_out=3 calls_in=0
// strings: invalid match span

undefined4 FUN_016a608c(int param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar3 = param_3[5];
  uVar1 = 0;
  if (uVar2 <= uVar3) {
    if (*param_3 - 1U < 2) {
      FUN_0167d660(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar2,uVar3);
    }
    else {
      FUN_0167d59c(&local_1c,param_1 + 4,param_3[2],param_3[3],uVar2,uVar3);
    }
    uVar1 = 0;
    if ((local_1c == 1) && (uVar1 = 1, local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
    }
  }
  return uVar1;
}


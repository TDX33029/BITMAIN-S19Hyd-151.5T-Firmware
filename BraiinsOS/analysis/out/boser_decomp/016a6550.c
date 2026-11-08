// FUN_016a6550 @ 016a6550 size=156 calls_out=2 calls_in=0
// strings: invalid match span

undefined1 FUN_016a6550(int param_1,undefined4 param_2,int *param_3)

{
  undefined1 uVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  uVar1 = 0;
  if (uVar2 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if (uVar2 < (uint)param_3[3]) {
        uVar1 = *(undefined1 *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2));
      }
    }
    else {
      FUN_0167cff0(&local_1c,param_1,param_3[2],param_3[3],uVar2,param_3[5]);
      uVar1 = 0;
      if ((local_1c == 1) && (uVar1 = 1, local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
    }
  }
  return uVar1;
}


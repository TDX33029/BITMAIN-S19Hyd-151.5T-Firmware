// FUN_016a66d4 @ 016a66d4 size=196 calls_out=3 calls_in=0
// strings: invalid match span

void FUN_016a66d4(int param_1,undefined4 param_2,int *param_3,undefined4 param_4)

{
  char cVar1;
  uint uVar2;
  int local_1c;
  uint local_18;
  uint local_14;
  
  uVar2 = param_3[4];
  if (uVar2 <= (uint)param_3[5]) {
    if (*param_3 - 1U < 2) {
      if ((uint)param_3[3] <= uVar2) {
        return;
      }
      cVar1 = *(char *)(param_1 + (uint)*(byte *)(param_3[2] + uVar2));
    }
    else {
      FUN_0167cff0(&local_1c,param_1,param_3[2],param_3[3],uVar2,param_3[5]);
      cVar1 = '\0';
      if ((local_1c == 1) && (cVar1 = '\x01', local_14 < local_18)) {
                    /* WARNING: Subroutine does not return */
        FUN_012fb100("invalid match span",0x25,&DAT_01d08164);
      }
    }
    if (cVar1 != '\0') {
      FUN_016cc64c(param_4,0);
      return;
    }
  }
  return;
}


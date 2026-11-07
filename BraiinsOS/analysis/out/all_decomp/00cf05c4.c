// FUN_00cf05c4 @ 00cf05c4 size=128 calls_out=4 calls_in=0
// strings: 

void FUN_00cf05c4(int param_1,undefined4 *param_2,undefined4 *param_3)

{
  undefined4 *puVar1;
  undefined1 uVar2;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 7)) {
  case 0:
    param_2[3] = *param_2;
    param_2[4] = param_2[1];
    puVar1 = param_2 + 5;
    *puVar1 = param_2[2];
    param_2[6] = puVar1;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018776ac);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018776ac);
  case 3:
    puVar1 = (undefined4 *)param_2[6];
  }
  FUN_00c80dec(param_1,puVar1,*param_3);
  uVar2 = 3;
  if (*(char *)(param_1 + 8) != '\x03') {
    uVar2 = 1;
    FUN_00ac9c30(param_2 + 3);
  }
  *(undefined1 *)(param_2 + 7) = uVar2;
  return;
}


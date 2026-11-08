// FUN_0189aa1c @ 0189aa1c size=140 calls_out=2 calls_in=0
// strings: internal error: entered unreachable code

void FUN_0189aa1c(undefined4 *param_1,int *param_2,undefined4 *param_3)

{
  undefined4 local_28;
  undefined1 local_24;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 local_14;
  
  if (*param_2 != 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d21e7c);
  }
  uStack_1c = param_3[1];
  local_24 = 0;
  local_28 = 0;
  local_20 = *param_3;
  uStack_18 = param_3[2];
  local_14 = param_3[3];
  FUN_01bdb320(&local_28,&local_28,5,param_2 + 1,&local_20);
  *(undefined1 *)(param_1 + 1) = local_24;
  *param_1 = local_28;
  return;
}


// FUN_00f1df30 @ 00f1df30 size=252 calls_out=4 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00f1df30(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined1 local_30 [4];
  uint local_2c;
  
  local_34 = 0;
  local_38 = 0;
  local_3c = 0;
  local_40 = 0;
  local_44 = 0;
  local_48 = 0;
  local_4c = 0;
  local_50 = 0;
  FUN_00ec06e4(local_30,param_2,&local_50,0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_30[0]) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x20 < local_2c) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,local_2c,0x20,&DAT_0187d0b8);
  }
  iVar1 = param_3[2];
  if ((uint)(*param_3 - iVar1) < local_2c) {
    FUN_00edff4c(param_3,iVar1,local_2c,1,1);
    iVar1 = param_3[2];
  }
  FUN_016dd1aa(param_3[1] + iVar1,&local_50,local_2c);
  param_3[2] = iVar1 + local_2c;
  *(uint *)(param_1 + 4) = local_2c;
  *param_1 = 4;
  return;
}


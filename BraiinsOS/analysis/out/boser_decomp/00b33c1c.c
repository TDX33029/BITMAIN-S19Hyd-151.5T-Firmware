// FUN_00b33c1c @ 00b33c1c size=232 calls_out=5 calls_in=1
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_00b33c1c(undefined1 *param_1,undefined4 param_2,int *param_3)

{
  int iVar1;
  undefined1 auStack_40 [32];
  undefined1 local_20 [4];
  uint local_1c;
  
  FUN_01bed93e(auStack_40,0,0x20);
  FUN_00ab8114(local_20,param_2,auStack_40,0x20);
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
  switch(local_20[0]) {
  case 5:
                    /* WARNING: Bad instruction - Truncating control flow here */
    halt_baddata();
  }
  if (0x20 < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,local_1c,0x20,&DAT_01c125c0);
  }
  iVar1 = param_3[2];
  if ((uint)(*param_3 - iVar1) < local_1c) {
    FUN_0132b898(param_3,iVar1,local_1c,1,1);
    iVar1 = param_3[2];
  }
  FUN_01bed4e2(param_3[1] + iVar1,auStack_40,local_1c);
  param_3[2] = iVar1 + local_1c;
  *(uint *)(param_1 + 4) = local_1c;
  *param_1 = 4;
  return;
}


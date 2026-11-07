// FUN_00704cc8 @ 00704cc8 size=92 calls_out=2 calls_in=2
// strings: 

void FUN_00704cc8(undefined4 *param_1,undefined1 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_2) {
  case 0:
    iVar1 = FUN_00705380(param_3,param_4,1);
    break;
  default:
    *param_1 = 0xc;
    return;
  case 2:
    iVar1 = FUN_00705400(param_3,param_4,1);
  }
                    /* WARNING: Could not recover jumptable at 0x00704d38. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00704d3c + *(int *)(&DAT_00704d3c + iVar1 * 4)))();
  return;
}


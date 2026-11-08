// FUN_015526e8 @ 015526e8 size=300 calls_out=0 calls_in=0
// strings: 

void FUN_015526e8(undefined4 *param_1,undefined4 param_2,ushort *param_3)

{
  if (*(uint *)(param_3 + 4) < 0x10) {
    *param_1 = &DAT_80000019;
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch((char)param_3[6]) {
  case '\x01':
    break;
  case '\x02':
    break;
  case '\x03':
    break;
  case '\x04':
    break;
  case '\x05':
  }
                    /* WARNING: Could not recover jumptable at 0x0155281c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01552820 + *(int *)(&DAT_01552820 + (uint)*param_3 * 4)))();
  return;
}


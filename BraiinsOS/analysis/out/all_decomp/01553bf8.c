// FUN_01553bf8 @ 01553bf8 size=180 calls_out=0 calls_in=0
// strings: 

void FUN_01553bf8(undefined4 *param_1,undefined4 param_2,ushort *param_3)

{
  if (*(uint *)(param_3 + 4) < 0x18) {
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
                    /* WARNING: Could not recover jumptable at 0x01553cb4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_01553cb8 + *(int *)(&DAT_01553cb8 + (uint)*param_3 * 4)))();
  return;
}


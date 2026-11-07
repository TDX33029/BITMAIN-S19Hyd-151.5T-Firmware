// FUN_018bec1c @ 018bec1c size=164 calls_out=1 calls_in=0
// strings: 

void FUN_018bec1c(undefined4 param_1,int param_2,ushort *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined1 auStack_64 [64];
  
  FUN_018be814(auStack_64,param_2 + 0x220,param_5,param_6);
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
                    /* WARNING: Could not recover jumptable at 0x018becd4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&LAB_018becd8 + *(int *)(&LAB_018becd8 + (uint)*param_3 * 4)))();
  return;
}


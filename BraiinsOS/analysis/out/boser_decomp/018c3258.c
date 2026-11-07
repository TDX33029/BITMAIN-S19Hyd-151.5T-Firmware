// FUN_018c3258 @ 018c3258 size=228 calls_out=1 calls_in=0
// strings: 

void FUN_018c3258(undefined4 *param_1,undefined4 param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  
  if ((uint)param_3[2] < 0x18) {
    uVar2 = param_3[1];
    *(undefined1 *)(param_1 + 1) = 5;
    uVar1 = *param_3;
    *param_1 = 0x80000000;
    FUN_0134bd64(uVar1,uVar2);
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_3 + 4)) {
  case 1:
    break;
  case 2:
    break;
  case 3:
    break;
  case 4:
    break;
  case 5:
  }
                    /* WARNING: Could not recover jumptable at 0x018c3330. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018c3334 + *(int *)(&DAT_018c3334 + (uint)*(ushort *)(param_3 + 3) * 4)))();
  return;
}


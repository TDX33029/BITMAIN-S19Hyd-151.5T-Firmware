// FUN_018be920 @ 018be920 size=220 calls_out=2 calls_in=0
// strings: 

void FUN_018be920(undefined4 *param_1,int param_2,undefined4 *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 auStack_54 [48];
  
  if ((uint)param_3[2] < 0x10) {
    uVar2 = param_3[1];
    *(undefined1 *)(param_1 + 1) = 5;
    uVar1 = *param_3;
    *param_1 = 0x80000000;
    FUN_0134bd64(uVar1,uVar2);
    return;
  }
  FUN_018be814(auStack_54,param_2 + 0x220,param_5,param_6);
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
                    /* WARNING: Could not recover jumptable at 0x018be9ec. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_018be9f0 + *(int *)(&DAT_018be9f0 + (uint)*(ushort *)(param_3 + 3) * 4)))();
  return;
}


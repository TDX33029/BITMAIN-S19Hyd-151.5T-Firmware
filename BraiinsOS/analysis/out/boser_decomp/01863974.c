// FUN_01863974 @ 01863974 size=220 calls_out=3 calls_in=4
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01863974(uint *param_1,int param_2,undefined4 param_3)

{
  uint local_20;
  uint uStack_1c;
  
  if (*(byte *)(param_2 + 0x2e0) < 2) {
    FUN_018f2d24(param_2 + 0x10);
    *(byte *)(param_2 + 0x2e0) = *(byte *)(param_2 + 0x2e0) | 2;
  }
  do {
    if (*(int *)(param_2 + 0x218) == 0) {
      FUN_019dd000(&local_20,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_20 & 0xff) {
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
switchD_01863a44_default:
      *(undefined1 *)param_1 = 5;
      return;
    }
    FUN_01862fdc(&local_20,param_2,param_2 + 0x10,param_3);
    if ((char)local_20 == '\x05') goto switchD_01863a44_default;
    if ((local_20 & 0xff) != 4) goto LAB_018639fc;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_018639fc:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}


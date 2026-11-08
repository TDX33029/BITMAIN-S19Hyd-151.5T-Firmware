// FUN_01863aa4 @ 01863aa4 size=220 calls_out=3 calls_in=5
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01863aa4(uint *param_1,int param_2,undefined4 param_3)

{
  uint local_20;
  uint uStack_1c;
  
  if (*(byte *)(param_2 + 0x2e0) < 2) {
    FUN_018f2d24(param_2 + 0x10);
    *(byte *)(param_2 + 0x2e0) = *(byte *)(param_2 + 0x2e0) | 2;
  }
  do {
    if (*(int *)(param_2 + 0x218) == 0) {
      FUN_019dfbc4(&local_20,*(undefined4 *)(param_2 + 0xc));
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_20 & 0xff) {
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
switchD_01863b74_default:
      *(undefined1 *)param_1 = 5;
      return;
    }
    FUN_018634f8(&local_20,param_2,param_2 + 0x10,param_3);
    if ((char)local_20 == '\x05') goto switchD_01863b74_default;
    if ((local_20 & 0xff) != 4) goto LAB_01863b2c;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_01863b2c:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}


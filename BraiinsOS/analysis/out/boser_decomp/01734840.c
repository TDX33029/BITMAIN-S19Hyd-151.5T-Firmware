// FUN_01734840 @ 01734840 size=252 calls_out=4 calls_in=0
// strings: 

/* WARNING: Control flow encountered bad instruction data */
/* WARNING: Exceeded maximum restarts with more pending */

void FUN_01734840(uint *param_1,int param_2,undefined4 param_3)

{
  int *piVar1;
  uint local_20;
  uint uStack_1c;
  
  if (*(byte *)(param_2 + 0x5b8) < 2) {
    FUN_018f2d24(param_2);
    *(byte *)(param_2 + 0x5b8) = *(byte *)(param_2 + 0x5b8) | 2;
  }
  piVar1 = (int *)(param_2 + 0x2d0);
  do {
    if (*(int *)(param_2 + 0x208) == 0) {
      if (*piVar1 == 2) {
        FUN_019dfbc4(&local_20,*(undefined4 *)(param_2 + 0x2e0));
      }
      else {
        FUN_0175b368(&local_20,piVar1,param_3);
      }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
      switch(local_20 & 0xff) {
      case 6:
                    /* WARNING: Bad instruction - Truncating control flow here */
        halt_baddata();
      }
switchD_01734930_default:
      *(undefined1 *)param_1 = 5;
      return;
    }
    FUN_016f6e78(&local_20,piVar1,param_2,param_3);
    if ((char)local_20 == '\x05') goto switchD_01734930_default;
    if ((local_20 & 0xff) != 4) goto LAB_017348c8;
  } while (uStack_1c != 0);
  uStack_1c = 0;
  local_20 = 0x1701;
LAB_017348c8:
  *param_1 = local_20;
  param_1[1] = uStack_1c;
  return;
}


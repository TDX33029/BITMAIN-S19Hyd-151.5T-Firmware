// FUN_00bcc348 @ 00bcc348 size=92 calls_out=1 calls_in=0
// strings: 

void FUN_00bcc348(uint *param_1)

{
  if ((*param_1 & 3) != 2) {
    if (*param_1 == 3) {
                    /* WARNING: Could not recover jumptable at 0x00bcc378. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)**(undefined4 **)param_1[2])();
      return;
    }
    FUN_00ad1570(param_1);
  }
  if ((undefined4 *)param_1[0x24] == (undefined4 *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x00bcc39c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)**(undefined4 **)param_1[0x24])();
  return;
}


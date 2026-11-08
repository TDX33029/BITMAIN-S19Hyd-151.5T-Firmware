// FUN_0134c2dc @ 0134c2dc size=164 calls_out=2 calls_in=4
// strings: 

/* WARNING: Removing unreachable block (ram,0x0134c364) */

void FUN_0134c2dc(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x1000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x1000);
  }
  param_1[0xc] = 0x1000;
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 4;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0x1000;
  param_1[10] = 0x1000;
  param_1[9] = 0;
  param_1[8] = iVar1;
  param_1[0xb] = 0xd;
  return;
}


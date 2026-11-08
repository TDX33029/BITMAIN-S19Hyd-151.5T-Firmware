// FUN_01609034 @ 01609034 size=52 calls_out=2 calls_in=1
// strings: 

void FUN_01609034(undefined4 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_01be3f8c(0x10000,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(2,0x10000);
  }
  param_1[1] = iVar1;
  param_1[2] = 0x8000;
  *param_1 = 0x8000;
  return;
}


// FUN_00a98078 @ 00a98078 size=236 calls_out=3 calls_in=13
// strings: Not readyevent open/boser/boser/src/metrics_scraper/buffers.rs:123 | Unavailable

void FUN_00a98078(undefined4 *param_1,char param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_2 == '\0') {
    uVar3 = 9;
    iVar1 = thunk_FUN_01be5118(9);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(iVar1,"Not readyevent open/boser/boser/src/metrics_scraper/buffers.rs:123",9);
    uVar2 = 1;
  }
  else if (param_2 == '\x01') {
    uVar3 = 0xc;
    iVar1 = thunk_FUN_01be5118(0xc);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xc);
    }
    FUN_01bed4e2(iVar1,&DAT_00509188,0xc);
    uVar2 = 2;
  }
  else {
    uVar3 = 0xb;
    iVar1 = thunk_FUN_01be5118(0xb);
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,0xb);
    }
    FUN_01bed4e2(iVar1,"Unavailable",0xb);
    uVar2 = 3;
  }
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  *(undefined1 *)(param_1 + 5) = 3;
  *param_1 = 1;
  param_1[3] = iVar1;
  param_1[4] = uVar3;
  return;
}


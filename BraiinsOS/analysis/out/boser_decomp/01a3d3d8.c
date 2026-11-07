// FUN_01a3d3d8 @ 01a3d3d8 size=64 calls_out=2 calls_in=9
// strings: 

void FUN_01a3d3d8(int *param_1)

{
  int iVar1;
  
  iVar1 = thunk_FUN_01be5118(0x2000);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x2000);
  }
  *(undefined1 *)((int)param_1 + 0x12) = 0;
  *param_1 = iVar1;
  param_1[1] = 0;
  param_1[2] = 0x2000;
  param_1[3] = 0x11;
  *(undefined2 *)(param_1 + 4) = 0;
  return;
}


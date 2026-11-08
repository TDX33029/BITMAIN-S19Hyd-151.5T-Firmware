// FUN_0095e4ec @ 0095e4ec size=136 calls_out=3 calls_in=2
// strings: 

void FUN_0095e4ec(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  
  iVar1 = FUN_01298504(param_3,1);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,param_3);
  }
  FUN_01bed4e2(iVar1,param_2,param_3);
  *(undefined2 *)(param_1 + 0x73) = 0x701;
  param_1[0x6f] = 0x80000000;
  *param_1 = 8;
  param_1[0x6c] = param_3;
  param_1[0x72] = 0x2020200;
  param_1[100] = 0;
  param_1[0x6d] = iVar1;
  param_1[0x6e] = param_3;
  *(undefined1 *)(param_1 + 0x5e) = 6;
  return;
}


// FUN_012ba3e8 @ 012ba3e8 size=152 calls_out=4 calls_in=2
// strings: 

void FUN_012ba3e8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_01298504(8,4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(4,8);
  }
  *puVar1 = param_3;
  puVar1[1] = param_4;
  FUN_0134aee0(*(undefined4 *)(param_2 + 0xb4),*(undefined4 *)(param_2 + 0xb8),4,8);
  *(undefined4 *)(param_2 + 0xb4) = 1;
  *(undefined4 **)(param_2 + 0xb8) = puVar1;
  *(undefined4 *)(param_2 + 0xbc) = 1;
  FUN_01bed4e2(param_1,param_2,0x134);
  return;
}


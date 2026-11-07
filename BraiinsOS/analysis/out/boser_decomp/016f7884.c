// FUN_016f7884 @ 016f7884 size=96 calls_out=3 calls_in=0
// strings: 

void FUN_016f7884(int *param_1)

{
  undefined4 *puVar1;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  if (*param_1 == -0x80000000) {
    uStack_1c = 0x80000000;
  }
  else {
    FUN_015e8ad4(&uStack_1c,param_1[1],param_1[2]);
    unaff_r5 = uStack_18;
    unaff_r6 = uStack_14;
  }
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *puVar1 = uStack_1c;
  puVar1[1] = unaff_r5;
  puVar1[2] = unaff_r6;
  return;
}


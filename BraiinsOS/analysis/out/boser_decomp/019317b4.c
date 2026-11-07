// FUN_019317b4 @ 019317b4 size=96 calls_out=4 calls_in=0
// strings: 

undefined8 FUN_019317b4(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined1 auStack_a8 [160];
  
  FUN_0188fc54(auStack_a8,*(undefined4 *)*param_1,param_2,param_3);
  iVar1 = thunk_FUN_01be5118(0xa0);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0xa0);
  }
  FUN_01bed4e2(iVar1,auStack_a8,0xa0);
  return CONCAT44(&UNK_01d25704,iVar1);
}


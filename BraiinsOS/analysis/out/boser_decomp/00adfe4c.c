// FUN_00adfe4c @ 00adfe4c size=144 calls_out=3 calls_in=9
// strings: 

void FUN_00adfe4c(undefined4 param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *unaff_r7;
  
  if (param_3 == (undefined4 *)0x0) {
    uVar2 = 0x80000000;
  }
  else {
    uVar2 = 7;
    unaff_r7 = (undefined4 *)thunk_FUN_01be5118(7);
    if (unaff_r7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,7);
    }
    uVar1 = *param_3;
    *(undefined4 *)((int)unaff_r7 + 3) = *(undefined4 *)((int)param_3 + 3);
    *unaff_r7 = uVar1;
  }
  if (*(int *)(param_2 + 0x20) != -0x80000000) {
    FUN_019bb7e0(*(int *)(param_2 + 0x20),*(undefined4 *)(param_2 + 0x24));
  }
  *(undefined4 *)(param_2 + 0x20) = uVar2;
  *(undefined4 *)(param_2 + 0x28) = 7;
  *(undefined4 **)(param_2 + 0x24) = unaff_r7;
  FUN_01bed4e2(param_1,param_2,0x48);
  return;
}


// FUN_01266f10 @ 01266f10 size=196 calls_out=3 calls_in=2
// strings: Hashboard

void FUN_01266f10(undefined4 *param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  if (param_2 == 0) {
    uVar2 = 9;
    puVar1 = (undefined4 *)thunk_FUN_01be5118(9);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,9);
    }
    FUN_01bed4e2(puVar1,"Hashboard",9);
  }
  else if (param_2 == 1) {
    uVar2 = 3;
    puVar1 = (undefined4 *)thunk_FUN_01be5118(3);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,3);
    }
    *(undefined1 *)((int)puVar1 + 2) = 0x6e;
    *(undefined2 *)puVar1 = 0x6146;
  }
  else {
    uVar2 = 4;
    puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar1 = 0x70696843;
  }
  *param_1 = uVar2;
  param_1[1] = puVar1;
  param_1[2] = uVar2;
  return;
}


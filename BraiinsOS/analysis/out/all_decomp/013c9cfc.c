// FUN_013c9cfc @ 013c9cfc size=124 calls_out=2 calls_in=0
// strings: 

undefined4 FUN_013c9cfc(int param_1,int param_2)

{
  undefined1 *puVar1;
  
  if (param_2 == 0) {
    if (*(int *)(param_1 + 0x150) != 0) {
      return 0;
    }
    puVar1 = (undefined1 *)thunk_FUN_016d4a50(2);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 1;
      return 1;
    }
  }
  else {
    if (*(int *)(param_1 + 0x154) != 0) {
      return 0;
    }
    puVar1 = (undefined1 *)thunk_FUN_016d4a50(2);
    if (puVar1 != (undefined1 *)0x0) {
      *puVar1 = 0;
      return 1;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00600874(1,2);
}


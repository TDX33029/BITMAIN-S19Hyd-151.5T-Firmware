// FUN_00f48428 @ 00f48428 size=56 calls_out=2 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

void FUN_00f48428(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                 ,0x2c,&DAT_0188716c);
  }
  FUN_00f48560();
  return;
}


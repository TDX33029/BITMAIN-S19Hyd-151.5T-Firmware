// FUN_0127786c @ 0127786c size=56 calls_out=2 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_0127786c(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cf9c14);
  }
  FUN_012779f0();
  return;
}


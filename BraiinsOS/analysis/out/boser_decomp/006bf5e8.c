// FUN_006bf5e8 @ 006bf5e8 size=136 calls_out=2 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_006bf5e8(int *param_1,int *param_2)

{
  int iVar1;
  int local_20;
  int iStack_1c;
  int iStack_18;
  
  iVar1 = *param_2;
  *param_2 = -0x7fffffff;
  if (iVar1 == -0x7fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01c18664);
  }
  if (iVar1 == -0x80000000) {
    FUN_012c1060(&local_20);
    if (local_20 == -0x80000000) {
      *param_1 = -0x7fffffff;
      param_1[1] = iStack_1c;
      param_1[2] = iStack_18;
      return;
    }
  }
  else {
    local_20 = iVar1;
    iStack_1c = param_2[1];
    iStack_18 = param_2[2];
  }
  *param_1 = local_20;
  param_1[1] = iStack_1c;
  param_1[2] = iStack_18;
  return;
}


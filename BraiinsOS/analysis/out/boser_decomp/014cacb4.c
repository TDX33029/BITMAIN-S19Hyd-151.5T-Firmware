// FUN_014cacb4 @ 014cacb4 size=88 calls_out=2 calls_in=5
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_014cacb4(int *param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_18 [4];
  
  local_18[0] = *param_1;
  *param_1 = -0x7fffffeb;
  if (local_18[0] == -0x7fffffeb) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cfa02c);
  }
  piVar2 = (int *)((uint)local_18 | 4);
  iVar1 = param_1[2];
  iVar3 = param_1[3];
  *piVar2 = param_1[1];
  piVar2[1] = iVar1;
  piVar2[2] = iVar3;
  FUN_014f3ffc();
  return;
}


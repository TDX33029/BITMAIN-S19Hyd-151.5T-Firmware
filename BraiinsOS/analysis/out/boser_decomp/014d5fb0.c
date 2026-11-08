// FUN_014d5fb0 @ 014d5fb0 size=88 calls_out=2 calls_in=5
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_014d5fb0(undefined4 param_1,int *param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int local_20 [4];
  
  local_20[0] = *param_2;
  *param_2 = -0x7fffffeb;
  if (local_20[0] == -0x7fffffeb) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cfa02c);
  }
  piVar1 = (int *)((uint)local_20 | 4);
  iVar2 = param_2[2];
  iVar3 = param_2[3];
  *piVar1 = param_2[1];
  piVar1[1] = iVar2;
  piVar1[2] = iVar3;
  FUN_014ef3ac();
  return;
}


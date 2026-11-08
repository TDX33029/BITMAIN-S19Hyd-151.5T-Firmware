// FUN_014c9300 @ 014c9300 size=176 calls_out=3 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_014c9300(undefined4 *param_1,int param_2)

{
  uint uVar1;
  uint *puVar2;
  int local_50;
  undefined4 local_4c;
  
  puVar2 = *(uint **)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (puVar2 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cf9c14);
  }
  uVar1 = 0x15;
  if ((int)*puVar2 < 0) {
    uVar1 = *puVar2 ^ 0x80000000;
  }
  if (uVar1 == 0x10) {
LAB_014c934c:
    *param_1 = 2;
  }
  else {
    if (uVar1 == 0x11) {
      puVar2 = (uint *)puVar2[1];
    }
    else if (uVar1 == 0x12) goto LAB_014c934c;
    FUN_014de810(&local_50,puVar2);
    if (local_50 == 2) {
      *param_1 = 3;
      param_1[1] = local_4c;
    }
    else {
      FUN_01bed4e2(param_1,&local_50,0x48);
    }
  }
  return;
}


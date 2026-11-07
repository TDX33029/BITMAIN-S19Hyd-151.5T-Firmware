// FUN_01116078 @ 01116078 size=228 calls_out=4 calls_in=0
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements

void FUN_01116078(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 local_28 [4];
  uint local_24;
  uint local_20;
  undefined1 uStack_11;
  
  puVar3 = *(uint **)(param_2 + 8);
  *(undefined4 *)(param_2 + 8) = 0;
  if (puVar3 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Response with 3 elements"
                 ,0x2c,&DAT_0188716c);
  }
  uVar2 = 0x15;
  if ((int)*puVar3 < 0) {
    uVar2 = *puVar3 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar2 = puVar3[2];
    uVar4 = puVar3[3];
    goto LAB_01116124;
  case 0xd:
    uVar2 = puVar3[1];
    uVar4 = puVar3[2];
LAB_01116124:
    FUN_0112691c(param_1,uVar2,uVar4);
    return;
  case 0xe:
    local_24 = puVar3[2];
    local_20 = puVar3[3];
    break;
  case 0xf:
    local_24 = puVar3[1];
    local_20 = puVar3[2];
    break;
  default:
    uVar1 = FUN_011173bc(puVar3,&uStack_11,&DAT_018874e8);
    goto LAB_0111610c;
  }
  local_28[0] = 6;
  uVar1 = FUN_0157cc00(local_28,&uStack_11,&DAT_018874e8);
LAB_0111610c:
  *param_1 = 0;
  param_1[1] = uVar1;
  return;
}


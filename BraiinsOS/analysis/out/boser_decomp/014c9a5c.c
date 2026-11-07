// FUN_014c9a5c @ 014c9a5c size=268 calls_out=6 calls_in=4
// strings: MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements

void FUN_014c9a5c(undefined1 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint local_28;
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined1 uStack_11;
  
  local_28 = *param_2;
  *param_2 = 0x80000015;
  if (local_28 == 0x80000015) {
                    /* WARNING: Subroutine does not return */
    FUN_0130739c("MapAccess::next_value called before next_keymap with a single keystring or mapstruct Assets with 4 elementsstruct Assets with 1 elementstruct Assets with 16 elementsstruct Assets with 19 elements"
                 ,0x2c,&DAT_01cfa02c);
  }
  puVar3 = (uint *)((uint)&local_28 | 4);
  uVar4 = param_2[2];
  uVar5 = param_2[3];
  uVar2 = 0x15;
  if ((int)local_28 < 0) {
    uVar2 = local_28 ^ 0x80000000;
  }
  *puVar3 = param_2[1];
  puVar3[1] = uVar4;
  puVar3[2] = uVar5;
  switch(uVar2) {
  case 0xc:
    FUN_0127df38(param_1,local_20,local_1c);
    break;
  case 0xd:
    FUN_0127df38(param_1,local_24,local_20);
    goto LAB_014c9b2c;
  case 0xe:
    FUN_014f0a00(param_1,local_20,local_1c);
    break;
  case 0xf:
    FUN_014f0a00(param_1,local_24,local_20);
LAB_014c9b2c:
    FUN_014c81b0(&local_28);
    return;
  default:
    uVar1 = FUN_014c8278(&local_28,&uStack_11,&DAT_01cf9ce4);
    *(undefined4 *)(param_1 + 4) = uVar1;
    *param_1 = 1;
    return;
  }
  FUN_019bb7e0(local_24,local_20);
  return;
}


// FUN_014de810 @ 014de810 size=184 calls_out=3 calls_in=3
// strings: 

void FUN_014de810(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_20 [4];
  uint local_1c;
  uint local_18;
  undefined1 uStack_9;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    goto LAB_014de8a4;
  case 0xd:
    uVar2 = param_2[1];
    uVar3 = param_2[2];
LAB_014de8a4:
    FUN_014de15c(param_1,uVar2,uVar3);
    return;
  case 0xe:
    local_1c = param_2[2];
    local_18 = param_2[3];
    break;
  case 0xf:
    local_1c = param_2[1];
    local_18 = param_2[2];
    break;
  default:
    uVar1 = FUN_014c82dc(param_2,&uStack_9,&DAT_01cfa0ac);
    goto LAB_014de88c;
  }
  local_20[0] = 6;
  uVar1 = FUN_01967538(local_20,&uStack_9,&DAT_01cfa0ac);
LAB_014de88c:
  *param_1 = 2;
  param_1[1] = uVar1;
  return;
}


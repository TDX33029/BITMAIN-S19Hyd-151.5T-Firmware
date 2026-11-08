// FUN_01243ebc @ 01243ebc size=120 calls_out=3 calls_in=2
// strings: 

void FUN_01243ebc(undefined4 param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 uStack_9;
  
  uVar1 = 0x15;
  if ((int)*param_2 < 0) {
    uVar1 = *param_2 ^ 0x80000000;
  }
  switch(uVar1) {
  case 0xc:
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    break;
  case 0xd:
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    break;
  case 0xe:
    uVar1 = param_2[2];
    uVar2 = param_2[3];
    goto LAB_01243f08;
  case 0xf:
    uVar1 = param_2[1];
    uVar2 = param_2[2];
LAB_01243f08:
    FUN_01243dec(param_1,uVar1,uVar2);
    return;
  default:
    FUN_01222458(param_1,param_2,&uStack_9,&DAT_01cf9914);
    return;
  }
  FUN_01a410d4(param_1,uVar1,uVar2);
  return;
}


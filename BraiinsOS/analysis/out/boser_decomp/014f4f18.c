// FUN_014f4f18 @ 014f4f18 size=240 calls_out=6 calls_in=1
// strings: 

void FUN_014f4f18(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 local_30 [4];
  uint uStack_2c;
  uint uStack_28;
  undefined1 uStack_19;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar3 = param_2[1];
    uVar2 = param_2[2];
    FUN_014eb47c(param_1,uVar2,param_2[3]);
    FUN_019bb7e0(uVar3,uVar2);
    return;
  case 0xd:
    FUN_014eb47c(param_1,param_2[1],param_2[2]);
    break;
  case 0xe:
    FUN_014e7094(param_1,param_2 + 1);
    return;
  case 0xf:
    uStack_2c = param_2[1];
    uStack_28 = param_2[2];
    local_30[0] = 6;
    uVar1 = FUN_01967538(local_30,&uStack_19,&DAT_01cfa1e4);
    *param_1 = 0;
    param_1[1] = uVar1;
    break;
  default:
    uVar1 = FUN_014c8278(param_2,&uStack_19,&DAT_01cfa1e4);
    *param_1 = 0;
    param_1[1] = uVar1;
    return;
  }
  FUN_014c81b0(param_2);
  return;
}


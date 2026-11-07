// FUN_014f3ffc @ 014f3ffc size=236 calls_out=6 calls_in=2
// strings: 

undefined8 FUN_014f3ffc(uint *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined8 uVar4;
  undefined1 local_30 [4];
  uint uStack_2c;
  uint uStack_28;
  undefined1 uStack_19;
  
  uVar2 = 0x15;
  if ((int)*param_1 < 0) {
    uVar2 = *param_1 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar3 = param_1[1];
    uVar2 = param_1[2];
    uVar4 = FUN_014f8c34(uVar2,param_1[3]);
    FUN_019bb7e0(uVar3,uVar2);
    break;
  case 0xd:
    uVar4 = FUN_014f8c34(param_1[1],param_1[2]);
    goto LAB_014f40c0;
  case 0xe:
    uVar4 = FUN_014f555c(param_1 + 1);
    break;
  case 0xf:
    uStack_2c = param_1[1];
    uStack_28 = param_1[2];
    local_30[0] = 6;
    uVar1 = FUN_01967538(local_30,&uStack_19,&DAT_01cfa4fc);
    uVar4 = CONCAT44(uVar1,1);
LAB_014f40c0:
    FUN_014c81b0(param_1);
    break;
  default:
    uVar1 = FUN_014c8278(param_1,&uStack_19,&DAT_01cfa4fc);
    uVar4 = CONCAT44(uVar1,1);
  }
  return uVar4;
}


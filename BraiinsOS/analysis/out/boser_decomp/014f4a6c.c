// FUN_014f4a6c @ 014f4a6c size=168 calls_out=3 calls_in=5
// strings: 

void FUN_014f4a6c(undefined4 *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  undefined1 uStack_9;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    break;
  case 0xd:
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    break;
  case 0xe:
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    goto LAB_014f4ac4;
  case 0xf:
    uVar2 = param_2[1];
    uVar3 = param_2[2];
LAB_014f4ac4:
    FUN_014f5308(param_1,uVar2,uVar3);
    return;
  default:
    uVar1 = FUN_014c82dc(param_2,&uStack_9,&DAT_01cfa4bc);
    *param_1 = 0x80000000;
    param_1[1] = uVar1;
    return;
  }
  FUN_012c1060(param_1,uVar2,uVar3);
  return;
}


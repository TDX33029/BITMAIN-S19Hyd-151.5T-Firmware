// FUN_014caa68 @ 014caa68 size=328 calls_out=7 calls_in=6
// strings: 

void FUN_014caa68(uint *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_28;
  uint local_24;
  uint local_20;
  undefined1 uStack_11;
  
  uVar2 = 0x15;
  if ((int)*param_2 < 0) {
    uVar2 = *param_2 ^ 0x80000000;
  }
  switch(uVar2) {
  case 0xc:
    uVar2 = param_2[2];
    uVar4 = param_2[3];
    *param_1 = param_2[1];
    param_1[1] = uVar2;
    param_1[2] = uVar4;
    break;
  case 0xd:
    FUN_012c1060(param_1,param_2[1],param_2[2]);
    goto LAB_014cab38;
  case 0xe:
    uVar2 = param_2[1];
    uVar3 = param_2[2];
    uVar4 = param_2[3];
    FUN_012fbd94(&local_28,uVar3,uVar4);
    if (local_28 == 0) {
      uVar1 = uVar3;
    }
    else {
      if (uVar2 != 0x80000000) {
        local_28 = CONCAT31(local_28._1_3_,6);
        local_24 = uVar3;
        local_20 = uVar4;
        uVar4 = FUN_01967740(&local_28,&uStack_11,&DAT_01cfa4bc);
        *param_1 = 0x80000000;
        param_1[1] = uVar4;
        FUN_019bb7e0(uVar2,uVar3);
        return;
      }
      uVar1 = uVar4;
      uVar2 = uVar3;
      uVar4 = local_24;
    }
    *param_1 = uVar2;
    param_1[1] = uVar1;
    param_1[2] = uVar4;
    break;
  case 0xf:
    FUN_014f5308(param_1,param_2[1],param_2[2]);
LAB_014cab38:
    FUN_014c81b0(param_2);
    break;
  default:
    uVar2 = FUN_014c8278(param_2,&uStack_11,&DAT_01cfa4bc);
    *param_1 = 0x80000000;
    param_1[1] = uVar2;
  }
  return;
}


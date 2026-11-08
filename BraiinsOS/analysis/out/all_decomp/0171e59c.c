// FUN_0171e59c @ 0171e59c size=268 calls_out=1 calls_in=2
// strings: 

uint FUN_0171e59c(uint *param_1,uint param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint *puVar7;
  
  if (param_2 == 0) {
    uVar3 = 0xffffffff;
    goto LAB_0171e66c;
  }
  if (param_4 == 0) {
    uVar3 = 0;
    goto LAB_0171e66c;
  }
  if (param_4 == 1) {
    uVar3 = 0xffffffff;
  }
  else {
    if (param_4 - 2 < 2) {
      uVar6 = 0;
      uVar3 = 1;
LAB_0171e628:
      uVar6 = uVar6 | param_1[uVar3];
      if (uVar3 + 1 < param_4) {
        uVar6 = uVar6 | param_1[uVar3 + 1];
      }
    }
    else {
      uVar3 = param_4 - 1;
      puVar5 = param_1 + 1;
      uVar2 = 0;
      uVar6 = 0;
      puVar4 = puVar5 + (uVar3 & 0xfffffffe);
      do {
        uVar1 = *puVar5;
        puVar7 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        uVar2 = uVar1 | uVar2;
        uVar6 = *puVar7 | uVar6;
      } while (puVar5 != puVar4);
      uVar6 = uVar6 | uVar2;
      if ((uVar3 & 1) != 0) {
        uVar3 = uVar3 | 1;
        goto LAB_0171e628;
      }
    }
    uVar3 = uVar6 - 1 & ~uVar6;
  }
  uVar6 = *param_1;
  uVar3 = ~((int)(((uVar6 - param_2 ^ uVar6 | param_2 ^ uVar6) ^ uVar6) & uVar3) >> 0x1f);
LAB_0171e66c:
  uVar6 = FUN_01715824(param_1,param_3,param_4);
  return uVar6 & uVar3;
}


// FUN_0196d394 @ 0196d394 size=124 calls_out=0 calls_in=1
// strings: 

void FUN_0196d394(int *param_1,uint *param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  
  uVar4 = *param_2;
  uVar6 = param_2[1];
  uVar7 = param_2[2];
  iVar3 = param_3[3];
  uVar5 = (uVar7 ^ uVar6 ^ param_2[3]) + (uVar4 >> 0x1b | uVar4 << 5) + *param_3;
  uVar2 = (uVar4 ^ (uVar6 >> 2 | uVar6 << 0x1e) ^ uVar7) + param_2[3] + param_3[1] +
          (uVar5 >> 0x1b | uVar5 * 0x20);
  uVar1 = uVar5 >> 2 | uVar5 * 0x40000000;
  uVar5 = param_3[2] + uVar7 + ((uVar6 >> 2 | uVar6 << 0x1e) ^ (uVar4 >> 2 | uVar4 << 0x1e) ^ uVar5)
          + (uVar2 >> 0x1b | uVar2 * 0x20);
  param_1[2] = uVar2 >> 2 | uVar2 * 0x40000000;
  param_1[3] = uVar1;
  *param_1 = iVar3 + (uVar6 >> 2 | uVar6 << 0x1e) + (uVar1 ^ (uVar4 >> 2 | uVar4 << 0x1e) ^ uVar2) +
             (uVar5 >> 0x1b | uVar5 * 0x20);
  param_1[1] = uVar5;
  return;
}


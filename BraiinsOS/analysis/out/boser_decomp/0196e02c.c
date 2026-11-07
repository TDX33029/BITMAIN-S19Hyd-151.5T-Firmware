// FUN_0196e02c @ 0196e02c size=204 calls_out=0 calls_in=2
// strings: 

void FUN_0196e02c(int *param_1,uint *param_2,uint param_3,int *param_4,uint *param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  
  uVar8 = *param_2;
  iVar6 = *param_4;
  uVar3 = *param_5;
  uVar4 = param_5[1];
  uVar7 = param_5[3];
  uVar1 = param_2[1];
  uVar5 = param_2[2];
  iVar2 = param_4[1];
  uVar4 = ((uVar5 >> 7 | uVar5 << 0x19) ^ (uVar5 >> 0x12 | uVar5 << 0xe) ^ uVar5 >> 3) + param_2[3]
          + param_4[2] +
          ((uVar4 >> 0x11 | uVar4 << 0xf) ^ (uVar4 >> 0x13 | uVar4 << 0xd) ^ uVar4 >> 10);
  param_1[3] = uVar4;
  uVar3 = ((uVar1 >> 7 | uVar1 << 0x19) ^ (uVar1 >> 0x12 | uVar1 << 0xe) ^ uVar1 >> 3) + uVar5 +
          iVar2 + ((uVar3 >> 0x11 | uVar3 << 0xf) ^ (uVar3 >> 0x13 | uVar3 << 0xd) ^ uVar3 >> 10);
  param_1[2] = uVar3;
  param_1[1] = ((uVar8 >> 7 | uVar8 << 0x19) ^ (uVar8 >> 0x12 | uVar8 << 0xe) ^ uVar8 >> 3) + uVar1
               + iVar6 + ((uVar4 >> 0x11 | uVar4 * 0x8000) ^ (uVar4 >> 0x13 | uVar4 * 0x2000) ^
                         uVar4 >> 10);
  *param_1 = uVar7 + uVar8 +
             ((param_3 >> 7 | param_3 << 0x19) ^ (param_3 >> 0x12 | param_3 << 0xe) ^ param_3 >> 3)
             + ((uVar3 >> 0x11 | uVar3 * 0x8000) ^ (uVar3 >> 0x13 | uVar3 * 0x2000) ^ uVar3 >> 10);
  return;
}


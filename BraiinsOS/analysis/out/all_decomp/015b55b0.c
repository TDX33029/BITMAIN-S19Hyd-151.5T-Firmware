// FUN_015b55b0 @ 015b55b0 size=432 calls_out=3 calls_in=1
// strings: 

void FUN_015b55b0(uint *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint auStack_68 [14];
  uint local_30;
  uint local_2c;
  
  uVar6 = param_1[8];
  puVar7 = param_1 + 10;
  uVar9 = (uint)(byte)param_1[0x1a];
  uVar8 = param_1[9];
  *(undefined1 *)((int)puVar7 + uVar9) = 0x80;
  uVar10 = uVar9 << 0x1b | ((uVar6 << 9 | uVar9 << 3) >> 8 & 0xff) << 0x10 |
           ((uVar6 & 0x7fffff) >> 7 & 0xff) << 8 | (uVar6 & 0x7fffff) >> 0xf;
  uVar6 = (uVar6 >> 0x17) << 0x18 | ((uVar8 << 9 | uVar6 >> 0x17) >> 8 & 0xff) << 0x10 |
          ((uVar8 & 0x7fffff) >> 7 & 0xff) << 8 | (uVar8 & 0x7fffff) >> 0xf;
  if ((uVar9 == 0x3f) ||
     (FUN_016dd606((undefined1 *)((int)puVar7 + uVar9) + 1,0), (uVar9 ^ 0x38) < 8)) {
    FUN_01585360(param_1,puVar7,1);
    puVar7 = auStack_68;
    FUN_016dd606(puVar7,0,0x38);
    local_30 = uVar6;
    local_2c = uVar10;
  }
  else {
    param_1[0x18] = uVar6;
    param_1[0x19] = uVar10;
  }
  FUN_01585360(param_1,puVar7,1);
  uVar8 = *param_1;
  uVar9 = param_1[1];
  uVar10 = param_1[2];
  uVar1 = param_1[3];
  uVar2 = param_1[4];
  uVar3 = param_1[5];
  uVar4 = param_1[6];
  uVar5 = param_1[7];
  *(undefined1 *)(param_1 + 0x1a) = 0;
  *param_1 = 0x6a09e667;
  param_1[1] = 0xbb67ae85;
  param_1[2] = 0x3c6ef372;
  param_1[3] = 0xa54ff53a;
  param_1[4] = 0x510e527f;
  param_1[5] = 0x9b05688c;
  param_1[6] = 0x1f83d9ab;
  param_1[7] = 0x5be0cd19;
  param_1[8] = 0;
  param_1[9] = 0;
  uVar6 = 0x510e527f;
  if (0x1f < param_3) {
    uVar6 = uVar5;
  }
  *(undefined1 *)(param_1 + 0x1a) = 0;
  if (param_3 < 0x20) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,0x20,param_3,&DAT_018aa29c);
  }
  param_2[7] = uVar6 << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 | (uVar6 >> 0x10 & 0xff) << 8 |
               uVar6 >> 0x18;
  param_2[6] = uVar4 << 0x18 | (uVar4 >> 8 & 0xff) << 0x10 | (uVar4 >> 0x10 & 0xff) << 8 |
               uVar4 >> 0x18;
  param_2[5] = uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 | (uVar3 >> 0x10 & 0xff) << 8 |
               uVar3 >> 0x18;
  param_2[4] = uVar2 << 0x18 | (uVar2 >> 8 & 0xff) << 0x10 | (uVar2 >> 0x10 & 0xff) << 8 |
               uVar2 >> 0x18;
  param_2[3] = uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 | (uVar1 >> 0x10 & 0xff) << 8 |
               uVar1 >> 0x18;
  param_2[2] = uVar10 << 0x18 | (uVar10 >> 8 & 0xff) << 0x10 | (uVar10 >> 0x10 & 0xff) << 8 |
               uVar10 >> 0x18;
  param_2[1] = uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 | (uVar9 >> 0x10 & 0xff) << 8 |
               uVar9 >> 0x18;
  *param_2 = uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 | (uVar8 >> 0x10 & 0xff) << 8 |
             uVar8 >> 0x18;
  return;
}


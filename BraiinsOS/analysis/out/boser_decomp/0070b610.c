// FUN_0070b610 @ 0070b610 size=448 calls_out=3 calls_in=1
// strings: 

void FUN_0070b610(uint *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint *puVar8;
  uint *puVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  uint uVar13;
  uint local_b8;
  uint local_b4;
  
  uVar13 = param_2[4];
  uVar10 = param_2[5];
  uVar5 = param_2[6];
  uVar6 = param_2[7];
  if (param_2[1] == 0) {
    *param_1 = (uint)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_019790d4(&local_b8,0x90,4,param_2[1] + 1);
    uVar1 = local_b8;
    puVar4 = (uint *)*param_2;
    FUN_01bed4e2(local_b8,puVar4,local_b4 + 5);
    uVar2 = param_2[3];
    if (uVar2 != 0) {
      puVar9 = puVar4 + 1;
      uVar11 = ~*puVar4 & 0x80808080;
      iVar3 = local_b8 - 0x90;
      uVar7 = uVar2;
      puVar12 = puVar4;
      do {
        puVar8 = puVar9;
        if (uVar11 == 0) {
          do {
            puVar9 = puVar8 + 1;
            uVar11 = *puVar8;
            puVar12 = puVar12 + -0x90;
            puVar8 = puVar9;
          } while ((uVar11 & 0x80808080) == 0x80808080);
          uVar11 = uVar11 & 0x80808080 ^ 0x80808080;
        }
        puVar8 = puVar12 + ((uint)LZCOUNT(uVar11 << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                                          (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18) >> 3) *
                           -0x24;
        local_b8 = puVar8[-0x24];
        FUN_00711d68((uint)&local_b8 | 4,puVar8 + -0x23);
        FUN_01bed4e2(iVar3 + ((int)puVar4 - (int)puVar8 >> 4) * -0x10,&local_b8,0x90);
        uVar11 = uVar11 - 1 & uVar11;
        uVar7 = uVar7 - 1;
      } while (uVar7 != 0);
    }
    uVar7 = param_2[2];
    *param_1 = uVar1;
    param_1[1] = local_b4;
    param_1[2] = uVar7;
    param_1[3] = uVar2;
  }
  param_1[4] = uVar13;
  param_1[5] = uVar10;
  param_1[6] = uVar5;
  param_1[7] = uVar6;
  return;
}


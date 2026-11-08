// FUN_01540b74 @ 01540b74 size=464 calls_out=3 calls_in=6
// strings: 

void FUN_01540b74(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint *puVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  uint *puVar13;
  uint *puVar14;
  uint uVar15;
  int iVar16;
  int *piVar17;
  int local_50;
  int local_4c;
  int local_48;
  
  iVar4 = param_2[5];
  iVar10 = param_2[6];
  iVar12 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar4;
  param_1[6] = iVar10;
  param_1[7] = iVar12;
  iVar4 = param_2[9];
  iVar10 = param_2[10];
  iVar12 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = iVar4;
  param_1[10] = iVar10;
  param_1[0xb] = iVar12;
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_019790d4(&local_50,0x28,4,param_2[1] + 1);
    iVar10 = local_4c;
    iVar4 = local_50;
    puVar3 = (uint *)*param_2;
    FUN_01bed4e2(local_50,puVar3,local_4c + 5);
    iVar12 = param_2[3];
    if (iVar12 != 0) {
      puVar14 = puVar3 + 1;
      uVar15 = ~*puVar3 & 0x80808080;
      puVar9 = puVar3;
      iVar16 = iVar12;
      do {
        puVar13 = puVar14;
        if (uVar15 == 0) {
          do {
            puVar14 = puVar13 + 1;
            uVar15 = *puVar13;
            puVar9 = puVar9 + -0x28;
            puVar13 = puVar14;
          } while ((uVar15 & 0x80808080) == 0x80808080);
          uVar15 = uVar15 & 0x80808080 ^ 0x80808080;
        }
        puVar13 = puVar9 + ((uint)LZCOUNT(uVar15 << 0x18 | (uVar15 >> 8 & 0xff) << 0x10 |
                                          (uVar15 >> 0x10 & 0xff) << 8 | uVar15 >> 0x18) >> 3) * -10
        ;
        FUN_006666fc(&local_50,puVar13[-9],puVar13[-8]);
        iVar16 = iVar16 + -1;
        uVar1 = puVar13[-7];
        uVar5 = puVar13[-6];
        uVar7 = puVar13[-5];
        uVar2 = puVar13[-4];
        uVar6 = puVar13[-3];
        uVar8 = puVar13[-2];
        uVar11 = puVar13[-1];
        piVar17 = (int *)(iVar4 + -0x28 + ((int)puVar3 - (int)puVar13 >> 3) * -8);
        *piVar17 = local_50;
        piVar17[1] = local_4c;
        piVar17[2] = local_48;
        piVar17[3] = uVar1;
        piVar17[4] = uVar5;
        piVar17[5] = uVar7;
        piVar17[6] = uVar2;
        piVar17[7] = uVar6;
        piVar17[8] = uVar8;
        piVar17[9] = uVar11;
        uVar15 = uVar15 - 1 & uVar15;
      } while (iVar16 != 0);
    }
    iVar16 = param_2[2];
    *param_1 = iVar4;
    param_1[1] = iVar10;
    param_1[2] = iVar16;
    param_1[3] = iVar12;
  }
  return;
}


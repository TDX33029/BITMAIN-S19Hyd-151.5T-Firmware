// FUN_00ab8cac @ 00ab8cac size=632 calls_out=5 calls_in=8
// strings: 

void FUN_00ab8cac(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  int iVar4;
  uint *puVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int iVar13;
  uint *puVar14;
  int iVar15;
  int local_50;
  int local_4c;
  int local_48;
  int local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint uStack_34;
  uint uStack_30;
  uint uStack_2c;
  
  iVar15 = param_2[4];
  iVar12 = param_2[5];
  iVar7 = param_2[6];
  iVar8 = param_2[7];
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_0125e7e8(&local_50,0x28,8,param_2[1] + 1);
    iVar2 = local_4c;
    iVar1 = local_50;
    puVar5 = (uint *)*param_2;
    FUN_01bed4e2(local_50,puVar5,local_4c + 5);
    iVar4 = param_2[3];
    if (iVar4 != 0) {
      puVar11 = puVar5 + 1;
      uVar9 = ~*puVar5 & 0x80808080;
      iVar13 = iVar4;
      puVar14 = puVar5;
      do {
        puVar10 = puVar11;
        if (uVar9 == 0) {
          do {
            puVar11 = puVar10 + 1;
            uVar9 = *puVar10;
            puVar14 = puVar14 + -0x28;
            puVar10 = puVar11;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        puVar10 = puVar14 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                           (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) * -10;
        FUN_006666fc(&local_50,puVar10[-9],puVar10[-8]);
        uVar9 = uVar9 - 1 & uVar9;
        iVar13 = iVar13 + -1;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
        switch((char)puVar10[-6]) {
        case '\0':
          uVar3 = 0;
          break;
        case '\x01':
          local_40 = puVar10[-6];
          local_3c = puVar10[-5];
          local_38 = puVar10[-4];
          uStack_34 = puVar10[-3];
          uStack_30 = puVar10[-2];
          uStack_2c = puVar10[-1];
          goto LAB_00ab8e88;
        case '\x02':
          local_38 = puVar10[-4];
          uStack_34 = puVar10[-3];
          uStack_30 = puVar10[-2];
          uStack_2c = puVar10[-1];
          uVar3 = 2;
          break;
        case '\x03':
          FUN_006666fc(&local_3c,puVar10[-4],puVar10[-3]);
          uVar3 = 3;
          break;
        case '\x04':
          FUN_01961458(&local_3c,puVar10[-4],puVar10[-3]);
          uVar3 = 4;
          break;
        case '\x05':
          FUN_01960d00(&local_3c,puVar10 + -5);
          uVar3 = 5;
        }
        local_40 = CONCAT31(local_40._1_3_,uVar3);
LAB_00ab8e88:
        piVar6 = (int *)(iVar1 + -0x28 + ((int)puVar5 - (int)puVar10 >> 3) * -8);
        *piVar6 = local_50;
        piVar6[1] = local_4c;
        piVar6[2] = local_48;
        piVar6[3] = local_44;
        piVar6[4] = local_40;
        piVar6[5] = local_3c;
        piVar6[6] = local_38;
        piVar6[7] = uStack_34;
        piVar6[8] = uStack_30;
        piVar6[9] = uStack_2c;
      } while (iVar13 != 0);
    }
    iVar13 = param_2[2];
    *param_1 = iVar1;
    param_1[1] = iVar2;
    param_1[2] = iVar13;
    param_1[3] = iVar4;
  }
  param_1[4] = iVar15;
  param_1[5] = iVar12;
  param_1[6] = iVar7;
  param_1[7] = iVar8;
  return;
}


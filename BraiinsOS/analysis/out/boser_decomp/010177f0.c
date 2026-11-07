// FUN_010177f0 @ 010177f0 size=400 calls_out=3 calls_in=3
// strings: 

void FUN_010177f0(int *param_1,undefined4 *param_2)

{
  uint uVar1;
  code *pcVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  uint *puVar11;
  int iVar12;
  int *piVar13;
  uint *puVar14;
  uint *puVar15;
  int iVar16;
  int local_34;
  int local_30;
  
  iVar16 = param_2[4];
  iVar12 = param_2[5];
  iVar6 = param_2[6];
  iVar8 = param_2[7];
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_014b5130(&local_34,0x18,8,param_2[1] + 1);
    puVar14 = (uint *)*param_2;
    FUN_01bed4e2(local_34,puVar14,local_30 + 5);
    iVar4 = param_2[3];
    if (iVar4 != 0) {
      puVar11 = puVar14 + 1;
      uVar9 = ~*puVar14 & 0x80808080;
      iVar7 = iVar4;
      puVar15 = puVar14;
      do {
        puVar10 = puVar11;
        if (uVar9 == 0) {
          do {
            puVar11 = puVar10 + 1;
            uVar9 = *puVar10;
            puVar15 = puVar15 + -0x18;
            puVar10 = puVar11;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        uVar1 = (uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                              (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
        piVar13 = (int *)puVar15[uVar1 * -6 + -2];
        do {
          iVar5 = *piVar13;
          bVar3 = (bool)hasExclusiveAccess(piVar13);
        } while (!bVar3);
        *piVar13 = iVar5 + 1;
        if (iVar5 < 0) {
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xfdee,0x101797c);
          (*pcVar2)();
        }
        iVar5 = local_34 + (uVar1 * -0x18 - (int)puVar14);
        FUN_01bed864((int)puVar15 + iVar5 + -0x18,puVar15 + uVar1 * -6 + -6,0x10);
        iVar7 = iVar7 + -1;
        uVar9 = uVar9 - 1 & uVar9;
        *(int **)((int)puVar15 + iVar5 + -8) = piVar13;
      } while (iVar7 != 0);
    }
    iVar7 = param_2[2];
    *param_1 = local_34;
    param_1[2] = iVar7;
    param_1[1] = local_30;
    param_1[3] = iVar4;
  }
  param_1[4] = iVar16;
  param_1[5] = iVar12;
  param_1[6] = iVar6;
  param_1[7] = iVar8;
  return;
}


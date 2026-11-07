// FUN_015da650 @ 015da650 size=464 calls_out=3 calls_in=1
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015da650(int *param_1,undefined4 *param_2)

{
  int iVar1;
  int iVar2;
  uint *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint *puVar10;
  int iVar11;
  uint *puVar12;
  int iVar13;
  int local_40;
  int local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar13 = param_2[4];
  iVar11 = param_2[5];
  iVar6 = param_2[6];
  iVar7 = param_2[7];
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_014533a8(&local_40,0xc,4,param_2[1] + 1);
    iVar2 = local_40;
    puVar3 = (uint *)*param_2;
    FUN_01bed4e2(local_40,puVar3,local_3c + 5);
    iVar1 = param_2[3];
    if (iVar1 != 0) {
      puVar10 = puVar3 + 1;
      uVar5 = ~*puVar3 & 0x80808080;
      iVar8 = iVar1;
      puVar12 = puVar3;
      do {
        puVar9 = puVar10;
        if (uVar5 == 0) {
          do {
            puVar10 = puVar9 + 1;
            uVar5 = *puVar9;
            puVar12 = puVar12 + -0xc;
            puVar9 = puVar10;
          } while ((uVar5 & 0x80808080) == 0x80808080);
          uVar5 = uVar5 & 0x80808080 ^ 0x80808080;
        }
        puVar9 = puVar12 + ((uint)LZCOUNT(uVar5 << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                                          (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18) >> 3) * -3;
        FUN_006666fc(&local_30,puVar9[-2],puVar9[-1]);
        iVar8 = iVar8 + -1;
        puVar4 = (undefined4 *)(iVar2 + -0xc + ((int)puVar3 - (int)puVar9 >> 2) * -4);
        *puVar4 = local_30;
        puVar4[1] = uStack_2c;
        puVar4[2] = uStack_28;
        uVar5 = uVar5 - 1 & uVar5;
      } while (iVar8 != 0);
    }
    iVar2 = param_2[2];
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = iVar2;
    param_1[3] = iVar1;
  }
  param_1[4] = iVar13;
  param_1[5] = iVar11;
  param_1[6] = iVar6;
  param_1[7] = iVar7;
  return;
}


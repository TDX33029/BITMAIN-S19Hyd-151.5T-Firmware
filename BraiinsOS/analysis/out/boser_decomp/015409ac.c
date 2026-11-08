// FUN_015409ac @ 015409ac size=416 calls_out=3 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_015409ac(int *param_1,undefined4 *param_2)

{
  uint *puVar1;
  undefined4 *puVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int local_40;
  int local_3c;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  iVar3 = param_2[5];
  iVar5 = param_2[6];
  iVar6 = param_2[7];
  param_1[4] = param_2[4];
  param_1[5] = iVar3;
  param_1[6] = iVar5;
  param_1[7] = iVar6;
  iVar3 = param_2[9];
  iVar5 = param_2[10];
  iVar6 = param_2[0xb];
  param_1[8] = param_2[8];
  param_1[9] = iVar3;
  param_1[10] = iVar5;
  param_1[0xb] = iVar6;
  if (param_2[1] == 0) {
    *param_1 = (int)&DAT_0056d238;
    param_1[1] = 0;
    param_1[2] = 0;
    param_1[3] = 0;
  }
  else {
    FUN_019790d4(&local_40,0xc,4,param_2[1] + 1);
    iVar3 = local_40;
    puVar1 = (uint *)*param_2;
    FUN_01bed4e2(local_40,puVar1,local_3c + 5);
    iVar5 = param_2[3];
    if (iVar5 != 0) {
      puVar8 = puVar1 + 1;
      uVar9 = ~*puVar1 & 0x80808080;
      puVar4 = puVar1;
      iVar6 = iVar5;
      do {
        puVar7 = puVar8;
        if (uVar9 == 0) {
          do {
            puVar8 = puVar7 + 1;
            uVar9 = *puVar7;
            puVar4 = puVar4 + -0xc;
            puVar7 = puVar8;
          } while ((uVar9 & 0x80808080) == 0x80808080);
          uVar9 = uVar9 & 0x80808080 ^ 0x80808080;
        }
        puVar7 = puVar4 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                         (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) * -3;
        FUN_006666fc(&local_30,puVar7[-2],puVar7[-1]);
        iVar6 = iVar6 + -1;
        puVar2 = (undefined4 *)(iVar3 + -0xc + ((int)puVar1 - (int)puVar7 >> 2) * -4);
        *puVar2 = local_30;
        puVar2[1] = uStack_2c;
        puVar2[2] = uStack_28;
        uVar9 = uVar9 - 1 & uVar9;
      } while (iVar6 != 0);
    }
    iVar3 = param_2[2];
    *param_1 = local_40;
    param_1[1] = local_3c;
    param_1[2] = iVar3;
    param_1[3] = iVar5;
  }
  return;
}


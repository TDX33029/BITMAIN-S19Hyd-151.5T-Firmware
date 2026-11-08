// FUN_0092014c @ 0092014c size=216 calls_out=2 calls_in=1
// strings: 

void FUN_0092014c(int *param_1)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  
  iVar3 = param_1[4];
  if (iVar3 != 0) {
    iVar4 = *param_1;
    puVar5 = (uint *)param_1[2];
    uVar1 = param_1[1];
    do {
      puVar6 = puVar5;
      if (uVar1 == 0) {
        do {
          puVar5 = puVar6 + 1;
          uVar1 = *puVar6;
          iVar4 = iVar4 + -0x180;
          puVar6 = puVar5;
        } while ((uVar1 & 0x80808080) == 0x80808080);
        uVar1 = uVar1 & 0x80808080 ^ 0x80808080;
        *param_1 = iVar4;
        param_1[2] = (int)puVar5;
      }
      iVar3 = iVar3 + -1;
      uVar8 = uVar1 - 1 & uVar1;
      param_1[4] = iVar3;
      param_1[1] = uVar8;
      FUN_00920224(iVar4 + ((uint)LZCOUNT(uVar1 << 0x18 | (uVar1 >> 8 & 0xff) << 0x10 |
                                          (uVar1 >> 0x10 & 0xff) << 8 | uVar1 >> 0x18) >> 3) * -0x60
                   + -0x60);
      uVar1 = uVar8;
    } while (iVar3 != 0);
  }
  uVar1 = param_1[6];
  if (uVar1 != 0) {
    FUN_01bed93e(param_1[5],0xff,uVar1 + 5);
  }
  piVar2 = (int *)param_1[9];
  if (7 < uVar1) {
    uVar1 = (uVar1 + 1 & 0xfffffff8) - (uVar1 + 1 >> 3);
  }
  param_1[7] = uVar1;
  param_1[8] = 0;
  iVar3 = param_1[6];
  iVar4 = param_1[7];
  iVar7 = param_1[8];
  *piVar2 = param_1[5];
  piVar2[1] = iVar3;
  piVar2[2] = iVar4;
  piVar2[3] = iVar7;
  return;
}


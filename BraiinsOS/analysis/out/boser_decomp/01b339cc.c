// FUN_01b339cc @ 01b339cc size=300 calls_out=4 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/bn/shift.c

undefined4 FUN_01b339cc(int *param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  
  if ((int)param_3 < 0) {
    FUN_01b053d4(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/shift.c",0x14);
  }
  else {
    iVar2 = param_2[1];
    param_1[3] = param_2[3];
    iVar1 = (int)param_3 >> 5;
    uVar7 = 0x1b33a38;
    iVar2 = FUN_01b2b248(param_1,iVar2 + 1 + iVar1);
    if (iVar2 != 0) {
      iVar2 = *param_1;
      param_3 = param_3 & 0x1f;
      iVar6 = *param_2;
      if (param_3 != 0) {
        uVar7 = 0x20 - param_3;
      }
      *(undefined4 *)(iVar2 + (iVar1 + param_2[1]) * 4) = 0;
      iVar4 = param_2[1] + -1;
      if (param_3 != 0) {
        puVar5 = (uint *)(iVar2 + (param_2[1] + iVar1) * 4);
        for (; -1 < iVar4; iVar4 = iVar4 + -1) {
          uVar3 = *(uint *)(iVar6 + iVar4 * 4);
          *puVar5 = *puVar5 | uVar3 >> (uVar7 & 0xff);
          puVar5[-1] = uVar3 << param_3;
          puVar5 = puVar5 + -1;
        }
      }
      else {
        for (; -1 < iVar4; iVar4 = iVar4 + -1) {
          *(undefined4 *)(iVar2 + iVar1 * 4 + iVar4 * 4) = *(undefined4 *)(iVar6 + iVar4 * 4);
        }
      }
      FUN_01b257dc(iVar2,0,iVar1 << 2);
      param_1[1] = param_2[1] + 1 + iVar1;
      FUN_01b2b964(param_1);
      return 1;
    }
  }
  return 0;
}


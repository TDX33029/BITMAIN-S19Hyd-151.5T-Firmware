// FUN_0171e6a8 @ 0171e6a8 size=348 calls_out=4 calls_in=4
// strings: /aws-lc/crypto/fipsmodule/bn/shift.c

undefined8 FUN_0171e6a8(int *param_1,int *param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  
  if ((int)param_3 < 0) {
    FUN_016e9cd0(3,0,0x6d,"/aws-lc/crypto/fipsmodule/bn/shift.c",0x14);
  }
  else {
    iVar2 = param_2[1];
    uVar1 = (int)param_3 >> 5;
    param_1[3] = param_2[3];
    iVar2 = FUN_0171464c(param_1,iVar2 + 1 + uVar1);
    if (iVar2 != 0) {
      param_3 = param_3 & 0x1f;
      iVar2 = *param_1;
      puVar5 = (uint *)*param_2;
      *(undefined4 *)(iVar2 + (uVar1 + param_2[1]) * 4) = 0;
      iVar6 = param_2[1];
      if (param_3 == 0) {
        if (-1 < iVar6 + -1) {
          puVar7 = puVar5 + iVar6;
          puVar3 = (uint *)(iVar2 + (uVar1 + iVar6) * 4);
          do {
            puVar7 = puVar7 + -1;
            puVar3 = puVar3 + -1;
            *puVar3 = *puVar7;
          } while (puVar5 != puVar7);
        }
      }
      else if (-1 < iVar6 + -1) {
        puVar3 = puVar5 + iVar6;
        puVar7 = (uint *)(iVar2 + (uVar1 + iVar6) * 4);
        uVar4 = *(uint *)(iVar2 + (uVar1 + iVar6) * 4);
        do {
          puVar3 = puVar3 + -1;
          uVar8 = *puVar3;
          *puVar7 = uVar4 | uVar8 >> (0x20 - param_3 & 0xff);
          uVar4 = uVar8 << param_3;
          puVar7 = puVar7 + -1;
          *puVar7 = uVar4;
        } while (puVar5 != puVar3);
      }
      if ((uVar1 & 0x3fffffff) != 0) {
        FUN_016dd606(iVar2,0);
      }
      param_1[1] = param_2[1] + 1 + uVar1;
      FUN_01714f48(param_1);
      return 1;
    }
  }
  return 0;
}


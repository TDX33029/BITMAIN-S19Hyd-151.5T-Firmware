// FUN_00723a88 @ 00723a88 size=268 calls_out=1 calls_in=1
// strings: 

void FUN_00723a88(uint *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  bool bVar11;
  
  uVar7 = param_1[1];
  uVar3 = param_1[6];
  uVar4 = 2;
  uVar10 = param_1[7];
  puVar5 = param_1 + 0xc;
  if (uVar7 < uVar10 || uVar10 - uVar7 < (uint)(*param_1 <= uVar3)) {
    uVar1 = uVar10;
    uVar2 = uVar3;
    do {
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      if (uVar9 <= uVar1 && (uint)(uVar2 <= uVar8) <= uVar9 - uVar1) goto LAB_00723b18;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 6;
      uVar1 = uVar9;
      uVar2 = uVar8;
    } while (param_2 != uVar4);
  }
  else {
    uVar1 = uVar10;
    uVar2 = uVar3;
    do {
      uVar8 = *puVar5;
      uVar9 = puVar5[1];
      if (uVar1 < uVar9 || uVar9 - uVar1 < (uint)(uVar2 <= uVar8)) goto LAB_00723b18;
      uVar4 = uVar4 + 1;
      puVar5 = puVar5 + 6;
      uVar1 = uVar9;
      uVar2 = uVar8;
    } while (param_2 != uVar4);
  }
LAB_00723b20:
  if (uVar10 <= uVar7 && (uint)(*param_1 <= uVar3) <= uVar10 - uVar7) {
    uVar3 = 0;
    puVar5 = param_1 + param_2 * 6;
    do {
      puVar5 = puVar5 + -6;
      iVar6 = 0;
      do {
        uVar4 = param_1[-iVar6];
        param_1[-iVar6] = puVar5[-iVar6];
        puVar5[-iVar6] = uVar4;
        bVar11 = iVar6 != -5;
        iVar6 = iVar6 + -1;
      } while (bVar11);
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 6;
    } while (uVar3 != param_2 >> 1);
  }
  return;
LAB_00723b18:
  if (uVar4 != param_2) {
    FUN_00723b94(param_1,param_2,0,LZCOUNT(param_2 | 1) << 1 ^ 0x3e);
    return;
  }
  goto LAB_00723b20;
}


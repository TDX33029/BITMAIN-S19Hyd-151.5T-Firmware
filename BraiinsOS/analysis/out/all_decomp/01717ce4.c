// FUN_01717ce4 @ 01717ce4 size=184 calls_out=0 calls_in=5
// strings: 

bool FUN_01717ce4(undefined4 *param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint *puVar7;
  uint uVar8;
  uint *puVar9;
  
  iVar5 = param_1[1];
  if (iVar5 != 0) {
    puVar7 = (uint *)*param_1;
    param_2 = param_2 ^ *puVar7;
    if (1 < iVar5) {
      if (iVar5 - 2U < 2) {
        uVar6 = 1;
      }
      else {
        uVar6 = iVar5 - 1;
        puVar3 = puVar7 + 1;
        uVar2 = 0;
        uVar8 = 0;
        puVar4 = puVar3 + (uVar6 & 0xfffffffe);
        do {
          uVar1 = *puVar3;
          puVar9 = puVar3 + 1;
          puVar3 = puVar3 + 2;
          uVar2 = uVar1 | uVar2;
          uVar8 = *puVar9 | uVar8;
        } while (puVar3 != puVar4);
        param_2 = param_2 | uVar2 | uVar8;
        if ((uVar6 & 1) == 0) goto LAB_01717d78;
        uVar6 = uVar6 | 1;
      }
      puVar3 = puVar7 + uVar6;
      if ((int)(uVar6 + 1) < iVar5) {
        puVar7 = puVar7 + uVar6;
      }
      param_2 = param_2 | *puVar3;
      if ((int)(uVar6 + 1) < iVar5) {
        param_2 = param_2 | puVar7[1];
      }
    }
  }
LAB_01717d78:
  return param_2 == 0;
}


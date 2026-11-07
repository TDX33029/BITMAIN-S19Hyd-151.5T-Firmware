// FUN_010137fc @ 010137fc size=196 calls_out=1 calls_in=2
// strings: 

void FUN_010137fc(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  uint uVar13;
  
  uVar7 = param_2[-7];
  uVar12 = *param_2;
  uVar13 = param_2[1];
  uVar2 = uVar7;
  if (uVar13 < uVar7) {
    uVar2 = uVar13;
  }
  uVar2 = FUN_01bed842(uVar12,param_2[-8],uVar2);
  if (uVar2 == 0) {
    uVar2 = uVar13 - uVar7;
  }
  if (0x7fffffff < uVar2) {
    uVar3 = param_2[2];
    uVar5 = param_2[3];
    uVar6 = param_2[4];
    uVar8 = param_2[5];
    uVar10 = param_2[6];
    uVar11 = param_2[7];
    puVar1 = param_2 + -8;
    do {
      puVar9 = puVar1;
      puVar9[8] = *puVar9;
      puVar9[9] = puVar9[1];
      puVar9[10] = puVar9[2];
      puVar9[0xb] = puVar9[3];
      puVar9[0xc] = puVar9[4];
      puVar9[0xd] = puVar9[5];
      puVar9[0xe] = puVar9[6];
      puVar9[0xf] = puVar9[7];
      if (puVar9 == param_1) break;
      uVar7 = puVar9[-7];
      uVar2 = uVar7;
      if (uVar13 < uVar7) {
        uVar2 = uVar13;
      }
      iVar4 = FUN_01bed842(uVar12,puVar9[-8],uVar2);
      if (iVar4 == 0) {
        iVar4 = uVar13 - uVar7;
      }
      puVar1 = puVar9 + -8;
    } while (iVar4 < 0);
    *puVar9 = uVar12;
    puVar9[1] = uVar13;
    puVar9[2] = uVar3;
    puVar9[3] = uVar5;
    puVar9[4] = uVar6;
    puVar9[5] = uVar8;
    puVar9[6] = uVar10;
    puVar9[7] = uVar11;
  }
  return;
}


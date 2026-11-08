// FUN_01013640 @ 01013640 size=248 calls_out=1 calls_in=5
// strings: 

void FUN_01013640(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  uint uVar14;
  undefined4 *puVar15;
  uint uVar16;
  
  uVar14 = param_2[-2];
  uVar16 = param_2[10];
  uVar10 = param_2[9];
  uVar1 = uVar14;
  if (uVar16 < uVar14) {
    uVar1 = uVar16;
  }
  uVar1 = FUN_01bed842(uVar10,param_2[-3],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar16 - uVar14;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = *param_2;
    uVar6 = param_2[1];
    uVar8 = param_2[2];
    uVar11 = param_2[3];
    uVar3 = param_2[4];
    uVar7 = param_2[5];
    uVar9 = param_2[6];
    uVar12 = param_2[7];
    uVar13 = param_2[8];
    uVar4 = param_2[0xb];
    do {
      puVar15 = param_2;
      param_2 = puVar15 + -0xc;
      *puVar15 = *param_2;
      puVar15[1] = puVar15[-0xb];
      puVar15[2] = puVar15[-10];
      puVar15[3] = puVar15[-9];
      puVar15[4] = puVar15[-8];
      puVar15[5] = puVar15[-7];
      puVar15[6] = puVar15[-6];
      puVar15[7] = puVar15[-5];
      puVar15[8] = puVar15[-4];
      puVar15[9] = puVar15[-3];
      puVar15[10] = puVar15[-2];
      puVar15[0xb] = puVar15[-1];
      if (param_2 == param_1) break;
      uVar14 = puVar15[-0xe];
      uVar1 = uVar14;
      if (uVar16 < uVar14) {
        uVar1 = uVar16;
      }
      iVar5 = FUN_01bed842(uVar10,puVar15[-0xf],uVar1);
      if (iVar5 == 0) {
        iVar5 = uVar16 - uVar14;
      }
    } while (iVar5 < 0);
    puVar15[-0xc] = uVar2;
    puVar15[-0xb] = uVar6;
    puVar15[-10] = uVar8;
    puVar15[-9] = uVar11;
    puVar15[-8] = uVar3;
    puVar15[-7] = uVar7;
    puVar15[-6] = uVar9;
    puVar15[-5] = uVar12;
    puVar15[-4] = uVar13;
    puVar15[-3] = uVar10;
    puVar15[-2] = uVar16;
    puVar15[-1] = uVar4;
  }
  return;
}


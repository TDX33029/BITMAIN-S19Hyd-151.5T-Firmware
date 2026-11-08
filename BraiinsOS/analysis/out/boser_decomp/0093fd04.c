// FUN_0093fd04 @ 0093fd04 size=240 calls_out=1 calls_in=7
// strings: 

void FUN_0093fd04(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 *puVar13;
  undefined4 uVar14;
  
  uVar12 = param_2[-8];
  uVar9 = param_2[2];
  uVar1 = uVar12;
  if (uVar9 < uVar12) {
    uVar1 = uVar9;
  }
  uVar1 = FUN_01bed842(param_2[1],param_2[-9],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar9 - uVar12;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = *param_2;
    uVar14 = param_2[1];
    uVar1 = param_2[2];
    uVar5 = param_2[3];
    uVar7 = param_2[4];
    uVar10 = param_2[5];
    uVar3 = param_2[6];
    uVar6 = param_2[7];
    uVar8 = param_2[8];
    uVar11 = param_2[9];
    do {
      puVar13 = param_2;
      param_2 = puVar13 + -10;
      *puVar13 = *param_2;
      puVar13[1] = puVar13[-9];
      puVar13[2] = puVar13[-8];
      puVar13[3] = puVar13[-7];
      puVar13[4] = puVar13[-6];
      puVar13[5] = puVar13[-5];
      puVar13[6] = puVar13[-4];
      puVar13[7] = puVar13[-3];
      puVar13[8] = puVar13[-2];
      puVar13[9] = puVar13[-1];
      if (param_2 == param_1) break;
      uVar12 = puVar13[-0x12];
      uVar9 = uVar12;
      if (uVar1 < uVar12) {
        uVar9 = uVar1;
      }
      iVar4 = FUN_01bed842(uVar14,puVar13[-0x13],uVar9);
      if (iVar4 == 0) {
        iVar4 = uVar1 - uVar12;
      }
    } while (iVar4 < 0);
    puVar13[-10] = uVar2;
    puVar13[-9] = uVar14;
    puVar13[-8] = uVar1;
    puVar13[-7] = uVar5;
    puVar13[-6] = uVar7;
    puVar13[-5] = uVar10;
    puVar13[-4] = uVar3;
    puVar13[-3] = uVar6;
    puVar13[-2] = uVar8;
    puVar13[-1] = uVar11;
  }
  return;
}


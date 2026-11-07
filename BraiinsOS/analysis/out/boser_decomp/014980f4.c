// FUN_014980f4 @ 014980f4 size=236 calls_out=1 calls_in=2
// strings: 

void FUN_014980f4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 *puVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  
  uVar12 = param_2[-8];
  uVar13 = param_2[1];
  uVar14 = param_2[2];
  uVar1 = uVar12;
  if (uVar14 < uVar12) {
    uVar1 = uVar14;
  }
  uVar1 = FUN_01bed842(uVar13,param_2[-9],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar14 - uVar12;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = *param_2;
    uVar5 = param_2[3];
    uVar7 = param_2[4];
    uVar9 = param_2[5];
    uVar3 = param_2[6];
    uVar6 = param_2[7];
    uVar8 = param_2[8];
    uVar10 = param_2[9];
    do {
      puVar11 = param_2;
      param_2 = puVar11 + -10;
      *puVar11 = *param_2;
      puVar11[1] = puVar11[-9];
      puVar11[2] = puVar11[-8];
      puVar11[3] = puVar11[-7];
      puVar11[4] = puVar11[-6];
      puVar11[5] = puVar11[-5];
      puVar11[6] = puVar11[-4];
      puVar11[7] = puVar11[-3];
      puVar11[8] = puVar11[-2];
      puVar11[9] = puVar11[-1];
      if (param_2 == param_1) break;
      uVar12 = puVar11[-0x12];
      uVar1 = uVar12;
      if (uVar14 < uVar12) {
        uVar1 = uVar14;
      }
      iVar4 = FUN_01bed842(uVar13,puVar11[-0x13],uVar1);
      if (iVar4 == 0) {
        iVar4 = uVar14 - uVar12;
      }
    } while (iVar4 < 0);
    puVar11[-10] = uVar2;
    puVar11[-9] = uVar13;
    puVar11[-8] = uVar14;
    puVar11[-7] = uVar5;
    puVar11[-6] = uVar7;
    puVar11[-5] = uVar9;
    puVar11[-4] = uVar3;
    puVar11[-3] = uVar6;
    puVar11[-2] = uVar8;
    puVar11[-1] = uVar10;
  }
  return;
}


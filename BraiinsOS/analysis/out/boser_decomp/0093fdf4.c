// FUN_0093fdf4 @ 0093fdf4 size=220 calls_out=1 calls_in=2
// strings: 

void FUN_0093fdf4(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 uVar12;
  
  uVar11 = param_2[-6];
  uVar8 = param_2[2];
  uVar1 = uVar11;
  if (uVar8 < uVar11) {
    uVar1 = uVar8;
  }
  uVar1 = FUN_01bed842(param_2[1],param_2[-7],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar8 - uVar11;
  }
  if (0x7fffffff < uVar1) {
    uVar2 = *param_2;
    uVar12 = param_2[1];
    uVar1 = param_2[2];
    uVar3 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    uVar9 = param_2[6];
    uVar10 = param_2[7];
    do {
      puVar7 = param_2;
      param_2 = puVar7 + -8;
      *puVar7 = *param_2;
      puVar7[1] = puVar7[-7];
      puVar7[2] = puVar7[-6];
      puVar7[3] = puVar7[-5];
      puVar7[4] = puVar7[-4];
      puVar7[5] = puVar7[-3];
      puVar7[6] = puVar7[-2];
      puVar7[7] = puVar7[-1];
      if (param_2 == param_1) break;
      uVar11 = puVar7[-0xe];
      uVar8 = uVar11;
      if (uVar1 < uVar11) {
        uVar8 = uVar1;
      }
      iVar4 = FUN_01bed842(uVar12,puVar7[-0xf],uVar8);
      if (iVar4 == 0) {
        iVar4 = uVar1 - uVar11;
      }
    } while (iVar4 < 0);
    puVar7[-8] = uVar2;
    puVar7[-7] = uVar12;
    puVar7[-6] = uVar1;
    puVar7[-5] = uVar3;
    puVar7[-4] = uVar5;
    puVar7[-3] = uVar6;
    puVar7[-2] = uVar9;
    puVar7[-1] = uVar10;
  }
  return;
}


// FUN_0067bf3c @ 0067bf3c size=216 calls_out=1 calls_in=2
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0067bf3c(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *puVar7;
  uint uVar8;
  undefined4 uVar9;
  uint uVar10;
  
  uVar8 = param_2[-4];
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  uVar1 = uVar8;
  if (uVar10 < uVar8) {
    uVar1 = uVar10;
  }
  uVar1 = FUN_01bed842(uVar9,param_2[-5],uVar1);
  if (uVar1 == 0) {
    uVar1 = uVar10 - uVar8;
  }
  if (0x7fffffff < uVar1) {
    uVar3 = *param_2;
    uVar4 = param_2[3];
    uVar5 = param_2[4];
    uVar6 = param_2[5];
    do {
      puVar7 = param_2;
      param_2 = puVar7 + -6;
      *puVar7 = *param_2;
      puVar7[1] = puVar7[-5];
      puVar7[2] = puVar7[-4];
      puVar7[3] = puVar7[-3];
      puVar7[4] = puVar7[-2];
      puVar7[5] = puVar7[-1];
      if (param_2 == param_1) break;
      uVar8 = puVar7[-10];
      uVar1 = uVar8;
      if (uVar10 < uVar8) {
        uVar1 = uVar10;
      }
      iVar2 = FUN_01bed842(uVar9,puVar7[-0xb],uVar1);
      if (iVar2 == 0) {
        iVar2 = uVar10 - uVar8;
      }
    } while (iVar2 < 0);
    puVar7[-6] = uVar3;
    puVar7[-5] = uVar9;
    puVar7[-4] = uVar10;
    puVar7[-3] = uVar4;
    puVar7[-2] = uVar5;
    puVar7[-1] = uVar6;
  }
  return;
}


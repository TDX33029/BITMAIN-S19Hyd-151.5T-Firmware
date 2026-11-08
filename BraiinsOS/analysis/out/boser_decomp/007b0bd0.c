// FUN_007b0bd0 @ 007b0bd0 size=144 calls_out=1 calls_in=2
// strings: 

void FUN_007b0bd0(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  undefined4 uVar7;
  
  uVar7 = *param_2;
  uVar4 = param_2[-1];
  uVar6 = param_2[1];
  uVar3 = uVar4;
  if (uVar6 < uVar4) {
    uVar3 = uVar6;
  }
  iVar2 = FUN_01bed842(uVar7,param_2[-2],uVar3);
  if (iVar2 == 0) {
    iVar2 = uVar6 - uVar4;
  }
  puVar1 = param_2 + -2;
  if (-1 < iVar2) {
    return;
  }
  do {
    puVar5 = puVar1;
    puVar5[2] = *puVar5;
    puVar5[3] = puVar5[1];
    if (puVar5 == param_1) break;
    uVar4 = puVar5[-1];
    uVar3 = uVar4;
    if (uVar6 < uVar4) {
      uVar3 = uVar6;
    }
    iVar2 = FUN_01bed842(uVar7,puVar5[-2],uVar3);
    if (iVar2 == 0) {
      iVar2 = uVar6 - uVar4;
    }
    puVar1 = puVar5 + -2;
  } while (iVar2 < 0);
  *puVar5 = uVar7;
  puVar5[1] = uVar6;
  return;
}


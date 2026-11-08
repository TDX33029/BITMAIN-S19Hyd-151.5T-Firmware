// FUN_010133f4 @ 010133f4 size=304 calls_out=2 calls_in=4
// strings: 

void FUN_010133f4(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  
  uVar10 = FUN_019b00d0(param_2[-2],param_2[-1]);
  uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
  uVar11 = FUN_019b00d0(param_2[1],param_2[2]);
  uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
  iVar1 = (int)uVar11;
  if ((int)uVar10 == 0) {
    if (iVar1 == 0) {
      return;
    }
  }
  else {
    if (iVar1 == 0) {
      return;
    }
    uVar5 = uVar4;
    if (uVar3 < uVar4) {
      uVar5 = uVar3;
    }
    iVar1 = FUN_01bed842((int)uVar10,iVar1,uVar5);
    if (iVar1 == 0) {
      iVar1 = uVar3 - uVar4;
    }
    if (-1 < iVar1) {
      return;
    }
  }
  puVar6 = param_2 + -3;
  uVar8 = *param_2;
  uVar9 = param_2[1];
  uVar7 = param_2[2];
  *param_2 = *puVar6;
  param_2[1] = param_2[-2];
  param_2[2] = param_2[-1];
  puVar2 = puVar6;
  if (puVar6 != param_1) {
    do {
      uVar10 = FUN_019b00d0(puVar6[-2],puVar6[-1]);
      uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
      uVar11 = FUN_019b00d0(uVar9,uVar7);
      uVar4 = (uint)((ulonglong)uVar11 >> 0x20);
      iVar1 = (int)uVar11;
      puVar2 = puVar6;
      if ((int)uVar10 == 0) {
        if (iVar1 == 0) break;
      }
      else {
        if (iVar1 == 0) break;
        uVar5 = uVar4;
        if (uVar3 < uVar4) {
          uVar5 = uVar3;
        }
        iVar1 = FUN_01bed842((int)uVar10,iVar1,uVar5);
        if (iVar1 == 0) {
          iVar1 = uVar3 - uVar4;
        }
        if (-1 < iVar1) break;
      }
      puVar2 = puVar6 + -3;
      *puVar6 = *puVar2;
      puVar6[1] = puVar6[-2];
      puVar6[2] = puVar6[-1];
      puVar6 = puVar2;
    } while (puVar2 != param_1);
  }
  *puVar2 = uVar8;
  puVar2[1] = uVar9;
  puVar2[2] = uVar7;
  return;
}


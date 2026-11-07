// FUN_011591c8 @ 011591c8 size=304 calls_out=1 calls_in=1
// strings: 

int FUN_011591c8(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  code *pcVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  undefined4 *puVar9;
  undefined4 *puVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  undefined8 uVar13;
  
  puVar9 = (undefined4 *)*param_1;
  puVar10 = (undefined4 *)param_1[1];
  uVar12 = param_1[3];
  puVar11 = (undefined4 *)param_1[4];
  uVar8 = param_1[5];
  uVar13 = *(undefined8 *)(param_1 + 6);
  uVar1 = param_1[2];
  while( true ) {
    puVar6 = (undefined4 *)((ulonglong)uVar13 >> 0x20);
    iVar7 = (int)uVar13;
    if (iVar7 != 0) {
      iVar3 = (*(code *)puVar6[3])(iVar7);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((code *)*puVar6 != (code *)0x0) {
        (*(code *)*puVar6)(iVar7);
      }
      if (puVar6[1] != 0) {
        thunk_FUN_016d3fb4(iVar7);
      }
      param_1[6] = 0;
    }
    if (puVar9 == (undefined4 *)0x0 || puVar9 == puVar10) break;
    uVar2 = *puVar9;
    pcVar5 = *(code **)(puVar9[1] + 0xc);
    puVar9 = puVar9 + 8;
    uVar4 = *puVar11;
    *param_1 = puVar9;
    uVar13 = (*pcVar5)(uVar2,uVar1,uVar12,uVar4,uVar8);
    if ((int)uVar13 == 0) break;
    *(undefined8 *)(param_1 + 6) = uVar13;
  }
  iVar7 = param_1[8];
  if (iVar7 == 0) {
    return 0;
  }
  puVar9 = (undefined4 *)param_1[9];
  iVar3 = (*(code *)puVar9[3])(iVar7);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((code *)*puVar9 != (code *)0x0) {
    (*(code *)*puVar9)(iVar7);
  }
  if (puVar9[1] != 0) {
    thunk_FUN_016d3fb4(iVar7);
  }
  param_1[8] = 0;
  return 0;
}


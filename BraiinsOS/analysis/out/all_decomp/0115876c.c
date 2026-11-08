// FUN_0115876c @ 0115876c size=308 calls_out=1 calls_in=1
// strings: 

int FUN_0115876c(undefined4 *param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  code *pcVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined8 uVar12;
  
  puVar4 = (undefined4 *)*param_1;
  puVar6 = (undefined4 *)param_1[1];
  uVar10 = param_1[3];
  uVar11 = param_1[4];
  uVar9 = param_1[5];
  uVar12 = *(undefined8 *)(param_1 + 6);
  uVar1 = param_1[2];
  while( true ) {
    puVar8 = (undefined4 *)((ulonglong)uVar12 >> 0x20);
    iVar5 = (int)uVar12;
    if (iVar5 != 0) {
      iVar3 = (*(code *)puVar8[3])(iVar5);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((code *)*puVar8 != (code *)0x0) {
        (*(code *)*puVar8)(iVar5);
      }
      if (puVar8[1] != 0) {
        thunk_FUN_016d3fb4(iVar5);
      }
      param_1[6] = 0;
    }
    if (puVar4 == (undefined4 *)0x0 || puVar4 == puVar6) break;
    uVar2 = *puVar4;
    pcVar7 = *(code **)(puVar4[1] + 0xc);
    puVar4 = puVar4 + 8;
    *param_1 = puVar4;
    uVar12 = (*pcVar7)(uVar2,uVar1,uVar10,uVar9,uVar11);
    if ((int)uVar12 == 0) break;
    *(undefined8 *)(param_1 + 6) = uVar12;
  }
  iVar5 = param_1[8];
  if (iVar5 == 0) {
    return 0;
  }
  puVar4 = (undefined4 *)param_1[9];
  iVar3 = (*(code *)puVar4[3])(iVar5);
  if (iVar3 != 0) {
    return iVar3;
  }
  if ((code *)*puVar4 != (code *)0x0) {
    (*(code *)*puVar4)(iVar5);
  }
  if (puVar4[1] != 0) {
    thunk_FUN_016d3fb4(iVar5);
  }
  param_1[8] = 0;
  return 0;
}


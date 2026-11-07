// FUN_01159950 @ 01159950 size=316 calls_out=2 calls_in=1
// strings: 

int FUN_01159950(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  undefined8 uVar10;
  
  iVar7 = param_1[1];
  iVar9 = param_1[3];
  iVar8 = param_1[5];
  uVar10 = *(undefined8 *)(param_1 + 6);
  iVar1 = param_1[2];
  iVar2 = param_1[4];
  iVar6 = *param_1;
  while( true ) {
    puVar5 = (undefined4 *)((ulonglong)uVar10 >> 0x20);
    iVar4 = (int)uVar10;
    if (iVar4 != 0) {
      iVar3 = (*(code *)puVar5[3])(iVar4);
      if (iVar3 != 0) {
        return iVar3;
      }
      if ((code *)*puVar5 != (code *)0x0) {
        (*(code *)*puVar5)(iVar4);
      }
      if (puVar5[1] != 0) {
        thunk_FUN_016d3fb4(iVar4);
      }
      param_1[6] = 0;
    }
    if (iVar6 == 0 || iVar6 == iVar7) break;
    *param_1 = iVar6 + 0x14;
    uVar10 = FUN_011cf8a8(iVar6,iVar1,iVar9,iVar8,iVar2);
    if ((int)uVar10 == 0) break;
    *(undefined8 *)(param_1 + 6) = uVar10;
    iVar6 = iVar6 + 0x14;
  }
  iVar6 = param_1[8];
  if (iVar6 == 0) {
    return 0;
  }
  puVar5 = (undefined4 *)param_1[9];
  iVar1 = (*(code *)puVar5[3])(iVar6);
  if (iVar1 != 0) {
    return iVar1;
  }
  if ((code *)*puVar5 != (code *)0x0) {
    (*(code *)*puVar5)(iVar6);
  }
  if (puVar5[1] != 0) {
    thunk_FUN_016d3fb4(iVar6);
  }
  param_1[8] = 0;
  return 0;
}


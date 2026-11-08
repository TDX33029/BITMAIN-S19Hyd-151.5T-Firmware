// FUN_014fbbcc @ 014fbbcc size=212 calls_out=3 calls_in=5
// strings: 

void FUN_014fbbcc(undefined4 *param_1,int param_2,int *param_3)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  undefined8 uVar10;
  
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_2 + 0xc),param_2);
    }
    piVar6 = *(int **)(param_2 + 0xc);
    do {
      iVar3 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x14fbc9c);
      (*pcVar1)();
    }
    uVar9 = param_3[1];
    uVar8 = *(undefined4 *)(param_2 + 0x10);
    iVar3 = *param_3 + 8;
    uVar7 = (*(int **)(param_2 + 4))[1];
    if (uVar7 <= uVar9) {
      iVar4 = thunk_FUN_01bed842(**(int **)(param_2 + 4) + 8,iVar3,uVar7);
      if (iVar4 != 0) {
        uVar7 = 0;
      }
      uVar9 = uVar9 - uVar7;
      iVar3 = iVar3 + uVar7;
    }
    uVar10 = FUN_016bc0ec(iVar3,uVar9);
    param_1[6] = (int)uVar10;
    uVar5 = 2;
    param_1[3] = 3;
    param_1[4] = piVar6;
    param_1[5] = uVar8;
    param_1[7] = (int)((ulonglong)uVar10 >> 0x20);
  }
  *param_1 = uVar5;
  return;
}


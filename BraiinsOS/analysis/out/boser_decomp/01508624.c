// FUN_01508624 @ 01508624 size=216 calls_out=3 calls_in=25
// strings: 

void FUN_01508624(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  bool bVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  uint uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  if (param_2 == 0) {
    uVar4 = 0;
  }
  else {
    DataMemoryBarrier(0xb);
    if (*(int *)(param_2 + 0x14) != 0) {
      FUN_0154f894((undefined4 *)(param_2 + 0xc),param_2);
    }
    piVar5 = *(int **)(param_2 + 0xc);
    do {
      iVar3 = *piVar5;
      bVar2 = (bool)hasExclusiveAccess(piVar5);
    } while (!bVar2);
    *piVar5 = iVar3 + 1;
    if (iVar3 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x15086f8);
      (*pcVar1)();
    }
    param_3 = param_3 + 8;
    uVar7 = *(undefined4 *)(param_2 + 0x10);
    uVar6 = (*(int **)(param_2 + 4))[1];
    if (param_4 < uVar6) {
      uVar6 = 0;
    }
    else {
      iVar3 = thunk_FUN_01bed842(**(int **)(param_2 + 4) + 8,param_3,uVar6);
      if (iVar3 != 0) {
        uVar6 = 0;
      }
      param_3 = param_3 + uVar6;
    }
    uVar8 = FUN_016bc0ec(param_3,param_4 - uVar6);
    param_1[6] = (int)uVar8;
    uVar4 = 2;
    param_1[3] = 3;
    param_1[4] = piVar5;
    param_1[5] = uVar7;
    param_1[7] = (int)((ulonglong)uVar8 >> 0x20);
  }
  *param_1 = uVar4;
  return;
}


// FUN_012bba08 @ 012bba08 size=200 calls_out=2 calls_in=2
// strings: 

int FUN_012bba08(int *param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 *puVar5;
  int *piVar6;
  int iVar7;
  
  iVar7 = param_1[2];
  iVar4 = param_1[1];
  if (iVar7 != 0) {
    iVar3 = 0;
    iVar2 = iVar7 * 0x14;
    piVar6 = (int *)(iVar4 + 0x10);
    do {
      if ((*piVar6 == param_3) &&
         (iVar1 = thunk_FUN_01bed842(piVar6[-1],param_2,param_3), iVar1 == 0)) {
        return iVar3;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar2 + -0x14;
      piVar6 = piVar6 + 5;
    } while (iVar2 != 0);
  }
  if (iVar7 == *param_1) {
    FUN_0161d664(param_1);
    iVar4 = param_1[1];
  }
  param_1[2] = iVar7 + 1;
  puVar5 = (undefined4 *)(iVar4 + iVar7 * 0x14);
  *puVar5 = 0;
  puVar5[1] = 4;
  puVar5[2] = 0;
  puVar5[3] = param_2;
  puVar5[4] = param_3;
  return iVar7;
}


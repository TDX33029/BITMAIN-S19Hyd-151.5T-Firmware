// FUN_01a84a94 @ 01a84a94 size=236 calls_out=0 calls_in=2
// strings: 

int FUN_01a84a94(int *param_1,int *param_2,int *param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  bool bVar7;
  undefined4 local_98 [32];
  
  iVar6 = 0;
  uVar5 = 0;
  if (param_1[5] == 0) {
    uVar1 = param_1[1];
    uVar4 = param_1[4];
    if (uVar4 < uVar1) {
      param_1 = (int *)*param_1;
    }
    uVar5 = (uint)(uVar4 < uVar1);
    if (uVar4 < uVar1) {
      *param_3 = (int)param_1 + uVar4;
      param_3[1] = uVar1 - uVar4;
    }
  }
  uVar1 = param_2[6];
  if (uVar1 == 0) goto LAB_01a84b74;
  iVar6 = 0;
  do {
    local_98[iVar6 * 2] = 1;
    iVar2 = iVar6 + 1;
    local_98[iVar6 * 2 + 1] = 0;
    iVar6 = iVar2;
  } while (iVar2 != 0x10);
  iVar2 = *param_2;
  iVar6 = 0;
  if (iVar2 == 0) {
    uVar4 = param_2[3];
    if (uVar4 == 0) goto LAB_01a84b74;
    iVar2 = param_2[2];
  }
  else {
    bVar7 = iVar2 != 1;
    if (!bVar7) {
      iVar2 = param_2[5];
    }
    if (bVar7 || iVar2 != 0) goto LAB_01a84b74;
    uVar3 = param_2[4];
    if ((uint)param_2[3] <= uVar3) goto LAB_01a84b74;
    uVar4 = param_2[3] - uVar3;
    iVar2 = param_2[2] + uVar3;
  }
  iVar6 = 1;
  if (uVar4 < uVar1) {
    uVar1 = uVar4;
  }
  if (iVar2 == 0) {
    uVar1 = uVar4;
  }
  param_3[uVar5 * 2] = iVar2;
  (param_3 + uVar5 * 2)[1] = uVar1;
LAB_01a84b74:
  return iVar6 + uVar5;
}


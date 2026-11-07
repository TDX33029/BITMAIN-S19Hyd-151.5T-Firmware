// FUN_01298fcc @ 01298fcc size=308 calls_out=4 calls_in=2
// strings: 

void FUN_01298fcc(int *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  uVar3 = param_1[2];
  if (uVar3 < param_2) {
    uVar2 = param_2 - uVar3;
    uVar1 = uVar3;
    if (*param_1 - uVar3 < uVar2) {
      FUN_006520b4(param_1,uVar3,uVar2,4,0xc);
      uVar1 = param_1[2];
    }
    piVar6 = (int *)(param_1[1] + uVar1 * 0xc);
    if (1 < uVar2) {
      iVar5 = *param_3;
      iVar9 = param_3[1];
      iVar4 = ~uVar3 + param_2;
      iVar8 = param_3[2];
      uVar1 = (uVar1 + uVar2) - 1;
      piVar7 = piVar6;
      do {
        if (iVar5 == -0x80000000) {
          local_30 = -0x80000000;
        }
        else {
          FUN_006666fc(&local_30,iVar9,iVar8);
        }
        piVar6 = piVar7 + 3;
        iVar4 = iVar4 + -1;
        *piVar7 = local_30;
        piVar7[1] = iStack_2c;
        piVar7[2] = iStack_28;
        piVar7 = piVar6;
      } while (iVar4 != 0);
    }
    iVar4 = param_3[1];
    iVar5 = param_3[2];
    *piVar6 = *param_3;
    piVar6[1] = iVar4;
    piVar6[2] = iVar5;
    param_1[2] = uVar1 + 1;
  }
  else {
    param_1[2] = param_2;
    FUN_0129913c(param_1[1] + param_2 * 0xc,uVar3 - param_2);
    if (*param_3 != -0x80000000) {
      FUN_0134bd64(*param_3,param_3[1]);
      return;
    }
  }
  return;
}


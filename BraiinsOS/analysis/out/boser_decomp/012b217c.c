// FUN_012b217c @ 012b217c size=204 calls_out=1 calls_in=1
// strings: 

undefined4 FUN_012b217c(int param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int local_30;
  int iStack_2c;
  int iStack_28;
  
  iVar2 = *(int *)(param_1 + 8);
  if (iVar2 != param_2) {
    iVar6 = param_3[2];
    iVar7 = param_2 * 0xc + iVar2 * -0xc;
    iVar1 = *param_3;
    iVar8 = param_3[1];
    piVar5 = (int *)(*(int *)(param_1 + 4) + iVar2 * 0xc);
    do {
      if (iVar8 == iVar1) {
        return 0;
      }
      uVar3 = *(undefined4 *)(iVar6 + 4);
      uVar4 = *(undefined4 *)(iVar6 + 8);
      *param_3 = 1;
      FUN_012b31d4(&local_30,uVar3,uVar4);
      if (local_30 == -0x80000000) {
        return 0;
      }
      iVar7 = iVar7 + -0xc;
      *piVar5 = local_30;
      piVar5[1] = iStack_2c;
      piVar5[2] = iStack_28;
      *(int *)(param_1 + 8) = *(int *)(param_1 + 8) + 1;
      iVar1 = 1;
      piVar5 = piVar5 + 3;
    } while (iVar7 != 0);
  }
  return 1;
}


// FUN_0193812c @ 0193812c size=256 calls_out=2 calls_in=1
// strings: failed to read PEM from file | failed to read PEM from file | failed to read PEM from file | failed to read PEM from file

void FUN_0193812c(int param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  char *local_3c;
  undefined4 local_38;
  undefined4 local_30;
  int iStack_2c;
  int iStack_28;
  
  piVar4 = (int *)((uint)&local_50 | 4);
  if (*param_2 == 3) {
    iVar6 = param_2[1];
    iVar5 = param_2[2];
    FUN_019afae4(&local_30,param_3,param_4);
    iVar3 = *(int *)(param_1 + 0x14);
    iVar2 = *(int *)(param_1 + 0xc);
    *piVar4 = iStack_2c;
    piVar4[1] = iStack_28;
    piVar4[2] = iVar6;
    piVar4[3] = iVar5;
    local_38 = 0x1c;
    local_50 = local_30;
    local_3c = "failed to read PEM from file";
    if (iVar3 == iVar2) {
      FUN_015f5b48(param_1 + 0xc);
    }
  }
  else {
    iVar6 = *param_2;
    iVar7 = param_2[1];
    iVar2 = param_2[3];
    iVar3 = *(int *)(param_1 + 0x14);
    iVar5 = *(int *)(param_1 + 0xc);
    piVar4[2] = param_2[2];
    local_38 = 0x1c;
    *piVar4 = iVar6;
    piVar4[1] = iVar7;
    piVar4[3] = iVar2;
    local_50 = 0x80000001;
    local_3c = "failed to read PEM from file";
    if (iVar3 == iVar5) {
      FUN_015f5b48(param_1 + 0xc);
    }
  }
  puVar1 = (undefined4 *)(*(int *)(param_1 + 0x10) + iVar3 * 0x1c);
  *puVar1 = local_50;
  puVar1[1] = uStack_4c;
  puVar1[2] = uStack_48;
  puVar1[3] = local_44;
  puVar1[4] = uStack_40;
  puVar1[5] = local_3c;
  puVar1[6] = local_38;
  *(int *)(param_1 + 0x14) = iVar3 + 1;
  return;
}


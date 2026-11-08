// FUN_00b22508 @ 00b22508 size=156 calls_out=1 calls_in=59
// strings: 

void FUN_00b22508(int *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iVar7;
  
  iVar7 = param_2[4];
  iVar2 = param_1[2];
  if ((uint)(*param_1 - iVar2) < (uint)(iVar7 != -0x7ffffff9)) {
    FUN_006520b4(param_1,iVar2,(uint)(iVar7 != -0x7ffffff9),8,0x30);
    iVar2 = param_1[2];
  }
  iVar3 = iVar2;
  if (iVar7 != -0x7ffffff9) {
    iVar3 = iVar2 + 1;
    puVar1 = (undefined4 *)(param_1[1] + iVar2 * 0x30);
    uVar4 = param_2[1];
    uVar5 = param_2[2];
    uVar6 = param_2[3];
    *puVar1 = *param_2;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    puVar1[4] = iVar7;
    uVar4 = param_2[6];
    uVar5 = param_2[7];
    puVar1[5] = param_2[5];
    puVar1[6] = uVar4;
    puVar1[7] = uVar5;
    uVar4 = param_2[9];
    uVar5 = param_2[10];
    uVar6 = param_2[0xb];
    puVar1[8] = param_2[8];
    puVar1[9] = uVar4;
    puVar1[10] = uVar5;
    puVar1[0xb] = uVar6;
  }
  param_1[2] = iVar3;
  return;
}


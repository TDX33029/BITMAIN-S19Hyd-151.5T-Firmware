// FUN_010ab968 @ 010ab968 size=224 calls_out=1 calls_in=1
// strings: 

bool FUN_010ab968(int param_1,undefined2 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_2c;
  
  uVar8 = *(uint *)(param_1 + 0x28);
  if (uVar8 >> 0xf == 0) {
    local_2c = CONCAT22(local_2c._2_2_,param_2);
    iVar3 = *param_3;
    iVar1 = param_3[1];
    iVar4 = param_3[2];
    iVar6 = param_3[3];
    iVar7 = param_4[1];
    iVar9 = param_4[2];
    iVar10 = *param_4;
    iVar5 = param_4[3];
    if (uVar8 == *(uint *)(param_1 + 0x20)) {
      FUN_010bf440();
    }
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar8 * 0x30);
    *puVar2 = 0;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = iVar10;
    puVar2[4] = iVar7;
    puVar2[5] = iVar9;
    puVar2[6] = iVar5;
    puVar2[7] = iVar3;
    puVar2[8] = iVar1;
    puVar2[9] = iVar4;
    puVar2[10] = iVar6;
    puVar2[0xb] = local_2c;
    *(uint *)(param_1 + 0x28) = uVar8 + 1;
  }
  else {
    (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return uVar8 >> 0xf != 0;
}


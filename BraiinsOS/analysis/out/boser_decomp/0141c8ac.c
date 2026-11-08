// FUN_0141c8ac @ 0141c8ac size=204 calls_out=1 calls_in=2
// strings: 

bool FUN_0141c8ac(int param_1,undefined2 param_2,int *param_3,int *param_4)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_2c;
  
  uVar10 = *(uint *)(param_1 + 0x28);
  if (uVar10 >> 0xf == 0) {
    iVar2 = *param_3;
    iVar4 = param_3[1];
    iVar6 = param_3[2];
    iVar8 = param_3[3];
    iVar3 = *param_4;
    iVar5 = param_4[1];
    iVar7 = param_4[2];
    iVar9 = param_4[3];
    local_2c = CONCAT22(local_2c._2_2_,param_2);
    if (uVar10 == *(uint *)(param_1 + 0x20)) {
      FUN_01381550();
    }
    puVar1 = (undefined4 *)(*(int *)(param_1 + 0x24) + uVar10 * 0x30);
    *puVar1 = 0;
    puVar1[1] = uStack_54;
    puVar1[2] = uStack_50;
    puVar1[3] = iVar3;
    puVar1[4] = iVar5;
    puVar1[5] = iVar7;
    puVar1[6] = iVar9;
    puVar1[7] = iVar2;
    puVar1[8] = iVar4;
    puVar1[9] = iVar6;
    puVar1[10] = iVar8;
    puVar1[0xb] = local_2c;
    *(uint *)(param_1 + 0x28) = uVar10 + 1;
  }
  else {
    (**(code **)(*param_4 + 0x10))(param_4 + 3,param_4[1],param_4[2]);
    if (*param_3 != 0) {
      (**(code **)(*param_3 + 0x10))(param_3 + 3,param_3[1],param_3[2]);
    }
  }
  return uVar10 >> 0xf != 0;
}


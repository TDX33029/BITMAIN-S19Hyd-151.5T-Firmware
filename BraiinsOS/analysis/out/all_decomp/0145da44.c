// FUN_0145da44 @ 0145da44 size=228 calls_out=1 calls_in=10
// strings: 

bool FUN_0145da44(int param_1,undefined2 param_2,int *param_3,int *param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  int iVar11;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 local_28;
  
  uVar10 = *(uint *)(param_1 + 0x28);
  if (uVar10 >> 0xf == 0) {
    iVar11 = *param_3;
    iVar3 = param_3[1];
    iVar1 = param_3[2];
    iVar7 = param_3[3];
    iVar4 = *param_4;
    iVar5 = param_4[1];
    iVar6 = param_4[2];
    iVar8 = param_4[3];
    iVar9 = param_4[4];
    local_28 = CONCAT22(local_28._2_2_,param_2);
    if (uVar10 == *(uint *)(param_1 + 0x20)) {
      FUN_0102ce78();
    }
    puVar2 = (undefined4 *)(uVar10 * 0x34 + *(int *)(param_1 + 0x24));
    *puVar2 = 0;
    puVar2[1] = uStack_54;
    puVar2[2] = uStack_50;
    puVar2[3] = iVar4;
    puVar2[4] = iVar5;
    puVar2[5] = iVar6;
    puVar2[6] = iVar8;
    puVar2[7] = iVar9;
    puVar2[8] = iVar11;
    puVar2[9] = iVar3;
    puVar2[10] = iVar1;
    puVar2[0xb] = iVar7;
    puVar2[0xc] = local_28;
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


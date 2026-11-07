// FUN_0123ba54 @ 0123ba54 size=336 calls_out=4 calls_in=2
// strings: 

void FUN_0123ba54(int *param_1,uint *param_2)

{
  uint uVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint local_70;
  undefined4 *local_6c;
  undefined4 local_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  int local_50;
  int iStack_4c;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar7 = *param_2;
  *param_2 = 0x80000015;
  if (uVar7 == 0x80000015) {
    FUN_01a429c4(param_1,&DAT_0056ad38,0x10);
    return;
  }
  uVar4 = param_2[2];
  uVar6 = param_2[3];
  uVar1 = 0x15;
  if ((int)uVar7 < 0) {
    uVar1 = uVar7 ^ 0x80000000;
  }
  puVar3 = (uint *)((uint)&local_70 | 4);
  *puVar3 = param_2[1];
  puVar3[1] = uVar4;
  puVar3[2] = uVar6;
  local_70 = uVar7;
  if (uVar1 != 0x10) {
    if (uVar1 == 0x11) {
      local_60 = *local_6c;
      uStack_5c = local_6c[1];
      uStack_58 = local_6c[2];
      uStack_54 = local_6c[3];
      FUN_0124fbb4(&local_50);
      if (local_50 == 2) {
        piVar2 = (int *)((uint)&local_50 | 4);
        iVar5 = piVar2[1];
        iVar8 = piVar2[2];
        param_1[1] = *piVar2;
        param_1[2] = iVar5;
        param_1[3] = iVar8;
        *param_1 = 2;
      }
      else {
        *param_1 = local_50;
        param_1[1] = iStack_4c;
        param_1[2] = iStack_48;
        param_1[3] = iStack_44;
        param_1[4] = iStack_40;
        param_1[5] = iStack_3c;
        param_1[6] = local_38;
        param_1[7] = iStack_34;
        param_1[8] = iStack_30;
        param_1[9] = iStack_2c;
        param_1[10] = iStack_28;
        param_1[0xb] = iStack_24;
      }
      thunk_FUN_01be4678(local_6c);
      goto LAB_0123bb8c;
    }
    if (uVar1 != 0x12) {
      FUN_0124fbb4(&local_50,&local_70);
      if (local_50 == 2) {
        piVar2 = (int *)((uint)&local_50 | 4);
        iVar5 = piVar2[1];
        iVar8 = piVar2[2];
        param_1[1] = *piVar2;
        param_1[2] = iVar5;
        param_1[3] = iVar8;
        *param_1 = 2;
        return;
      }
      *param_1 = local_50;
      param_1[1] = iStack_4c;
      param_1[2] = iStack_48;
      param_1[3] = iStack_44;
      param_1[4] = iStack_40;
      param_1[5] = iStack_3c;
      param_1[6] = local_38;
      param_1[7] = iStack_34;
      param_1[8] = iStack_30;
      param_1[9] = iStack_2c;
      param_1[10] = iStack_28;
      param_1[0xb] = iStack_24;
      return;
    }
  }
  *param_1 = 2;
  param_1[1] = -0x80000000;
LAB_0123bb8c:
  if (uVar7 != 0x80000011) {
    FUN_012222e0(&local_70);
  }
  return;
}


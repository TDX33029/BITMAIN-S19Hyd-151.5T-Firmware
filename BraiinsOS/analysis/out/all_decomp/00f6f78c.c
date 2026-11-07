// FUN_00f6f78c @ 00f6f78c size=420 calls_out=4 calls_in=1
// strings: 

void FUN_00f6f78c(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  undefined8 *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  int local_68;
  undefined8 *local_64;
  int local_60;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int local_30;
  int local_2c;
  
  uVar7 = FUN_00fa42e8(param_2);
  if ((int)uVar7 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  if (param_2[10] == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (uint)(param_2[0xb] - param_2[10]) >> 3;
  }
  uVar4 = uVar3;
  if (uVar3 < 4) {
    uVar4 = 3;
  }
  uVar1 = 0;
  if (uVar3 == 0x1fffffff) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0);
  }
  iVar5 = uVar4 + 1;
  uVar3 = iVar5 * 8;
  if (0x7ffffffc < uVar3) {
LAB_00f6f844:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar1,uVar3);
  }
  if (uVar3 == 0) {
    puVar2 = (undefined8 *)&DAT_00000004;
    iVar5 = 0;
  }
  else {
    puVar2 = (undefined8 *)thunk_FUN_016d4a50(uVar3);
    if (puVar2 == (undefined8 *)0x0) {
      uVar1 = 4;
      goto LAB_00f6f844;
    }
  }
  *puVar2 = uVar7;
  local_60 = 1;
  local_58 = *param_2;
  uStack_54 = param_2[1];
  uStack_50 = param_2[2];
  uStack_4c = param_2[3];
  uStack_48 = param_2[4];
  uStack_44 = param_2[5];
  local_40 = param_2[6];
  uStack_3c = param_2[7];
  uStack_38 = param_2[8];
  uStack_34 = param_2[9];
  local_30 = param_2[10];
  local_2c = param_2[0xb];
  iVar6 = 0;
  local_68 = iVar5;
  local_64 = puVar2;
  while (uVar7 = FUN_00fa42e8(&local_58), (int)uVar7 != 0) {
    iVar5 = iVar6 + 1;
    if (iVar5 == local_68) {
      if (local_30 == 0) {
        uVar3 = 0;
      }
      else {
        uVar3 = (uint)(local_2c - local_30) >> 3;
      }
      FUN_00f991dc(&local_68,iVar5,uVar3 + 1,4,8);
      puVar2 = local_64;
    }
    puVar2[iVar6 + 1] = uVar7;
    local_60 = iVar6 + 2;
    iVar6 = iVar5;
  }
  *param_1 = local_68;
  param_1[1] = (int)local_64;
  param_1[2] = local_60;
  return;
}


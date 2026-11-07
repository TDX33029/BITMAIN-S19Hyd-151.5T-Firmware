// FUN_00f6fe64 @ 00f6fe64 size=280 calls_out=4 calls_in=1
// strings: 

void FUN_00f6fe64(int *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_50;
  undefined8 *local_4c;
  int local_48;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 local_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar4 = FUN_00fa4650(param_2);
  if ((int)uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    return;
  }
  puVar1 = (undefined8 *)thunk_FUN_016d4a50(0x20);
  if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(4,0x20);
  }
  local_48 = 1;
  *puVar1 = uVar4;
  local_50 = 4;
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  local_34 = param_2[3];
  uStack_30 = param_2[4];
  uStack_2c = param_2[5];
  uStack_28 = param_2[6];
  iVar3 = 0;
  local_4c = puVar1;
  while (uVar4 = FUN_00fa4650(&local_40), (int)uVar4 != 0) {
    iVar2 = iVar3 + 1;
    if (iVar2 == local_50) {
      FUN_00f991dc(&local_50,iVar2,1,4,8);
      puVar1 = local_4c;
    }
    puVar1[iVar3 + 1] = uVar4;
    local_48 = iVar3 + 2;
    iVar3 = iVar2;
  }
  *param_1 = local_50;
  param_1[1] = (int)local_4c;
  param_1[2] = local_48;
  return;
}


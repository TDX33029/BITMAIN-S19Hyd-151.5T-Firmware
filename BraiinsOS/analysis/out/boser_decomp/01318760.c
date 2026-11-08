// FUN_01318760 @ 01318760 size=268 calls_out=4 calls_in=5
// strings: 

void FUN_01318760(int *param_1,undefined4 *param_2)

{
  undefined8 *puVar1;
  int iVar2;
  int iVar3;
  undefined8 uVar4;
  int local_58;
  undefined8 *local_54;
  int local_50;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar4 = FUN_013182f8(param_2);
  if ((int)uVar4 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    puVar1 = (undefined8 *)thunk_FUN_01be5118(0x20);
    if (puVar1 == (undefined8 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x20);
    }
    local_50 = 1;
    *puVar1 = uVar4;
    local_58 = 4;
    local_48 = *param_2;
    uStack_44 = param_2[1];
    uStack_40 = param_2[2];
    uStack_3c = param_2[3];
    local_38 = param_2[4];
    uStack_34 = param_2[5];
    uStack_30 = param_2[6];
    uStack_2c = param_2[7];
    iVar3 = 0;
    local_54 = puVar1;
    while (uVar4 = FUN_013182f8(&local_48), (int)uVar4 != 0) {
      iVar2 = iVar3 + 1;
      if (iVar2 == local_58) {
        FUN_006520b4(&local_58,iVar2,1,4,8);
        puVar1 = local_54;
      }
      puVar1[iVar3 + 1] = uVar4;
      local_50 = iVar3 + 2;
      iVar3 = iVar2;
    }
    *param_1 = local_58;
    param_1[1] = (int)local_54;
    param_1[2] = local_50;
  }
  return;
}


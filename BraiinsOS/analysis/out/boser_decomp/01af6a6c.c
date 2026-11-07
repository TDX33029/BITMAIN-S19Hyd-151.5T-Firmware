// FUN_01af6a6c @ 01af6a6c size=224 calls_out=4 calls_in=2
// strings: 

void FUN_01af6a6c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 *puVar2;
  ulonglong uVar3;
  int local_48;
  undefined4 *local_44;
  int local_40;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  uVar3 = FUN_01aebeb0(param_2);
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
  }
  else {
    puVar2 = (undefined4 *)thunk_FUN_01be5118(0x10);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(4,0x10);
    }
    *puVar2 = (int)(uVar3 >> 0x20);
    local_40 = 1;
    local_48 = 4;
    local_38 = *param_2;
    uStack_34 = param_2[1];
    uStack_30 = param_2[2];
    uStack_2c = param_2[3];
    uStack_28 = param_2[4];
    local_44 = puVar2;
    while (iVar1 = local_40, uVar3 = FUN_01aebeb0(&local_38), (uVar3 & 1) != 0) {
      if (iVar1 == local_48) {
        FUN_006520b4(&local_48,iVar1,1,4,4);
        puVar2 = local_44;
      }
      puVar2[iVar1] = (int)(uVar3 >> 0x20);
      local_40 = iVar1 + 1;
    }
    *param_1 = local_48;
    param_1[1] = (int)local_44;
    param_1[2] = local_40;
  }
  return;
}


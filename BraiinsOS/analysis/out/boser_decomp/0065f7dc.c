// FUN_0065f7dc @ 0065f7dc size=484 calls_out=6 calls_in=0
// strings: 

void FUN_0065f7dc(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_60;
  undefined4 *local_5c;
  undefined1 local_58;
  undefined1 local_57;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined1 *puStack_48;
  undefined1 local_41;
  undefined *local_40 [2];
  uint local_38;
  undefined4 local_34;
  undefined1 auStack_2e [10];
  
  uVar5 = *param_2;
  param_1 = (undefined4 *)*param_1;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar1 = (*pcVar4)(uVar5,&DAT_004cfb6d,9);
  uVar3 = *param_1;
  local_58 = 1;
  local_57 = 0;
  local_5c = param_2;
  local_54 = uVar3;
  if (iVar1 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar5,"(",1);
      if (iVar1 == 0) {
        uVar2 = param_2[2];
        if ((uVar2 & 0x2000000) == 0) {
          if ((uVar2 & 0x4000000) == 0) {
            iVar1 = FUN_012fc81c(uVar3,local_40);
            local_58 = FUN_012fa378(param_2,1,1,0,(int)local_40 + iVar1,10 - iVar1);
          }
          else {
            local_58 = FUN_012fdbc0(&local_54,param_2);
          }
        }
        else {
          local_58 = FUN_012fd9d0(&local_54,param_2);
        }
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar5,"(\n",2);
      local_58 = 1;
      if (iVar1 == 0) {
        local_50 = *param_2;
        uStack_4c = param_2[1];
        local_41 = 1;
        puStack_48 = &local_41;
        local_38 = param_2[2];
        local_34 = param_2[3];
        local_40[1] = &DAT_01ce45f8;
        local_40[0] = (undefined *)&local_50;
        if ((local_38 & 0x2000000) == 0) {
          if ((local_38 & 0x4000000) == 0) {
            iVar1 = FUN_012fc81c(uVar3,auStack_2e);
            iVar1 = FUN_012fa378(local_40,1,1,0,auStack_2e + iVar1,10 - iVar1);
          }
          else {
            iVar1 = FUN_012fdbc0(&local_54,local_40);
          }
        }
        else {
          iVar1 = FUN_012fd9d0(&local_54,local_40);
        }
        if (iVar1 == 0) {
          local_58 = (**(code **)(local_40[1] + 0xc))(local_40[0],&DAT_005312e2,2);
        }
        else {
          local_58 = 1;
        }
      }
    }
  }
  local_60 = 1;
  FUN_01302aa0(&local_60);
  return;
}


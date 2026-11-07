// FUN_01438b5c @ 01438b5c size=400 calls_out=5 calls_in=0
// strings: 

void FUN_01438b5c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 local_50;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined1 *puStack_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar5 = *param_2;
  iVar3 = *param_1;
  pcVar4 = *(code **)(param_2[1] + 0xc);
  iVar1 = (*pcVar4)(uVar5,&DAT_0056ec7c,4);
  local_48 = 1;
  local_47 = 0;
  local_4c = param_2;
  if (iVar1 == 0) {
    iVar3 = iVar3 + 8;
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar1 = (*pcVar4)(uVar5,"(",1);
      if (iVar1 == 0) {
        uVar2 = param_2[2];
        if ((uVar2 & 0x2000000) == 0) {
          if ((uVar2 & 0x4000000) == 0) {
            local_48 = FUN_012fcf18(iVar3,param_2);
          }
          else {
            local_48 = FUN_012fa300(iVar3,param_2);
          }
        }
        else {
          local_48 = FUN_012fd958(iVar3,param_2);
        }
      }
    }
    else {
      iVar1 = (*pcVar4)(uVar5,"(\n",2);
      local_48 = 1;
      if (iVar1 == 0) {
        local_44 = *param_2;
        uStack_40 = param_2[1];
        local_35 = 1;
        puStack_3c = &local_35;
        local_30 = &DAT_01ce45f8;
        local_34 = &local_44;
        local_2c = param_2[2];
        local_28 = param_2[3];
        if ((local_2c & 0x2000000) == 0) {
          if ((local_2c & 0x4000000) == 0) {
            iVar1 = FUN_012fcf18(iVar3);
          }
          else {
            iVar1 = FUN_012fa300(iVar3);
          }
        }
        else {
          iVar1 = FUN_012fd958(iVar3,&local_34);
        }
        if (iVar1 == 0) {
          local_48 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
        }
        else {
          local_48 = 1;
        }
      }
    }
  }
  local_50 = 1;
  FUN_01302aa0(&local_50);
  return;
}


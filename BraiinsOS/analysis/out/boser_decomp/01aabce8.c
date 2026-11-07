// FUN_01aabce8 @ 01aabce8 size=468 calls_out=4 calls_in=0
// strings: 

void FUN_01aabce8(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  code *pcVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 *local_4c;
  undefined1 local_48;
  undefined1 local_47;
  undefined4 local_44;
  undefined4 local_40;
  undefined1 *local_3c;
  undefined1 local_35;
  undefined4 *local_34;
  undefined *local_30;
  undefined4 local_2c;
  undefined4 local_28;
  
  uVar6 = *param_2;
  uVar5 = *param_1;
  puVar4 = (undefined4 *)param_1[1];
  pcVar3 = *(code **)(param_2[1] + 0xc);
  iVar2 = (*pcVar3)(uVar6,&DAT_00531446,7);
  uVar1 = 1;
  local_4c = param_2;
  if (iVar2 == 0) {
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar2 = (*pcVar3)(uVar6,&DAT_005312da,3);
      uVar1 = 1;
      if (iVar2 == 0) {
        iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056ca80,4);
        uVar1 = 1;
        if (iVar2 == 0) {
          iVar2 = (**(code **)(param_2[1] + 0xc))(*param_2,0x5312dd,2);
          uVar1 = 1;
          if (iVar2 == 0) {
            uVar1 = FUN_012fbff4(uVar5,param_2);
          }
        }
      }
    }
    else {
      iVar2 = (*pcVar3)(uVar6,&DAT_005312df,3);
      uVar1 = 1;
      if (iVar2 == 0) {
        local_44 = *param_2;
        local_40 = param_2[1];
        local_2c = param_2[2];
        local_28 = param_2[3];
        local_3c = &local_35;
        local_34 = &local_44;
        local_35 = 1;
        local_30 = &DAT_01ce45f8;
        iVar2 = FUN_01302620(local_34,&DAT_0056ca80,4);
        if ((iVar2 == 0) && (iVar2 = FUN_01302620(&local_44,0x5312dd,2), iVar2 == 0)) {
          iVar2 = FUN_012fbff4(uVar5,&local_34);
          if (iVar2 == 0) {
            uVar1 = (**(code **)(local_30 + 0xc))(local_34,&DAT_005312e2,2);
          }
          else {
            uVar1 = 1;
          }
        }
      }
    }
  }
  local_47 = 1;
  local_48 = uVar1;
  local_34 = puVar4;
  FUN_01302c38(&local_4c,&DAT_0056fe10,8,&local_34,FUN_01aabee8);
  FUN_01302e1c();
  return;
}


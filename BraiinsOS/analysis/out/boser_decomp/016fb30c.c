// FUN_016fb30c @ 016fb30c size=476 calls_out=6 calls_in=0
// strings: Custom

void FUN_016fb30c(int *param_1,undefined4 *param_2)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  code *pcVar5;
  undefined4 uVar6;
  int local_54 [2];
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
  
  if (*param_1 == 0) {
    uVar6 = 6;
    pcVar3 = "Custom";
  }
  else {
    if (*param_1 == 1) {
      iVar4 = param_1[1];
      uVar6 = *param_2;
      pcVar5 = *(code **)(param_2[1] + 0xc);
      local_54[0] = iVar4;
      iVar1 = (*pcVar5)(uVar6,&DAT_0050da88,5);
      local_48 = 1;
      local_47 = 0;
      local_4c = param_2;
      if (iVar1 == 0) {
        if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
          iVar1 = (*pcVar5)(uVar6,"(",1);
          if (iVar1 == 0) {
            uVar2 = param_2[2];
            if ((uVar2 & 0x2000000) == 0) {
              if ((uVar2 & 0x4000000) == 0) {
                local_48 = FUN_012fd02c(local_54,param_2);
              }
              else {
                local_48 = FUN_012fdbc0(local_54,param_2);
              }
            }
            else {
              local_48 = FUN_012fdfb4(iVar4,param_2);
            }
          }
        }
        else {
          iVar1 = (*pcVar5)(uVar6,"(\n",2);
          local_48 = 1;
          if (iVar1 == 0) {
            local_44 = *param_2;
            uStack_40 = param_2[1];
            local_35 = 1;
            puStack_3c = &local_35;
            local_2c = param_2[2];
            local_28 = param_2[3];
            local_30 = &DAT_01ce45f8;
            local_34 = &local_44;
            if ((local_2c & 0x2000000) == 0) {
              if ((local_2c & 0x4000000) == 0) {
                iVar1 = FUN_012fd02c(local_54,&local_34);
              }
              else {
                iVar1 = FUN_012fdbc0(local_54,&local_34);
              }
            }
            else {
              iVar1 = FUN_012fdfb4(iVar4,&local_34);
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
      local_54[1] = 1;
      FUN_01302aa0(local_54 + 1);
      return;
    }
    uVar6 = 4;
    pcVar3 = &DAT_0056eb34;
  }
  FUN_012fb940(param_2,pcVar3,uVar6);
  return;
}


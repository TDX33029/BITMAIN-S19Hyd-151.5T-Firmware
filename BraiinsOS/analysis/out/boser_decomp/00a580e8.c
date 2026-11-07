// FUN_00a580e8 @ 00a580e8 size=356 calls_out=2 calls_in=2
// strings: Daily schedule should not have a day parameter | Weekly schedule requires a weekday (1-7; where 1=Monday; 7=Sunday) | Monthly schedule requires a day of month (1-28)event open/boser/boser/src/system_upgrade/autoupgrade.rs:519event open/boser/boser/src/system_upgrade/autoupgrade.rs:513event open/boser/boser/src/system_upgrade/autoupgrade.rs:533

void FUN_00a580e8(uint *param_1,char param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                 uint param_7)

{
  undefined *puVar1;
  char *pcVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uStack_24;
  uint uStack_20;
  uint local_1c;
  uint *local_18;
  code *local_14;
  
  uStack_24 = param_3;
  uStack_20 = param_4;
  if (param_3 < 0x18) {
    if (param_4 < 0x3c) {
      if (param_5 < 0x3c) {
        if (param_2 == '\0') {
          if (param_6 == 0) {
LAB_00a5818c:
            *(char *)(param_1 + 5) = param_2;
            *param_1 = param_6;
            param_1[1] = param_7;
            param_1[2] = param_3;
            param_1[3] = param_4;
            param_1[4] = param_5;
            return;
          }
          uVar4 = 0x2e;
          pcVar2 = "Daily schedule should not have a day parameter";
        }
        else if (param_2 == '\x01') {
          if ((param_6 & 1) != 0) {
            if (param_7 - 1 < 7) goto LAB_00a5818c;
            puVar1 = &DAT_005ac61d;
LAB_00a58228:
            local_1c = param_7;
            local_18 = &local_1c;
            goto LAB_00a5822c;
          }
          uVar4 = 0x42;
          pcVar2 = "Weekly schedule requires a weekday (1-7, where 1=Monday, 7=Sunday)";
        }
        else {
          if ((param_6 & 1) != 0) {
            if (param_7 - 1 < 0x1c) goto LAB_00a5818c;
            puVar1 = &DAT_005a774c;
            goto LAB_00a58228;
          }
          uVar4 = 0x2f;
          pcVar2 = 
          "Monthly schedule requires a day of month (1-28)event open/boser/boser/src/system_upgrade/autoupgrade.rs:519event open/boser/boser/src/system_upgrade/autoupgrade.rs:513event open/boser/boser/src/system_upgrade/autoupgrade.rs:533"
          ;
        }
        uVar3 = FUN_00667978(pcVar2,uVar4);
        goto LAB_00a5823c;
      }
      puVar1 = &DAT_0058e2c8;
      local_18 = (uint *)register0x00000054;
    }
    else {
      local_18 = &uStack_20;
      puVar1 = &DAT_005a8833;
    }
  }
  else {
    local_18 = &uStack_24;
    puVar1 = &DAT_0057c8ec;
  }
LAB_00a5822c:
  local_14 = FUN_012fd02c;
  uVar3 = FUN_00a57a98(puVar1,&local_18);
LAB_00a5823c:
  *param_1 = 2;
  param_1[1] = uVar3;
  return;
}


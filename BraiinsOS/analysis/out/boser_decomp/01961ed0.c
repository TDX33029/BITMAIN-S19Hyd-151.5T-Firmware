// FUN_01961ed0 @ 01961ed0 size=432 calls_out=1 calls_in=1
// strings: 

void FUN_01961ed0(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined4 uVar1;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar2;
  undefined *puVar3;
  undefined1 *local_20;
  undefined1 **local_1c;
  code *local_18;
  undefined1 **local_14;
  code *local_10;
  undefined1 *local_c;
  
  local_1c = &local_20;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    pcVar2 = 
    "empty string, expected a semver versionunexpected character after wildcard in version reqexcessive number of version comparators1 element in sequence"
    ;
    goto LAB_01961f2c;
  case 1:
    puVar3 = &DAT_005b66d5;
    break;
  case 2:
    local_c = *(undefined1 **)(param_1 + 4);
    puVar3 = &UNK_00574c66;
    goto LAB_01961fe4;
  case 3:
    local_c = *(undefined1 **)(param_1 + 4);
    puVar3 = &DAT_0059d83b;
LAB_01961fe4:
    local_20 = param_1 + 1;
    local_10 = FUN_019617f4;
    local_18 = (code *)&LAB_01961868;
    local_14 = &local_20;
    goto LAB_0196208c;
  case 4:
    local_20 = param_1 + 1;
    local_c = *(undefined1 **)(param_1 + 4);
    local_14 = &local_c;
    puVar3 = &DAT_005a8618;
    local_10 = (code *)&LAB_01961868;
    local_18 = FUN_019617f4;
    goto LAB_01962090;
  case 5:
    puVar3 = &DAT_005966dc;
    break;
  case 6:
    puVar3 = &DAT_005a17a0;
    break;
  case 7:
    puVar3 = &DAT_005bc31e;
    break;
  case 8:
    puVar3 = &DAT_00593f44;
    break;
  case 9:
    local_c = param_1 + 4;
    local_18 = (code *)&LAB_01961834;
    puVar3 = &DAT_00583b5f;
    goto LAB_01962084;
  case 10:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x32;
    pcVar2 = 
    "unexpected character after wildcard in version reqexcessive number of version comparators1 element in sequence"
    ;
    goto LAB_01962064;
  case 0xb:
    pcVar2 = "excessive number of version comparators1 element in sequence";
LAB_01961f2c:
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0xc);
    uVar1 = 0x27;
LAB_01962064:
                    /* WARNING: Could not recover jumptable at 0x0196206c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*UNRECOVERED_JUMPTABLE)(param_2,pcVar2,uVar1);
    return;
  }
  local_18 = FUN_019617f4;
  local_c = param_1 + 1;
LAB_01962084:
LAB_0196208c:
  local_1c = &local_c;
LAB_01962090:
  FUN_012fa178(param_2,param_3,puVar3,&local_1c);
  return;
}


// FUN_019675a0 @ 019675a0 size=788 calls_out=2 calls_in=0
// strings: 

void FUN_019675a0(char *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  code *UNRECOVERED_JUMPTABLE;
  char *pcVar4;
  undefined4 uVar5;
  ulonglong uVar6;
  char *local_38;
  int local_34;
  char acStack_30 [24];
  undefined1 *local_18;
  undefined1 *local_14;
  
  if (*param_1 == '\x03') {
    uVar6 = *(ulonglong *)(param_1 + 8);
    uVar2 = (uint)(uVar6 >> 0x20);
    if ((uVar2 & 0x7fffffff) < 0x7ff00000) {
      local_34 = FUN_01afb0f8(acStack_30);
      local_34 = local_34 - (int)acStack_30;
      local_38 = acStack_30;
    }
    else {
      local_38 = "inf";
      if (0x7fffffff < uVar2) {
        local_38 = "-inf4\x1e";
      }
      local_34 = 4;
      if (uVar2 < 0x80000000) {
        local_34 = 3;
      }
      if ((int)uVar6 != 0 || (uVar6 & 0xfffff00000000) != 0) {
        local_34 = 3;
        local_38 = "NaN";
      }
    }
    local_14 = &LAB_018a13b8;
    local_18 = (undefined1 *)&local_38;
    FUN_012fa178(*param_2,param_2[1],&DAT_005b92f9,&local_18);
    return;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case '\b':
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar4 = "Option valuenewtype struct";
    goto LAB_01963474;
  case '\t':
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar4 = "newtype struct";
    goto LAB_01963328;
  case '\n':
    uVar1 = *param_2;
    uVar5 = 8;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "sequencefileSizeShutdown!\x04";
    break;
  case '\v':
    uVar1 = *param_2;
    uVar5 = 3;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "mapunit variantnewtype varianttuple variantstruct variant";
    break;
  case '\f':
    uVar1 = *param_2;
    uVar5 = 4;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = &DAT_0056cb60;
    break;
  case '\r':
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar4 = "unit variantnewtype varianttuple variantstruct variant";
LAB_01963474:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar5 = 0xc;
    break;
  case '\x0e':
    uVar1 = *param_2;
    uVar5 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "newtype varianttuple variantstruct variant";
    break;
  case '\x0f':
    uVar1 = *param_2;
    uVar5 = 0xd;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "tuple variantstruct variant";
    break;
  case '\x10':
    uVar1 = *param_2;
    iVar3 = param_2[1];
    pcVar4 = "struct variant";
LAB_01963328:
    UNRECOVERED_JUMPTABLE = *(code **)(iVar3 + 0xc);
    uVar5 = 0xe;
    break;
  case '\x11':
    uVar1 = *param_2;
    pcVar4 = *(char **)(param_1 + 4);
    uVar5 = *(undefined4 *)(param_1 + 8);
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    break;
  default:
                    /* WARNING: Could not recover jumptable at 0x019675dc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0056d030,4);
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x01963484. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,pcVar4,uVar5);
  return;
}


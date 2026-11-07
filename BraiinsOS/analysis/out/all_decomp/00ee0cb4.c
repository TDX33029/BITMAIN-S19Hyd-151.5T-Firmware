// FUN_00ee0cb4 @ 00ee0cb4 size=464 calls_out=0 calls_in=1
// strings: 

int FUN_00ee0cb4(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  
  if (*param_1 != '\0') {
                    /* WARNING: Could not recover jumptable at 0x00ee0cd8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (**(code **)(param_3 + 0x10))(param_2,0x5a);
    return iVar4;
  }
  uVar6 = (uint)(byte)param_1[3];
  bVar3 = false;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[3]) {
  case '\0':
    break;
  default:
    uVar6 = (uint)(uVar6 != 3);
    break;
  case '\x02':
    uVar6 = 2;
    bVar3 = true;
    break;
  case '\x04':
  case '\x05':
    uVar6 = (uint)(uVar6 != 5);
  }
  cVar1 = param_1[2];
  cVar2 = param_1[1];
  UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
  if (cVar1 == '\x02') {
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x20);
    if (iVar4 != 0) {
      return 1;
    }
    uVar5 = 0x2b;
  }
  else {
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x2b);
    if (iVar4 != 0) {
      return 1;
    }
    if (cVar1 != '\x01') goto LAB_00ee0db0;
    uVar5 = 0x30;
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar5);
  if (iVar4 != 0) {
    return 1;
  }
LAB_00ee0db0:
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
  if (iVar4 != 0) {
    return 1;
  }
  if (uVar6 - 1 < 2) {
    if ((cVar2 == '\x01') && (iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x3a), iVar4 != 0)) {
      return 1;
    }
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
    if (iVar4 != 0) {
      return 1;
    }
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
    if (iVar4 != 0 || (bool)(bVar3 ^ 1)) {
      return iVar4;
    }
  }
  else if (!bVar3) {
    return 0;
  }
  if ((cVar2 == '\x01') && (iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x3a), iVar4 != 0)) {
    return 1;
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
  if (iVar4 == 0) {
                    /* WARNING: Could not recover jumptable at 0x00ee0e98. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
    return iVar4;
  }
  return 1;
}


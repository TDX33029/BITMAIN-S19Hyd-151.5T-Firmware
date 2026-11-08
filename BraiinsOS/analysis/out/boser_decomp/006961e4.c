// FUN_006961e4 @ 006961e4 size=476 calls_out=0 calls_in=1
// strings: 

int FUN_006961e4(char *param_1,undefined4 param_2,int param_3)

{
  char cVar1;
  char cVar2;
  bool bVar3;
  int iVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  uint uVar6;
  
  if (*param_1 != '\0') {
    UNRECOVERED_JUMPTABLE = *(code **)(param_3 + 0x10);
    uVar5 = 0x5a;
    goto LAB_00696208;
  }
  uVar6 = (uint)(byte)param_1[3];
  bVar3 = false;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(param_1[3]) {
  case '\0':
    break;
  default:
    iVar4 = uVar6 - 3;
    goto LAB_0069624c;
  case '\x02':
    uVar6 = 2;
    bVar3 = true;
    break;
  case '\x04':
  case '\x05':
    iVar4 = uVar6 - 5;
LAB_0069624c:
    uVar6 = 0;
    if (iVar4 != 0) {
      uVar6 = 1;
    }
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
LAB_006962b8:
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar5);
    if (iVar4 != 0) {
      return 1;
    }
  }
  else {
    iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x2b);
    if (iVar4 != 0) {
      return 1;
    }
    if (cVar1 == '\x01') {
      uVar5 = 0x30;
      goto LAB_006962b8;
    }
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
  if (iVar4 != 0) {
    return 1;
  }
  if (uVar6 - 1 < 2) {
    if (cVar2 == '\x01') {
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x3a);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
      if (iVar4 != 0 || !bVar3) {
        return iVar4;
      }
LAB_0069636c:
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x3a);
      if (iVar4 != 0) {
        return 1;
      }
    }
    else {
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
      if (iVar4 != 0) {
        return 1;
      }
      iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
      if (iVar4 != 0 || (bool)(bVar3 ^ 1)) {
        return iVar4;
      }
    }
  }
  else {
    if (!bVar3) {
      return 0;
    }
    if (cVar2 == '\x01') goto LAB_0069636c;
  }
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,0x30);
  if (iVar4 != 0) {
    return 1;
  }
  uVar5 = 0x30;
LAB_00696208:
                    /* WARNING: Could not recover jumptable at 0x00696210. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar4 = (*UNRECOVERED_JUMPTABLE)(param_2,uVar5);
  return iVar4;
}


// FUN_012bb408 @ 012bb408 size=320 calls_out=1 calls_in=1
// strings: 

bool FUN_012bb408(char *param_1,char *param_2)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  bool bVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  if (param_2 == (char *)0x0) {
    return false;
  }
  if (*param_1 != *param_2) {
    return false;
  }
  bVar5 = true;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case '\0':
    goto switchD_012bb430_caseD_0;
  case '\x01':
    uVar4 = (uint)(byte)param_2[1];
    uVar2 = (uint)(byte)param_1[1];
    break;
  default:
    if (*(int *)(param_1 + 0xc) != *(int *)(param_2 + 0xc)) {
      return false;
    }
    iVar3 = thunk_FUN_01bed842(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_2 + 8));
    goto LAB_012bb558;
  case '\x03':
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 != *(int *)(param_2 + 0xc)) {
      return false;
    }
    if (iVar3 == 0) {
      return true;
    }
    puVar7 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
    puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
    while( true ) {
      if (puVar6[1] != puVar7[1]) {
        return false;
      }
      iVar1 = thunk_FUN_01bed842(*puVar6,*puVar7);
      if (iVar1 != 0) break;
      puVar6 = puVar6 + 3;
      puVar7 = puVar7 + 3;
      iVar3 = iVar3 + -1;
      if (iVar3 == 0) {
        return true;
      }
    }
    return false;
  case '\x05':
    iVar3 = *(int *)(param_1 + 0xc);
    if (iVar3 == *(int *)(param_2 + 0xc)) {
      if (iVar3 == 0) {
        return true;
      }
      puVar7 = (undefined4 *)(*(int *)(param_2 + 8) + 4);
      puVar6 = (undefined4 *)(*(int *)(param_1 + 8) + 4);
      while ((puVar6[1] == puVar7[1] && (iVar1 = thunk_FUN_01bed842(*puVar6,*puVar7), iVar1 == 0)))
      {
        puVar6 = puVar6 + 3;
        puVar7 = puVar7 + 3;
        iVar3 = iVar3 + -1;
        if (iVar3 == 0) {
          return true;
        }
      }
    }
    return false;
  case '\x06':
    uVar4 = *(uint *)(param_2 + 4);
    uVar2 = *(uint *)(param_1 + 4);
  }
  iVar3 = uVar2 - uVar4;
LAB_012bb558:
  bVar5 = iVar3 == 0;
switchD_012bb430_caseD_0:
  return bVar5;
}


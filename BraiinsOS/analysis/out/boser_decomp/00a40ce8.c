// FUN_00a40ce8 @ 00a40ce8 size=1276 calls_out=6 calls_in=10
// strings: The operation completed successfully | The operation was cancelled | The request does not have valid authentication credentials | Operation is not implemented or not supported | Deadline expired before operation could complete | Some requested entity was not found

void FUN_00a40ce8(undefined4 *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  char *pcVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int iVar8;
  undefined2 uVar9;
  undefined4 uVar10;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 *local_38;
  undefined *local_34;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 uStack_25;
  
  uVar9 = 400;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 100)) {
  case 0:
    pcVar5 = "The operation completed successfully";
    uVar6 = 0x24;
    uVar9 = 200;
    break;
  default:
    goto switchD_00a40d08_caseD_1;
  case 2:
  case 0xd:
  case 0xf:
    uVar9 = 500;
    goto switchD_00a40d08_caseD_1;
  case 4:
    pcVar5 = "Deadline expired before operation could complete";
    uVar6 = 0x30;
    uVar9 = 0x1f8;
    break;
  case 5:
    pcVar5 = "Some requested entity was not found";
    uVar6 = 0x23;
    uVar9 = 0x194;
    break;
  case 6:
  case 10:
    uVar9 = 0x199;
switchD_00a40d08_caseD_1:
    pcVar5 = "The operation completed successfully";
    uVar6 = 0x24;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 100)) {
    case 1:
      uVar6 = 0x1b;
      pcVar5 = "The operation was cancelled";
      break;
    case 2:
      uVar6 = 0xd;
      pcVar5 = "Unknown error";
      break;
    case 3:
      pcVar5 = "Client specified an invalid argument";
      break;
    case 4:
      uVar6 = 0x30;
      pcVar5 = "Deadline expired before operation could complete";
      break;
    case 5:
      uVar6 = 0x23;
      pcVar5 = "Some requested entity was not found";
      break;
    case 6:
      uVar6 = 0x36;
      pcVar5 = "Some entity that we attempted to create already exists";
      break;
    case 7:
      uVar6 = 0x46;
      pcVar5 = "The caller does not have permission to execute the specified operation";
      break;
    case 8:
      uVar6 = 0x20;
      pcVar5 = "Some resource has been exhausted\a\x01\x01";
      break;
    case 9:
      uVar6 = 0x43;
      pcVar5 = "The system is not in a state required for the operation\'s execution";
      break;
    case 10:
      uVar6 = 0x19;
      pcVar5 = "The operation was aborted";
      break;
    case 0xb:
      uVar6 = 0x2c;
      pcVar5 = "Operation was attempted past the valid range";
      break;
    case 0xc:
      uVar6 = 0x2d;
      pcVar5 = "Operation is not implemented or not supported";
      break;
    case 0xd:
      uVar6 = 0xe;
      pcVar5 = "Internal error";
      break;
    case 0xe:
      pcVar5 = "The service is currently unavailable";
      break;
    case 0xf:
      uVar6 = 0x25;
      pcVar5 = "Unrecoverable data loss or corruption";
      break;
    case 0x10:
      uVar6 = 0x3a;
      pcVar5 = "The request does not have valid authentication credentials";
    }
    break;
  case 7:
    pcVar5 = "The caller does not have permission to execute the specified operation";
    uVar6 = 0x46;
    uVar9 = 0x193;
    break;
  case 8:
    pcVar5 = "Some resource has been exhausted\a\x01\x01";
    uVar6 = 0x20;
    uVar9 = 0x1ad;
    break;
  case 9:
    pcVar5 = "The system is not in a state required for the operation\'s execution";
    uVar6 = 0x43;
    uVar9 = 0x19c;
    break;
  case 0xc:
    pcVar5 = "Operation is not implemented or not supported";
    uVar6 = 0x2d;
    uVar9 = 0x1f5;
    break;
  case 0xe:
    pcVar5 = "The service is currently unavailable";
    uVar6 = 0x24;
    uVar9 = 0x1f7;
    break;
  case 0x10:
    pcVar5 = "The request does not have valid authentication credentials";
    uVar6 = 0x3a;
    uVar9 = 0x191;
  }
  local_2c = 0;
  local_30 = 0x60000020;
  local_34 = &DAT_01c0e3e4;
  local_38 = &local_44;
  local_3c = 0;
  local_40 = 1;
  local_44 = 0;
  iVar3 = FUN_012fb940(&local_38,pcVar5,uVar6);
  uVar2 = local_3c;
  uVar1 = local_40;
  uVar6 = local_44;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&uStack_25,&DAT_01c0e3fc,&DAT_01d30334);
  }
  iVar3 = *(int *)(param_2 + 0x60);
  if (iVar3 < 0) {
    uVar7 = 0;
LAB_00a411b8:
                    /* WARNING: Subroutine does not return */
    FUN_00664620(uVar7,iVar3);
  }
  uVar10 = *(undefined4 *)(param_2 + 0x5c);
  if (iVar3 == 0) {
    iVar4 = 1;
    iVar8 = 0;
  }
  else {
    uVar7 = 1;
    iVar4 = FUN_01298504(iVar3,1);
    if (iVar4 == 0) goto LAB_00a411b8;
    iVar8 = iVar3;
  }
  FUN_01bed4e2(iVar4,uVar10,iVar3);
  param_1[2] = uVar2;
  *(undefined2 *)(param_1 + 6) = uVar9;
  *param_1 = uVar6;
  param_1[1] = uVar1;
  param_1[3] = iVar8;
  param_1[4] = iVar4;
  param_1[5] = iVar3;
  FUN_005f6588(param_2);
  return;
}


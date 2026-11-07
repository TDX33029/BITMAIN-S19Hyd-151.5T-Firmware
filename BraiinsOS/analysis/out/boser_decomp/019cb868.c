// FUN_019cb868 @ 019cb868 size=564 calls_out=2 calls_in=0
// strings: Write/var/run/syslog/var/run/logunix socket paths not foundinternal error: literal should not be present in nested descriptioninternal error: closing bracket should be caught by the `if` statementfailed to write the buffered datainternal error: required modifier was not setoptional itemruntime-parsed format descriptions'first' iteminternal error: closing bracket should have been consumed by `parse_component`internal error: component part should have been consumed by `parse_component`opening bracketwhitespace after `first`whitespace after `optional` | Initialization

undefined4 FUN_019cb868(int *param_1,undefined4 *param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  code *pcVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  undefined1 *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  if (*param_1 == 0) {
    uVar3 = *param_2;
    iVar1 = param_2[1];
    pcVar4 = *(code **)(iVar1 + 0xc);
    iVar6 = (*pcVar4)(uVar3,"Initialization",0xe);
    if (iVar6 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar6 = (*pcVar4)(uVar3,"(",1);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = (**(code **)(param_1[2] + 0xc))(param_1[1],param_2);
      goto LAB_019cba6c;
    }
    iVar6 = (*pcVar4)(uVar3,"(\n",2);
    if (iVar6 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01ce45f8;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar3;
    local_3c = iVar1;
    local_30 = (undefined1 *)&local_40;
    iVar6 = (**(code **)(param_1[2] + 0xc))(param_1[1],&local_30);
  }
  else {
    if (*param_1 == 1) {
      uVar5 = *param_2;
      iVar6 = param_2[1];
      uVar3 = 5;
      pcVar4 = *(code **)(iVar6 + 0xc);
      pcVar2 = 
      "Write/var/run/syslog/var/run/logunix socket paths not foundinternal error: literal should not be present in nested descriptioninternal error: closing bracket should be caught by the `if` statementfailed to write the buffered datainternal error: required modifier was not setoptional itemruntime-parsed format descriptions\'first\' iteminternal error: closing bracket should have been consumed by `parse_component`internal error: component part should have been consumed by `parse_component`opening bracketwhitespace after `first`whitespace after `optional`"
      ;
    }
    else {
      uVar5 = *param_2;
      iVar6 = param_2[1];
      uVar3 = 2;
      pcVar4 = *(code **)(iVar6 + 0xc);
      pcVar2 = &DAT_00534240;
    }
    iVar1 = (*pcVar4)(uVar5,pcVar2,uVar3);
    if (iVar1 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar6 = (*pcVar4)(uVar5,"(",1);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = FUN_019a6b74(param_1 + 1,param_2);
      goto LAB_019cba6c;
    }
    iVar1 = (*pcVar4)(uVar5,"(\n",2);
    if (iVar1 != 0) {
      return 1;
    }
    local_38 = &local_31;
    local_2c = &DAT_01ce45f8;
    local_28 = param_2[2];
    local_24 = param_2[3];
    local_31 = 1;
    local_40 = uVar5;
    local_3c = iVar6;
    local_30 = (undefined1 *)&local_40;
    iVar6 = FUN_019a6b74(param_1 + 1,&local_30);
  }
  if (iVar6 != 0) {
    return 1;
  }
  iVar6 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
LAB_019cba6c:
  uVar3 = 1;
  if (iVar6 == 0) {
    uVar3 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
  }
  return uVar3;
}


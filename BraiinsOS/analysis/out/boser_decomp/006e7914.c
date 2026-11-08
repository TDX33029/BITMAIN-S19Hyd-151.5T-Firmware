// FUN_006e7914 @ 006e7914 size=772 calls_out=3 calls_in=0
// strings: InvalidFilesMapMissingOperatorsPartMissingMapPartNotUploadMissingFilesPayloadTooLarge | InvalidRequest

undefined4 FUN_006e7914(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  char cVar3;
  char *pcVar4;
  undefined4 uVar5;
  code *UNRECOVERED_JUMPTABLE;
  int iVar6;
  undefined4 local_40;
  int local_3c;
  undefined1 *local_38;
  undefined1 local_31;
  byte *local_30;
  undefined *local_2c;
  undefined4 local_28;
  undefined4 local_24;
  
  cVar3 = '\x03';
  if (0xd < *param_1) {
    cVar3 = *param_1 - 0xe;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar3) {
  case '\0':
    uVar1 = *param_2;
    iVar2 = param_2[1];
    UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0xc);
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar1,&DAT_00534240,2);
    if (iVar6 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) != 0) {
      iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar1,"(\n",2);
      if (iVar6 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (byte *)&local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar1;
      local_3c = iVar2;
      iVar6 = FUN_019a6b74(param_1 + 4,&local_30);
      goto LAB_006e7bec;
    }
    iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar1,"(",1);
    if (iVar6 != 0) {
      return 1;
    }
    iVar6 = FUN_019a6b74(param_1 + 4,param_2);
    goto LAB_006e7c10;
  case '\x01':
    uVar5 = *param_2;
    iVar6 = param_2[1];
    uVar1 = 0xe;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
    pcVar4 = "InvalidRequest";
    goto LAB_006e7a78;
  case '\x02':
    uVar5 = *param_2;
    iVar6 = param_2[1];
    uVar1 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(iVar6 + 0xc);
    pcVar4 = "InvalidFilesMapMissingOperatorsPartMissingMapPartNotUploadMissingFilesPayloadTooLarge"
    ;
LAB_006e7a78:
    iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar5,pcVar4,uVar1);
    if (iVar2 != 0) {
      return 1;
    }
    if ((*(byte *)((int)param_2 + 10) & 0x80) == 0) {
      iVar6 = (*UNRECOVERED_JUMPTABLE)(uVar5,"(",1);
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 4),param_2);
    }
    else {
      iVar2 = (*UNRECOVERED_JUMPTABLE)(uVar5,"(\n",2);
      if (iVar2 != 0) {
        return 1;
      }
      local_38 = &local_31;
      local_2c = &DAT_01ce45f8;
      local_30 = (byte *)&local_40;
      local_28 = param_2[2];
      local_24 = param_2[3];
      local_31 = 1;
      local_40 = uVar5;
      local_3c = iVar6;
      iVar6 = (**(code **)(*(int *)(param_1 + 8) + 0xc))(*(undefined4 *)(param_1 + 4),&local_30);
LAB_006e7bec:
      if (iVar6 != 0) {
        return 1;
      }
      iVar6 = (**(code **)(local_2c + 0xc))(local_30,&DAT_005312e2,2);
    }
LAB_006e7c10:
    uVar1 = 1;
    if (iVar6 == 0) {
      uVar1 = (**(code **)(param_2[1] + 0xc))(*param_2,&DAT_0053341b,1);
    }
LAB_006e7c34:
    return uVar1;
  case '\x03':
    local_30 = param_1;
    uVar1 = FUN_013032f4(param_2,&DAT_00567c48,0x10,&local_30,&LAB_006e7c8c);
    goto LAB_006e7c34;
  case '\x04':
    uVar1 = *param_2;
    uVar5 = 0x14;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "MissingOperatorsPartMissingMapPartNotUploadMissingFilesPayloadTooLarge";
    break;
  case '\x05':
    uVar1 = *param_2;
    uVar5 = 0xe;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "MissingMapPartNotUploadMissingFilesPayloadTooLarge";
    break;
  case '\x06':
    uVar1 = *param_2;
    uVar5 = 9;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "NotUploadMissingFilesPayloadTooLarge";
    break;
  case '\a':
    uVar1 = *param_2;
    uVar5 = 0xc;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "MissingFilesPayloadTooLarge";
    break;
  case '\b':
    uVar1 = *param_2;
    uVar5 = 0xf;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = "PayloadTooLarge";
    break;
  case '\t':
    uVar1 = *param_2;
    uVar5 = 0x10;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar4 = &UNK_00567a08;
  }
                    /* WARNING: Could not recover jumptable at 0x006e7b10. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (*UNRECOVERED_JUMPTABLE)(uVar1,pcVar4,uVar5);
  return uVar1;
}


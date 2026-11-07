// FUN_006bf43c @ 006bf43c size=336 calls_out=1 calls_in=0
// strings: 

void FUN_006bf43c(byte *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char cVar5;
  code *UNRECOVERED_JUMPTABLE;
  byte *local_14;
  byte **local_10;
  undefined1 *local_c;
  
  cVar5 = '\x03';
  if (0xd < *param_1) {
    cVar5 = *param_1 - 0xe;
  }
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(cVar5) {
  case '\0':
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_c = &LAB_006e1cd8;
    puVar4 = &DAT_00590e5f;
    goto LAB_006bf548;
  case '\x01':
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_c = &LAB_019cf5b8;
    puVar4 = &DAT_005aaf6f;
    goto LAB_006bf548;
  case '\x02':
    uVar1 = *param_2;
    uVar3 = param_2[1];
    local_c = &LAB_019cf5b8;
    puVar4 = &DAT_005a8816;
LAB_006bf548:
    local_14 = param_1 + 4;
    local_10 = &local_14;
    FUN_012fa178(uVar1,uVar3,puVar4,&local_10);
    return;
  case '\x03':
    uVar1 = *param_2;
    uVar3 = 0x16;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = 
    "Invalid multipart dataMissing \"operators\" partMissing \"map\" partIt\'s not an upload operationMissing filesPayload too large"
    ;
    break;
  case '\x04':
    uVar1 = *param_2;
    uVar3 = 0x18;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = 
    "Missing \"operators\" partMissing \"map\" partIt\'s not an upload operationMissing filesPayload too large"
    ;
    break;
  case '\x05':
    uVar1 = *param_2;
    uVar3 = 0x12;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "Missing \"map\" partIt\'s not an upload operationMissing filesPayload too large";
    break;
  case '\x06':
    uVar1 = *param_2;
    uVar3 = 0x1c;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "It\'s not an upload operationMissing filesPayload too large";
    break;
  case '\a':
    uVar1 = *param_2;
    uVar3 = 0xd;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "Missing filesPayload too large";
    break;
  case '\b':
    uVar1 = *param_2;
    uVar3 = 0x11;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = "Payload too large";
    break;
  case '\t':
    uVar1 = *param_2;
    uVar3 = 0x20;
    UNRECOVERED_JUMPTABLE = *(code **)(param_2[1] + 0xc);
    pcVar2 = &UNK_0056c488;
  }
                    /* WARNING: Could not recover jumptable at 0x006bf5b0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar1,pcVar2,uVar3);
  return;
}


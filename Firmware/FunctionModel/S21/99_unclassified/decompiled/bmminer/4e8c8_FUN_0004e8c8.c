// FUN_0004e8c8 @ 0004e8c8  size=408  callers=18
// program: bmminer


void FUN_0004e8c8(uint param_1,char *param_2)

{
  char *pcVar1;
  char acStack_2018 [8196];
  
  DAT_008c7048 = param_1;
  if (param_2 == (char *)0x0) {
    if (DAT_000be63c < 4) goto LAB_0004e9b0;
    if (param_1 < 0x16) {
      pcVar1 = (&PTR_s_STATUS_INIT_000a44fc)[param_1];
    }
    else {
      pcVar1 = (char *)0x0;
    }
    snprintf(acStack_2018,0x2000,"%s\n",pcVar1);
    FUN_0004948c(3,acStack_2018,0);
LAB_0004e940:
    if (param_1 == 3) goto LAB_0004e950;
  }
  else {
    if (3 < DAT_000be63c) {
      if (param_1 < 0x16) {
        pcVar1 = (&PTR_s_STATUS_INIT_000a44fc)[param_1];
      }
      else {
        pcVar1 = (char *)0x0;
      }
      snprintf(acStack_2018,0x2000,"%s: %s\n",pcVar1,param_2);
      FUN_0004948c(3,acStack_2018,0);
      goto LAB_0004e940;
    }
LAB_0004e9b0:
    if (param_1 == 3) {
      return;
    }
  }
  DAT_008c704c = param_1;
LAB_0004e950:
  switch(DAT_008c7048) {
  case 4:
  case 8:
  case 9:
  case 0xb:
  case 0xf:
    goto switchD_0004e958_caseD_4;
  case 5:
  case 7:
  case 10:
  case 0xd:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x15:
    FUN_0004e788(param_2);
    pthread_kill(DAT_00a590d8,10);
    return;
  case 6:
  case 0xc:
  case 0xe:
    FUN_0004e7fc(param_2);
switchD_0004e958_caseD_4:
    if (1 < DAT_000be63c) {
      snprintf(acStack_2018,0x2000,"%s: %s\n","stop_mining_waiting",param_2);
      FUN_0004948c(1,acStack_2018,0);
    }
    FUN_0004e6b0();
    FUN_0004e6e8();
    FUN_00065af4();
    FUN_00065b8c();
    FUN_0002ff68(1);
    do {
      sleep(1);
    } while( true );
  case 0x13:
  case 0x14:
    FUN_0004e6e8();
    return;
  default:
    return;
  }
}


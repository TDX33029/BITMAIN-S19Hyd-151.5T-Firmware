// FUN_0004d828 @ 0004d828  size=756  callers=1
// program: bmminer


void FUN_0004d828(int param_1)

{
  undefined4 uVar1;
  char *extraout_r1;
  char *pcVar2;
  int iVar3;
  char *pcVar4;
  uint uVar5;
  bool bVar6;
  char local_2058 [48];
  char acStack_2028 [8196];
  
  if (5 < DAT_008c7030) {
    return;
  }
  if (param_1 <= *(int *)(&DAT_000be8a0 + (DAT_008c7030 * 3 + (int)DAT_000be89c) * 4)) {
    return;
  }
  if (DAT_000be89c != (char *)0x0) {
    DAT_008c7030 = DAT_008c7030 + 1;
  }
  DAT_000be89c = (char *)(uint)(DAT_000be89c == (char *)0x0);
  if (3 < DAT_000be63c) {
    pcVar4 = DAT_000be89c;
    if (DAT_000be89c == (char *)0x0) {
      pcVar4 = "run";
    }
    if (DAT_000be89c != (char *)0x0) {
      pcVar4 = "off";
    }
    snprintf(acStack_2028,0x2000,"stable_test,next test index[%d],item[%d],action:%s,duration:[%d]",
             DAT_008c7030 + 3,(int)DAT_000be89c,pcVar4,
             *(int *)(&DAT_000be8a0 + (int)(DAT_000be89c + DAT_008c7030 * 3) * 4));
    FUN_0004948c(3,acStack_2028,0);
  }
  pcVar4 = DAT_000be89c;
  uVar5 = DAT_008c7030;
  while( true ) {
    iVar3 = uVar5 + 3;
    pcVar2 = (char *)0x2000;
    if (*(int *)(&DAT_000be8a0 + (int)(pcVar4 + uVar5 * 3) * 4) != 0) break;
    if (3 < DAT_000be63c) {
      pcVar2 = "off";
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "run";
      }
      snprintf(acStack_2028,0x2000,
               "stable_test,test index[%d],item[%d],action:%s,duration is 0,goto next test.",iVar3,
               (int)pcVar4,pcVar2);
      FUN_0004948c(3,acStack_2028,0);
      pcVar2 = extraout_r1;
      pcVar4 = DAT_000be89c;
      uVar5 = DAT_008c7030;
    }
    bVar6 = pcVar4 != (char *)0x0;
    if (bVar6) {
      DAT_000be89c = (char *)0x0;
      uVar5 = uVar5 + 1;
    }
    pcVar4 = (char *)(uint)!bVar6;
    if (bVar6) {
      DAT_008c7030 = uVar5;
    }
    else {
      DAT_000be89c = (char *)0x1;
    }
    if (3 < DAT_000be63c) {
      if (pcVar4 == (char *)0x0) {
        pcVar2 = "run";
      }
      if (pcVar4 != (char *)0x0) {
        pcVar2 = "off";
      }
      snprintf(acStack_2028,0x2000,"stable_test,next test index[%d],item[%d],action:%s,duration[%d]"
               ,uVar5 + 3,(int)pcVar4,pcVar2,*(int *)(&DAT_000be8a0 + (int)(pcVar4 + uVar5 * 3) * 4)
              );
      FUN_0004948c(3,acStack_2028,0);
      pcVar4 = DAT_000be89c;
      uVar5 = DAT_008c7030;
    }
  }
  if (pcVar4 == (char *)0x0) {
    snprintf(local_2058,0x30,"stable_test,run test %d",iVar3);
    FUN_0004d320(DAT_008c7030,DAT_000be89c);
    FUN_0004e7fc(local_2058);
  }
  else {
    snprintf(local_2058,0x30,"stable_test,off test %d",iVar3);
    FUN_0004e788(local_2058);
    sleep(10);
    if (*(int *)(&DAT_000be8a8 + DAT_008c7030 * 0xc) == 0) {
      uVar1 = 0;
    }
    else {
      uVar1 = 100;
    }
    FUN_000170ac(uVar1);
    if (3 < DAT_000be63c) {
      iVar3 = 0;
      if (*(int *)(&DAT_000be8a8 + DAT_008c7030 * 0xc) != 0) {
        iVar3 = 100;
      }
      snprintf(acStack_2028,0x2000,"stable_test,fan_pwm:%d",iVar3);
      FUN_0004948c(3,acStack_2028,0);
    }
  }
  FUN_0004bd34(&DAT_00a6c8a0);
  return;
}


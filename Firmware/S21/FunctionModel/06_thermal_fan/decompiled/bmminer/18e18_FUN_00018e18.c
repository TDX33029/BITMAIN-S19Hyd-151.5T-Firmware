// FUN_00018e18 @ 00018e18  size=676  callers=2
// program: bmminer


void FUN_00018e18(int param_1,int param_2)

{
  char *param4;
  char *param5;
  int iVar1;
  int iVar2;
  size_t sVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int local_224c;
  char *apcStack_223c [4];
  undefined *local_222c;
  char acStack_2228 [512];
  char acStack_2028 [8196];
  
  apcStack_223c[0] = "pic";
  apcStack_223c[1] = &DAT_00099da8;
  apcStack_223c[2] = &DAT_00099dac;
  apcStack_223c[3] = "ctrlboard";
  local_222c = &DAT_00099dbc;
  memset(acStack_2228,0,0x200);
  if (DAT_000bfb78 == (char *)0x0) {
    iVar1 = FUN_00017ec4();
    if (iVar1 < 9) {
      sVar3 = 0x25;
    }
    else {
      iVar1 = FUN_00017ec4();
      sVar3 = iVar1 * 4 + 5;
    }
    DAT_000bfb78 = malloc(sVar3);
  }
  if (DAT_000bfb7c == (char *)0x0) {
    iVar1 = FUN_00017ec4();
    if (iVar1 < 9) {
      sVar3 = 0x25;
    }
    else {
      iVar1 = FUN_00017ec4();
      sVar3 = iVar1 * 4 + 5;
    }
    DAT_000bfb7c = malloc(sVar3);
  }
  pthread_mutex_lock((pthread_mutex_t *)&DAT_000bfabc);
  iVar1 = FUN_00018d1c();
  switch(iVar1) {
  case 0:
    local_224c = FUN_0002a5bc();
    break;
  case 1:
  case 2:
    local_224c = FUN_00017ec4();
    break;
  case 3:
    local_224c = FUN_0002adc0();
    break;
  case 4:
    local_224c = 8;
    goto LAB_00018ea8;
  default:
    iVar5 = -1;
    iVar1 = iVar1 << 2;
    iVar6 = -1;
    goto LAB_00018f38;
  }
  if (local_224c < 1) {
    iVar5 = -1;
    iVar1 = iVar1 << 2;
    iVar6 = -1;
  }
  else {
LAB_00018ea8:
    iVar4 = 0;
    iVar1 = iVar1 * 4;
    iVar7 = 0;
    iVar6 = 0;
    iVar5 = 0;
    do {
      iVar7 = iVar7 + 1;
      iVar2 = sprintf(DAT_000bfb78 + iVar5,"%03d-",
                      (int)*(short *)(*(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + iVar1) + iVar4
                                     + 2));
      iVar5 = iVar5 + iVar2;
      iVar2 = *(int *)(*(int *)(DAT_000bfab8 + param_1 * 4) + iVar1) + iVar4;
      iVar4 = iVar4 + 6;
      iVar2 = sprintf(DAT_000bfb7c + iVar6,"%03d-",(int)*(short *)(iVar2 + 4));
      iVar6 = iVar6 + iVar2;
    } while (iVar7 < local_224c);
    iVar6 = iVar6 + -1;
    iVar5 = iVar5 + -1;
  }
LAB_00018f38:
  param5 = DAT_000bfb7c;
  param4 = DAT_000bfb78;
  DAT_000bfb7c[iVar6] = ' ';
  param4[iVar5] = ' ';
  sprintf(acStack_2228,"chain %d %s temp: %s, failure:%s",param_1,
          *(char **)((int)apcStack_223c + iVar1),param4,param5);
  if (DAT_000bfb80 == 0) {
    DAT_000bfb80 = FUN_000856dc("bmminer_temp");
  }
  FUN_000875a0(DAT_000bfb80,"temperature/temperature.c",0x19,"dump_temp_info",0xe,0x42b,0x14,"%s",
               acStack_2228);
  if ((param_2 != 0) && (3 < DAT_000be63c)) {
    snprintf(acStack_2028,0x2000,"%s",acStack_2228);
    FUN_0004948c(3,acStack_2028,0);
  }
  pthread_mutex_unlock((pthread_mutex_t *)&DAT_000bfabc);
  return;
}


// FUN_0002b8ec @ 0002b8ec  size=692  callers=2
// program: cgminer


void FUN_0002b8ec(undefined4 *param_1,undefined4 param_2)

{
  void *__ptr;
  void *__ptr_00;
  char *param2;
  char *param3;
  char *param4;
  void *__ptr_01;
  void *__ptr_02;
  char *param5;
  size_t __size;
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  undefined4 local_4c8;
  undefined4 uStack_4c4;
  undefined4 uStack_4c0;
  undefined4 uStack_4bc;
  undefined4 local_4b8;
  undefined4 uStack_4b4;
  undefined4 uStack_4b0;
  undefined4 uStack_4ac;
  undefined4 local_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 local_49c;
  undefined4 uStack_498;
  undefined4 local_494;
  undefined4 local_490;
  undefined4 local_48c;
  undefined4 local_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 local_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 local_468 [16];
  char acStack_428 [1028];
  
  if (DAT_00068b18 == (FILE *)0x0) {
    DAT_00068b18 = fopen64("/nvdata/worklog.txt","wb");
  }
  memset(acStack_428,0,0x400);
  local_49c = 0;
  uStack_498 = 0;
  local_494 = 0;
  local_490 = 0;
  local_48c = 0;
  puVar4 = local_468;
  puVar6 = param_1;
  do {
    puVar5 = puVar6;
    puVar6 = puVar5 + 4;
    uVar1 = puVar5[1];
    uVar2 = puVar5[2];
    uVar3 = puVar5[3];
    *puVar4 = *puVar5;
    puVar4[1] = uVar1;
    puVar4[2] = uVar2;
    puVar4[3] = uVar3;
    puVar4 = puVar4 + 4;
  } while (puVar6 != param_1 + 0x10);
  local_4c8 = param_1[0x20];
  uStack_4c4 = param_1[0x21];
  uStack_4c0 = param_1[0x22];
  uStack_4bc = param_1[0x23];
  local_4b8 = param_1[0x24];
  uStack_4b4 = param_1[0x25];
  uStack_4b0 = param_1[0x26];
  uStack_4ac = param_1[0x27];
  local_4a8 = *puVar6;
  uStack_4a4 = puVar5[5];
  uStack_4a0 = puVar5[6];
  local_488 = param_1[0x30];
  uStack_484 = param_1[0x31];
  uStack_47c = param_1[0x33];
  uStack_480 = param_1[0x32];
  local_478 = param_1[0x34];
  uStack_474 = param_1[0x35];
  uStack_470 = param_1[0x36];
  uStack_46c = param_1[0x37];
  FUN_00027834(local_468,0x40);
  FUN_00027834(&local_4c8,0x20);
  FUN_00027834(&local_4a8,0xc);
  FUN_00027834(&local_488,0x20);
  __ptr = (void *)FUN_0001fac8(param_1,0x80);
  __ptr_00 = (void *)FUN_0001fac8(local_468,0x40);
  param2 = (char *)FUN_0001fac8(&local_4c8,0x20);
  param3 = (char *)FUN_0001fac8(&local_4a8,0xc);
  param4 = (char *)FUN_0001fac8(param_2,4);
  __ptr_01 = (void *)FUN_0001fac8(param_2,5);
  __ptr_02 = (void *)FUN_0001fac8(&local_488,0x20);
  param5 = (char *)FUN_0001fac8(param_1 + 0x6f,4);
  sprintf(acStack_428,"midstate %s data %s nonce %s version %s \r\n",param2,param3,param4,param5);
  __size = strlen(acStack_428);
  fwrite(acStack_428,__size,1,DAT_00068b18);
  fflush(DAT_00068b18);
  if (__ptr != (void *)0x0) {
    free(__ptr);
  }
  if (__ptr_00 != (void *)0x0) {
    free(__ptr_00);
  }
  if (param2 != (char *)0x0) {
    free(param2);
  }
  if (param3 != (char *)0x0) {
    free(param3);
  }
  if (param4 != (char *)0x0) {
    free(param4);
  }
  if (__ptr_01 != (void *)0x0) {
    free(__ptr_01);
  }
  if (__ptr_02 != (void *)0x0) {
    free(__ptr_02);
  }
  if (param5 != (char *)0x0) {
    free(param5);
  }
  return;
}


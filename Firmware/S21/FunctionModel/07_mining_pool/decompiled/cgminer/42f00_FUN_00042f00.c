// FUN_00042f00 @ 00042f00  size=328  callers=0
// program: cgminer


undefined4 FUN_00042f00(void)

{
  tm *ptVar1;
  int iVar2;
  undefined4 uVar3;
  time_t atStack_b4 [2];
  undefined1 auStack_ac [32];
  undefined1 auStack_8c [32];
  char acStack_6c [40];
  char acStack_44 [60];
  
  memset(acStack_6c,0,0x28);
  memset(acStack_44,0,0x3b);
  memset(auStack_8c,0,0x20);
  FUN_000206d8(atStack_b4);
  ptVar1 = localtime(atStack_b4);
  snprintf(acStack_6c,0x28,"[%d-%02d-%02d %02d:%02d:%02d]",ptVar1->tm_year + 0x76c,
           ptVar1->tm_mon + 1,ptVar1->tm_mday,ptVar1->tm_hour,ptVar1->tm_min,ptVar1->tm_sec);
  snprintf(acStack_44,0x3b,"%s%s","BITMAIN_OPENSOURCE",acStack_6c);
  FUN_0001ea74(acStack_44,0x3b,auStack_8c);
  FUN_0001ea74(auStack_8c,0x20,auStack_ac);
  iVar2 = FUN_00042630(auStack_ac,0x20);
  if (iVar2 == 0) {
    FUN_0003d1f0();
    return 1;
  }
  if (((DAT_00072da0 == '\0') && (DAT_000686f0 == '\0')) && (DAT_00067848 < 3)) {
    return 0;
  }
  uVar3 = FUN_00042eb8();
  return uVar3;
}


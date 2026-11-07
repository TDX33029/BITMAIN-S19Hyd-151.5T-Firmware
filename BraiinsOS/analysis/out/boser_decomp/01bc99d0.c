// FUN_01bc99d0 @ 01bc99d0 size=1404 calls_out=14 calls_in=1
// strings: 

undefined8 FUN_01bc99d0(int param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  undefined1 auStack_9ac [40];
  undefined1 auStack_984 [40];
  undefined1 auStack_95c [40];
  undefined1 auStack_934 [40];
  undefined1 auStack_90c [40];
  undefined1 auStack_8e4 [40];
  undefined1 auStack_8bc [40];
  undefined1 auStack_894 [40];
  undefined1 auStack_86c [40];
  undefined1 auStack_844 [40];
  undefined1 auStack_81c [40];
  undefined1 auStack_7f4 [40];
  undefined1 auStack_7cc [40];
  undefined1 auStack_7a4 [40];
  undefined1 auStack_77c [80];
  undefined1 auStack_72c [40];
  undefined1 auStack_704 [40];
  undefined1 auStack_6dc [40];
  undefined1 auStack_6b4 [40];
  undefined1 auStack_68c [160];
  undefined1 auStack_5ec [160];
  undefined1 auStack_54c [160];
  undefined1 auStack_4ac [160];
  undefined1 auStack_40c [160];
  undefined1 auStack_36c [160];
  undefined1 auStack_2cc [160];
  char acStack_22c [256];
  char acStack_12c [256];
  int local_2c;
  
  local_2c = DAT_01d53560;
  FUN_01bc93a8(acStack_22c,param_2,&PTR_01d3b2b0,0);
  FUN_01bc93a8(acStack_12c,param_4);
  FUN_01bc8f18(auStack_72c,param_3);
  FUN_01bc7bb8(auStack_7cc,param_3);
  FUN_01bc7bb8(auStack_7a4,param_3 + 0x28);
  FUN_01bc7bb8(auStack_77c,param_3 + 0x50);
  FUN_01bc8fd8(auStack_90c,auStack_7cc);
  FUN_01bc8f7c(auStack_7cc,auStack_90c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_72c);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_68c,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_68c);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_5ec,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_5ec);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_54c,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_54c);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_4ac,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_4ac);
  iVar2 = 0xff;
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_40c,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_40c);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_36c,auStack_86c);
  FUN_01bc925c(auStack_90c,auStack_7cc,auStack_36c);
  FUN_01bc8f7c(auStack_86c,auStack_90c);
  FUN_01bc8f18(auStack_2cc,auStack_86c);
  FUN_01bc99bc(param_1);
  FUN_01bc9984(param_1 + 0x28);
  FUN_01bc9984(param_1 + 0x50);
  while ((acStack_22c[iVar2] == '\0' && (acStack_12c[iVar2] == '\0'))) {
    bVar3 = iVar2 == 0;
    iVar2 = iVar2 + -1;
    if (bVar3) goto LAB_01bc9c24;
  }
  for (; iVar2 != -1; iVar2 = iVar2 + -1) {
    FUN_01bc8fd8(auStack_90c,param_1);
    iVar1 = (int)acStack_22c[iVar2];
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        FUN_01bc8f7c(auStack_86c,auStack_90c);
        iVar1 = (-iVar1 >> 1) * 0xa0;
        FUN_01bc88a0(auStack_90c,auStack_844,auStack_86c);
        FUN_01bc895c(auStack_8e4,auStack_844,auStack_86c);
        FUN_01bc7bec(auStack_95c,auStack_90c,auStack_704 + iVar1);
        FUN_01bc7bec(auStack_984,auStack_8e4,auStack_72c + iVar1);
        FUN_01bc7bec(auStack_934,auStack_6b4 + iVar1,auStack_7f4);
        FUN_01bc7bec(auStack_9ac,auStack_81c,auStack_6dc + iVar1);
        FUN_01bc88a0(auStack_894,auStack_9ac);
        FUN_01bc895c(auStack_90c,auStack_95c,auStack_984);
        FUN_01bc88a0(auStack_8e4,auStack_95c,auStack_984);
        FUN_01bc87cc(auStack_95c,auStack_894);
        FUN_01bc895c(auStack_8bc,auStack_95c,auStack_934);
        FUN_01bc88a0(auStack_894,auStack_95c,auStack_934);
      }
    }
    else {
      FUN_01bc8f7c(auStack_86c,auStack_90c);
      FUN_01bc925c(auStack_90c,auStack_86c,auStack_72c + (iVar1 >> 1) * 0xa0);
    }
    iVar1 = (int)acStack_12c[iVar2];
    if (iVar1 < 1) {
      if (iVar1 != 0) {
        FUN_01bc8f7c(auStack_86c,auStack_90c);
        iVar1 = (-iVar1 >> 1) * 0x78;
        FUN_01bc88a0(auStack_90c,auStack_844,auStack_86c);
        FUN_01bc895c(auStack_8e4,auStack_844,auStack_86c);
        FUN_01bc7bec(auStack_95c,auStack_90c,&UNK_00563a30 + iVar1);
        FUN_01bc7bec(auStack_984,auStack_8e4,&DAT_00563a08 + iVar1);
        FUN_01bc7bec(auStack_934,&UNK_00563a58 + iVar1,auStack_7f4);
        FUN_01bc88a0(auStack_894,auStack_81c);
        FUN_01bc895c(auStack_90c,auStack_95c,auStack_984);
        FUN_01bc88a0(auStack_8e4,auStack_95c,auStack_984);
        FUN_01bc87cc(auStack_95c,auStack_894);
        FUN_01bc895c(auStack_8bc,auStack_95c,auStack_934);
        FUN_01bc88a0(auStack_894,auStack_95c,auStack_934);
      }
    }
    else {
      FUN_01bc8f7c(auStack_86c,auStack_90c);
      FUN_01bc9120(auStack_90c,auStack_86c,&DAT_00563a08 + (iVar1 >> 1) * 0x78);
    }
    FUN_01bc7bec(param_1,auStack_90c,auStack_894);
    FUN_01bc7bec(param_1 + 0x28,auStack_8e4,auStack_8bc);
    FUN_01bc7bec(param_1 + 0x50,auStack_8bc,auStack_894);
  }
LAB_01bc9c24:
  if (local_2c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


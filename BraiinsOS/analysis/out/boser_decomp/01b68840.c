// FUN_01b68840 @ 01b68840 size=1332 calls_out=21 calls_in=1
// strings: 

void FUN_01b68840(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,int param_8)

{
  undefined4 uVar1;
  undefined4 extraout_r1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined8 uVar6;
  undefined4 uVar7;
  undefined1 auStack_b04 [40];
  undefined1 auStack_adc [40];
  undefined1 auStack_ab4 [40];
  undefined1 auStack_a8c [40];
  undefined1 auStack_a64 [40];
  undefined1 auStack_a3c [40];
  undefined1 auStack_a14 [40];
  undefined1 auStack_9ec [120];
  undefined1 auStack_974 [40];
  undefined1 auStack_94c [40];
  undefined1 auStack_924 [40];
  undefined1 auStack_8fc [40];
  undefined1 auStack_8d4 [40];
  undefined1 auStack_8ac [40];
  undefined1 auStack_884 [40];
  undefined1 auStack_85c [40];
  undefined1 auStack_834 [40];
  undefined1 auStack_80c [160];
  undefined1 auStack_76c [160];
  undefined1 auStack_6cc [160];
  undefined1 auStack_62c [160];
  undefined1 auStack_58c [160];
  undefined1 auStack_4ec [160];
  undefined1 auStack_44c [160];
  undefined1 auStack_3ac [160];
  undefined1 auStack_30c [160];
  undefined1 auStack_26c [64];
  char acStack_22c [256];
  char acStack_12c [256];
  uint local_2c;
  
  local_2c = DAT_01d53560;
  uVar6 = FUN_01b38880(auStack_9ec);
  uVar2 = (undefined4)((ulonglong)uVar6 >> 0x20);
  uVar1 = 0;
  if ((int)uVar6 == 0) goto LAB_01b68b1c;
  if (param_8 == 0) {
    param_8 = 0x20;
    uVar1 = 0;
    uVar2 = 0;
    param_7 = param_3;
    param_3 = param_2;
    param_2 = param_5;
    uVar7 = param_6;
  }
  else {
    uVar7 = 0x20;
    uVar1 = param_5;
    uVar2 = param_6;
  }
  FUN_01b662a4(auStack_26c,param_7,param_8,param_3,0x20,param_2,uVar7,uVar1,uVar2);
  FUN_01b391f8(auStack_26c);
  FUN_01b221ac(auStack_b04,auStack_9ec);
  FUN_01b2233c(auStack_9ec,auStack_b04);
  FUN_01b221ac(auStack_b04,auStack_974);
  FUN_01b2233c(auStack_974,auStack_b04);
  FUN_01b0d664(acStack_22c,auStack_26c);
  FUN_01b0d664(acStack_12c,param_4);
  FUN_01b38c6c(auStack_76c,auStack_9ec);
  FUN_01b26934(auStack_80c,auStack_9ec);
  FUN_01b22638(auStack_94c,auStack_80c);
  FUN_01b38d1c(auStack_80c,auStack_94c);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_76c);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_6cc,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_6cc);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_62c,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_62c);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_58c,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_58c);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_4ec,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_4ec);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_44c,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_44c);
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_3ac,auStack_8ac);
  FUN_01b38d78(auStack_94c,auStack_80c,auStack_3ac);
  iVar3 = 0xff;
  FUN_01b38d1c(auStack_8ac,auStack_94c);
  FUN_01b38c6c(auStack_30c,auStack_8ac);
  FUN_01b26554(auStack_a64);
  FUN_01b26570(auStack_a3c);
  FUN_01b26570(auStack_a14);
  do {
    if ((acStack_22c[iVar3] != '\0') || (acStack_12c[iVar3] != '\0')) goto LAB_01b68bfc;
    bVar5 = iVar3 != 0;
    iVar3 = iVar3 + -1;
  } while (bVar5);
  goto LAB_01b68b0c;
LAB_01b68bfc:
  for (; iVar3 != -1; iVar3 = iVar3 + -1) {
    FUN_01b22638(auStack_94c,auStack_a64);
    iVar4 = (int)acStack_22c[iVar3];
    if (iVar4 < 1) {
      if (iVar4 != 0) {
        FUN_01b38d1c(auStack_8ac,auStack_94c);
        FUN_01b38ec4(auStack_94c,auStack_8ac,auStack_76c + (-iVar4 >> 1) * 0xa0);
      }
    }
    else {
      FUN_01b38d1c(auStack_8ac,auStack_94c);
      FUN_01b38d78(auStack_94c,auStack_8ac,auStack_76c + (iVar4 >> 1) * 0xa0);
    }
    iVar4 = (int)acStack_12c[iVar3];
    if (iVar4 < 1) {
      if (iVar4 != 0) {
        FUN_01b38d1c(auStack_8ac,auStack_94c);
        iVar4 = (-iVar4 >> 1) * 0x78;
        FUN_01b21f9c(auStack_94c,auStack_884,auStack_8ac);
        FUN_01b21d60(auStack_924,auStack_884,auStack_8ac);
        FUN_01b20ba0(auStack_ab4,auStack_94c,&UNK_00556468 + iVar4);
        FUN_01b20ba0(auStack_adc,auStack_924,&DAT_00556440 + iVar4);
        FUN_01b20ba0(auStack_a8c,&UNK_00556490 + iVar4,auStack_834);
        FUN_01b21f9c(auStack_8d4,auStack_85c);
        FUN_01b21d60(auStack_94c,auStack_ab4,auStack_adc);
        FUN_01b21f9c(auStack_924,auStack_ab4,auStack_adc);
        FUN_01b2233c(auStack_ab4,auStack_8d4);
        FUN_01b21d60(auStack_8fc,auStack_ab4,auStack_a8c);
        FUN_01b21f9c(auStack_8d4,auStack_ab4,auStack_a8c);
      }
    }
    else {
      FUN_01b38d1c(auStack_8ac,auStack_94c);
      FUN_01b224fc(auStack_94c,auStack_8ac,&DAT_00556440 + (iVar4 >> 1) * 0x78);
    }
    FUN_01b38cd0(auStack_a64,auStack_94c);
  }
LAB_01b68b0c:
  FUN_01b38790(param_1,auStack_a64);
  uVar1 = 1;
  uVar2 = extraout_r1;
LAB_01b68b1c:
  if ((local_2c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4(uVar1,uVar2,local_2c ^ DAT_01d53560,0);
  }
  return;
}


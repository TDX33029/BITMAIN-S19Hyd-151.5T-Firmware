// FUN_01737e1c @ 01737e1c size=1628 calls_out=8 calls_in=0
// strings: 

undefined8
FUN_01737e1c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
            undefined4 param_5,undefined4 param_6,int param_7,undefined4 param_8)

{
  uint uVar1;
  int extraout_r1;
  uint uVar2;
  uint uVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined1 auStack_299c [204];
  undefined1 auStack_28d0 [204];
  undefined1 auStack_2804 [2016];
  undefined4 local_2024;
  undefined1 auStack_1b44 [204];
  undefined1 auStack_1a78 [204];
  undefined1 auStack_19ac [2440];
  undefined4 local_1024;
  undefined1 auStack_db8 [204];
  undefined1 auStack_cec [204];
  undefined1 auStack_c20 [3060];
  int local_2c;
  
  local_2c = DAT_018ddaf8;
  local_2024 = param_1;
  local_1024 = param_1;
  FUN_01733e18(param_1,auStack_28d0);
  FUN_01733d34(auStack_2804,param_3);
  uVar2 = 2;
  puVar4 = auStack_2804;
  do {
    puVar4 = puVar4 + 0xcc;
    if ((uVar2 & 1) == 0) {
      FUN_0172ed94(param_1,puVar4,auStack_28d0 + (uVar2 >> 1) * 0xcc);
      if (uVar2 == 0x10) goto code_r0x01737f3c;
    }
    else {
      FUN_0172fc4c(param_1,puVar4,auStack_2804);
    }
    uVar2 = uVar2 + 1;
  } while( true );
LAB_01738228:
  FUN_01733e18(param_1,param_2);
  goto LAB_01738234;
code_r0x01737f3c:
  FUN_01733e18(param_1,auStack_1b44);
  puVar4 = auStack_19ac;
  uVar2 = 2;
  FUN_01733d34(auStack_1a78,param_5);
  while( true ) {
    for (; (uVar2 & 1) != 0; uVar2 = uVar2 + 1) {
      FUN_0172fc4c(param_1,puVar4,auStack_1a78,puVar4 + -0xcc);
      puVar4 = puVar4 + 0xcc;
    }
    uVar3 = uVar2 >> 1;
    uVar2 = uVar2 + 1;
    FUN_0172ed94(param_1,puVar4,auStack_1b44 + uVar3 * 0xcc);
    if (uVar2 == 0x11) break;
    puVar4 = puVar4 + 0xcc;
  }
  if (param_7 == 0) {
    uVar1 = FUN_0172c66c(param_1);
    uVar2 = uVar1;
    uVar3 = uVar1;
    if (uVar1 != ((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar1 / 5) {
      do {
        uVar2 = uVar3 - 1;
        if (uVar1 < uVar2) goto LAB_01738228;
        if (uVar2 * -0x33333333 < 0x33333334) break;
        uVar2 = uVar3 - 2;
        if (uVar1 < uVar2) goto LAB_01738228;
        uVar3 = uVar2;
      } while (uVar2 != ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar2 / 5);
    }
    FUN_01737c5c(param_1,auStack_299c,auStack_28d0,param_4,uVar2);
    FUN_01733d34(param_2,auStack_299c);
    while( true ) {
      uVar3 = uVar2 - 1;
      FUN_01737c5c(param_1,auStack_299c,auStack_1b44,param_6,uVar2);
      FUN_0172fc4c(param_1,param_2,param_2,auStack_299c);
      if (uVar1 < uVar3) break;
      iVar5 = uVar3 - (((uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar3 / 5);
      while (FUN_0172ed94(param_1,param_2,param_2), iVar5 != 0) {
        uVar3 = uVar3 - 1;
        if (uVar1 < uVar3) goto LAB_01738234;
        iVar5 = uVar3 - (((uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar3 / 5);
      }
      FUN_01737c5c(param_1,auStack_299c,auStack_28d0,param_4,uVar3);
      FUN_0172fc4c(param_1,param_2,param_2,auStack_299c);
      uVar2 = uVar3;
    }
  }
  else {
    puVar4 = auStack_c20;
    FUN_01733e18(param_1,auStack_db8);
    uVar2 = 2;
    FUN_01733d34(auStack_cec,param_7);
    while( true ) {
      for (; (uVar2 & 1) != 0; uVar2 = uVar2 + 1) {
        FUN_0172fc4c(param_1,puVar4,auStack_cec,puVar4 + -0xcc);
        puVar4 = puVar4 + 0xcc;
      }
      uVar3 = uVar2 >> 1;
      uVar2 = uVar2 + 1;
      FUN_0172ed94(param_1,puVar4,auStack_db8 + uVar3 * 0xcc);
      if (uVar2 == 0x11) break;
      puVar4 = puVar4 + 0xcc;
    }
    uVar1 = FUN_0172c66c(param_1);
    uVar2 = uVar1;
    uVar3 = uVar1;
    if (uVar1 != ((uint)((ulonglong)uVar1 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar1 / 5) {
      do {
        uVar2 = uVar3 - 1;
        if (uVar1 < uVar2) goto LAB_01738228;
        if (uVar2 * -0x33333333 < 0x33333334) break;
        uVar2 = uVar3 - 2;
        if (uVar1 < uVar2) goto LAB_01738228;
        uVar3 = uVar2;
      } while (uVar2 != ((uint)((ulonglong)uVar2 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar2 / 5);
    }
    FUN_01737c5c(param_1,auStack_299c,auStack_28d0,param_4,uVar2);
    FUN_01733d34(param_2,auStack_299c);
    while( true ) {
      FUN_01737c5c(param_1,auStack_299c,auStack_1b44,param_6,uVar2);
      FUN_0172fc4c(param_1,param_2,param_2,auStack_299c);
      uVar3 = uVar2 - 1;
      FUN_01737c5c(param_1,auStack_299c,auStack_db8,param_8,uVar2);
      FUN_0172fc4c(param_1,param_2,param_2,auStack_299c);
      if (uVar1 < uVar3) break;
      iVar5 = uVar3 - (((uint)((ulonglong)uVar3 * 0xcccccccd >> 0x20) & 0xfffffffc) + uVar3 / 5);
      while (FUN_0172ed94(param_1,param_2,param_2), iVar5 != 0) {
        uVar3 = uVar3 - 1;
        if (uVar1 < uVar3) goto LAB_01738234;
        FUN_0184606c(uVar3,5);
        iVar5 = extraout_r1;
      }
      FUN_01737c5c(param_1,auStack_299c,auStack_28d0,param_4,uVar3);
      FUN_0172fc4c(param_1,param_2,param_2,auStack_299c);
      uVar2 = uVar3;
    }
  }
LAB_01738234:
  if (local_2c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}


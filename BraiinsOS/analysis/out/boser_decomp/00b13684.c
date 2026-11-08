// FUN_00b13684 @ 00b13684 size=792 calls_out=4 calls_in=0
// strings: 00:1A:2B:3C:4D:5E | miner-01.local8.8.8.8 | 192.168.1.100 | 255.255.255.0 | 192.168.1.1

void FUN_00b13684(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  int iVar8;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,4);
  }
  *puVar1 = 0x30687465;
  iVar2 = thunk_FUN_01be5118(0x11);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x11);
  }
  FUN_01bed4e2(iVar2,"00:1A:2B:3C:4D:5E",0x11);
  iVar3 = thunk_FUN_01be5118(0xe);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xe);
  }
  FUN_01bed4e2(iVar3,"miner-01.local8.8.8.8",0xe);
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  puVar5 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,7);
  }
  *(undefined4 *)((int)puVar5 + 3) = 0x382e382e;
  *puVar5 = 0x2e382e38;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1);
  }
  *(undefined4 *)((int)puVar6 + 3) = 0x342e342e;
  *puVar6 = 0x2e382e38;
  puVar4[2] = 7;
  puVar4[5] = 7;
  *puVar4 = 7;
  puVar4[1] = puVar5;
  puVar4[3] = 7;
  puVar4[4] = puVar6;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  iVar7 = thunk_FUN_01be5118(0xd);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xd);
  }
  FUN_01bed4e2(iVar7,"192.168.1.100",0xd);
  iVar8 = thunk_FUN_01be5118(0xd);
  if (iVar8 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xd);
  }
  FUN_01bed4e2(iVar8,"255.255.255.0",0xd);
  *puVar5 = 0xd;
  puVar5[3] = 0xd;
  puVar5[1] = iVar7;
  puVar5[2] = 0xd;
  puVar5[4] = iVar8;
  puVar5[5] = 0xd;
  iVar7 = thunk_FUN_01be5118(0xb);
  if (iVar7 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0xb);
  }
  FUN_01bed4e2(iVar7,"192.168.1.1",0xb);
  param_1[0x10] = 0xe;
  param_1[0xf] = iVar3;
  param_1[0xe] = 0xe;
  param_1[0xd] = 0x11;
  param_1[0xc] = iVar2;
  param_1[0xb] = 0x11;
  *param_1 = 1;
  param_1[1] = 1;
  param_1[2] = 4;
  param_1[4] = 4;
  param_1[3] = puVar1;
  param_1[5] = 2;
  param_1[6] = puVar4;
  param_1[7] = 2;
  param_1[8] = 1;
  param_1[9] = puVar5;
  param_1[10] = 1;
  param_1[0x11] = 0xb;
  param_1[0x12] = iVar7;
  param_1[0x13] = 0xb;
  return;
}


// FUN_00b132b8 @ 00b132b8 size=692 calls_out=4 calls_in=0
// strings: High Performance | stratum+tcp://pool.example.com:3333

/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffd0 : 0x00b134fc */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_00b132b8(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = thunk_FUN_01be5118(0x10);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x10);
  }
  FUN_01bed4e2(iVar1,"High Performance",0x10);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x80);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(8,0x80);
  }
  puVar3 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  *(undefined1 *)(puVar3 + 1) = 0x31;
  *puVar3 = 0x6c6f6f70;
  iVar4 = thunk_FUN_01be5118(0x23);
  if (iVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x23);
  }
  FUN_01bed4e2(iVar4,"stratum+tcp://pool.example.com:3333",0x23);
  puVar5 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *(undefined2 *)(puVar5 + 1) = 0x3172;
  *puVar5 = 0x656e696d;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(7);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined4 *)((int)puVar6 + 3) = 0x30303030;
  *puVar6 = 0x30303231;
  puVar2[2] = 0x67c9886e;
  puVar2[3] = 0;
  puVar2[0xe] = 1200000;
  puVar2[0xf] = 0;
  puVar2[0x10] = &DAT_004c4b40;
  puVar2[8] = 10;
  puVar2[0xc] = 800000;
  puVar2[0x11] = 0;
  puVar2[6] = 1000;
  puVar2[7] = 0;
  puVar2[9] = 0;
  puVar2[10] = 5;
  puVar2[0xb] = 0;
  puVar2[0xd] = 0;
  puVar2[0x12] = 7;
  puVar2[4] = 0xf39b977;
  *(undefined2 *)(puVar2 + 0x1f) = 0x101;
  puVar2[0x1e] = 6;
  puVar2[0x18] = 5;
  puVar2[0x14] = 7;
  *puVar2 = 1;
  puVar2[1] = 0;
  *(undefined1 *)((int)puVar2 + 0x7e) = 1;
  puVar2[0x16] = 5;
  puVar2[0x17] = puVar3;
  puVar2[0x19] = 0x23;
  puVar2[0x1a] = iVar4;
  puVar2[0x1b] = 0x23;
  puVar2[0x1c] = 6;
  puVar2[0x1d] = puVar5;
  puVar2[0x13] = puVar6;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *(undefined2 *)(puVar3 + 1) = 0x3170;
  *puVar3 = &DAT_756f7267;
  param_1[5] = iVar1;
  param_1[4] = 0x10;
  param_1[6] = 0x10;
  param_1[7] = 1;
  param_1[8] = puVar2;
  param_1[9] = 1;
  param_1[10] = 6;
  param_1[0xb] = puVar3;
  param_1[0xc] = 6;
  *param_1 = 0;
  param_1[1] = 0x46;
  return;
}


// FUN_00b13ce4 @ 00b13ce4 size=520 calls_out=4 calls_in=0
// strings: stratum+tcp://pool.example.com:3333

void FUN_00b13ce4(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined1 *puVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 *puVar7;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *(undefined2 *)(puVar1 + 1) = 0x3170;
  *puVar1 = &DAT_756f7267;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(5);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,5);
  }
  *(undefined1 *)(puVar2 + 1) = 0x73;
  *puVar2 = 0x6c6f6f50;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x34);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x34);
  }
  puVar4 = (undefined1 *)thunk_FUN_01be5118(1);
  if (puVar4 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,1);
  }
  *puVar4 = 0x31;
  iVar5 = thunk_FUN_01be5118(0x23);
  if (iVar5 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x23);
  }
  FUN_01bed4e2(iVar5,"stratum+tcp://pool.example.com:3333",0x23);
  puVar6 = (undefined4 *)thunk_FUN_01be5118(6);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,6);
  }
  *(undefined2 *)(puVar6 + 1) = 0x3172;
  *puVar6 = 0x656e696d;
  puVar7 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620();
  }
  *puVar7 = 0x78787878;
  puVar3[9] = 4;
  puVar3[10] = puVar7;
  puVar3[0xb] = 4;
  puVar3[2] = 0x23;
  puVar3[3] = 6;
  puVar3[4] = puVar6;
  param_1[0xb] = puVar1;
  puVar3[5] = 6;
  puVar3[6] = 1;
  puVar3[7] = puVar4;
  param_1[3] = 0x40490000;
  param_1[2] = 0;
  param_1[10] = 6;
  param_1[0xc] = 6;
  *(undefined1 *)(puVar3 + 0xc) = 1;
  puVar3[8] = 1;
  *puVar3 = 0x23;
  puVar3[1] = iVar5;
  param_1[4] = 5;
  param_1[5] = puVar2;
  param_1[6] = 5;
  param_1[7] = 1;
  param_1[8] = puVar3;
  param_1[9] = 1;
  *param_1 = 1;
  return;
}


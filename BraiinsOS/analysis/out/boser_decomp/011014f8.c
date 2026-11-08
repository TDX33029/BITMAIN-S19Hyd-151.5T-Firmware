// FUN_011014f8 @ 011014f8 size=320 calls_out=3 calls_in=2
// strings: 

void FUN_011014f8(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined8 uVar5;
  
  uVar5 = FUN_01a36a70();
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined1 *)(puVar1 + 2) = 0;
  *puVar1 = 1;
  puVar1[1] = 1;
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  puVar2[7] = 0x3ffffffe;
  puVar2[8] = 1;
  puVar2[9] = (int)uVar5;
  *(undefined1 *)(puVar2 + 6) = 0;
  puVar2[4] = 0;
  puVar2[5] = 0;
  *(undefined1 *)(puVar2 + 3) = 0;
  *puVar2 = 1;
  puVar2[1] = 1;
  puVar2[2] = 0x1fffffff;
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x28);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x28);
  }
  puVar3[7] = 0x3ffffffe;
  puVar3[8] = 1;
  puVar3[9] = (int)((ulonglong)uVar5 >> 0x20);
  *(undefined1 *)(puVar3 + 6) = 0;
  puVar3[4] = 0;
  puVar3[5] = 0;
  *(undefined1 *)(puVar3 + 3) = 0;
  *puVar3 = 1;
  puVar3[1] = 1;
  puVar3[2] = 0x1fffffff;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(0xc);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0xc);
  }
  *(undefined1 *)(puVar4 + 2) = 0;
  *puVar4 = 1;
  puVar4[1] = 1;
  param_1[9] = puVar4;
  *(undefined1 *)(param_1 + 10) = 0;
  param_1[5] = 0x3ffffffe;
  param_1[6] = puVar1;
  param_1[7] = puVar2;
  param_1[8] = puVar3;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  *(undefined1 *)(param_1 + 1) = 0;
  *param_1 = 0x1fffffff;
  return;
}


// FUN_00b141c4 @ 00b141c4 size=336 calls_out=4 calls_in=0
// strings: fcdb4b423f4e5283afa249d762ef6aef150e91fccd810d43e5e719d14512dec7

void FUN_00b141c4(undefined4 *param_1)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  
  iVar1 = thunk_FUN_01be5118(0x40);
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x40);
  }
  FUN_01bed4e2(iVar1,"fcdb4b423f4e5283afa249d762ef6aef150e91fccd810d43e5e719d14512dec7",0x40);
  puVar2 = (undefined4 *)thunk_FUN_01be5118(0x30);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x30);
  }
  puVar3 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,4);
  }
  *puVar3 = 0;
  puVar4 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar4 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,4);
  }
  *puVar4 = 0;
  puVar5 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar5 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,4);
  }
  *puVar5 = 0;
  puVar6 = (undefined4 *)thunk_FUN_01be5118(4);
  if (puVar6 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(1,4);
  }
  puVar2[10] = puVar6;
  *puVar6 = 0;
  param_1[1] = 0;
  *param_1 = 0x10;
  puVar2[8] = 4;
  puVar2[9] = 4;
  puVar2[0xb] = 4;
  *puVar2 = 4;
  puVar2[1] = puVar3;
  puVar2[2] = 4;
  puVar2[3] = 4;
  puVar2[4] = puVar4;
  puVar2[5] = 4;
  puVar2[6] = 4;
  puVar2[7] = puVar5;
  param_1[6] = 4;
  param_1[7] = puVar2;
  param_1[8] = 4;
  *(undefined2 *)(param_1 + 5) = 0;
  param_1[4] = 0x40;
  param_1[3] = iVar1;
  param_1[2] = 0x40;
  return;
}


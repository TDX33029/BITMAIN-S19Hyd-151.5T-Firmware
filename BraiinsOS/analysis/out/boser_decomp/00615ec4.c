// FUN_00615ec4 @ 00615ec4 size=284 calls_out=9 calls_in=3
// strings: 

void FUN_00615ec4(int *param_1,undefined4 *param_2,undefined4 param_3)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined *puVar4;
  int local_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 6)) {
  case 0:
    uVar3 = *param_2;
    FUN_00b8c768(&local_40);
    puVar2 = (undefined4 *)thunk_FUN_01be5118(4);
    if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00664620(1,4);
    }
    *puVar2 = 0x706f7473;
    param_2[1] = 4;
    param_2[2] = puVar2;
    param_2[3] = 4;
    uVar3 = FUN_00b8a3c0(uVar3,&local_40);
    puVar4 = &DAT_01c13d7c;
    param_2[4] = uVar3;
    param_2[5] = &DAT_01c13d7c;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c02a50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c02a50);
  case 3:
    uVar3 = param_2[4];
    puVar4 = (undefined *)param_2[5];
  }
  (**(code **)(puVar4 + 0xc))(&local_40,uVar3,param_3);
  if (local_40 == -0x7fffffe9) {
    *param_1 = -0x7fffffe9;
    uVar1 = 3;
  }
  else {
    FUN_01139b38(param_2[4],param_2[5]);
    FUN_019bb7e0(param_2[1],param_2[2]);
    *param_1 = local_40;
    param_1[1] = iStack_3c;
    param_1[2] = iStack_38;
    param_1[3] = iStack_34;
    param_1[4] = iStack_30;
    param_1[5] = iStack_2c;
    uVar1 = 1;
  }
  *(undefined1 *)(param_2 + 6) = uVar1;
  return;
}


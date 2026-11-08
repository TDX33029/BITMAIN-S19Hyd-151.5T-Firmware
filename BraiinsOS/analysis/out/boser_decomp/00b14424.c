// FUN_00b14424 @ 00b14424 size=268 calls_out=4 calls_in=0
// strings: Hashboard 1 not detected | Hashboard 3 communication errorevent open/boser/boser/src/bosminer/initial_config.rs:216

void FUN_00b14424(undefined4 *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = (undefined4 *)thunk_FUN_01be5118(0x18);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x18);
  }
  iVar2 = thunk_FUN_01be5118(0x18);
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x18);
  }
  FUN_01bed4e2(iVar2,"Hashboard 1 not detected",0x18);
  iVar3 = thunk_FUN_01be5118(0x1f);
  if (iVar3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00664620(1,0x1f);
  }
  FUN_01bed4e2(iVar3,
               "Hashboard 3 communication errorevent open/boser/boser/src/bosminer/initial_config.rs:216"
               ,0x1f);
  *param_1 = 1;
  param_1[1] = 0;
  *puVar1 = 0x18;
  puVar1[1] = iVar2;
  puVar1[2] = 0x18;
  param_1[2] = 0x67c98738;
  param_1[3] = 0;
  param_1[6] = 3;
  param_1[7] = 0;
  puVar1[5] = 0x1f;
  puVar1[3] = 0x1f;
  puVar1[4] = iVar3;
  param_1[0xd] = 2;
  param_1[0xe] = 2;
  param_1[0xf] = puVar1;
  param_1[0x10] = 2;
  *(undefined1 *)(param_1 + 0xc) = 0;
  param_1[4] = 0;
  return;
}


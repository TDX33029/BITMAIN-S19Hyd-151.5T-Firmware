// FUN_007936fc @ 007936fc size=236 calls_out=6 calls_in=0
// strings: BUG: drain does not have a URL

undefined4 FUN_007936fc(undefined4 param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 **local_30;
  undefined4 *local_2c;
  undefined4 uStack_28;
  int *local_20;
  undefined4 *local_1c;
  int local_18;
  undefined1 *local_14;
  
  iVar1 = FUN_00793854();
  local_14 = &LAB_007936e4;
  local_18 = iVar1 + 0xc;
  local_1c = &DAT_0157d360;
  local_20 = (int *)&DAT_0185cb84;
  FUN_00600d2c(&local_30,&DAT_0058bf3c,&local_20);
  if (local_30 == (undefined4 **)0x80000000) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8("BUG: drain does not have a URL",0x1e,&DAT_0185c730);
  }
  local_20 = (int *)local_30;
  local_1c = local_2c;
  local_18 = uStack_28;
  FUN_007939d4(iVar1);
  thunk_FUN_016d3fb4(iVar1);
  local_2c = &DAT_006043a8;
  local_30 = &local_20;
  uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00590e71,&local_30);
  if (local_20 != (int *)0x0) {
    thunk_FUN_016d3fb4(local_1c);
  }
  return uVar2;
}


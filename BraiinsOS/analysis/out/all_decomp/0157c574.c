// FUN_0157c574 @ 0157c574 size=260 calls_out=4 calls_in=2
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_0157c574(int *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int local_48;
  undefined4 local_44;
  undefined4 uStack_40;
  int *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined1 *local_2c;
  int local_28;
  undefined1 *local_24;
  int local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar3 = *param_1;
  local_18 = 0;
  local_34 = &DAT_018a93a4;
  local_38 = &local_20;
  local_20 = 0;
  local_2c = (undefined1 *)0x0;
  local_1c = 1;
  local_30 = &DAT_60000020;
  iVar1 = FUN_0157c6d0(iVar3,&local_38);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_48,
                 &DAT_018a93fc,&DAT_018af130);
  }
  local_48 = local_20;
  local_44 = local_1c;
  uStack_40 = local_18;
  local_28 = iVar3 + 0x10;
  local_24 = &LAB_00fac484;
  local_2c = &LAB_00fac484;
  local_30 = (undefined1 *)(iVar3 + 0xc);
  local_38 = &local_48;
  local_34 = &LAB_00787c90;
  uVar2 = FUN_00fa948c(*param_2,param_2[1],&DAT_00588e44,&local_38);
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(local_44);
  }
  return uVar2;
}


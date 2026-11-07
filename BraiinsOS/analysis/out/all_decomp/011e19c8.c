// FUN_011e19c8 @ 011e19c8 size=264 calls_out=5 calls_in=3
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_011e19c8(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 local_40;
  int *local_38;
  undefined *local_34;
  undefined1 *local_30;
  undefined4 local_2c;
  int local_28;
  code *local_24;
  int *local_20;
  undefined1 *local_1c;
  int local_18;
  undefined1 *local_14;
  undefined1 uStack_9;
  
  local_40 = 0;
  local_48 = 0;
  local_2c = 0;
  local_44 = 1;
  local_30 = &DAT_60000020;
  local_34 = &DAT_0188a1e0;
  local_38 = &local_48;
  local_4c = param_1;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_0157c6d0(param_1,&local_38);
  }
  else {
    local_18 = param_1 + 0x10;
    local_14 = &LAB_00fac484;
    local_1c = &LAB_00fac484;
    local_24 = FUN_0157c6d0;
    local_28 = param_1;
    local_20 = (int *)(param_1 + 0xc);
    iVar1 = FUN_00fa948c(&local_48,&DAT_0188a1e0,&DAT_00579fdb,&local_28);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_9,
                 &DAT_0188a1f8,&DAT_018af130);
  }
  local_28 = local_48;
  local_24 = (code *)local_44;
  local_20 = (int *)local_40;
  uVar2 = FUN_0157ba88(&local_28);
  FUN_011e1b28(&local_4c);
  return uVar2;
}


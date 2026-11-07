// FUN_00954bd0 @ 00954bd0 size=264 calls_out=5 calls_in=1
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00954bd0(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int local_50;
  undefined4 local_4c;
  undefined4 local_48;
  int *local_40;
  undefined *local_3c;
  undefined1 *local_38;
  undefined4 local_34;
  int local_30;
  code *local_2c;
  int *piStack_28;
  undefined1 *puStack_24;
  int iStack_20;
  undefined1 *local_1c;
  undefined1 uStack_11;
  
  local_48 = 0;
  local_50 = 0;
  local_34 = 0;
  local_4c = 1;
  local_38 = &DAT_60000020;
  local_3c = &DAT_01868248;
  local_40 = &local_50;
  if (*(int *)(param_1 + 0xc) == 0) {
    iVar1 = FUN_0157c6d0(param_1,&local_40);
  }
  else {
    iStack_20 = param_1 + 0x10;
    local_1c = &LAB_00fac484;
    puStack_24 = &LAB_00fac484;
    local_2c = FUN_0157c6d0;
    local_30 = param_1;
    piStack_28 = (int *)(param_1 + 0xc);
    iVar1 = FUN_00fa948c(&local_50,&DAT_01868248,&DAT_00579fdb,&local_30);
  }
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                 &DAT_01868260,&DAT_018af130);
  }
  local_30 = local_50;
  local_2c = (code *)local_4c;
  piStack_28 = (int *)local_48;
  uVar2 = FUN_0157ba88(&local_30);
  FUN_00f3d3b0(param_1);
  return uVar2;
}


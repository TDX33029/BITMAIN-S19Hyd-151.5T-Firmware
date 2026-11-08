// FUN_00b8db30 @ 00b8db30 size=228 calls_out=2 calls_in=0
// strings: Shared | value | is_closed | ref_count_rxRandomErrorEncodingErrorInsufficientLengthInvalidRoun

void FUN_00b8db30(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  undefined4 *local_20;
  undefined1 local_1c;
  undefined1 local_1b;
  uint local_18;
  byte local_11;
  
  iVar2 = *(int *)*param_1;
  uVar3 = *(uint *)(iVar2 + 0xa0);
  DataMemoryBarrier(0xb);
  local_1c = (**(code **)(param_2[1] + 0xc))(*param_2,"Shared",6);
  local_1b = 0;
  local_20 = param_2;
  uVar1 = FUN_01302c38(&local_20,"value",5,iVar2 + 0x98,FUN_00b8d8a0);
  local_18 = uVar3 & 0xfffffffe;
  uVar1 = FUN_01302c38(uVar1,&DAT_00520eda,7,&local_18,FUN_00b8d85c);
  local_11 = (byte)uVar3 & 1;
  uVar1 = FUN_01302c38(uVar1,"is_closed",9,&local_11,&LAB_01a705e0);
  FUN_01302c38(uVar1,"ref_count_rxRandomErrorEncodingErrorInsufficientLengthInvalidRoun",0xc,
               iVar2 + 0xa4,&LAB_019ec994);
  FUN_01302e1c();
  return;
}


// FUN_00c5c114 @ 00c5c114 size=232 calls_out=5 calls_in=1
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00c5c114(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int local_2c;
  undefined4 local_28;
  undefined4 local_24;
  int local_20;
  code *local_1c;
  int iStack_18;
  code *local_14;
  
  local_24 = 0;
  local_2c = 0;
  iStack_18 = param_1 + 8;
  local_28 = 1;
  local_14 = FUN_00fac310;
  local_1c = FUN_00fac310;
  local_20 = param_1;
  iVar3 = FUN_00fa948c(&local_2c,&DAT_01873b68,&DAT_0056cc3f,&local_20);
  uVar2 = local_28;
  iVar1 = local_2c;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_20,
                 &DAT_01873b80,&DAT_018af130);
  }
  FUN_00cd2b24(&local_20,param_2,local_28,local_24);
  uVar4 = 0;
  if ((char)local_20 != '\x04') {
    uVar4 = FUN_0157c4a0(local_20,local_1c);
  }
  if (iVar1 != 0) {
    thunk_FUN_016d3fb4(uVar2);
  }
  return uVar4;
}


// FUN_00ed359c @ 00ed359c size=176 calls_out=3 calls_in=0
// strings: a Display implementation returned an error unexpectedly

undefined4 FUN_00ed359c(undefined4 param_1,uint *param_2)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int local_20;
  undefined4 local_1c;
  uint local_18;
  undefined1 uStack_11;
  
  local_18 = 0;
  local_1c = 1;
  local_20 = 0;
  iVar1 = FUN_00efec9c(param_1,&local_20,&DAT_0187b3f4);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&uStack_11,
                 &DAT_0187b40c,&DAT_018af130);
  }
  uVar3 = *param_2;
  uVar2 = uVar3 + local_18;
  uVar4 = 5;
  if (local_18 < 0x10000) {
    uVar4 = 3;
  }
  if (local_18 < 0xfb) {
    uVar4 = 1;
  }
  *param_2 = uVar2 + uVar4;
  param_2[1] = param_2[1] + (uint)CARRY4(uVar3,local_18) + (uint)CARRY4(uVar2,uVar4);
  if (local_20 != 0) {
    thunk_FUN_016d3fb4(local_1c);
  }
  return 0;
}


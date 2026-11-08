// FUN_00c5af0c @ 00c5af0c size=128 calls_out=3 calls_in=1
// strings: a Display implementation returned an error unexpectedly

void FUN_00c5af0c(void)

{
  int iVar1;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  
  local_10 = 0;
  local_14 = 1;
  local_18 = 0;
  iVar1 = FUN_00b24d20(&local_18,&DAT_00411a23,0x1a);
  if (iVar1 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8("a Display implementation returned an error unexpectedly",0x37,&local_28,
                 &DAT_01873b80,&DAT_018af130);
  }
  local_28 = local_18;
  uStack_24 = local_14;
  uStack_20 = local_10;
  FUN_0157ba88(&local_28);
  return;
}


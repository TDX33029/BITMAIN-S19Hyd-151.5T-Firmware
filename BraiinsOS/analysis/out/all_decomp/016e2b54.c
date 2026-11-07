// FUN_016e2b54 @ 016e2b54 size=144 calls_out=2 calls_in=2
// strings: 

void FUN_016e2b54(undefined4 param_1)

{
  undefined8 uVar1;
  int local_10;
  uint local_c;
  
  local_c = DAT_018ddaf8;
  uVar1 = FUN_016e2894(param_1,&local_10,&PTR_018bc3f4,0);
  if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78((int)uVar1 != 0 && local_10 == 0,(int)((ulonglong)uVar1 >> 0x20),
                 local_c ^ DAT_018ddaf8,0);
  }
  return;
}


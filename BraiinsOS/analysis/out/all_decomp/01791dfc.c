// FUN_01791dfc @ 01791dfc size=288 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_01791dfc(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint local_194;
  undefined1 auStack_190 [356];
  char acStack_2c [32];
  uint local_c;
  
  local_c = DAT_018ddaf8;
  FUN_016dd606(acStack_2c,0,0x20);
  FUN_01791988(auStack_190);
  FUN_01791aa0(auStack_190,&DAT_004501e8,3);
  uVar1 = FUN_01791c40(auStack_190,acStack_2c);
  local_194 = 0;
  do {
    if (0x1f < local_194) {
      uVar2 = 0;
LAB_01791ed8:
      if ((local_c ^ DAT_018ddaf8) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2b78(uVar1,local_c ^ DAT_018ddaf8,0);
      }
      return uVar2;
    }
    if ((&DAT_004501ec)[local_194] != acStack_2c[local_194]) {
      uVar2 = 1;
      goto LAB_01791ed8;
    }
    local_194 = local_194 + 1;
  } while( true );
}


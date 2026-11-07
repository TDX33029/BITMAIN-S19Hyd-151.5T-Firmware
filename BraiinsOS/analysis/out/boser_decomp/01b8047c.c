// FUN_01b8047c @ 01b8047c size=288 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_01b8047c(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint local_194;
  undefined1 auStack_190 [356];
  char acStack_2c [32];
  uint local_c;
  
  local_c = DAT_01d53560;
  FUN_01bed93e(acStack_2c,0,0x20);
  FUN_01b80008(auStack_190);
  FUN_01b80120(auStack_190,&DAT_00561b30,3);
  uVar1 = FUN_01b802c0(auStack_190,acStack_2c);
  local_194 = 0;
  do {
    if (0x1f < local_194) {
      uVar2 = 0;
LAB_01b80558:
      if ((local_c ^ DAT_01d53560) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_01be31f4(uVar1,local_c ^ DAT_01d53560,0);
      }
      return uVar2;
    }
    if ((&DAT_00561b34)[local_194] != acStack_2c[local_194]) {
      uVar2 = 1;
      goto LAB_01b80558;
    }
    local_194 = local_194 + 1;
  } while( true );
}


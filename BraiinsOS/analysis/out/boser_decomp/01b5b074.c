// FUN_01b5b074 @ 01b5b074 size=188 calls_out=4 calls_in=1
// strings: 

int FUN_01b5b074(int param_1)

{
  int iVar1;
  undefined1 auStack_40 [44];
  int local_14;
  
  local_14 = DAT_01d53560;
  FUN_01b5aebc(param_1 + 0x480,0x4a0,auStack_40,0);
  iVar1 = FUN_01bed842(param_1 + 0x920,auStack_40,0x20);
  FUN_01b6b174(auStack_40,0x20);
  if (local_14 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return -(uint)(iVar1 != 0);
}


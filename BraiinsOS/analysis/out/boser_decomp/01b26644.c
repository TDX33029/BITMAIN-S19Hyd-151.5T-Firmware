// FUN_01b26644 @ 01b26644 size=228 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_01b26644(int param_1,int param_2)

{
  undefined1 auStack_bc [40];
  undefined1 auStack_94 [40];
  undefined1 auStack_6c [40];
  char local_44 [32];
  int local_24;
  
  local_24 = DAT_01d53560;
  FUN_01b2662c(auStack_6c,param_2 + 0x50,&PTR_01d3b2b0,0);
  FUN_01b214c0(auStack_bc,auStack_6c);
  FUN_01b20ba0(auStack_94,param_2,auStack_bc);
  FUN_01b20ba0(auStack_6c,param_2 + 0x28,auStack_bc);
  FUN_01b21754(param_1,auStack_6c);
  FUN_01b21754(local_44,auStack_94);
  *(byte *)(param_1 + 0x1f) = *(byte *)(param_1 + 0x1f) ^ local_44[0] << 7;
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


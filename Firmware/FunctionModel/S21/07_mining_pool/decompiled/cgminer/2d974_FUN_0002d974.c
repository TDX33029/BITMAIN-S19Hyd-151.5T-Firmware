// FUN_0002d974 @ 0002d974  size=148  callers=10
// program: cgminer


int FUN_0002d974(void)

{
  int iVar1;
  undefined4 uVar2;
  char local_808 [2048];
  
  iVar1 = FUN_0001f8e8(1,0x1c0,"cgminer.c","make_work",0x925);
  if (iVar1 == 0) {
    builtin_strncpy(local_808,"Failed to calloc work in make_work",0x23);
    FUN_0001dd98(3,local_808,1);
                    /* WARNING: Subroutine does not return */
    FUN_0002c290(1);
  }
  uVar2 = FUN_0002d7a0();
  *(undefined4 *)(iVar1 + 0x154) = uVar2;
  return iVar1;
}


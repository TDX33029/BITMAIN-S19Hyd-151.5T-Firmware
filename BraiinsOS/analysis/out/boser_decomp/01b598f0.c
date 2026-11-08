// FUN_01b598f0 @ 01b598f0 size=176 calls_out=2 calls_in=3
// strings: 

undefined8 FUN_01b598f0(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [204];
  int local_1c;
  
  iVar2 = 0;
  local_1c = DAT_01d53560;
  do {
    FUN_01b1efe8(auStack_e8,param_1,iVar2);
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 2;
    FUN_01b1efe8(param_1,auStack_e8,iVar1);
  } while (iVar2 != 0x18);
  if (local_1c != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


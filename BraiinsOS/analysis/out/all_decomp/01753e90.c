// FUN_01753e90 @ 01753e90 size=176 calls_out=2 calls_in=4
// strings: 

undefined8 FUN_01753e90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_e8 [204];
  int local_1c;
  
  iVar2 = 0;
  local_1c = DAT_018ddaf8;
  do {
    FUN_01703e08(auStack_e8,param_1,iVar2);
    iVar1 = iVar2 + 1;
    iVar2 = iVar2 + 2;
    FUN_01703e08(param_1,auStack_e8,iVar1);
  } while (iVar2 != 0x18);
  if (local_1c != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return 0;
}


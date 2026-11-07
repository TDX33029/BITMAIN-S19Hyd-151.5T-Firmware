// FUN_01b214c0 @ 01b214c0 size=648 calls_out=4 calls_in=4
// strings: 

undefined8 FUN_01b214c0(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined1 auStack_c4 [40];
  undefined1 auStack_9c [40];
  undefined1 auStack_74 [40];
  undefined1 auStack_4c [40];
  int local_24;
  
  iVar1 = 4;
  local_24 = DAT_01d53560;
  FUN_01b20a84(auStack_c4,param_2,&PTR_01d3b2b0,0);
  FUN_01b213a4(auStack_9c,auStack_c4);
  FUN_01b213a4(auStack_9c,auStack_9c);
  FUN_01b20ba0(auStack_9c,param_2,auStack_9c);
  FUN_01b20ba0(auStack_c4,auStack_c4,auStack_9c);
  FUN_01b213a4(auStack_74,auStack_c4);
  FUN_01b20ba0(auStack_9c,auStack_9c,auStack_74);
  FUN_01b213a4(auStack_74,auStack_9c);
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 9;
  FUN_01b20ba0(auStack_9c,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_74,auStack_9c);
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x13;
  FUN_01b20ba0(auStack_74,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_4c,auStack_74);
  do {
    FUN_01b213a4(auStack_4c,auStack_4c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 9;
  FUN_01b20ba0(auStack_74,auStack_4c,auStack_74);
  FUN_01b213a4(auStack_74,auStack_74);
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  FUN_01b20ba0(auStack_9c,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_74,auStack_9c);
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 99;
  FUN_01b20ba0(auStack_74,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_4c,auStack_74);
  do {
    FUN_01b213a4(auStack_4c,auStack_4c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 0x31;
  FUN_01b20ba0(auStack_74,auStack_4c,auStack_74);
  FUN_01b213a4(auStack_74,auStack_74);
  do {
    FUN_01b213a4(auStack_74,auStack_74);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  iVar1 = 4;
  FUN_01b20ba0(auStack_9c,auStack_74,auStack_9c);
  FUN_01b213a4(auStack_9c,auStack_9c);
  do {
    FUN_01b213a4(auStack_9c,auStack_9c);
    iVar1 = iVar1 + -1;
  } while (iVar1 != 0);
  FUN_01b20ba0(param_1,auStack_9c,auStack_c4);
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return 0;
}


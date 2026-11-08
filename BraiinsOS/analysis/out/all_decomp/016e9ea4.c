// FUN_016e9ea4 @ 016e9ea4 size=344 calls_out=10 calls_in=2
// strings: 

undefined * FUN_016e9ea4(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  undefined *puVar6;
  undefined4 *puVar7;
  undefined1 auStack_2c [8];
  int local_24;
  
  local_24 = DAT_018ddaf8;
  iVar1 = FUN_016e24e4(param_1,auStack_2c,6,0);
  puVar6 = (undefined *)0x0;
  if (iVar1 != 0) {
    uVar2 = FUN_016e1e04(auStack_2c);
    uVar3 = FUN_016e1e1c(auStack_2c);
    FUN_016e1d94(param_2,uVar2,uVar3);
    iVar1 = FUN_016ef1d8();
    puVar7 = (undefined4 *)(iVar1 + -4);
    do {
      puVar7 = puVar7 + 1;
      puVar6 = (undefined *)*puVar7;
      uVar4 = FUN_016e1e1c(auStack_2c);
      if (uVar4 == (byte)puVar6[0xf]) {
        uVar2 = FUN_016e1e04(auStack_2c);
        if ((puVar6[0xf] == '\0') || (iVar5 = FUN_016dd50a(uVar2,puVar6 + 4), iVar5 == 0))
        goto LAB_016e9f74;
      }
    } while (puVar7 != (undefined4 *)(iVar1 + 0x28));
    iVar1 = FUN_0177b9fc(auStack_2c);
    if (iVar1 == 0x13) {
      puVar6 = &DAT_018b6228;
    }
    else {
      FUN_0177b9fc(auStack_2c);
      puVar6 = (undefined *)FUN_017490f8();
      if (puVar6 == (undefined *)0x0) {
        FUN_0177b9fc(auStack_2c);
        puVar6 = (undefined *)FUN_01740394();
      }
    }
  }
LAB_016e9f74:
  if (local_24 != DAT_018ddaf8) {
                    /* WARNING: Subroutine does not return */
    FUN_016d2b78();
  }
  return puVar6;
}


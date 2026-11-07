// FUN_01b05548 @ 01b05548 size=340 calls_out=10 calls_in=2
// strings: 

undefined * FUN_01b05548(undefined4 param_1,undefined4 param_2)

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
  
  local_24 = DAT_01d53560;
  iVar1 = FUN_01afddc0(param_1,auStack_2c,6,0);
  puVar6 = (undefined *)0x0;
  if (iVar1 != 0) {
    uVar2 = FUN_01afd674(auStack_2c);
    uVar3 = FUN_01afd684(auStack_2c);
    FUN_01afd61c(param_2,uVar2,uVar3);
    iVar1 = FUN_01b0a1d8();
    puVar7 = (undefined4 *)(iVar1 + -4);
    do {
      puVar7 = puVar7 + 1;
      puVar6 = (undefined *)*puVar7;
      uVar4 = FUN_01afd684(auStack_2c);
      if (uVar4 == (byte)puVar6[0xf]) {
        uVar2 = FUN_01afd674(auStack_2c);
        if ((puVar6[0xf] == '\0') || (iVar5 = FUN_01bed842(uVar2,puVar6 + 4), iVar5 == 0))
        goto LAB_01b05648;
      }
    } while (puVar7 != (undefined4 *)(iVar1 + 0x28));
    iVar1 = FUN_01b6befc(auStack_2c);
    if (iVar1 == 0x13) {
      puVar6 = &DAT_01d35240;
    }
    else {
      FUN_01b6befc(auStack_2c);
      puVar6 = (undefined *)FUN_01b51254();
      if (puVar6 == (undefined *)0x0) {
        FUN_01b6befc(auStack_2c);
        puVar6 = (undefined *)FUN_01b4c4e8();
      }
    }
  }
LAB_01b05648:
  if (local_24 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return puVar6;
}


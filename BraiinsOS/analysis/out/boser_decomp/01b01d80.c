// FUN_01b01d80 @ 01b01d80 size=160 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_01b01d80(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  undefined8 uVar4;
  
  iVar2 = 0;
  puVar3 = &UNK_01d34c68;
  while (((*(int *)(puVar3 + 8) == 0 ||
          (iVar1 = FUN_01bedb50(*(int *)(puVar3 + 8),param_1), iVar1 != 0)) &&
         ((*(int *)(puVar3 + 0xc) == 0 ||
          (iVar1 = FUN_01bedb50(*(int *)(puVar3 + 0xc),param_1), iVar1 != 0))))) {
    iVar2 = iVar2 + 1;
    puVar3 = puVar3 + 0x10;
    if (iVar2 == 0x1a) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x01b01e08. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&DAT_01d34c6c)[iVar2 * 4])();
  return uVar4;
}


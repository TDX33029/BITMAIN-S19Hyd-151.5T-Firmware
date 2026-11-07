// FUN_016e6420 @ 016e6420 size=156 calls_out=1 calls_in=2
// strings: 

undefined8 FUN_016e6420(undefined4 param_1)

{
  int iVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 uVar4;
  
  iVar3 = 0;
  puVar2 = &UNK_018b5c50;
  while (((*(int *)(puVar2 + 8) == 0 ||
          (iVar1 = FUN_016dd818(*(int *)(puVar2 + 8),param_1), iVar1 != 0)) &&
         ((*(int *)(puVar2 + 0xc) == 0 ||
          (iVar1 = FUN_016dd818(*(int *)(puVar2 + 0xc),param_1), iVar1 != 0))))) {
    iVar3 = iVar3 + 1;
    puVar2 = puVar2 + 0x10;
    if (iVar3 == 0x1a) {
      return 0;
    }
  }
                    /* WARNING: Could not recover jumptable at 0x016e64b8. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar4 = (*(code *)(&DAT_018b5c54)[iVar3 * 4])();
  return uVar4;
}


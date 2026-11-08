// FUN_0156ea88 @ 0156ea88 size=112 calls_out=0 calls_in=1
// strings: 

uint FUN_0156ea88(int param_1,char param_2)

{
  uint uVar1;
  int iVar2;
  ushort *puVar3;
  
  if (*(int *)(param_1 + 0xc) == 0) {
    return 0;
  }
  puVar3 = *(ushort **)(param_1 + 8);
  iVar2 = *(int *)(param_1 + 0xc) * 4;
  if (param_2 != '\x06') {
                    /* WARNING: Could not recover jumptable at 0x0156eaf4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    uVar1 = (*(code *)(&DAT_0156eaf8 + *(int *)(&DAT_0156eaf8 + (uint)*puVar3 * 4)))
                      (0,*(int *)(&DAT_0156eaf8 + (uint)*puVar3 * 4),puVar3 + 2);
    return uVar1;
  }
  do {
    iVar2 = iVar2 + -4;
    uVar1 = (uint)(0xc < *puVar3);
    if (0xc < *puVar3) {
      return uVar1;
    }
    puVar3 = puVar3 + 2;
  } while (iVar2 != 0);
  return uVar1;
}


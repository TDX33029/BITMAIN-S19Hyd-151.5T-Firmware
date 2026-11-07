// FUN_01663bcc @ 01663bcc size=80 calls_out=3 calls_in=5
// strings: 

void FUN_01663bcc(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = thunk_FUN_01bee35a(param_1,0x1bc);
  puVar1 = (undefined4 *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if ((*(char *)(puVar1 + 1) != '\x01') &&
     (puVar1 = (undefined4 *)FUN_016638a4(puVar1,0), puVar1 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_019b0950(&DAT_01d301c0);
  }
  iVar2 = *(int *)*puVar1;
  *(int *)*puVar1 = iVar2 + 1;
  if (iVar2 == -1) {
    software_udf(0xfdee,0x1663bfc);
    return;
  }
  return;
}


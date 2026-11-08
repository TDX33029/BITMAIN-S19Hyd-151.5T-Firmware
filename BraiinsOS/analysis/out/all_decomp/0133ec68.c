// FUN_0133ec68 @ 0133ec68 size=76 calls_out=3 calls_in=1
// strings: 

void FUN_0133ec68(undefined4 param_1)

{
  undefined4 *puVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = thunk_FUN_016de0ee(param_1,0x220);
  puVar1 = (undefined4 *)((int)uVar3 + (int)((ulonglong)uVar3 >> 0x20));
  if ((*(char *)(puVar1 + 1) != '\x01') &&
     (puVar1 = (undefined4 *)FUN_0133d870(), puVar1 == (undefined4 *)0x0)) {
                    /* WARNING: Subroutine does not return */
    FUN_015f853c(&DAT_018ae900);
  }
  iVar2 = *(int *)*puVar1;
  *(int *)*puVar1 = iVar2 + 1;
  if (iVar2 == -1) {
    software_udf(0xfdee,0x133ec98);
    return;
  }
  return;
}


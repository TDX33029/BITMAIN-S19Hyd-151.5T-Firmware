// FUN_019ee710 @ 019ee710 size=108 calls_out=2 calls_in=11
// strings: 

undefined8 FUN_019ee710(undefined4 param_1)

{
  code *pcVar1;
  bool bVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined *puVar5;
  int *piVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_01bee35a(param_1,0x270);
  puVar3 = (undefined4 *)((int)uVar7 + (int)((ulonglong)uVar7 >> 0x20));
  if ((*(char *)(puVar3 + 1) == '\x01') ||
     (puVar3 = (undefined4 *)FUN_019efa28(), puVar3 != (undefined4 *)0x0)) {
    piVar6 = (int *)*puVar3;
    do {
      iVar4 = *piVar6;
      bVar2 = (bool)hasExclusiveAccess(piVar6);
    } while (!bVar2);
    *piVar6 = iVar4 + 1;
    if (iVar4 < 0) {
                    /* WARNING: Does not return */
      pcVar1 = (code *)software_udf(0xfdee,0x19ee778);
      (*pcVar1)();
    }
  }
  else {
    piVar6 = (int *)0x0;
  }
  puVar5 = &DAT_01d29630;
  if (piVar6 == (int *)0x0) {
    puVar5 = (undefined *)0x0;
  }
  return CONCAT44(piVar6 + 2,puVar5);
}


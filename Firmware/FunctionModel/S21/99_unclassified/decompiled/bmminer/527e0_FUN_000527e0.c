// FUN_000527e0 @ 000527e0  size=112  callers=1
// program: bmminer


undefined1 FUN_000527e0(void)

{
  int iVar1;
  undefined4 *puVar3;
  undefined4 *puVar2;
  int iVar4;
  undefined4 *puVar5;
  
  if (DAT_000c8b70 < 1) {
    DAT_000c948c = 0;
  }
  else {
    puVar5 = &DAT_000c8b74 + DAT_000c8b70;
    iVar4 = 0;
    puVar2 = &DAT_000c8b74;
    do {
      puVar3 = puVar2 + 1;
      iVar1 = strcmp((char *)*puVar2,"TEST");
      if (iVar1 == 0) {
        iVar4 = iVar4 + 1;
      }
      puVar2 = puVar3;
    } while (puVar3 != puVar5);
    if (iVar4 < 3) {
      DAT_000c948c = 0;
    }
    else {
      DAT_000c948c = 1;
    }
  }
  return DAT_000c948c;
}


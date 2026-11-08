// FUN_01a36a70 @ 01a36a70 size=112 calls_out=3 calls_in=3
// strings: 

undefined8 FUN_01a36a70(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  
  puVar3 = (undefined4 *)thunk_FUN_01be5118(0x20);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_0066439c(4,0x20);
  }
  *puVar3 = 1;
  puVar3[1] = 1;
  FUN_01bed93e(puVar3 + 2,0,0x14);
  *(undefined1 *)(puVar3 + 7) = 2;
  do {
    puVar4 = (undefined4 *)*puVar3;
    bVar1 = (bool)hasExclusiveAccess(puVar3);
  } while (!bVar1);
  *puVar3 = (undefined4 *)((int)puVar4 + 1);
  puVar5 = (undefined4 *)((int)puVar4 + 1);
  puVar2 = puVar4;
  if (puVar4 < &DAT_80000000) {
    puVar5 = puVar3;
    puVar2 = puVar3;
  }
  if ((int)puVar4 < 0) {
    software_udf(0xfdee,0x1a36ad0);
    return CONCAT44(puVar5,puVar2);
  }
  return CONCAT44(puVar5,puVar2);
}


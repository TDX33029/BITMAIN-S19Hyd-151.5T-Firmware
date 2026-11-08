// FUN_010b3cfc @ 010b3cfc size=236 calls_out=5 calls_in=2
// strings: runtime dropped the dispatch task | user code panickedCloseDelimited | user code panickedCloseDelimited

undefined4 * FUN_010b3cfc(void)

{
  undefined4 *puVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  char *pcVar5;
  
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *(undefined2 *)(puVar1 + 2) = 0x801;
  *puVar1 = 0;
  if ((DAT_018dd988 & 0x7fffffff) == 0) {
    uVar4 = 0x21;
    pcVar5 = "runtime dropped the dispatch task";
    iVar2 = thunk_FUN_016d4a50(0x21);
  }
  else {
    iVar2 = FUN_015bf3f8();
    uVar4 = 0x12;
    pcVar5 = "user code panickedCloseDelimited";
    if (iVar2 != 0) {
      uVar4 = 0x21;
      pcVar5 = "runtime dropped the dispatch task";
    }
    iVar2 = thunk_FUN_016d4a50(uVar4);
  }
  if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,uVar4);
  }
  FUN_016dd1aa(iVar2,pcVar5,uVar4);
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(0xc);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,0xc);
  }
  *puVar3 = uVar4;
  puVar3[1] = iVar2;
  puVar3[2] = uVar4;
  *puVar1 = puVar3;
  puVar1[1] = &DAT_01884c04;
  return puVar1;
}


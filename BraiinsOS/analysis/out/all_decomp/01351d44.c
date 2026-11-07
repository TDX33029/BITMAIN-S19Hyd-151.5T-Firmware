// FUN_01351d44 @ 01351d44 size=268 calls_out=3 calls_in=4
// strings: 

undefined4 * FUN_01351d44(void)

{
  bool bVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  code *pcVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  
  DataMemoryBarrier(0xb);
  if (DAT_018dd8e4 != (undefined4 *)0x0) {
    return DAT_018dd8e4;
  }
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(4);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,4);
  }
  *puVar2 = &DAT_00565d30;
  puVar3 = (undefined4 *)thunk_FUN_016d4a50(8);
  if (puVar3 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600874(4,8);
  }
  *puVar3 = puVar2;
  puVar3[1] = &DAT_018920f4;
  puVar2 = DAT_018dd8e4;
  if (DAT_018dd8e4 == (undefined4 *)0x0) {
    DataMemoryBarrier(0xb);
    do {
      bVar1 = (bool)hasExclusiveAccess(0x18dd8e4);
    } while (!bVar1);
    DAT_018dd8e4 = puVar3;
    DataMemoryBarrier(0xb);
    return puVar3;
  }
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  uVar5 = *puVar3;
  puVar6 = (undefined4 *)puVar3[1];
  pcVar4 = (code *)*puVar6;
  if (pcVar4 != (code *)0x0) {
    (*pcVar4)(uVar5);
  }
  if (puVar6[1] != 0) {
    thunk_FUN_016d3fb4(uVar5);
  }
  thunk_FUN_016d3fb4(puVar3);
  return puVar2;
}


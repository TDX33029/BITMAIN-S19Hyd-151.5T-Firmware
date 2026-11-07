// FUN_013fc620 @ 013fc620 size=236 calls_out=4 calls_in=2
// strings: 

void FUN_013fc620(undefined4 param_1,undefined *param_2)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  byte unaff_r7;
  undefined1 auStack_1020 [4096];
  
  puVar4 = &UNK_003d0900;
  if (param_2 < &UNK_003d0900) {
    puVar4 = param_2;
  }
  if (puVar4 <= param_2 + -((uint)param_2 >> 1)) {
    puVar4 = param_2 + -((uint)param_2 >> 1);
  }
  if (puVar4 < (undefined *)0x801) {
    puVar2 = auStack_1020;
    puVar3 = (undefined *)0x800;
  }
  else {
    iVar1 = (int)puVar4 * 2;
    if ((int)((uint)puVar4 | (int)puVar4 << 1) < 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,iVar1);
    }
    if (iVar1 == 0) {
      puVar2 = &DAT_00000001;
      puVar3 = (undefined *)0x0;
    }
    else {
      puVar2 = (undefined1 *)thunk_FUN_016d4a50(iVar1);
      puVar3 = puVar4;
      if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_00600af4(1,iVar1);
      }
    }
    unaff_r7 = puVar3 == (undefined *)0x0;
  }
  FUN_013fad9c(param_1,param_2,puVar2,puVar3,param_2 < (undefined *)0x41);
  if (((undefined *)0x800 < puVar4 & (unaff_r7 ^ 1)) != 0) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}


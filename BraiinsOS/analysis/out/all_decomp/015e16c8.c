// FUN_015e16c8 @ 015e16c8 size=200 calls_out=5 calls_in=1
// strings: 

void FUN_015e16c8(undefined4 param_1,undefined1 *param_2)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  uint unaff_r5;
  undefined1 *puVar3;
  bool bVar4;
  undefined1 auStack_1020 [4096];
  
  puVar2 = param_2 + -((uint)param_2 >> 1);
  puVar3 = &DAT_000f4240;
  if (param_2 < &DAT_000f4240) {
    puVar3 = param_2;
  }
  if (puVar3 <= puVar2) {
    puVar3 = puVar2;
  }
  puVar1 = puVar3;
  if (puVar3 < (undefined1 *)0x31) {
    puVar1 = (undefined1 *)0x30;
  }
  if (puVar3 < (undefined1 *)0x201) {
    puVar2 = auStack_1020;
    puVar1 = (undefined1 *)0x200;
  }
  else {
    bVar4 = (undefined1 *)0x1ffffffe < puVar2;
    if (puVar2 < (undefined1 *)0x20000000) {
      unaff_r5 = (int)puVar1 << 3;
      bVar4 = 0x7ffffffc < unaff_r5;
    }
    if (bVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00600c10();
    }
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(unaff_r5);
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,unaff_r5);
    }
  }
  FUN_015e37b0(param_1,param_2,puVar2,puVar1,param_2 < (undefined1 *)0x41);
  if ((undefined1 *)0x200 < puVar3) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}


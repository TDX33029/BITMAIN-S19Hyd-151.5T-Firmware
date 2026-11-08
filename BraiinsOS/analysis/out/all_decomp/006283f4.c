// FUN_006283f4 @ 006283f4 size=200 calls_out=4 calls_in=1
// strings: 

void FUN_006283f4(undefined4 param_1,undefined1 *param_2)

{
  uint uVar1;
  undefined1 *puVar2;
  undefined1 *puVar3;
  undefined1 *puVar4;
  bool bVar5;
  bool bVar6;
  undefined1 auStack_1018 [4096];
  
  puVar3 = param_2 + -((uint)param_2 >> 1);
  puVar4 = &DAT_000f4240;
  if (param_2 < &DAT_000f4240) {
    puVar4 = param_2;
  }
  if (puVar4 <= puVar3) {
    puVar4 = puVar3;
  }
  if (puVar4 < (undefined1 *)0x201) {
    puVar2 = auStack_1018;
    puVar3 = (undefined1 *)0x200;
  }
  else {
    uVar1 = (int)puVar4 * 8;
    bVar6 = (undefined1 *)0x1ffffffe < puVar3;
    bVar5 = puVar3 == (undefined1 *)0x1fffffff;
    if (puVar3 < (undefined1 *)0x20000000) {
      bVar6 = 0x7ffffffb < uVar1;
      bVar5 = uVar1 == 0x7ffffffc;
    }
    if (bVar6 && !bVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(0,uVar1);
    }
    puVar2 = (undefined1 *)thunk_FUN_016d4a50(uVar1);
    puVar3 = puVar4;
    if (puVar2 == (undefined1 *)0x0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(4,uVar1,4,puVar4);
    }
  }
  FUN_0060d988(param_1,param_2,puVar2,puVar3,param_2 < (undefined1 *)0x41);
  if ((undefined1 *)0x200 < puVar4) {
    thunk_FUN_016d3fb4(puVar2);
  }
  return;
}


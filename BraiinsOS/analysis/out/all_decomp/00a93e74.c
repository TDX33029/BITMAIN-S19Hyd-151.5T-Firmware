// FUN_00a93e74 @ 00a93e74 size=104 calls_out=2 calls_in=1
// strings: failed to resolve host

undefined4 FUN_00a93e74(byte param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  
  uVar1 = FUN_00ac0588("failed to resolve host",0x16);
  if (2 < param_1) {
    uVar3 = *param_2;
    puVar4 = (undefined4 *)param_2[1];
    pcVar2 = (code *)*puVar4;
    if (pcVar2 != (code *)0x0) {
      (*pcVar2)(uVar3);
    }
    if (puVar4[1] != 0) {
      thunk_FUN_016d3fb4(uVar3);
    }
    thunk_FUN_016d3fb4(param_2);
  }
  return uVar1;
}


// FUN_00a717a0 @ 00a717a0 size=240 calls_out=3 calls_in=0
// strings: 

undefined4 FUN_00a717a0(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *piVar3;
  undefined4 *puVar4;
  
  *(undefined1 *)*param_1 = 0;
  puVar1 = (undefined4 *)thunk_FUN_016d4a50(0xf);
  if (puVar1 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xf);
  }
  *(undefined4 *)((int)puVar1 + 0xb) = 0x7465732d;
  puVar1[2] = 0x2d746f6e;
  puVar1[1] = 0x2d6e6f69;
  *puVar1 = 0x73726576;
  puVar2 = (undefined4 *)thunk_FUN_016d4a50(0xf);
  if (puVar2 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,0xf);
  }
  *(undefined4 *)((int)puVar2 + 0xb) = 0x7465732d;
  puVar2[2] = 0x2d746f6e;
  puVar4 = (undefined4 *)param_1[1];
  puVar2[1] = 0x2d6e6f69;
  *puVar2 = 0x73726576;
  piVar3 = (int *)*puVar4;
  if (*piVar3 != -0x80000000) {
    if (*piVar3 != 0) {
      thunk_FUN_016d3fb4(piVar3[1]);
    }
    if (piVar3[3] != 0) {
      thunk_FUN_016d3fb4(piVar3[4]);
    }
    piVar3 = (int *)*puVar4;
  }
  piVar3[4] = (int)puVar2;
  *piVar3 = 0xf;
  piVar3[1] = (int)puVar1;
  piVar3[2] = 0xf;
  piVar3[3] = 0xf;
  piVar3[5] = 0xf;
  return 1;
}


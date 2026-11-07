// FUN_01b3d2a8 @ 01b3d2a8 size=196 calls_out=1 calls_in=1
// strings: P-224 | P-256 | P-384 | P-521

undefined4 FUN_01b3d2a8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_01bedb50(param_1,"P-224");
  if (iVar1 == 0) {
    return 0x2c9;
  }
  iVar1 = FUN_01bedb50(param_1,"P-256");
  if (iVar1 == 0) {
    return 0x19f;
  }
  iVar1 = FUN_01bedb50(param_1,"P-384");
  if (iVar1 == 0) {
    return 0x2cb;
  }
  iVar1 = FUN_01bedb50(param_1,"P-521");
  if (iVar1 == 0) {
    uVar2 = 0x2cc;
  }
  else {
    uVar2 = 0;
  }
  return uVar2;
}


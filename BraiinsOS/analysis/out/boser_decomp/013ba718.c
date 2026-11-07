// FUN_013ba718 @ 013ba718 size=212 calls_out=3 calls_in=4
// strings: internal error: entered unreachable code

uint FUN_013ba718(uint *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_a0 [144];
  
  uVar2 = param_1[4];
  param_1[3] = param_1[3] + 1;
  if (uVar2 == param_1[2]) {
    FUN_01bed4e2(auStack_a0,param_2,0x90);
    if (uVar2 == *param_1) {
      FUN_013b1138(param_1);
    }
    FUN_01bed4e2(param_1[1] + uVar2 * 0x90,param_2,0x90);
    param_1[2] = uVar2 + 1;
    param_1[4] = uVar2 + 1;
    return uVar2;
  }
  if ((param_1[2] <= uVar2) ||
     (piVar1 = (int *)(param_1[1] + uVar2 * 0x90), *piVar1 != 6 || piVar1[1] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2deac);
  }
  param_1[4] = piVar1[2];
  FUN_01bed4e2(piVar1,param_2,0x90);
  return uVar2;
}


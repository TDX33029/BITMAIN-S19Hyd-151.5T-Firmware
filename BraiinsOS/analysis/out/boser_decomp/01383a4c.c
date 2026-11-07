// FUN_01383a4c @ 01383a4c size=212 calls_out=3 calls_in=2
// strings: internal error: entered unreachable code

uint FUN_01383a4c(uint *param_1,undefined4 param_2)

{
  int *piVar1;
  uint uVar2;
  undefined1 auStack_110 [248];
  
  uVar2 = param_1[4];
  param_1[3] = param_1[3] + 1;
  if (uVar2 == param_1[2]) {
    FUN_01bed4e2(auStack_110,param_2,0xf8);
    if (uVar2 == *param_1) {
      FUN_01381520(param_1);
    }
    FUN_01bed4e2(param_1[1] + uVar2 * 0xf8,param_2,0xf8);
    param_1[2] = uVar2 + 1;
    param_1[4] = uVar2 + 1;
    return uVar2;
  }
  if ((param_1[2] <= uVar2) ||
     (piVar1 = (int *)(param_1[1] + uVar2 * 0xf8), *piVar1 != 3 || piVar1[1] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("internal error: entered unreachable code",0x28,&DAT_01d2deac);
  }
  param_1[4] = piVar1[2];
  FUN_01bed4e2(piVar1,param_2,0xf8);
  return uVar2;
}


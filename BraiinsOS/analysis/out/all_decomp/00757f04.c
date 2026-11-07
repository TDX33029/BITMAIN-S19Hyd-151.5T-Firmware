// FUN_00757f04 @ 00757f04 size=200 calls_out=3 calls_in=4
// strings: 

void FUN_00757f04(uint *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_d8 [192];
  
  param_1[3] = param_1[3] + 1;
  if (param_2 == param_1[2]) {
    FUN_016dd1aa(auStack_d8,param_3,0xc0);
    if (param_2 == *param_1) {
      FUN_0148d6c8(param_1);
    }
    FUN_016dd1aa(param_1[1] + param_2 * 0xc0,param_3,0xc0);
    param_1[2] = param_2 + 1;
    param_1[4] = param_2 + 1;
    return;
  }
  if ((param_1[2] <= param_2) || (piVar1 = (int *)(param_1[1] + param_2 * 0xc0), *piVar1 != 2)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac198);
  }
  param_1[4] = piVar1[1];
  FUN_016dd1aa(piVar1,param_3,0xc0);
  return;
}


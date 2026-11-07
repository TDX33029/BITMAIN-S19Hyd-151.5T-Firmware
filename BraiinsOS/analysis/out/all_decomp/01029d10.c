// FUN_01029d10 @ 01029d10 size=204 calls_out=3 calls_in=1
// strings: 

void FUN_01029d10(uint *param_1,uint param_2,undefined4 param_3)

{
  int *piVar1;
  undefined1 auStack_110 [248];
  
  param_1[3] = param_1[3] + 1;
  if (param_2 == param_1[2]) {
    FUN_016dd1aa(auStack_110,param_3,0xf8);
    if (param_2 == *param_1) {
      FUN_006bc8dc(param_1);
    }
    FUN_016dd1aa(param_1[1] + param_2 * 0xf8,param_3,0xf8);
    param_1[2] = param_2 + 1;
    param_1[4] = param_2 + 1;
    return;
  }
  if ((param_1[2] <= param_2) ||
     (piVar1 = (int *)(param_1[1] + param_2 * 0xf8), *piVar1 != 3 || piVar1[1] != 0)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac198);
  }
  param_1[4] = piVar1[2];
  FUN_016dd1aa(piVar1,param_3,0xf8);
  return;
}


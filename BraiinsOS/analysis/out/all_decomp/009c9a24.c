// FUN_009c9a24 @ 009c9a24 size=168 calls_out=2 calls_in=1
// strings: 

void FUN_009c9a24(uint *param_1,uint param_2,int param_3,int param_4)

{
  int *piVar1;
  undefined4 *puVar2;
  
  param_1[3] = param_1[3] + 1;
  if (param_2 == param_1[2]) {
    if (param_2 == *param_1) {
      FUN_010e0728();
    }
    param_1[4] = param_2 + 1;
    param_1[2] = param_2 + 1;
    puVar2 = (undefined4 *)(param_1[1] + param_2 * 0xc);
    *puVar2 = 1;
    puVar2[1] = param_3;
    puVar2[2] = param_4;
    return;
  }
  if ((param_1[2] <= param_2) || (piVar1 = (int *)(param_1[1] + param_2 * 0xc), *piVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018ac198);
  }
  piVar1[2] = param_4;
  *piVar1 = 1;
  param_1[4] = piVar1[1];
  piVar1[1] = param_3;
  return;
}


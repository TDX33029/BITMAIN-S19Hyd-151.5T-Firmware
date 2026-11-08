// FUN_016bd110 @ 016bd110 size=200 calls_out=2 calls_in=2
// strings: assertion failed: self.is_char_boundary(start) | assertion failed: self.is_char_boundary(end)

void FUN_016bd110(int *param_1,int param_2,uint param_3,uint param_4,undefined4 param_5)

{
  int iVar1;
  uint uVar2;
  
  uVar2 = *(uint *)(param_2 + 8);
  if (uVar2 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(0,param_4,uVar2);
  }
  if (param_4 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(param_3,param_4,uVar2);
  }
  iVar1 = *(int *)(param_2 + 4);
  if (((param_3 != 0) && (param_3 < uVar2)) && (*(char *)(iVar1 + param_3) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.is_char_boundary(start)",0x2e,param_5);
  }
  if (((param_4 != 0) && (param_4 < uVar2)) && (*(char *)(iVar1 + param_4) < -0x40)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.is_char_boundary(end)",0x2c,param_5);
  }
  *param_1 = iVar1 + param_3;
  param_1[1] = iVar1 + param_4;
  param_1[2] = param_2;
  param_1[3] = param_3;
  param_1[4] = param_4;
  return;
}


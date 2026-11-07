// FUN_015e4f74 @ 015e4f74 size=272 calls_out=3 calls_in=3
// strings: 

void FUN_015e4f74(int param_1,uint param_2,uint param_3)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint local_30;
  undefined1 *local_2c;
  undefined1 *local_28;
  
  local_30 = param_3;
  if (param_2 < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_00418e0f,0x13,&DAT_018aafe4);
  }
  param_2 = param_2 - param_3;
  if (3 < param_2) {
    param_2 = 4;
  }
  FUN_00fab1e0(&local_2c,param_1 + param_3,param_2);
  puVar1 = local_2c;
  if (local_2c == (undefined1 *)0x1) {
    puVar1 = local_28;
  }
  if (local_2c != (undefined1 *)0x1 || puVar1 != (undefined1 *)0x0) {
    return;
  }
  uVar2 = param_3;
  if (3 < param_3) {
    uVar2 = 4;
  }
  if (1 < param_3) {
    uVar3 = 2;
    do {
      if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(param_3 - uVar3,param_3,param_3,&DAT_018aafe4);
      }
      FUN_00fab1e0(&local_2c,param_1 + (param_3 - uVar3),uVar3);
      if (local_2c == (undefined1 *)0x0) {
        return;
      }
    } while ((uVar3 < uVar2) && (uVar3 = uVar3 + (uVar3 < uVar2), uVar3 <= uVar2));
  }
  local_28 = &LAB_00fac484;
  local_2c = (undefined1 *)&local_30;
                    /* WARNING: Subroutine does not return */
  FUN_00faa478(&DAT_0057f2e9,&local_2c,&DAT_018aafe4);
}


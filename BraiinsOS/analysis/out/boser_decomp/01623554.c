// FUN_01623554 @ 01623554 size=240 calls_out=2 calls_in=2
// strings: 

void FUN_01623554(undefined4 *param_1,undefined2 *param_2,uint param_3)

{
  undefined2 uVar1;
  undefined2 *local_20;
  uint uStack_1c;
  undefined *local_18;
  code *local_14;
  undefined1 *local_10;
  undefined1 *local_c;
  
  local_10 = (undefined1 *)&local_20;
  local_20 = param_2;
  uStack_1c = param_3;
  if (param_3 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(0,0,&DAT_01d06078);
  }
  if (param_3 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01d06088);
  }
  if (param_3 < 3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(2,2,&DAT_01d06098);
  }
  if ((param_3 & 0xffff) == 4) {
    uVar1 = param_2[1];
    *(undefined2 *)((int)param_1 + 6) = *param_2;
    *(undefined2 *)(param_1 + 1) = uVar1;
    *param_1 = 0x80000000;
  }
  else {
    if (param_3 == 3) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb12c(3,3,&DAT_01d060a8);
    }
    local_c = &LAB_0141634c;
    local_14 = FUN_012fd02c;
    local_18 = &DAT_0056e8c0;
    FUN_00664898(param_1,&DAT_005a5aaf,&local_18);
  }
  return;
}


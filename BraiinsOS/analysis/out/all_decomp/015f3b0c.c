// FUN_015f3b0c @ 015f3b0c size=200 calls_out=3 calls_in=154
// strings: 

void FUN_015f3b0c(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  int local_20;
  uint local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  iVar1 = FUN_016e0392(param_2,&local_20);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    local_14 = *puVar2;
    local_18 = 0;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018ab298);
  }
  if (999999999 < local_1c) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_00418ec6,0x2b,&local_18,&DAT_018ab298);
  }
  param_1[2] = local_1c;
  *param_1 = local_20;
  param_1[1] = local_20 >> 0x1f;
  return;
}


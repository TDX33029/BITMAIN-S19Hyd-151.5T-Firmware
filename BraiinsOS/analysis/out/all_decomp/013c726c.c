// FUN_013c726c @ 013c726c size=52 calls_out=0 calls_in=1
// strings: 

void FUN_013c726c(int *param_1,uint param_2)

{
  int iVar1;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_1[1];
  if (uStack_c <= param_2) {
    uStack_10 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_00fb74f8(&DAT_003ce9ea,0x2a,&uStack_10,&DAT_018943f8,&DAT_018943e8);
  }
  if (*(char *)(*param_1 + param_2) == '\0') {
    iVar1 = param_1[2];
    *(undefined1 *)(*param_1 + param_2) = 1;
    param_1[2] = iVar1 + 1;
    return;
  }
  return;
}


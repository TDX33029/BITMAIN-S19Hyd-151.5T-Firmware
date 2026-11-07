// FUN_016cc64c @ 016cc64c size=52 calls_out=0 calls_in=11
// strings: 

void FUN_016cc64c(int *param_1,uint param_2)

{
  int iVar1;
  uint uStack_10;
  uint uStack_c;
  
  uStack_c = param_1[1];
  if (uStack_c <= param_2) {
    uStack_10 = param_2;
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_004cf72c,0x2a,&uStack_10,&DAT_01d099a8,&DAT_01d09998);
  }
  if (*(char *)(*param_1 + param_2) == '\0') {
    iVar1 = param_1[2];
    *(undefined1 *)(*param_1 + param_2) = 1;
    param_1[2] = iVar1 + 1;
    return;
  }
  return;
}


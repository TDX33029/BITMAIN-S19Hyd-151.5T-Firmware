// FUN_0177b888 @ 0177b888 size=340 calls_out=5 calls_in=1
// strings: 

int FUN_0177b888(int param_1)

{
  int iVar1;
  ushort *puVar2;
  
  if (param_1 != 0) {
    if (*(int *)(param_1 + 8) != 0) {
      return *(int *)(param_1 + 8);
    }
    FUN_01781f34(&DAT_018dfe64);
    if ((DAT_018dfe60 != 0) &&
       (iVar1 = FUN_017794f4(DAT_018dfe60,param_1,&LAB_0177b718,&LAB_0177b6f8), iVar1 != 0)) {
      FUN_01781f94(&DAT_018dfe64);
      return *(int *)(iVar1 + 8);
    }
    FUN_01781f94(&DAT_018dfe64);
    puVar2 = (ushort *)FUN_016dcc60(param_1,&DAT_0044cfb0,899,2,&LAB_0177b7b4);
    if (puVar2 != (ushort *)0x0) {
      if (0x3e5 < *puVar2 - 1) {
                    /* WARNING: Subroutine does not return */
        FUN_016d2c24();
      }
      return *(int *)(&DAT_018b6340 + (*puVar2 - 1) * 0x18);
    }
  }
  return 0;
}


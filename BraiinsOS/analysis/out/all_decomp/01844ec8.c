// FUN_01844ec8 @ 01844ec8 size=174 calls_out=7 calls_in=2
// strings: libunwind: __unw_resume(cursor=%p)  | LIBUNWIND_PRINT_APIS

undefined4 FUN_01844ec8(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_018dffe0 == '\0') {
    iVar2 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar2 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_resume(cursor=%p)\n",param_1);
    FUN_016daeb4(&DAT_018db5c0);
  }
  if (*(code **)(*param_1 + 0x28) != FUN_01843db0 + 1) {
    (**(code **)(*param_1 + 0x28))(param_1);
    return 0xffffe674;
  }
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    if ((char)param_1[0x13] != '\0') {
      FUN_018425b8();
      cVar1 = *(char *)((int)param_1 + 0x4e);
      goto joined_r0x01844f22;
    }
    FUN_018425b0(param_1 + 0x14);
  }
  cVar1 = *(char *)((int)param_1 + 0x4e);
joined_r0x01844f22:
  if (cVar1 != '\0') {
    FUN_018425c0(param_1 + 0x36);
  }
  FUN_0184259c(param_1 + 2);
  return 0xffffe674;
}


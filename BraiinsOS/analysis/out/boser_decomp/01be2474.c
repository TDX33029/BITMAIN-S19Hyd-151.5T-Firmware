// FUN_01be2474 @ 01be2474 size=174 calls_out=7 calls_in=2
// strings: libunwind: __unw_resume(cursor=%p)  | LIBUNWIND_PRINT_APIS

undefined4 FUN_01be2474(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if (DAT_01d53488 == '\0') {
    iVar2 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar2 != 0;
    DAT_01d53488 = '\x01';
  }
  if (DAT_01d53487 != '\0') {
    FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_resume(cursor=%p)\n",param_1);
    FUN_01beb1cc(&DAT_01d50fd8);
  }
  if (*(code **)(*param_1 + 0x28) != FUN_01be135c + 1) {
    (**(code **)(*param_1 + 0x28))(param_1);
    return 0xffffe674;
  }
  if (*(char *)((int)param_1 + 0x4d) != '\0') {
    if ((char)param_1[0x13] != '\0') {
      FUN_01bdfb64();
      cVar1 = *(char *)((int)param_1 + 0x4e);
      goto joined_r0x01be24ce;
    }
    FUN_01bdfb5c(param_1 + 0x14);
  }
  cVar1 = *(char *)((int)param_1 + 0x4e);
joined_r0x01be24ce:
  if (cVar1 != '\0') {
    FUN_01bdfb6c(param_1 + 0x36);
  }
  FUN_01bdfb48(param_1 + 2);
  return 0xffffe674;
}


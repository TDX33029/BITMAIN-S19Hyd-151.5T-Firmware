// FUN_01be23a0 @ 01be23a0 size=178 calls_out=4 calls_in=5
// strings: LIBUNWIND_PRINT_APIS | libunwind: __unw_get_proc_info(cursor=%p; &info=%p) 

undefined4 FUN_01be23a0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_01d53488 == '\0') {
    iVar2 = FUN_01be31f8("LIBUNWIND_PRINT_APIS");
    DAT_01d53487 = iVar2 != 0;
    DAT_01d53488 = '\x01';
    if (!(bool)DAT_01d53487) goto LAB_01be23ba;
  }
  else if (DAT_01d53487 == '\0') goto LAB_01be23ba;
  FUN_01beb3de(&DAT_01d50fd8,"libunwind: __unw_get_proc_info(cursor=%p, &info=%p)\n",param_1,param_2
               ,param_4);
  FUN_01beb1cc(&DAT_01d50fd8);
LAB_01be23ba:
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_01be13a4_1) {
    if ((char)param_1[0x60] != '\0') {
      FUN_01bed93e(param_2,0,0x28);
      return 0xffffe66b;
    }
    iVar2 = param_1[0x57];
    iVar3 = param_1[0x58];
    iVar4 = param_1[0x59];
    *param_2 = param_1[0x56];
    param_2[1] = iVar2;
    param_2[2] = iVar3;
    param_2[3] = iVar4;
    iVar3 = param_1[0x5b];
    iVar4 = param_1[0x5c];
    iVar5 = param_1[0x5d];
    param_2[4] = param_1[0x5a];
    param_2[5] = iVar3;
    param_2[6] = iVar4;
    param_2[7] = iVar5;
    iVar3 = param_1[0x5f];
    param_2[8] = param_1[0x5e];
    param_2[9] = iVar3;
  }
  else {
    (**(code **)(*param_1 + 0x24))(param_1,param_2);
    iVar2 = param_2[1];
  }
  uVar1 = 0xffffe66b;
  if (iVar2 != 0) {
    uVar1 = 0;
  }
  return uVar1;
}


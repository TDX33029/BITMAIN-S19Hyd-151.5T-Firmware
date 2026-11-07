// FUN_01844df4 @ 01844df4 size=178 calls_out=4 calls_in=5
// strings: LIBUNWIND_PRINT_APIS | libunwind: __unw_get_proc_info(cursor=%p; &info=%p) 

undefined4 FUN_01844df4(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  if (DAT_018dffe0 == '\0') {
    iVar2 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar2 != 0;
    DAT_018dffe0 = '\x01';
    if (!(bool)DAT_018dffdf) goto LAB_01844e0e;
  }
  else if (DAT_018dffdf == '\0') goto LAB_01844e0e;
  FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_get_proc_info(cursor=%p, &info=%p)\n",param_1,param_2
               ,param_4);
  FUN_016daeb4(&DAT_018db5c0);
LAB_01844e0e:
  if (*(code **)(*param_1 + 0x24) == (code *)&LAB_01843df8_1) {
    if ((char)param_1[0x60] != '\0') {
      FUN_016dd606(param_2,0,0x28);
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


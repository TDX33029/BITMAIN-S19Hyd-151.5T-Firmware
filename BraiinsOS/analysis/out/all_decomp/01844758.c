// FUN_01844758 @ 01844758 size=214 calls_out=4 calls_in=2
// strings: LIBUNWIND_PRINT_APIS | libunwind: __unw_get_reg(cursor=%p; regNum=%d; &value=%p) 

/* WARNING: Control flow encountered bad instruction data */

undefined4 FUN_01844758(int *param_1,uint param_2,int *param_3)

{
  int iVar1;
  
  if (DAT_018dffe0 == '\0') {
    iVar1 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar1 != 0;
    DAT_018dffe0 = '\x01';
    if ((bool)DAT_018dffdf) goto LAB_018447f4;
  }
  else if (DAT_018dffdf != '\0') {
LAB_018447f4:
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_get_reg(cursor=%p, regNum=%d, &value=%p)\n",param_1
                 ,param_2,param_3);
    FUN_016daeb4(&DAT_018db5c0);
  }
  iVar1 = *param_1;
  if (*(code **)(iVar1 + 8) == (code *)&LAB_01843d84_1) {
    if ((param_2 + 2 < 2) || (param_2 < 0x10)) {
LAB_018447b0:
      if (*(code **)(iVar1 + 0xc) == (code *)&DAT_01844075) {
        switch(param_2) {
        case 0:
        case 1:
        case 2:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
        case 8:
        case 9:
        case 10:
        case 0xb:
        case 0xc:
          iVar1 = param_1[param_2 + 2];
          break;
        case 0xe:
          iVar1 = param_1[0x10];
          break;
        case 0xfffffffe:
        case 0xd:
          iVar1 = param_1[0xf];
          break;
        case 0xffffffff:
        case 0xf:
          iVar1 = param_1[0x11];
          break;
        default:
          FUN_01843e30();
                    /* WARNING: Bad instruction - Truncating control flow here */
          halt_baddata();
        }
      }
      else {
        iVar1 = (**(code **)(iVar1 + 0xc))(param_1,param_2);
      }
      *param_3 = iVar1;
      return 0;
    }
  }
  else {
    iVar1 = (**(code **)(iVar1 + 8))(param_1,param_2);
    if (iVar1 != 0) {
      iVar1 = *param_1;
      goto LAB_018447b0;
    }
  }
  return 0xffffe672;
}


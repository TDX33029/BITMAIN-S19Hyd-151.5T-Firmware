// FUN_01844a4c @ 01844a4c size=278 calls_out=7 calls_in=1
// strings: libunwind: __unw_get_fpreg(cursor=%p; regNum=%d; &value=%p)  | LIBUNWIND_PRINT_APIS

undefined4 FUN_01844a4c(int *param_1,int param_2,undefined8 *param_3)

{
  int iVar1;
  code *pcVar2;
  undefined8 uVar3;
  
  if (DAT_018dffe0 == '\0') {
    iVar1 = FUN_016d2b7c("LIBUNWIND_PRINT_APIS");
    DAT_018dffdf = iVar1 != 0;
    DAT_018dffe0 = '\x01';
  }
  if (DAT_018dffdf != '\0') {
    FUN_016db0c6(&DAT_018db5c0,"libunwind: __unw_get_fpreg(cursor=%p, regNum=%d, &value=%p)\n",
                 param_1,param_2,param_3);
    FUN_016daeb4(&DAT_018db5c0);
  }
  pcVar2 = *(code **)(*param_1 + 0x14);
  if (pcVar2 == (code *)&LAB_01843d98_1) {
    if (0x1f < param_2 - 0x100U) {
      return 0xffffe672;
    }
    pcVar2 = *(code **)(*param_1 + 0x18);
    if (pcVar2 == (code *)&LAB_018440f4_1) {
LAB_01844a90:
      if (param_2 - 0x100U < 0x10) {
        if (*(char *)((int)param_1 + 0x4d) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4d) = 1;
          if ((char)param_1[0x13] == '\0') {
            FUN_018425e0(param_1 + 0x14);
          }
          else {
            FUN_018425e8();
          }
        }
        uVar3 = *(undefined8 *)(param_1 + (param_2 + -0xf7) * 2 + 2);
      }
      else {
        if (0xf < param_2 - 0x110U) {
                    /* WARNING: Subroutine does not return */
          FUN_01843eb0();
        }
        if (*(char *)((int)param_1 + 0x4e) == '\0') {
          *(undefined1 *)((int)param_1 + 0x4e) = 1;
          FUN_018425f0(param_1 + 0x36);
        }
        uVar3 = *(undefined8 *)(param_1 + (param_2 + -0xf6) * 2 + 2);
      }
      goto LAB_01844ab2;
    }
  }
  else {
    iVar1 = (*pcVar2)(param_1,param_2);
    if (iVar1 == 0) {
      return 0xffffe672;
    }
    pcVar2 = *(code **)(*param_1 + 0x18);
    if (pcVar2 == (code *)&LAB_018440f4_1) goto LAB_01844a90;
  }
  uVar3 = (*pcVar2)(param_1,param_2);
LAB_01844ab2:
  *param_3 = uVar3;
  return 0;
}


// FUN_00a94d50 @ 00a94d50 size=252 calls_out=6 calls_in=1
// strings: 

void FUN_00a94d50(undefined4 *param_1,undefined4 *param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;
  undefined8 in_d16;
  ulonglong uVar4;
  undefined1 auStack_30 [24];
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xcd)) {
  case 0:
    iVar1 = param_2[0xcc];
    if (*(int *)(iVar1 + 0x54) != -0x80000000) {
      uVar2 = *(undefined4 *)(iVar1 + 0x58);
      uVar3 = *(undefined4 *)(iVar1 + 0x5c);
      *(undefined1 *)(param_2 + 0xcb) = 0;
      param_2[0xca] = iVar1;
      *param_2 = uVar2;
      param_2[1] = uVar3;
      goto switchD_00a94d6c_caseD_3;
    }
    FUN_01602d08(auStack_30);
    uVar2 = FUN_00ac0334(&DAT_0034e035,0xf,auStack_30);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_0186dd58);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_0186dd58);
  case 3:
switchD_00a94d6c_caseD_3:
    uVar4 = FUN_00a93b08(param_2,param_3);
    uVar2 = (undefined4)(uVar4 >> 0x20);
    if ((int)uVar4 == 2) {
      *param_1 = 2;
      *(undefined1 *)(param_2 + 0xcd) = 3;
      return;
    }
    if (*(char *)(param_2 + 0xcb) == '\x03') {
      FUN_00a9166c(param_2 + 2);
    }
    if ((uVar4 & 1) == 0) {
      uVar3 = 0;
      in_d16 = VectorUnsignedToFloat(uVar2,(byte)(in_fpscr >> 0x16) & 3);
      goto LAB_00a94e2c;
    }
  }
  uVar3 = 1;
LAB_00a94e2c:
  *(undefined8 *)(param_1 + 2) = in_d16;
  *param_1 = uVar3;
  param_1[1] = uVar2;
  *(undefined1 *)(param_2 + 0xcd) = 1;
  return;
}


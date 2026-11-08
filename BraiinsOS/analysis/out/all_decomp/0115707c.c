// FUN_0115707c @ 0115707c size=244 calls_out=1 calls_in=1
// strings: 

void FUN_0115707c(int *param_1,int param_2,uint param_3,char param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar1 = param_3;
  do {
    uVar2 = uVar1;
    if (uVar2 == 0) {
      *param_1 = 0;
      return;
    }
    uVar1 = uVar2 - 1;
  } while (*(char *)(param_2 + -1 + uVar2) != param_4);
  if (uVar1 != 0) {
    if (uVar1 < param_3) {
      if (*(char *)(param_2 + uVar1) < -0x40) {
LAB_01157154:
                    /* WARNING: Subroutine does not return */
        FUN_00faa8ac(param_2,param_3,0,uVar1,&DAT_01888e3c);
      }
    }
    else {
      if (uVar1 != param_3) goto LAB_01157154;
      uVar2 = param_3 + 1;
      uVar3 = 0;
      uVar1 = param_3;
      if (0xfffffffe < param_3) goto LAB_0115711c;
    }
  }
  if (uVar2 < param_3) {
    if (*(char *)(param_2 + uVar2) < -0x40) {
LAB_01157134:
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(param_2,param_3,uVar2,param_3,&DAT_01888e4c);
    }
    uVar3 = uVar2;
  }
  else {
    uVar3 = param_3;
    if (uVar2 != param_3) goto LAB_01157134;
  }
LAB_0115711c:
  *param_1 = param_2;
  param_1[1] = uVar1;
  param_1[2] = param_2 + uVar3;
  param_1[3] = param_3 - uVar3;
  return;
}


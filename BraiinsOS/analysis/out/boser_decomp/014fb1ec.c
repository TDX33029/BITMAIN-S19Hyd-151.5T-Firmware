// FUN_014fb1ec @ 014fb1ec size=228 calls_out=1 calls_in=1
// strings: 

void FUN_014fb1ec(int *param_1,int param_2,uint param_3,char param_4)

{
  undefined *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  uVar3 = param_3;
  do {
    uVar2 = uVar3;
    if (uVar2 == 0) {
      *param_1 = 0;
      return;
    }
    uVar3 = uVar2 - 1;
  } while (*(char *)(param_2 + -1 + uVar2) != param_4);
  if (uVar3 == 0) {
LAB_014fb264:
    if (uVar2 < param_3) {
      if (-0x41 < *(char *)(param_2 + uVar2)) {
        uVar4 = uVar2;
LAB_014fb28c:
        *param_1 = param_2;
        param_1[1] = uVar3;
        param_1[2] = param_2 + uVar4;
        param_1[3] = param_3 - uVar4;
        return;
      }
    }
    else {
      uVar4 = param_3;
      if (uVar2 == param_3) goto LAB_014fb28c;
    }
    puVar1 = &DAT_01cfa7f4;
    uVar3 = param_3;
  }
  else {
    if (uVar3 < param_3) {
      if (-0x41 < *(char *)(param_2 + uVar3)) goto LAB_014fb264;
    }
    else if (uVar3 == param_3) {
      uVar2 = param_3 + 1;
      uVar4 = 0;
      uVar3 = param_3;
      if (0xfffffffe < param_3) goto LAB_014fb28c;
      goto LAB_014fb264;
    }
    uVar2 = 0;
    puVar1 = &DAT_01cfa7e4;
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb514(param_2,param_3,uVar2,uVar3,puVar1);
}


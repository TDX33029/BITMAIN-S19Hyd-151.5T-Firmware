// FUN_01156e04 @ 01156e04 size=300 calls_out=1 calls_in=1
// strings: 

void FUN_01156e04(int *param_1,uint param_2)

{
  uint uVar1;
  int iVar2;
  
  iVar2 = param_1[2];
  if (iVar2 == 0) {
    iVar2 = *param_1;
    uVar1 = param_1[1];
    if (param_2 == 0) {
LAB_01156ee4:
      *param_1 = iVar2 + param_2;
      param_1[1] = uVar1 - param_2;
      return;
    }
    if (param_2 < uVar1) {
      if (-0x41 < *(char *)(iVar2 + param_2)) goto LAB_01156ee4;
    }
    else if (uVar1 == param_2) goto LAB_01156ee4;
                    /* WARNING: Subroutine does not return */
    FUN_00faa8ac(iVar2,uVar1,param_2,uVar1,&DAT_01888d6c);
  }
  uVar1 = param_1[3];
  if (param_2 < uVar1) {
    if ((param_2 != 0) && (*(char *)(iVar2 + param_2) < -0x40)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa8ac(iVar2,uVar1,param_2,uVar1,&DAT_01888d5c);
    }
    param_1[2] = iVar2 + param_2;
    param_1[3] = uVar1 - param_2;
    return;
  }
  iVar2 = *param_1;
  param_2 = param_2 - uVar1;
  uVar1 = param_1[1];
  param_1[2] = 0;
  if (param_2 == 0) {
LAB_01156f00:
    *param_1 = iVar2 + param_2;
    param_1[1] = uVar1 - param_2;
    return;
  }
  if (param_2 < uVar1) {
    if (-0x41 < *(char *)(iVar2 + param_2)) goto LAB_01156f00;
  }
  else if (uVar1 == param_2) goto LAB_01156f00;
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(iVar2,uVar1,param_2,uVar1,&DAT_01888d4c);
}


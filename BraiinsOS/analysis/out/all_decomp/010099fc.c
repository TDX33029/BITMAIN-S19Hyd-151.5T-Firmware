// FUN_010099fc @ 010099fc size=160 calls_out=2 calls_in=1
// strings: 

undefined8 FUN_010099fc(uint *param_1,int param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = param_1[1] + 1;
  if (0xfffffffe < param_1[1]) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb6cd4();
  }
  uVar2 = *param_1;
  if ((char)param_1[2] != '\0') {
    uVar2 = uVar1;
  }
  if (uVar1 < uVar2) goto LAB_01009a68;
  if (uVar2 != 0) {
    if (uVar2 < param_3) {
      if (*(char *)(param_2 + uVar2) < -0x40) goto LAB_01009a68;
    }
    else if (uVar2 != param_3) goto LAB_01009a68;
  }
  if (uVar1 < param_3) {
    if (-0x41 < *(char *)(param_2 + uVar1)) {
LAB_01009a88:
      return CONCAT44(uVar1 - uVar2,param_2 + uVar2);
    }
  }
  else if (uVar1 == param_3) goto LAB_01009a88;
LAB_01009a68:
                    /* WARNING: Subroutine does not return */
  FUN_00faa8ac(param_2,param_3,uVar2,uVar1,&DAT_01882084);
}


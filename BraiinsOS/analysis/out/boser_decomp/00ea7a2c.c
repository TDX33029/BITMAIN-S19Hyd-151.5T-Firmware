// FUN_00ea7a2c @ 00ea7a2c size=148 calls_out=1 calls_in=1
// strings: 

void FUN_00ea7a2c(undefined1 *param_1,short *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 2) {
    if (*param_2 == 0x6e45) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_00ea7a8c;
    }
    if (*param_2 == 0x7552) {
      uVar1 = 1;
    }
    else {
      if (*param_2 != 0x685a) {
        param_3 = 2;
        goto LAB_00ea7a98;
      }
      uVar1 = 2;
    }
    param_1[1] = uVar1;
    uVar1 = 0;
  }
  else {
LAB_00ea7a98:
    uVar2 = FUN_01265080(param_2,param_3,&DAT_01c17f6c,3);
    *(undefined4 *)(param_1 + 4) = uVar2;
    uVar1 = 1;
  }
LAB_00ea7a8c:
  *param_1 = uVar1;
  return;
}


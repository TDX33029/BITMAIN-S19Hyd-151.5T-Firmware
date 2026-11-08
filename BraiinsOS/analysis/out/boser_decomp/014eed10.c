// FUN_014eed10 @ 014eed10 size=124 calls_out=1 calls_in=3
// strings: 

void FUN_014eed10(undefined1 *param_1,short *param_2,int param_3)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_3 == 2) {
    if (*param_2 == 0x3176) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_014eed58;
    }
    if (*param_2 == 0x3276) {
      param_1[1] = 1;
      uVar1 = 0;
      goto LAB_014eed58;
    }
    param_3 = 2;
  }
  uVar2 = FUN_014dee68(param_2,param_3,&DAT_01cfa344,2);
  *(undefined4 *)(param_1 + 4) = uVar2;
  uVar1 = 1;
LAB_014eed58:
  *param_1 = uVar1;
  return;
}


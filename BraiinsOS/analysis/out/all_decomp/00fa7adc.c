// FUN_00fa7adc @ 00fa7adc size=260 calls_out=2 calls_in=2
// strings: 

void FUN_00fa7adc(int *param_1,int param_2,uint param_3,undefined4 param_4,uint param_5)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  
  if (param_5 <= param_3) {
    uVar2 = param_3 - param_5;
    if (uVar2 != 0) {
      uVar3 = 0;
      do {
        if (param_3 < uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa36c(param_3 + 1,param_3,param_3,&DAT_01880a74);
        }
        if ((param_5 <= param_3 - uVar3) &&
           (iVar1 = thunk_FUN_016dd50a(param_4,param_2 + uVar3,param_5), iVar1 == 0)) {
          uVar2 = uVar3;
          goto LAB_00fa7b70;
        }
        uVar3 = uVar3 + 1;
      } while (uVar3 != uVar2);
    }
    iVar1 = thunk_FUN_016dd50a(param_4,param_2 + uVar2,param_5);
    if (iVar1 == 0) {
LAB_00fa7b70:
      if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar2,param_3,&DAT_01880a64);
      }
      param_5 = uVar2 + param_5;
      if (param_3 < param_5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(param_5,param_3,param_3,&DAT_01880a54);
      }
      *param_1 = param_2;
      param_1[1] = uVar2;
      param_1[2] = param_2 + param_5;
      param_1[3] = param_3 - param_5;
      return;
    }
  }
  *param_1 = 0;
  return;
}


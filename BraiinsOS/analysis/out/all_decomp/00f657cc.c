// FUN_00f657cc @ 00f657cc size=120 calls_out=1 calls_in=1
// strings: 

void FUN_00f657cc(undefined1 *param_1,uint param_2,int param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = 6;
  if ((param_2 & 1) != 0) {
    uVar2 = param_4 - param_5;
    if (uVar2 != 0) {
      if (uVar2 < param_4) {
        if (*(char *)(param_3 + uVar2) < -0x40) {
LAB_00f65804:
                    /* WARNING: Subroutine does not return */
          FUN_00faa8ac(param_3,param_4,0,uVar2,&DAT_0187feb8);
        }
      }
      else if (param_5 != 0) goto LAB_00f65804;
    }
    *(int *)(param_1 + 4) = param_3;
    *(uint *)(param_1 + 8) = uVar2;
    uVar1 = 0;
  }
  *param_1 = uVar1;
  return;
}


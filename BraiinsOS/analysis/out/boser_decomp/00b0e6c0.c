// FUN_00b0e6c0 @ 00b0e6c0 size=108 calls_out=1 calls_in=0
// strings: 

void FUN_00b0e6c0(undefined4 *param_1,char param_2,uint param_3,uint param_4,int param_5)

{
  undefined1 uVar1;
  undefined4 uVar2;
  
  if (param_2 == '\0') {
    uVar1 = 1;
LAB_00b0e710:
    *(undefined1 *)param_1 = uVar1;
    return;
  }
  if ((param_3 & 1) == 0) {
    if (param_5 == 0) {
      uVar1 = 2;
      goto LAB_00b0e710;
    }
    param_4 = *(uint *)(param_5 + 0x9c);
  }
  if (100 < param_4) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(1,1,&DAT_01c16bc4);
  }
  uVar2 = 0;
  if (param_2 == '\x02') {
    uVar2 = 0x100;
  }
  *param_1 = uVar2;
  param_1[1] = param_4;
  return;
}


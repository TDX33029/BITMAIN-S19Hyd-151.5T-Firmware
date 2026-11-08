// FUN_012c1e5c @ 012c1e5c size=144 calls_out=2 calls_in=2
// strings: 

void FUN_012c1e5c(int *param_1,int param_2,uint param_3,undefined4 param_4,int param_5)

{
  uint uVar1;
  uint uVar2;
  ulonglong uVar3;
  
  uVar3 = FUN_012c1ef4(param_2,param_3,param_4,param_5);
  uVar2 = (uint)(uVar3 >> 0x20);
  if ((uVar3 & 1) == 0) {
    *param_1 = 0;
    return;
  }
  if (param_3 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(0,uVar2,param_3,&DAT_01ce295c);
  }
  uVar1 = uVar2 + param_5;
  if (param_3 < uVar1) {
                    /* WARNING: Subroutine does not return */
    FUN_012faff4(uVar1,param_3,param_3,&DAT_01ce296c);
  }
  *param_1 = param_2;
  param_1[1] = uVar2;
  param_1[2] = param_2 + uVar1;
  param_1[3] = param_3 - uVar1;
  return;
}


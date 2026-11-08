// FUN_01b0c474 @ 01b0c474 size=136 calls_out=2 calls_in=1
// strings: 

undefined4 FUN_01b0c474(int *param_1,uint param_2)

{
  uint uVar1;
  undefined4 uVar2;
  
  if (*param_1 == 0 || (int)param_2 < 0) {
    return 0;
  }
  uVar1 = FUN_01b701f4(*param_1);
  if (param_2 < uVar1) {
    uVar2 = FUN_01b70208(*param_1,param_2);
    return uVar2;
  }
  return 0;
}


// FUN_0165f33c @ 0165f33c size=152 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_0165f33c(int *param_1,int param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int local_1c;
  undefined4 local_18;
  int local_14;
  
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar1 = 0;
  if (uVar5 <= uVar4) {
    uVar3 = uVar5 + param_2;
    if (uVar4 < uVar3) {
      param_2 = uVar4 + 1;
      param_1[3] = param_2;
    }
    else {
      uVar2 = uVar3;
      if (uVar3 == uVar4) {
        uVar2 = uVar3 + 1;
      }
      param_1[3] = uVar2;
      if ((uVar3 < uVar5) || ((uint)param_1[1] < uVar3)) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar5,uVar3,param_1[1],&DAT_01d06dc4);
      }
      FUN_012fbd94(&local_1c,*param_1 + uVar5,param_2);
      uVar1 = local_18;
      param_2 = local_14;
      if (local_1c != 0) {
        uVar1 = 0;
      }
    }
  }
  return CONCAT44(param_2,uVar1);
}


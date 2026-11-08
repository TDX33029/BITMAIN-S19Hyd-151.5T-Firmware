// FUN_010006b0 @ 010006b0 size=84 calls_out=2 calls_in=1
// strings: 

void FUN_010006b0(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined8 uVar2;
  undefined4 local_20;
  undefined4 uStack_1c;
  int local_18;
  int local_14;
  
  iVar1 = *param_2;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      local_18 = param_2[1];
      local_14 = param_2[2];
      local_20 = param_3;
      uStack_1c = param_4;
      uVar2 = FUN_00fad280(&local_20);
    }
    else {
      uVar2 = FUN_011d825c(param_2[1],param_2[2]);
    }
    *(undefined8 *)(param_1 + 1) = uVar2;
  }
  *param_1 = iVar1;
  return;
}


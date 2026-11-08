// FUN_014d83a4 @ 014d83a4 size=72 calls_out=1 calls_in=0
// strings: 

undefined4 FUN_014d83a4(int *param_1)

{
  undefined4 uVar1;
  int local_14;
  
  uVar1 = 0;
  if (param_1[1] != *param_1) {
    local_14 = param_1[3];
    uVar1 = FUN_014dee0c(local_14 + ((uint)(param_1[1] - *param_1) >> 5),&local_14,&DAT_01cfa00c);
  }
  return uVar1;
}


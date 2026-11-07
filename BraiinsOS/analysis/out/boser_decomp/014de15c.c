// FUN_014de15c @ 014de15c size=116 calls_out=3 calls_in=2
// strings: 

void FUN_014de15c(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined4 local_70;
  undefined4 uStack_6c;
  int local_68;
  undefined1 local_64;
  undefined4 local_1c [2];
  undefined4 local_14;
  undefined4 local_c;
  
  local_14 = 0;
  local_1c[0] = 0;
  local_c = 0;
  local_70 = param_2;
  uStack_6c = param_3;
  FUN_01ac814c(&local_68,local_1c,param_2);
  if (local_68 == 2) {
    uVar1 = FUN_014de1d0(&local_70,local_64);
    *param_1 = 2;
    param_1[1] = uVar1;
  }
  else {
    FUN_01bed4e2(param_1,&local_68,0x48);
  }
  return;
}


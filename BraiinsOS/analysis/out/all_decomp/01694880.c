// FUN_01694880 @ 01694880 size=108 calls_out=0 calls_in=55
// strings: 

int FUN_01694880(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 local_c;
  
  if (*(uint *)(param_1 + 8) != 2) {
    iVar1 = *(int *)(param_1 + 0xc);
    if ((*(uint *)(param_1 + 8) & 1) != 0) {
      iVar1 = iVar1 + (*(int *)(*(int *)(param_1 + 0x10) + 8) - 1U & 0xfffffff8) + 8;
    }
    local_c = param_2;
    (**(code **)(*(int *)(param_1 + 0x10) + 0x20))(iVar1,param_1,&local_c);
  }
  return param_1;
}


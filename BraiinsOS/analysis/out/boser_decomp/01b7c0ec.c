// FUN_01b7c0ec @ 01b7c0ec size=144 calls_out=3 calls_in=1
// strings: 

int FUN_01b7c0ec(undefined4 param_1,uint param_2)

{
  int iVar1;
  undefined4 local_c;
  
  iVar1 = FUN_01b7c030();
  if (iVar1 == 0) {
    local_c = 1;
    if ((param_2 & 8) == 0) {
      local_c = FUN_01b7bcb8(param_1,param_2 | 0x10);
    }
    iVar1 = FUN_01b7c0a0(local_c);
  }
  return iVar1;
}


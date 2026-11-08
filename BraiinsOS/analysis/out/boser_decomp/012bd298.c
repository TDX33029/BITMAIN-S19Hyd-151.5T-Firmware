// FUN_012bd298 @ 012bd298 size=76 calls_out=2 calls_in=3
// strings: 

int FUN_012bd298(int param_1,undefined1 *param_2)

{
  undefined1 uVar1;
  char local_20 [16];
  
  local_20[0] = param_2[4];
  if (local_20[0] != '\a') {
    uVar1 = *param_2;
    FUN_01bed4e2((uint)local_20 | 1,param_2 + 5,0xf);
    FUN_012b177c(param_1 + 0x10,uVar1,local_20);
  }
  return param_1;
}


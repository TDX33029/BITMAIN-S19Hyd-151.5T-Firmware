// FUN_014f9944 @ 014f9944 size=76 calls_out=2 calls_in=1
// strings: 

void FUN_014f9944(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  char local_22;
  undefined1 auStack_21 [17];
  
  FUN_014f92b0(&local_22,param_3);
  uVar1 = 2;
  if (local_22 == '\x01') {
    FUN_01bed4e2(param_1 + 1,auStack_21,0x11);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}


// FUN_018d2b4c @ 018d2b4c size=172 calls_out=4 calls_in=2
// strings: 

void FUN_018d2b4c(undefined1 *param_1,undefined4 param_2,undefined4 param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined1 auStack_40 [16];
  char local_30 [24];
  
  iVar2 = FUN_018c4060(param_2,param_3);
  if (iVar2 == 0) {
    FUN_018c3fe8(auStack_40,param_2,param_3);
    FUN_01bed4e2((uint)local_30 | 3,auStack_40,0xc);
    *param_1 = 0;
    FUN_01bed4e2(param_1 + 1,local_30,0xf);
  }
  else {
    FUN_01304dac(local_30,param_2,param_3);
    uVar1 = 2;
    if (local_30[0] != '\x02') {
      FUN_01bed4e2(param_1 + 1,local_30,0x11);
      uVar1 = 1;
    }
    *param_1 = uVar1;
  }
  return;
}


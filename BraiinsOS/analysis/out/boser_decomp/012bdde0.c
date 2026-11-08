// FUN_012bdde0 @ 012bdde0 size=172 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_012bdde0(undefined4 param_1,undefined4 param_2,int *param_3)

{
  undefined4 uVar1;
  undefined1 local_44 [4];
  undefined4 local_40;
  int iStack_3c;
  int iStack_38;
  undefined1 auStack_30 [16];
  
  uVar1 = FUN_012bc650(2);
  FUN_012bc780(uVar1,param_1);
  FUN_01bed4e2((uint)auStack_30 | 3,param_2,0xc);
  local_40 = CONCAT31(local_40._1_3_,2);
  local_44[0] = 0;
  FUN_01bed4e2((int)&local_40 + 1,auStack_30,0xf);
  FUN_012bd298(uVar1,local_44);
  if (*param_3 != -0x80000000) {
    local_40 = *param_3;
    iStack_3c = param_3[1];
    iStack_38 = param_3[2];
    local_44[0] = 4;
    FUN_012bca08(uVar1,0xf,local_44);
  }
  return uVar1;
}


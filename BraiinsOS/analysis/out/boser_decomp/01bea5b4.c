// FUN_01bea5b4 @ 01bea5b4 size=74 calls_out=3 calls_in=1
// strings: 

void FUN_01bea5b4(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                 undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  undefined1 auStack_160 [336];
  
  if (param_4 == 0) {
    iVar1 = FUN_01bed93e(auStack_160,0,0x150);
  }
  else {
    iVar1 = FUN_01bed4e2(auStack_160,param_4,0x150);
  }
  *(undefined4 *)(iVar1 + 0x110) = 0x1be9e35;
  FUN_01bea378(param_1,param_2,param_3,iVar1,param_5,param_6);
  return;
}


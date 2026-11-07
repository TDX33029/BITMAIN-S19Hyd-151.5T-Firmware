// FUN_018e7a48 @ 018e7a48 size=92 calls_out=3 calls_in=0
// strings: 

void FUN_018e7a48(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  FUN_01931148(auStack_28,"");
  for (param_2 = param_2 * 0xc; param_2 != 0; param_2 = param_2 + -0xc) {
    puVar1 = (undefined4 *)(param_1 + 4);
    puVar2 = (undefined4 *)(param_1 + 8);
    param_1 = param_1 + 0xc;
    FUN_0191d778(*puVar1,*puVar2,local_18);
  }
  FUN_01931818(auStack_28);
  return;
}


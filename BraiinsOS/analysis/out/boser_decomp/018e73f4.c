// FUN_018e73f4 @ 018e73f4 size=96 calls_out=3 calls_in=1
// strings: 

void FUN_018e73f4(undefined2 *param_1,int param_2)

{
  undefined2 *puVar1;
  undefined2 uVar2;
  undefined1 auStack_30 [16];
  undefined4 local_20;
  
  FUN_01931148(auStack_30,&DAT_00567738);
  for (param_2 = param_2 << 2; param_2 != 0; param_2 = param_2 + -4) {
    puVar1 = param_1 + 1;
    uVar2 = *param_1;
    param_1 = param_1 + 2;
    FUN_0190d1d8(uVar2,*puVar1,local_20);
  }
  FUN_01931818(auStack_30);
  return;
}


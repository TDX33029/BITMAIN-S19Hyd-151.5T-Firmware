// FUN_018e7470 @ 018e7470 size=92 calls_out=3 calls_in=1
// strings: 

void FUN_018e7470(int param_1,int param_2)

{
  undefined1 auStack_28 [16];
  undefined4 local_18;
  
  FUN_01931148(auStack_28,&DAT_01d23310);
  for (param_2 = param_2 * 0xc; param_2 != 0; param_2 = param_2 + -0xc) {
    FUN_01935d5c(*(undefined4 *)(param_1 + 4),*(undefined4 *)(param_1 + 8),local_18);
    param_1 = param_1 + 0xc;
  }
  FUN_01931818(auStack_28);
  return;
}


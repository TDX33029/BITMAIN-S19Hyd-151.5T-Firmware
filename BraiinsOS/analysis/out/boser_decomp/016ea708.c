// FUN_016ea708 @ 016ea708 size=60 calls_out=2 calls_in=1
// strings: 

void FUN_016ea708(undefined4 *param_1,int param_2,int param_3,undefined4 param_4)

{
  if ((*(byte *)(param_2 + 0x10) & 1) != 0) {
    FUN_016df574(param_4);
  }
  if (param_3 != 0) {
    FUN_016df9f4(param_4);
  }
  *param_1 = 0x80000000;
  return;
}


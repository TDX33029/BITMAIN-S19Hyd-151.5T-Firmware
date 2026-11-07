// FUN_01bf0446 @ 01bf0446 size=42 calls_out=1 calls_in=2
// strings: 

void FUN_01bf0446(uint param_1,undefined1 *param_2,int param_3)

{
  undefined1 auStack_c [8];
  
  if (param_3 == 0) {
    param_3 = 1;
    param_2 = auStack_c;
  }
  software_interrupt(0);
  if (param_2 == auStack_c) {
    param_1 = param_1 & (int)param_1 >> 0x1f;
  }
  FUN_01be3b5a(param_1,param_2,param_3);
  return;
}


// FUN_0006a900 @ 0006a900  size=232  callers=1
// program: bmminer


void FUN_0006a900(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  uint local_18;
  uint local_10;
  uint local_c;
  
  if ((param_1 == 0) && (1 < param_2)) {
    local_c = (param_2 & 0x1f) << 8;
  }
  else {
    local_c = 0x100;
  }
  if (param_1 == 0) {
    local_10 = 0;
  }
  else {
    local_10 = 0x4000;
  }
  if (param_3 == 0) {
    local_18 = 0;
  }
  else {
    FUN_0006c370();
    local_18 = 0x80;
  }
  uVar1 = FUN_0006b35c();
  FUN_0006b390(uVar1 & 0xffffe0bf | local_c | local_10 | local_18 | 0x8060);
  return;
}


// FUN_01bbf568 @ 01bbf568 size=92 calls_out=0 calls_in=1
// strings: 

int FUN_01bbf568(int param_1,uint param_2,uint param_3)

{
  int iVar1;
  
  if (param_1 == 1) {
    if (param_3 < param_2) {
      param_3 = param_2 - param_3;
    }
    else {
      param_3 = 0;
    }
    iVar1 = (8 << (param_2 & 0xff)) + (1 << (param_3 & 0xff));
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}


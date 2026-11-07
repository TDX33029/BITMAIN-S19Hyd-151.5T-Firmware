// FUN_00972a30 @ 00972a30 size=80 calls_out=3 calls_in=2
// strings: 

void FUN_00972a30(undefined1 *param_1,int *param_2)

{
  undefined1 auStack_28 [24];
  
  if (*param_2 == 1) {
    FUN_01497884(auStack_28,param_2 + 1);
    FUN_01274488(param_1,auStack_28);
    FUN_00db4764(auStack_28);
  }
  else {
    *param_1 = 0;
  }
  return;
}


// FUN_0128578c @ 0128578c size=92 calls_out=0 calls_in=2
// strings: 

void FUN_0128578c(undefined1 *param_1,undefined4 *param_2,char *param_3)

{
  bool bVar1;
  
  bVar1 = false;
  if (param_2[1] != 0) {
    bVar1 = *param_3 == *(char *)*param_2;
    if (bVar1) {
      param_2[1] = param_2[1] + -1;
      *param_2 = (char *)*param_2 + 1;
      param_2[2] = param_2[2] + 1;
    }
  }
  param_1[1] = bVar1;
  *param_1 = 4;
  return;
}


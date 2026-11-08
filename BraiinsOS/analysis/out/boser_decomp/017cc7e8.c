// FUN_017cc7e8 @ 017cc7e8 size=40 calls_out=0 calls_in=3
// strings: 

undefined8 FUN_017cc7e8(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else if (*(char *)(param_1 + param_2 + -1) != ']') {
    param_1 = 0;
  }
  return CONCAT44(param_2 + -1,param_1);
}


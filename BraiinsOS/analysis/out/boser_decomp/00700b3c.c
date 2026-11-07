// FUN_00700b3c @ 00700b3c size=44 calls_out=0 calls_in=21
// strings: 

undefined8 FUN_00700b3c(int param_1,int param_2,char param_3)

{
  if (param_2 == 0) {
    param_1 = 0;
  }
  else if (*(char *)(param_1 + param_2 + -1) != param_3) {
    param_1 = 0;
  }
  return CONCAT44(param_2 + -1,param_1);
}


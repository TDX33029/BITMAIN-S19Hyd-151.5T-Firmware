// FUN_01b2b4cc @ 01b2b4cc size=120 calls_out=2 calls_in=8
// strings: 

undefined8 FUN_01b2b4cc(undefined4 *param_1,int param_2)

{
  int iVar1;
  
  if (param_2 == 0) {
    FUN_01b2af70();
  }
  else {
    iVar1 = FUN_01b2b248(param_1,1);
    if (iVar1 == 0) {
      return 0;
    }
    param_1[3] = 0;
    *(int *)*param_1 = param_2;
    param_1[1] = 1;
  }
  return 1;
}


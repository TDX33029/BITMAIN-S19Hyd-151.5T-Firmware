// FUN_01b59ec0 @ 01b59ec0 size=232 calls_out=2 calls_in=2
// strings: 

undefined8
FUN_01b59ec0(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,int param_7)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_6 != 0; param_6 = param_6 + -1) {
    FUN_01b59be0(param_1);
    FUN_01b2283c(param_1,param_2 + iVar1,param_7);
    FUN_01b2283c(param_1 + 200,param_3 + iVar1,param_7);
    FUN_01b2283c(param_1 + 400,param_4 + iVar1,param_7);
    FUN_01b2283c(param_1 + 600,param_5 + iVar1,param_7);
    iVar1 = iVar1 + param_7;
  }
  return 0;
}


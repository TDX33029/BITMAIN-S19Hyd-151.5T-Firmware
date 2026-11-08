// FUN_012670a0 @ 012670a0 size=140 calls_out=1 calls_in=1
// strings: 

void FUN_012670a0(undefined1 *param_1,int *param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  
  if (param_3 == 6) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_0053249b,6);
    if (iVar2 == 0) {
      uVar1 = 1;
      goto LAB_0126710c;
    }
  }
  else if (param_3 == 4) {
    if (*param_2 == 0x65646f63) {
      uVar1 = 0;
      goto LAB_0126710c;
    }
    if (*param_2 == 0x746e6968) {
      uVar1 = 2;
      goto LAB_0126710c;
    }
  }
  uVar1 = 3;
LAB_0126710c:
  param_1[1] = uVar1;
  *param_1 = 0;
  return;
}


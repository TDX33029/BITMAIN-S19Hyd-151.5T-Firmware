// FUN_012cca18 @ 012cca18 size=156 calls_out=2 calls_in=1
// strings: 

void FUN_012cca18(undefined1 *param_1,undefined4 param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_3 == 9) {
    iVar2 = thunk_FUN_01bed842(param_2,&DAT_0050be92,9);
    if (iVar2 == 0) {
      uVar1 = 0;
      param_1[1] = 0;
      goto LAB_012cca88;
    }
  }
  else if ((param_3 == 0xc) && (iVar2 = thunk_FUN_01bed842(param_2,&DAT_00509188,0xc), iVar2 == 0))
  {
    param_1[1] = 1;
    uVar1 = 0;
    goto LAB_012cca88;
  }
  uVar3 = FUN_01265080(param_2,param_3,&DAT_01ce2dc4,2);
  *(undefined4 *)(param_1 + 4) = uVar3;
  uVar1 = 1;
LAB_012cca88:
  *param_1 = uVar1;
  return;
}


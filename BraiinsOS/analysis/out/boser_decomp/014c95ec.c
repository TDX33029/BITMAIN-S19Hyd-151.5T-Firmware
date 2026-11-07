// FUN_014c95ec @ 014c95ec size=176 calls_out=2 calls_in=1
// strings: 

void FUN_014c95ec(undefined1 *param_1,undefined4 *param_2,undefined4 param_3,int param_4)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 local_28 [4];
  undefined4 uStack_24;
  int iStack_20;
  
  if ((param_4 == param_2[1]) && (iVar2 = thunk_FUN_01bed842(param_3,*param_2,param_4), iVar2 == 0))
  {
    uVar1 = 0;
    param_1[1] = 0;
  }
  else if ((param_4 == param_2[3]) &&
          (iVar2 = thunk_FUN_01bed842(param_3,param_2[2],param_4), iVar2 == 0)) {
    param_1[1] = 1;
    uVar1 = 0;
  }
  else {
    local_28[0] = 6;
    uStack_24 = param_3;
    iStack_20 = param_4;
    uVar3 = FUN_01967740(local_28,param_2,&DAT_01cf9df4);
    *(undefined4 *)(param_1 + 4) = uVar3;
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}


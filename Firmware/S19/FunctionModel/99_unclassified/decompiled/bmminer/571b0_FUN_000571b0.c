// FUN_000571b0 @ 000571b0  size=140  callers=52
// program: bmminer


undefined4
FUN_000571b0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [12];
  
  iVar1 = FUN_000595c0(param_2,param_3,param_4,param_5,auStack_2c);
  if (iVar1 == 0) {
    FUN_00059768(param_1,auStack_2c,9);
    if (param_2 == 1) {
      param_3 = 0;
    }
    FUN_00059448(param_2 != 1,param_1,param_3,param_4,param_5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


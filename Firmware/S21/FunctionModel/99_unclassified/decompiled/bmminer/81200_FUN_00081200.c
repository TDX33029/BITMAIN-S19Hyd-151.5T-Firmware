// FUN_00081200 @ 00081200  size=140  callers=51
// program: bmminer


undefined4
FUN_00081200(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            )

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_2c [12];
  
  iVar1 = FUN_000838a4(param_2,param_3,param_4,param_5,auStack_2c);
  if (iVar1 == 0) {
    FUN_00083a4c(param_1,auStack_2c,9);
    if (param_2 == 1) {
      param_3 = 0;
    }
    FUN_00083730(param_2 != 1,param_1,param_3,param_4,param_5);
    uVar2 = 0;
  }
  else {
    uVar2 = 0xffffffff;
  }
  return uVar2;
}


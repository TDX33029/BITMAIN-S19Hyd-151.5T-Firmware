// FUN_01579db0 @ 01579db0 size=92 calls_out=2 calls_in=0
// strings: 

bool FUN_01579db0(int *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = param_1[1];
  uVar3 = param_1[2];
  uVar1 = uVar3 + param_3;
  if (uVar1 <= uVar2) {
    if (uVar1 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar3,uVar1,uVar2,&DAT_018a92fc);
    }
    FUN_016dd1aa(*param_1 + uVar3);
    param_1[2] = uVar1;
  }
  return uVar2 < uVar1;
}


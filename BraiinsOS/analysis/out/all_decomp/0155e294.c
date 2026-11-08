// FUN_0155e294 @ 0155e294 size=192 calls_out=4 calls_in=1
// strings: 

void FUN_0155e294(uint *param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint local_1c;
  
  uVar3 = 0;
  if ((int)param_2 < 0) {
LAB_0155e2ac:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar3,param_2);
  }
  if (param_2 == 0) {
    uVar4 = 0;
    uVar1 = 1;
  }
  else {
    uVar3 = 1;
    uVar1 = FUN_016d38c8(param_2,1);
    uVar4 = param_2;
    if (uVar1 == 0) goto LAB_0155e2ac;
  }
  local_1c = param_2;
  iVar2 = FUN_0173b09c(param_3,uVar1,&local_1c);
  if (iVar2 == 1) {
    *param_1 = uVar4;
    param_1[1] = uVar1;
    if (local_1c < param_2) {
      param_2 = local_1c;
    }
    param_1[2] = param_2;
  }
  else {
    *param_1 = 0x80000001;
    if (uVar4 != 0) {
      thunk_FUN_016d3fb4(uVar1);
      return;
    }
  }
  return;
}


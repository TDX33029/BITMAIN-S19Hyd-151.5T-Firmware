// FUN_013f52c8 @ 013f52c8 size=140 calls_out=3 calls_in=1
// strings: 

uint FUN_013f52c8(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  int local_18;
  undefined4 local_14;
  
  if (*param_1 == 0) {
    iVar1 = param_1[1];
    local_14 = FUN_013f5444(param_1 + 2);
    local_18 = iVar1;
    uVar3 = FUN_01403584(&local_18);
  }
  else if (*param_1 == 1) {
    uVar3 = param_1[1];
  }
  else {
    uVar3 = param_1[1];
    if (param_1[2] == 0) {
      iVar1 = param_1[3];
    }
    else {
      iVar1 = FUN_013f5444(param_1 + 2);
    }
    uVar2 = *(undefined4 *)((uVar3 & 0xfffffff8) + 4);
    *(int *)((uVar3 & 0xfffffff8) + 4) = iVar1;
    FUN_01406bcc(uVar2);
  }
  return uVar3;
}


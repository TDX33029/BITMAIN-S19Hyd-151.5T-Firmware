// FUN_0160968c @ 0160968c size=140 calls_out=2 calls_in=8
// strings: 

void FUN_0160968c(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int local_18 [2];
  
  local_18[1] = 4;
  local_18[0] = 0;
  uVar3 = 1;
  iVar1 = FUN_01be7afc(param_2,1,4,local_18,local_18 + 1);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_01be3244();
    param_1[2] = *puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
  }
  else if (local_18[0] == 0) {
    uVar3 = 0;
    *(undefined1 *)(param_1 + 1) = 4;
  }
  else {
    uVar3 = 0;
    param_1[2] = local_18[0];
    *(undefined1 *)(param_1 + 1) = 0;
  }
  *param_1 = uVar3;
  return;
}


// FUN_01609e28 @ 01609e28 size=100 calls_out=2 calls_in=2
// strings: 

void FUN_01609e28(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  local_28[0] = 0x80002001;
  local_1c = 0;
  local_20 = param_4;
  iVar1 = FUN_01be3e06(param_3,3,param_2,local_28);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
  }
  else {
    *(undefined1 *)param_1 = 4;
  }
  return;
}


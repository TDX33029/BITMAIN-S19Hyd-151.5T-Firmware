// FUN_01609584 @ 01609584 size=124 calls_out=2 calls_in=11
// strings: 

void FUN_01609584(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                 byte param_5)

{
  int iVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined4 uVar4;
  uint local_28 [2];
  undefined4 local_20;
  undefined4 local_1c;
  
  uVar3 = 0x80002001;
  if ((param_5 & 1) == 0) {
    uVar3 = 0x80000000;
  }
  local_28[0] = uVar3 | (param_5 & 2) << 1 | param_5 >> 3 & 2;
  local_1c = 0;
  local_20 = param_4;
  iVar1 = FUN_01be3e06(param_2,1,param_3,local_28);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar4 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar4;
  }
  else {
    *(undefined1 *)param_1 = 4;
  }
  return;
}


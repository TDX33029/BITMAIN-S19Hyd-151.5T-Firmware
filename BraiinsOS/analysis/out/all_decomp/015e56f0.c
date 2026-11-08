// FUN_015e56f0 @ 015e56f0 size=128 calls_out=4 calls_in=0
// strings: 

void FUN_015e56f0(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined1 auStack_80 [104];
  
  FUN_016dd606(auStack_80,0,0x68);
  iVar1 = FUN_016e048a(param_3,auStack_80);
  if (iVar1 == -1) {
    puVar2 = (undefined4 *)FUN_016d2bc8();
    uVar3 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = uVar3;
    *param_1 = 1;
    return;
  }
  FUN_016dd1aa(param_1 + 2,auStack_80,0x68);
  *param_1 = 0;
  return;
}


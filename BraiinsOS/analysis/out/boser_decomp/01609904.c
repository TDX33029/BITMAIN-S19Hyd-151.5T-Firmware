// FUN_01609904 @ 01609904 size=76 calls_out=2 calls_in=3
// strings: 

void FUN_01609904(undefined4 *param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_01be9c4e(param_2,param_3 | 0x80800,0);
  if (iVar1 < 0) {
    puVar2 = (undefined4 *)FUN_01be3244();
    uVar3 = *puVar2;
    *param_1 = 0;
    param_1[1] = uVar3;
    return;
  }
  param_1[1] = iVar1;
  *(undefined1 *)param_1 = 4;
  return;
}


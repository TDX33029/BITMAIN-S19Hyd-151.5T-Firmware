// FUN_0199f694 @ 0199f694 size=120 calls_out=4 calls_in=0
// strings: 

void FUN_0199f694(uint *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  undefined1 auStack_80 [104];
  
  FUN_01bed93e(auStack_80,0,0x68);
  iVar1 = FUN_01bf065a(param_3,auStack_80);
  if (iVar1 == -1) {
    puVar2 = (uint *)FUN_01be3244();
    uVar3 = *puVar2;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[2] = uVar3;
  }
  else {
    FUN_01bed4e2(param_1 + 2,auStack_80,0x68);
  }
  *param_1 = (uint)(iVar1 == -1);
  return;
}


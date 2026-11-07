// FUN_019a6040 @ 019a6040 size=124 calls_out=4 calls_in=5
// strings: 

void FUN_019a6040(uint *param_1,undefined4 param_2)

{
  int iVar1;
  uint *puVar2;
  uint uVar3;
  uint local_80 [26];
  
  FUN_01bed93e(local_80,0,0x68);
  iVar1 = FUN_01bf05c2(param_2,local_80);
  if (iVar1 == -1) {
    puVar2 = (uint *)FUN_01be3244();
    uVar3 = *puVar2;
    param_1[1] = 0;
    param_1[2] = uVar3;
  }
  else {
    FUN_01bed4e2(param_1 + 3,(uint)local_80 | 4,100);
    param_1[2] = local_80[0];
  }
  *param_1 = (uint)(iVar1 == -1);
  return;
}


// FUN_01ad68e8 @ 01ad68e8 size=104 calls_out=1 calls_in=1
// strings: 

void FUN_01ad68e8(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int local_24 [2];
  int local_1c;
  
  FUN_01ad6950(local_24);
  if (local_24[0] == 0) {
    param_1[4] = 5;
    return;
  }
  iVar1 = local_24[0] + local_1c * 0xc;
  uVar2 = *(undefined4 *)(iVar1 + 800);
  uVar3 = *(undefined4 *)(iVar1 + 0x324);
  *param_1 = *(undefined4 *)(iVar1 + 0x31c);
  param_1[1] = uVar2;
  param_1[2] = uVar3;
  FUN_01bed4e2(param_1 + 4,local_24[0] + local_1c * 0x48,0x48);
  return;
}


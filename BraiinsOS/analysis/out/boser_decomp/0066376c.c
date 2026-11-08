// FUN_0066376c @ 0066376c size=180 calls_out=3 calls_in=1
// strings: 

void FUN_0066376c(undefined4 param_1,uint param_2,undefined4 param_3)

{
  uint uVar1;
  undefined1 *puVar2;
  int iVar3;
  uint uVar4;
  int unaff_r8;
  int unaff_r10;
  undefined1 auStack_102c [4096];
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar4 = 2000000;
  if (param_2 < 2000000) {
    uVar4 = param_2;
  }
  if (uVar4 <= uVar1) {
    uVar4 = uVar1;
  }
  if (uVar4 < 0x401) {
    puVar2 = auStack_102c;
    iVar3 = 0x400;
  }
  else {
    FUN_006d0424(&local_2c,uVar4);
    iVar3 = local_2c - local_24;
    puVar2 = (undefined1 *)(local_28 + local_24 * 4);
    unaff_r8 = local_28;
    unaff_r10 = local_2c;
  }
  FUN_00663848(param_1,param_2,puVar2,iVar3,param_2 < 0x41,param_3);
  if (0x400 < uVar4) {
    FUN_0134aee0(unaff_r10,unaff_r8,4,4);
  }
  return;
}


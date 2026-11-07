// FUN_00eaa1c0 @ 00eaa1c0 size=180 calls_out=3 calls_in=1
// strings: 

void FUN_00eaa1c0(undefined4 param_1,uint param_2)

{
  uint uVar1;
  uint uVar2;
  undefined1 *puVar3;
  int iVar4;
  int unaff_r8;
  int unaff_r9;
  undefined1 auStack_102c [4096];
  int local_2c;
  int local_28;
  int local_24;
  
  uVar1 = param_2 - (param_2 >> 1);
  uVar2 = 0xa2c2a;
  if (param_2 < 0xa2c2a) {
    uVar2 = param_2;
  }
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  if (uVar2 >> 1 < 0xab) {
    puVar3 = auStack_102c;
    iVar4 = 0x155;
  }
  else {
    FUN_00dee004(&local_2c);
    iVar4 = local_2c - local_24;
    puVar3 = (undefined1 *)(local_28 + local_24 * 0xc);
    unaff_r8 = local_28;
    unaff_r9 = local_2c;
  }
  FUN_01179774(param_1,param_2,puVar3,iVar4,param_2 < 0x41);
  if (0xaa < uVar2 >> 1) {
    FUN_0132b958(unaff_r9,unaff_r8,4,0xc);
  }
  return;
}


// FUN_00f610ac @ 00f610ac size=184 calls_out=3 calls_in=4
// strings: 

void FUN_00f610ac(undefined4 *param_1,int *param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r8;
  int local_1a8;
  int local_1a4;
  
  uVar4 = 0;
  local_1a8 = 4;
  local_1a4 = 0;
  uVar3 = FUN_019ec670(param_3);
  if ((uVar3 & 0xff) != 2) {
    FUN_019edbc4(0);
    if ((uVar3 & 1) != 0) {
      *param_1 = 4;
      param_1[1] = 0;
      return;
    }
    uVar4 = (uVar3 & 0xffffff) >> 8;
    unaff_r8 = (uVar3 & 0xffffff) >> 0x10;
  }
  (**(code **)(*(int *)(*param_2 + 8) + 0xc))(*param_2,&local_1a8,param_3);
  iVar2 = local_1a4;
  iVar1 = local_1a8;
  FUN_01bed4e2(param_1,&local_1a8,0x180);
  if (iVar1 != 4 || iVar2 != 0) {
    uVar4 = 0;
  }
  FUN_019edbc4(uVar4,unaff_r8);
  return;
}


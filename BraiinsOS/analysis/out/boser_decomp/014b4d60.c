// FUN_014b4d60 @ 014b4d60 size=180 calls_out=4 calls_in=8
// strings: 

void FUN_014b4d60(undefined4 *param_1,int param_2,undefined4 param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint unaff_r8;
  int local_88 [28];
  
  local_88[0] = 3;
  uVar2 = FUN_019ec670(param_3);
  if ((uVar2 & 0xff) == 2) {
    uVar3 = 0;
  }
  else {
    FUN_019edbc4(0);
    if ((uVar2 & 1) != 0) {
      *param_1 = 3;
      FUN_014b4e40(local_88);
      return;
    }
    uVar3 = (uVar2 & 0xffffff) >> 8;
    unaff_r8 = (uVar2 & 0xffffff) >> 0x10;
  }
  (**(code **)(*(int *)(param_2 + 8) + 0xc))(param_2,local_88,param_3);
  iVar1 = local_88[0];
  FUN_01bed4e2(param_1,local_88,0x70);
  if (iVar1 != 3) {
    uVar3 = 0;
  }
  FUN_019edbc4(uVar3,unaff_r8);
  return;
}


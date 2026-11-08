// FUN_014ff278 @ 014ff278 size=232 calls_out=4 calls_in=9
// strings: 

void FUN_014ff278(uint *param_1,undefined4 param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  undefined4 uVar5;
  bool bVar6;
  bool bVar7;
  uint local_40;
  int *piStack_3c;
  uint uStack_38;
  int local_30;
  int local_2c [3];
  
  iVar2 = (**(code **)(param_3 + 0xc))(param_2);
  if (iVar2 == 0) {
    *param_1 = 0;
    param_1[1] = 4;
    param_1[2] = 0;
    FUN_01139b38(param_2,param_3);
    return;
  }
  local_30 = iVar2;
  (**(code **)(param_3 + 0x10))(local_2c,param_2);
  uVar5 = 0;
  uVar3 = local_2c[0] + 1;
  if (local_2c[0] == -1) {
    uVar3 = 0xffffffff;
  }
  uVar4 = uVar3;
  if (uVar3 < 5) {
    uVar4 = 4;
  }
  bVar7 = 0x3ffffffe < uVar3;
  bVar6 = uVar3 == 0x3fffffff;
  uVar1 = uVar4 * 4;
  if (uVar3 < 0x40000000) {
    bVar7 = 0x7ffffffb < uVar1;
    bVar6 = uVar1 == 0x7ffffffc;
  }
  if (!bVar7 || bVar6) {
    uVar5 = 4;
    piStack_3c = (int *)FUN_01298504(uVar1,4);
    if (piStack_3c != (int *)0x0) {
      *piStack_3c = iVar2;
      uStack_38 = 1;
      local_40 = uVar4;
      FUN_014fb9d0(&local_40,param_2,param_3);
      *param_1 = local_40;
      param_1[1] = (uint)piStack_3c;
      param_1[2] = uStack_38;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_00664620(uVar5,uVar1);
}


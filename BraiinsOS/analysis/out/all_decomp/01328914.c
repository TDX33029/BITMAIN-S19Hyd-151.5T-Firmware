// FUN_01328914 @ 01328914 size=488 calls_out=5 calls_in=46
// strings: assertion failed: self.position == 0

void FUN_01328914(int *param_1,int *param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int local_28;
  int local_24;
  int iStack_20;
  
  uVar5 = param_2[6];
  uVar1 = param_2[7];
  if (param_4 <= uVar5 - uVar1) {
    uVar4 = uVar1 + param_4;
    if ((CARRY4(uVar1,param_4)) || (uVar5 < uVar4)) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(uVar1,uVar4,uVar5,&DAT_0188fa70);
    }
    FUN_016dd1aa(param_2[5] + uVar1,param_3,param_4);
    param_2[7] = uVar4;
    *param_1 = 4;
    return;
  }
  FUN_013287bc(&local_28,param_2);
  if (local_28 != 4) {
    *param_1 = local_28;
    param_1[1] = local_24;
    param_1[2] = iStack_20;
    return;
  }
  if (param_2[7] != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464("assertion failed: self.position == 0",0x24,&DAT_0188fa60);
  }
  if (param_4 < (uint)param_2[6]) {
    FUN_016dd1aa(param_2[5],param_3,param_4);
    param_2[7] = param_4;
  }
  else {
    uVar1 = *param_2 + 0x80000001U & *param_2 >> 0x1f;
    if (uVar1 != 0) {
      if (uVar1 != 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_0188fa50);
      }
      piVar6 = (int *)param_2[1];
      iVar2 = piVar6[2];
      if ((uint)(*piVar6 - iVar2) < param_4) {
        FUN_0132f8cc(piVar6,iVar2,param_4,1,1);
        iVar2 = piVar6[2];
      }
      FUN_016dd1aa(piVar6[1] + iVar2,param_3,param_4);
      iVar2 = *piVar6;
      iVar3 = piVar6[2] + param_4;
      piVar6[2] = iVar3;
      param_2[5] = piVar6[1] + iVar3;
      param_2[6] = iVar2 - iVar3;
      *param_1 = 4;
      return;
    }
    (**(code **)(param_2[4] + 0x1c))(&local_28,param_2[3],param_3,param_4);
    if ((char)local_28 != '\x04') {
      *param_1 = 0;
      param_1[1] = local_28;
      param_1[2] = local_24;
      return;
    }
  }
  *param_1 = 4;
  return;
}


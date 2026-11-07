// FUN_01b86d38 @ 01b86d38 size=452 calls_out=2 calls_in=2
// strings: 

undefined4
FUN_01b86d38(undefined4 param_1,uint param_2,uint param_3,int param_4,uint param_5,int param_6)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_2c;
  
  iVar1 = DAT_01d53560;
  uVar3 = param_5;
  if (param_6 == 1) {
    uVar3 = 0;
  }
  if ((param_4 == -1 && param_3 == 0xffffffff) && uVar3 != 0) {
    uVar2 = 500;
  }
  else {
    uVar2 = 0;
    if (uVar3 == 0 && (param_4 == -1 && param_3 == 0xffffffff)) {
      uVar3 = 0xffffffff;
      uVar4 = uVar3;
      goto LAB_01b86ddc;
    }
  }
  uVar4 = uVar3 + param_3 + uVar2;
  uVar3 = param_4 + (uint)CARRY4(uVar3,param_3) + (uint)CARRY4(uVar3 + param_3,uVar2);
LAB_01b86ddc:
  if (param_2 == 0) {
    uVar2 = 3;
  }
  else {
    uVar2 = param_2;
    if (0x15 < (int)param_2) {
      uVar2 = 0x16;
    }
    uVar2 = uVar2 & ~((int)uVar2 >> 0x1f);
  }
  iVar5 = uVar2 * 0x1c +
          ((uint)(-uVar3 < (uint)(uVar4 < 0x40001)) + (uint)(-uVar3 < (uint)(uVar4 < 0x20001)) +
          (uint)(-uVar3 < (uint)(uVar4 < 0x4001))) * 0x284;
  local_2c = *(int *)(&DAT_00561df0 + iVar5);
  if ((int)param_2 < 0) {
    if ((int)param_2 < -0x20000) {
      param_2 = 0xfffe0000;
    }
    local_2c = -param_2;
  }
  FUN_01b86b50(param_1,*(undefined4 *)(&DAT_00561ddc + iVar5),*(undefined4 *)(&DAT_00561de0 + iVar5)
               ,*(undefined4 *)(&DAT_00561de4 + iVar5),*(undefined4 *)(&DAT_00561de8 + iVar5),
               *(undefined4 *)(&DAT_00561dec + iVar5),local_2c,
               *(undefined4 *)(&DAT_00561df4 + iVar5),param_3,param_4,param_5,param_6,0);
  if (iVar1 != DAT_01d53560) {
                    /* WARNING: Subroutine does not return */
    FUN_01be31f4();
  }
  return param_1;
}


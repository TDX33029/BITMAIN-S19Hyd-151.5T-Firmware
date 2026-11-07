// FUN_00f09cb0 @ 00f09cb0 size=796 calls_out=5 calls_in=1
// strings: 

void FUN_00f09cb0(uint *param_1,uint *param_2)

{
  uint uVar1;
  undefined4 extraout_r1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint uVar10;
  undefined8 uVar11;
  uint local_50;
  uint local_4c;
  uint local_48;
  
  uVar7 = param_2[0xb8];
  uVar3 = param_2[0xb9];
  iVar2 = 2;
  if (((uVar3 != 0 || uVar3 < (0xfa < uVar7)) && (iVar2 = 4, uVar3 != 0 || uVar3 < (0xffff < uVar7))
      ) && (iVar2 = 10, uVar3 == 0)) {
    iVar2 = 6;
  }
  uVar6 = *param_2;
  uVar10 = param_2[1];
  if ((uVar6 ^ 0x1d) != 0 || uVar10 != 0) {
    iVar2 = 4;
    if ((uint)(uVar6 < 4) <= -uVar10) {
      iVar2 = uVar6 - 4;
    }
                    /* WARNING: Could not recover jumptable at 0x00f09d90. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*(code *)(&DAT_00f09d94 + *(int *)(&DAT_00f09d94 + iVar2 * 4)))();
    return;
  }
  uVar1 = param_2[4];
  if ((byte)param_2[5] < 0x26) {
    uVar8 = *(uint *)(&DAT_0035b574 + (uint)(byte)param_2[5] * 4);
    uVar4 = ((int)uVar8 >> 0x1f) << 1 | uVar8 >> 0x1f;
    if (uVar4 == 0 && (uVar8 & 0x7fffffff) >> 0xf == 0) {
      if (uVar4 != 0 || uVar4 < (0xfa < uVar8 << 1)) {
        iVar9 = 3;
        goto LAB_00f09e78;
      }
    }
    else if ((uint)(uVar8 << 1 < 0xfb) <= -uVar4) {
      iVar9 = 5;
      goto LAB_00f09e78;
    }
  }
  iVar9 = 1;
LAB_00f09e78:
  iVar5 = 5;
  if (uVar1 < 0x10000) {
    iVar5 = 3;
  }
  if (uVar1 < 0xfb) {
    iVar5 = 1;
  }
  uVar1 = iVar5 + uVar1 + iVar9 + iVar2;
  if ((int)uVar1 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,uVar1);
  }
  if (uVar1 == 0) {
    uVar1 = 0;
    uVar11 = 1;
  }
  else {
    uVar11 = thunk_FUN_016d4a50(uVar1);
    if ((int)uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,uVar1);
    }
  }
  local_4c = (uint)uVar11;
  local_48 = 0;
  local_50 = uVar1;
  FUN_00f09308(&local_50,(int)((ulonglong)uVar11 >> 0x20),uVar7,uVar3);
  if ((uVar6 ^ 0x1d) == 0 && uVar10 == 0) {
    if (local_50 == local_48) {
      FUN_00edff4c(&local_50,local_48,1,1,1);
    }
    *(undefined1 *)(local_4c + local_48) = 1;
    iVar2 = local_48 + 1;
    if ((byte)param_2[5] < 0x26) {
      uVar3 = *(uint *)(&DAT_0035b574 + (uint)(byte)param_2[5] * 4);
      iVar9 = uVar3 << 1;
      local_48 = ((int)uVar3 >> 0x1f) << 1;
      uVar3 = local_48 | uVar3 >> 0x1f;
    }
    else {
      uVar3 = 0;
      iVar9 = 0x20;
    }
    uVar7 = local_48;
    local_48 = iVar2;
    FUN_00f09308(&local_50,uVar7,iVar9,uVar3);
    uVar7 = param_2[3];
    uVar3 = param_2[4];
    FUN_00f09308(&local_50,extraout_r1,uVar3,0);
    if (local_50 - local_48 < uVar3) {
      FUN_00edff4c(&local_50,local_48,uVar3,1,1);
    }
    uVar6 = local_48;
    FUN_016dd1aa(local_4c + local_48,uVar7,uVar3);
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = uVar6 + uVar3;
    return;
  }
  if (local_50 == local_48) {
    FUN_00edff4c(&local_50,local_48,1,1,1);
  }
  iVar2 = 4;
  *(undefined1 *)(local_4c + local_48) = 0;
  local_48 = local_48 + 1;
  if ((uint)(uVar6 < 4) <= -uVar10) {
    iVar2 = uVar6 - 4;
  }
                    /* WARNING: Could not recover jumptable at 0x00f09fb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*(code *)(&DAT_00f09fb4 + *(int *)(&DAT_00f09fb4 + iVar2 * 4)))();
  return;
}


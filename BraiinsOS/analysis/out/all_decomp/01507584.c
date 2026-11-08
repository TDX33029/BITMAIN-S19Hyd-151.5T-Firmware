// FUN_01507584 @ 01507584 size=500 calls_out=4 calls_in=2
// strings: 

void FUN_01507584(undefined4 *param_1,int *param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  undefined2 *puVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint unaff_r8;
  bool bVar12;
  undefined4 local_30;
  uint local_2c;
  int local_28;
  
  FUN_0152d84c(&local_30,&DAT_018a7690,param_2);
  uVar2 = local_2c;
  if ((char)local_30 != '\x18') {
    *(char *)(param_1 + 1) = (char)local_30;
    *(undefined1 *)((int)param_1 + 7) = local_30._3_1_;
    *(undefined2 *)((int)param_1 + 5) = local_30._1_2_;
    param_1[2] = local_2c;
    param_1[3] = local_28;
    *param_1 = 1;
    return;
  }
  uVar6 = param_2[1];
  uVar10 = param_2[2];
  if (uVar6 - uVar10 < local_2c) {
    param_1[3] = 0;
    *param_1 = 1;
    param_1[1] = 0xb;
    return;
  }
  uVar4 = uVar10 + local_2c;
  param_2[2] = uVar4;
  if ((CARRY4(uVar10,local_2c)) || (uVar6 < uVar4)) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar10,uVar4,uVar6,&DAT_018a78f8);
  }
  iVar5 = *param_2;
  iVar9 = 2;
  bVar12 = local_2c != 0;
  local_28 = 0;
  local_2c = 2;
  local_30 = 0;
  if (bVar12) {
    uVar4 = 2;
    uVar6 = 0;
    iVar3 = 1;
    do {
      iVar8 = iVar3;
      if (iVar8 - (uVar2 >> 1) == 1) {
        param_1[3] = 0x1f;
        *(undefined2 *)(param_1 + 2) = 0xbd70;
        *(undefined1 *)(param_1 + 1) = 0xc;
        *(short *)((int)param_1 + 6) = (short)unaff_r8;
        *param_1 = 1;
        *(undefined2 *)((int)param_1 + 10) = 0x40;
        if (local_30 == 0) {
          return;
        }
        thunk_FUN_016d3fb4(local_2c);
        return;
      }
      uVar11 = uVar6 + 2;
      if (uVar2 <= uVar6 + 1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(uVar6,uVar11,uVar2,&DAT_018a78f8);
      }
      uVar1 = *(ushort *)(iVar5 + uVar10 + uVar6);
      uVar6 = (uint)uVar1 << 0x18 | (uint)(uVar1 >> 8) << 0x10;
      unaff_r8 = (uVar6 >> 0x10) - 1 & 0xffff;
      if (2 < unaff_r8) {
        unaff_r8 = 3;
      }
      if (iVar8 + -1 == local_30) {
        FUN_0154e0bc(&local_30);
        uVar4 = local_2c;
      }
      puVar7 = (undefined2 *)(uVar4 + iVar9);
      *puVar7 = (short)(uVar6 >> 0x10);
      iVar9 = iVar9 + 4;
      puVar7[-1] = (short)unaff_r8;
      uVar6 = uVar11;
      iVar3 = iVar8 + 1;
      local_28 = iVar8;
    } while (uVar11 < uVar2);
  }
  *param_1 = 0;
  param_1[1] = local_30;
  param_1[2] = local_2c;
  param_1[3] = local_28;
  return;
}


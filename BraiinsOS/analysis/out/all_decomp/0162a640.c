// FUN_0162a640 @ 0162a640 size=660 calls_out=4 calls_in=2
// strings: 

void FUN_0162a640(int *param_1,uint *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 uint param_6,uint param_7)

{
  longlong lVar1;
  ulonglong uVar2;
  longlong lVar3;
  byte bVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  bool bVar10;
  uint local_40;
  int local_3c;
  int local_38;
  int local_34;
  uint local_30;
  undefined4 local_28;
  
  uVar5 = param_4 + param_6;
  if (CARRY4(param_4,param_6)) {
    uVar5 = 0xffffffff;
  }
  iVar7 = uVar5 + param_7;
  if (CARRY4(uVar5,param_7)) {
    iVar7 = -1;
  }
  if (iVar7 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,iVar7);
  }
  if (iVar7 == 0) {
    local_3c = 1;
    iVar7 = 0;
  }
  else {
    local_3c = thunk_FUN_016d4a50(iVar7);
    if (local_3c == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(1,iVar7);
    }
  }
  local_38 = iVar7;
  local_34 = local_3c;
  FUN_016dd1aa(local_3c,param_3,param_4);
  local_28 = 0;
  local_30 = param_4;
  if (param_7 != 0) {
    uVar5 = *param_2;
    uVar8 = param_2[1];
    local_40 = param_7;
    do {
      bVar10 = 0x5593875a < uVar5;
      uVar5 = uVar5 + 0xaa6c78a5;
      uVar8 = uVar8 + 0x2d358dcc + (uint)bVar10;
      uVar2 = (ulonglong)uVar5 * (ulonglong)(uVar5 ^ 0x962eacc9);
      *param_2 = uVar5;
      param_2[1] = uVar8;
      lVar1 = (ulonglong)uVar5 * (ulonglong)(uVar8 ^ 0x8bb84b93) + (uVar2 >> 0x20);
      lVar3 = (ulonglong)uVar8 * (ulonglong)(uVar5 ^ 0x962eacc9);
      uVar6 = (uVar8 ^ 0x8bb84b93) * uVar8 +
              (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) +
              (uint)CARRY4((uint)lVar3,(uint)lVar1) ^ (uint)uVar2;
      if (uVar6 * 0x3e < 4) {
        do {
          bVar10 = 0x5593875a < uVar5;
          uVar5 = uVar5 + 0xaa6c78a5;
          uVar8 = uVar8 + 0x2d358dcc + (uint)bVar10;
          uVar2 = (ulonglong)uVar5 * (ulonglong)(uVar5 ^ 0x962eacc9);
          lVar1 = (ulonglong)uVar5 * (ulonglong)(uVar8 ^ 0x8bb84b93) + (uVar2 >> 0x20);
          lVar3 = (ulonglong)uVar8 * (ulonglong)(uVar5 ^ 0x962eacc9);
          uVar6 = uVar8 * (uVar8 ^ 0x8bb84b93) +
                  (int)((ulonglong)lVar1 >> 0x20) + (int)((ulonglong)lVar3 >> 0x20) +
                  (uint)CARRY4((uint)lVar3,(uint)lVar1) ^ (uint)uVar2;
        } while (uVar6 * 0x3e < 4);
        *param_2 = uVar5;
        param_2[1] = uVar8;
      }
      uVar9 = 1;
      bVar4 = (&DAT_00412eee)[(int)((ulonglong)uVar6 * 0x3e >> 0x20)];
      if (0x7fffffff < (uint)(int)(char)bVar4) {
        local_28 = (uint)(CONCAT21(local_28._2_2_,bVar4) & 0xffffbf) << 8;
        bVar4 = bVar4 >> 6 | 0xc0;
        uVar9 = 2;
      }
      local_28 = CONCAT31(local_28._1_3_,bVar4);
      if (local_38 - local_30 < uVar9) {
        FUN_010e02bc(&local_38,local_30,uVar9);
        local_3c = local_34;
      }
      uVar6 = local_30;
      local_40 = local_40 - 1;
      FUN_016dd1aa(local_3c + local_30,&local_28,uVar9);
      local_30 = uVar6 + uVar9;
    } while (local_40 != 0);
    iVar7 = local_38;
  }
  if (iVar7 - local_30 < param_6) {
    FUN_010e02bc(&local_38,local_30,param_6);
  }
  uVar5 = local_30;
  FUN_016dd1aa(local_34 + local_30,param_5,param_6);
  *param_1 = local_38;
  param_1[1] = local_34;
  param_1[2] = uVar5 + param_6;
  return;
}


// FUN_00a6d0f0 @ 00a6d0f0 size=840 calls_out=5 calls_in=1
// strings: 

/* WARNING: Removing unreachable block (ram,0x00a6d2e0) */

void FUN_00a6d0f0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  ulonglong uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  double dVar13;
  undefined8 uVar14;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30 [3];
  
  uVar11 = *(uint *)(param_2 + 0x10);
  uVar4 = *(uint *)(param_2 + 0x14);
  uVar2 = CONCAT44(param_6,param_5);
  if (uVar4 < uVar11) {
    cVar1 = *(char *)(*(int *)(param_2 + 0xc) + uVar4);
    if (cVar1 == '.') {
      uVar7 = uVar4 + 1;
      *(uint *)(param_2 + 0x14) = uVar7;
      if (uVar7 < uVar11) {
        uVar7 = uVar7 - uVar11;
        uVar11 = 0;
        iVar10 = 2;
        do {
          uVar5 = (uint)(uVar2 >> 0x20);
          uVar12 = (uint)*(byte *)((*(int *)(param_2 + 0xc) + uVar4 + 1) - uVar11);
          uVar8 = uVar12 - 0x30;
          uVar9 = uVar8 & 0xff;
          if (9 < uVar9) {
            if (uVar11 == 0) {
              local_30[0] = 0xd;
              local_3c = FUN_01143ab8(param_2,local_30);
              local_40 = 1;
            }
            else {
              if ((uVar12 | 0x20) != 0x65) goto LAB_00a6d2f0;
              FUN_00a6d448(&local_40,param_2,param_3,uVar5,uVar2,uVar11);
            }
joined_r0x00a6d29c:
            if (local_40 == 0) goto LAB_00a6d414;
            goto LAB_00a6d3c4;
          }
          if ((0x19999998 < uVar5 && (uint)((uint)uVar2 < 0x99999999) <= 0x19999999 - uVar5) &&
             ((uVar2 != 0x1999999999999999 || (5 < uVar9)))) {
            FUN_01143dc8(&local_40,param_2,param_3,uVar5,uVar2,uVar11);
            goto joined_r0x00a6d29c;
          }
          uVar11 = uVar11 - 1;
          uVar2 = (uVar2 & 0xffffffff) * 10 + (CONCAT44(uVar5 * 10,uVar8) & 0xffffffff000000ff);
          iVar3 = uVar4 + iVar10;
          iVar10 = iVar10 + 1;
          *(int *)(param_2 + 0x14) = iVar3;
        } while (uVar7 != uVar11);
        uVar11 = uVar7;
        if (uVar7 != 0) {
LAB_00a6d2f0:
          dVar13 = (double)FUN_01845f30((int)uVar2,(int)(uVar2 >> 0x20));
          uVar4 = uVar11;
          if ((int)uVar11 < 0) {
            uVar4 = -uVar11;
          }
          while (0x134 < uVar4) {
            if (dVar13 == 0.0) goto LAB_00a6d3a0;
            if (uVar11 < 0x80000000) goto LAB_00a6d384;
            dVar13 = dVar13 / 1e+308;
            uVar11 = uVar11 + 0x134;
            uVar4 = uVar11;
            if ((int)uVar11 < 0) {
              uVar4 = -uVar11;
            }
          }
          if ((int)uVar11 < 0) {
            dVar13 = dVar13 / (double)(&DAT_0040ddb8)[uVar4];
          }
          else {
            dVar13 = dVar13 * (double)(&DAT_0040ddb8)[uVar4];
            if (!(SUB84(dVar13,0) != 0 ||
                 ((uint)((ulonglong)dVar13 >> 0x20) & 0x7fffffff) != 0x7ff00000)) {
LAB_00a6d384:
              local_30[0] = 0xe;
              local_3c = FUN_00f4c908(param_2,local_30);
              goto LAB_00a6d3c4;
            }
          }
LAB_00a6d3a0:
          local_38 = -dVar13;
          if (param_3 != 0) {
            local_38 = dVar13;
          }
LAB_00a6d414:
          goto LAB_00a6d420;
        }
      }
      local_30[0] = 5;
      local_3c = FUN_01143ab8(param_2,local_30);
LAB_00a6d3c4:
      param_1[1] = 0;
      *param_1 = 3;
      param_1[2] = local_3c;
      return;
    }
    if (cVar1 != 'E' && cVar1 != 'e') goto LAB_00a6d160;
    FUN_00a6d448(&local_40,param_2,param_3,param_6,param_5,param_6,0);
    if (local_40 != 0) goto LAB_00a6d3c4;
  }
  else {
LAB_00a6d160:
    uVar6 = 1;
    if (param_3 != 0) {
      local_38._4_4_ = param_6;
      local_38._0_4_ = param_5;
      goto LAB_00a6d424;
    }
    local_38._0_4_ = -param_5;
    local_38._4_4_ = -(param_6 + (param_5 != 0));
    if ((int)local_38._4_4_ < 0) {
      uVar6 = 2;
      goto LAB_00a6d424;
    }
    uVar14 = FUN_01845f30(param_5,param_6);
    local_38._0_4_ = (int)uVar14;
    local_38._4_4_ = (uint)((ulonglong)uVar14 >> 0x20) | 0x80000000;
  }
LAB_00a6d420:
  uVar6 = 0;
LAB_00a6d424:
  *param_1 = uVar6;
  param_1[1] = 0;
  param_1[2] = (int)local_38;
  param_1[3] = local_38._4_4_;
  return;
}


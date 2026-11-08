// FUN_005b67e0 @ 005b67e0 size=1348 calls_out=7 calls_in=1
// strings: 

void FUN_005b67e0(undefined4 *param_1,int param_2,int param_3,undefined4 param_4,int param_5,
                 uint param_6)

{
  char cVar1;
  undefined1 uVar2;
  byte bVar3;
  ulonglong uVar4;
  undefined4 uVar5;
  int iVar6;
  char *pcVar7;
  uint uVar8;
  undefined4 uVar9;
  byte *pbVar10;
  uint uVar11;
  uint uVar12;
  undefined4 *puVar13;
  double dVar14;
  undefined8 uVar15;
  int local_40;
  undefined4 local_3c;
  undefined8 local_38;
  undefined4 local_30;
  undefined4 local_2c;
  
  uVar4 = CONCAT44(param_6,param_5);
  if (*(char *)(param_2 + 0x2c) == '\x01') {
    cVar1 = *(char *)(param_2 + 0x2d);
joined_r0x005b68a4:
    if (cVar1 == '.') {
      uVar2 = *(undefined1 *)(param_2 + 0x2d);
      *(undefined1 *)(param_2 + 0x2c) = 0;
      if (*(int *)(param_2 + 0xc) != -0x80000000) {
        iVar6 = *(int *)(param_2 + 0x14);
        if (iVar6 == *(int *)(param_2 + 0xc)) {
          FUN_006029c0(param_2 + 0xc);
        }
        *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar2;
        *(int *)(param_2 + 0x14) = iVar6 + 1;
      }
      puVar13 = (undefined4 *)(param_2 + 0x18);
      uVar11 = 0;
      do {
        uVar8 = (uint)(uVar4 >> 0x20);
        if (*(char *)(param_2 + 0x2c) != '\x01') {
          pcVar7 = *(char **)(param_2 + 0x18);
          if (*(int *)(param_2 + 0x1c) != 0) {
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
            cVar1 = *pcVar7;
            iVar6 = *(int *)(param_2 + 0x24) + 1;
            *(char **)(param_2 + 0x18) = pcVar7 + 1;
            if (cVar1 == '\n') {
              *(int *)(param_2 + 0x28) = iVar6 + *(int *)(param_2 + 0x28);
              *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
              iVar6 = 0;
            }
            *(char *)(param_2 + 0x2d) = cVar1;
            *(undefined1 *)(param_2 + 0x2c) = 1;
            *(int *)(param_2 + 0x24) = iVar6;
            uVar12 = (uint)(byte)(cVar1 - 0x30);
            goto joined_r0x005b69e8;
          }
          *puVar13 = pcVar7;
          if (uVar11 == 0) {
            FUN_00ed3ed8(&local_30,puVar13);
            if ((local_30 & 0xff) == 5) {
              uVar9 = *(undefined4 *)(param_2 + 0x20);
              uVar5 = *(undefined4 *)(param_2 + 0x24);
              local_30 = 5;
              goto LAB_005b6ce0;
            }
            if ((local_30 & 0xff) == 4) {
              *(undefined1 *)(param_2 + 0x2d) = local_30._1_1_;
              *(undefined1 *)(param_2 + 0x2c) = 1;
              goto LAB_005b6cd8;
            }
            local_3c = FUN_0157c4a0(local_30,local_2c);
            goto LAB_005b6cf4;
          }
          pbVar10 = *(byte **)(param_2 + 0x18);
          if (*(int *)(param_2 + 0x1c) != 0) {
            *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
            bVar3 = *pbVar10;
            iVar6 = *(int *)(param_2 + 0x24) + 1;
            *(byte **)(param_2 + 0x18) = pbVar10 + 1;
            if (bVar3 == 10) {
              *(int *)(param_2 + 0x28) = iVar6 + *(int *)(param_2 + 0x28);
              *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
              iVar6 = 0;
            }
            *(byte *)(param_2 + 0x2d) = bVar3;
            *(undefined1 *)(param_2 + 0x2c) = 1;
            *(int *)(param_2 + 0x24) = iVar6;
            goto joined_r0x005b6b18;
          }
          *puVar13 = pbVar10;
LAB_005b6b34:
          dVar14 = (double)FUN_01845f30((uint)uVar4,uVar8);
          uVar9 = *(undefined4 *)(param_2 + 0x20);
          uVar5 = *(undefined4 *)(param_2 + 0x24);
          uVar8 = uVar11;
          if ((int)uVar11 < 0) {
            uVar8 = -uVar11;
          }
          goto joined_r0x005b6b5c;
        }
        uVar12 = *(byte *)(param_2 + 0x2d) - 0x30 & 0xff;
joined_r0x005b69e8:
        if (9 < uVar12) {
          if (uVar11 == 0) {
LAB_005b6cd8:
            uVar9 = *(undefined4 *)(param_2 + 0x20);
            uVar5 = *(undefined4 *)(param_2 + 0x24);
            local_30 = 0xd;
            goto LAB_005b6ce0;
          }
          bVar3 = *(byte *)(param_2 + 0x2d);
joined_r0x005b6b18:
          if ((bVar3 | 0x20) != 0x65) goto LAB_005b6b34;
          FUN_005b7718(&local_40);
          goto LAB_005b6bfc;
        }
        if ((0x19999998 < uVar8 && (uint)((uint)uVar4 < 0x99999999) <= 0x19999999 - uVar8) &&
           ((uVar4 != 0x1999999999999999 || (5 < uVar12)))) goto LAB_005b6d04;
        uVar2 = *(undefined1 *)(param_2 + 0x2d);
        *(undefined1 *)(param_2 + 0x2c) = 0;
        if (*(int *)(param_2 + 0xc) != -0x80000000) {
          iVar6 = *(int *)(param_2 + 0x14);
          if (iVar6 == *(int *)(param_2 + 0xc)) {
            FUN_006029c0(param_2 + 0xc);
          }
          *(undefined1 *)(*(int *)(param_2 + 0x10) + iVar6) = uVar2;
          *(int *)(param_2 + 0x14) = iVar6 + 1;
        }
        uVar11 = uVar11 - 1;
        uVar4 = (uVar4 & 0xffffffff) * 10 + CONCAT44(uVar8 * 10,uVar12);
      } while( true );
    }
    if (cVar1 != 'E' && cVar1 != 'e') goto LAB_005b6908;
    FUN_005b7718(&local_40);
    if (local_40 != 0) goto LAB_005b6c08;
  }
  else {
    pcVar7 = *(char **)(param_2 + 0x18);
    if (*(int *)(param_2 + 0x1c) != 0) {
      *(int *)(param_2 + 0x1c) = *(int *)(param_2 + 0x1c) + -1;
      cVar1 = *pcVar7;
      iVar6 = *(int *)(param_2 + 0x24) + 1;
      *(char **)(param_2 + 0x18) = pcVar7 + 1;
      if (cVar1 == '\n') {
        *(int *)(param_2 + 0x28) = iVar6 + *(int *)(param_2 + 0x28);
        *(int *)(param_2 + 0x20) = *(int *)(param_2 + 0x20) + 1;
        iVar6 = 0;
      }
      *(char *)(param_2 + 0x2d) = cVar1;
      *(undefined1 *)(param_2 + 0x2c) = 1;
      *(int *)(param_2 + 0x24) = iVar6;
      goto joined_r0x005b68a4;
    }
    *(char **)(param_2 + 0x18) = pcVar7;
LAB_005b6908:
    uVar9 = 1;
    if (param_3 != 0) {
      local_38._4_4_ = param_6;
      local_38._0_4_ = param_5;
      goto LAB_005b6c38;
    }
    local_38._0_4_ = -param_5;
    local_38._4_4_ = -(param_6 + (param_5 != 0));
    if ((int)local_38._4_4_ < 0) {
      uVar9 = 2;
      goto LAB_005b6c38;
    }
    uVar15 = FUN_01845f30(param_5,param_6);
    local_38._0_4_ = (int)uVar15;
    local_38._4_4_ = (uint)((ulonglong)uVar15 >> 0x20) | 0x80000000;
  }
  goto LAB_005b6c34;
LAB_005b6d04:
  FUN_00f2bff0(&local_40);
  goto LAB_005b6bfc;
joined_r0x005b6b5c:
  if (0x134 < uVar8) {
    if (dVar14 == 0.0) goto LAB_005b6be4;
    if (uVar11 < 0x80000000) goto LAB_005b6bd8;
    dVar14 = dVar14 / 1e+308;
    uVar11 = uVar11 + 0x134;
    uVar8 = uVar11;
    if ((int)uVar11 < 0) {
      uVar8 = -uVar11;
    }
    goto joined_r0x005b6b5c;
  }
  if ((int)uVar11 < 0) {
    dVar14 = dVar14 / (double)(&DAT_0040ddb8)[uVar8];
  }
  else {
    dVar14 = dVar14 * (double)(&DAT_0040ddb8)[uVar8];
    if (SUB84(dVar14,0) == 0 && ((uint)((ulonglong)dVar14 >> 0x20) & 0x7fffffff) == 0x7ff00000) {
LAB_005b6bd8:
      local_30 = 0xe;
LAB_005b6ce0:
      local_3c = FUN_0157c50c(&local_30,uVar9,uVar5);
LAB_005b6cf4:
      local_40 = 1;
      goto LAB_005b6bfc;
    }
  }
LAB_005b6be4:
  local_40 = 0;
  local_38 = -dVar14;
  if (param_3 != 0) {
    local_38 = dVar14;
  }
LAB_005b6bfc:
  if (local_40 != 0) {
LAB_005b6c08:
    param_1[1] = 0;
    *param_1 = 3;
    param_1[2] = local_3c;
    return;
  }
LAB_005b6c34:
  uVar9 = 0;
LAB_005b6c38:
  *param_1 = uVar9;
  param_1[1] = 0;
  param_1[2] = (int)local_38;
  param_1[3] = local_38._4_4_;
  return;
}


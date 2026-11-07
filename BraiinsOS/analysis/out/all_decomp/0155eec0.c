// FUN_0155eec0 @ 0155eec0 size=1228 calls_out=11 calls_in=0
// strings: 

void FUN_0155eec0(undefined4 *param_1,int *param_2,char *param_3)

{
  uint uVar1;
  code *pcVar2;
  char cVar3;
  char cVar4;
  undefined1 uVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  char *pcVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  int *piVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  int iVar21;
  uint uVar22;
  int *piVar23;
  int iVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  int *piVar27;
  int local_64;
  int local_58;
  uint local_48;
  int *local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  
  do {
    if (*param_2 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_2);
      goto LAB_0155eef8;
    }
    bVar6 = (bool)hasExclusiveAccess(param_2);
  } while (!bVar6);
  *param_2 = 1;
  DataMemoryBarrier(0xb);
LAB_0155eef8:
  uVar18 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar18 = FUN_015bf3f8();
    uVar18 = uVar18 ^ 1;
  }
  local_48 = (uint)*(byte *)(param_2 + 1);
  local_40 = CONCAT31(local_40._1_3_,(char)uVar18);
  local_44 = param_2;
  if (local_48 != 0) {
    local_48 = 1;
    FUN_0155f3e8(&local_48);
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a8e5c);
  }
  if (param_2[9] == 0) {
LAB_0155f11c:
    param_1[9] = 0x80000000;
    if (uVar18 == 0) {
LAB_0155f304:
      if (((DAT_018dd988 & 0x7fffffff) != 0) && (iVar19 = FUN_015bf3f8(), iVar19 == 0)) {
        *(undefined1 *)(param_2 + 1) = 1;
      }
    }
LAB_0155f314:
    DataMemoryBarrier(0xb);
    do {
      iVar19 = *param_2;
      bVar6 = (bool)hasExclusiveAccess(param_2);
    } while (!bVar6);
    *param_2 = 0;
    if (iVar19 == 2) {
      FUN_016d6968(0xf0,param_2,0x81,1);
      return;
    }
    return;
  }
  uVar7 = FUN_0156d824(param_2[10],param_2[0xb],param_2[0xc],param_2[0xd],param_3);
  uVar1 = uVar7 >> 0x19;
  iVar24 = param_2[6];
  uVar22 = param_2[7];
  local_64 = 0;
  cVar3 = *param_3;
  cVar4 = param_3[1];
  iVar19 = *(int *)(param_3 + 2);
  do {
    uVar7 = uVar22 & uVar7;
    uVar8 = *(uint *)(iVar24 + uVar7);
    uVar9 = uVar8 ^ uVar1 * 0x1010101;
    uVar9 = ~uVar9 & 0x80808080 & uVar9 + 0xfefefeff;
    if (uVar9 != 0) {
LAB_0155efc0:
      uVar10 = uVar7 + ((uint)LZCOUNT(uVar9 << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                      (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3) & uVar22;
      pcVar11 = (char *)(iVar24 + -0x90 + uVar10 * -0x90);
      if (cVar3 != *pcVar11) break;
      if (cVar3 == '\0') {
        iVar12 = FUN_0157531c(param_3 + 4,pcVar11 + 4,0xfefefeff);
        if (iVar12 != 0) goto LAB_0155f0f8;
        break;
      }
      if (cVar4 != pcVar11[1]) break;
      if (cVar4 == '\0') {
        if (iVar19 != *(int *)(pcVar11 + 2)) break;
      }
      else {
        iVar12 = thunk_FUN_016dd50a(param_3 + 2,pcVar11 + 2,0x10);
        if (iVar12 != 0) break;
      }
LAB_0155f0f8:
      iVar24 = iVar24 + uVar10 * -0x90;
      if (*(int *)(iVar24 + -0x44) == -0x80000000) {
        param_1[9] = 0x80000000;
      }
      else {
        uVar25 = *(undefined4 *)(iVar24 + -0x38);
        local_48 = *(uint *)(iVar24 + -0x34);
        local_44 = *(int **)(iVar24 + -0x30);
        local_40 = *(undefined4 *)(iVar24 + -0x2c);
        uStack_3c = *(undefined4 *)(iVar24 + -0x28);
        local_38 = *(undefined4 *)(iVar24 + -0x24);
        uStack_34 = *(undefined4 *)(iVar24 + -0x20);
        uStack_30 = *(undefined4 *)(iVar24 + -0x1c);
        uStack_2c = *(undefined4 *)(iVar24 + -0x18);
        uStack_28 = *(undefined4 *)(iVar24 + -0x14);
        piVar23 = *(int **)(iVar24 + -0x4c);
        uVar5 = *(undefined1 *)(iVar24 + -0x10);
        do {
          iVar19 = *piVar23;
          bVar6 = (bool)hasExclusiveAccess(piVar23);
        } while (!bVar6);
        *piVar23 = iVar19 + 1;
        if (iVar19 < 0) {
LAB_0155f38c:
                    /* WARNING: Does not return */
          pcVar2 = (code *)software_udf(0xfdee,0x155f38c);
          (*pcVar2)();
        }
        iVar19 = *(int *)(iVar24 + -0x3c);
        uVar13 = 0;
        if (iVar19 < 0) {
LAB_0155f188:
                    /* WARNING: Subroutine does not return */
          FUN_00600af4(uVar13,iVar19);
        }
        uVar13 = *(undefined4 *)(iVar24 + -0x40);
        if (iVar19 == 0) {
          iVar12 = 1;
          local_58 = 0;
        }
        else {
          iVar12 = thunk_FUN_016d4a50(iVar19);
          local_58 = iVar19;
          if (iVar12 == 0) {
            uVar13 = 1;
            goto LAB_0155f188;
          }
        }
        FUN_016dd1aa(iVar12,uVar13,iVar19);
        uVar20 = *(undefined4 *)(iVar24 + -0x50);
        piVar27 = *(int **)(iVar24 + -0x48);
        uVar13 = *(undefined4 *)(iVar24 + -0x68);
        uVar26 = *(undefined4 *)(iVar24 + -100);
        do {
          iVar14 = *piVar27;
          bVar6 = (bool)hasExclusiveAccess(piVar27);
        } while (!bVar6);
        *piVar27 = iVar14 + 1;
        if (iVar14 < 0) goto LAB_0155f38c;
        iVar14 = *(int *)(iVar24 + -0x60);
        uVar15 = *(undefined4 *)(iVar24 + -0x5c);
        if (iVar14 != -1) {
          piVar17 = (int *)(iVar14 + 4);
          do {
            iVar21 = *piVar17;
            bVar6 = (bool)hasExclusiveAccess(piVar17);
          } while (!bVar6);
          *piVar17 = iVar21 + 1;
          if (iVar21 < 0) goto LAB_0155f38c;
        }
        uVar16 = *(undefined4 *)(iVar24 + -0x54);
        iVar24 = *(int *)(iVar24 + -0x58);
        if (iVar24 != -1) {
          piVar17 = (int *)(iVar24 + 4);
          do {
            iVar21 = *piVar17;
            bVar6 = (bool)hasExclusiveAccess(piVar17);
          } while (!bVar6);
          *piVar17 = iVar21 + 1;
          if (iVar21 < 0) goto LAB_0155f38c;
        }
        param_1[10] = iVar12;
        param_1[9] = local_58;
        param_1[0xb] = iVar19;
        param_1[0xd] = local_48;
        param_1[0xe] = local_44;
        param_1[0xf] = local_40;
        param_1[0x10] = uStack_3c;
        param_1[0x11] = local_38;
        param_1[0x12] = uStack_34;
        param_1[0x13] = uStack_30;
        param_1[0x14] = uStack_2c;
        param_1[0x15] = uStack_28;
        *(undefined1 *)(param_1 + 0x16) = uVar5;
        *param_1 = uVar13;
        param_1[0xc] = uVar25;
        param_1[1] = uVar26;
        param_1[2] = iVar14;
        param_1[3] = uVar15;
        param_1[5] = uVar16;
        param_1[8] = piVar27;
        param_1[4] = iVar24;
        param_1[6] = uVar20;
        param_1[7] = piVar23;
      }
      if (uVar18 != 0) goto LAB_0155f314;
      goto LAB_0155f304;
    }
LAB_0155f0b0:
    if ((uVar8 & 0x80808080 & uVar8 << 1) != 0) goto LAB_0155f11c;
    local_64 = local_64 + 4;
    uVar7 = uVar7 + local_64;
  } while( true );
  uVar9 = uVar9 - 1 & uVar9;
  if (uVar9 == 0) goto LAB_0155f0b0;
  goto LAB_0155efc0;
}


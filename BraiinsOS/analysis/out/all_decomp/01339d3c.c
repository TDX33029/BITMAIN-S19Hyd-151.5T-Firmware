// FUN_01339d3c @ 01339d3c size=1152 calls_out=7 calls_in=2
// strings: 

void FUN_01339d3c(int *param_1,int *param_2,int param_3)

{
  code *pcVar1;
  char cVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  int iVar6;
  undefined4 uVar7;
  byte *pbVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int unaff_r7;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  byte *local_58;
  int local_54;
  int local_50;
  int local_4c;
  uint local_48;
  int iStack_44;
  int iStack_40;
  undefined4 local_38;
  int local_34;
  uint local_30 [3];
  
  cVar2 = *(char *)(param_3 + 0x1c);
  if (cVar2 == '\x01') {
    local_38 = *(undefined4 *)(param_3 + 0x14);
    local_34 = *(int *)(param_3 + 0x18);
  }
  else {
    local_34 = 0;
    local_38 = 1;
  }
  if ((local_34 != param_2[1]) ||
     (iVar6 = thunk_FUN_016dd50a(local_38,*param_2,local_34), iVar6 != 0)) {
    FUN_0132d3bc(&local_38,param_2);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1339e88);
    (*pcVar1)();
  }
  bVar18 = *(char *)(param_3 + 0x5c) != '\0';
  if (bVar18) {
    unaff_r7 = *(int *)(param_3 + 0x58);
  }
  if (bVar18 && unaff_r7 != 0) {
    if (unaff_r7 < 0) {
      uVar7 = 0;
      goto LAB_01339e2c;
    }
    uVar7 = *(undefined4 *)(param_3 + 0x54);
    local_50 = thunk_FUN_016d4a50(unaff_r7);
    if (local_50 != 0) {
      FUN_016dd1aa(local_50,uVar7,unaff_r7);
      local_4c = unaff_r7;
      goto LAB_01339e60;
    }
LAB_01339e8c:
    uVar7 = 1;
LAB_01339e2c:
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(uVar7,unaff_r7);
  }
  if (cVar2 != '\0') {
    unaff_r7 = *(int *)(param_3 + 0x18);
    uVar7 = 0;
    if (unaff_r7 < 0) goto LAB_01339e2c;
    if (unaff_r7 != 0) {
      local_58 = *(byte **)(param_3 + 0x14);
      local_50 = thunk_FUN_016d4a50(unaff_r7);
      if (local_50 != 0) {
        bVar18 = false;
        local_4c = 0;
        pbVar8 = local_58 + unaff_r7;
        local_54 = unaff_r7;
        do {
          iVar6 = local_4c;
          uVar15 = (uint)*local_58;
          pbVar9 = local_58 + 1;
          if (0x7fffffff < (uint)(int)(char)*local_58) {
            if (uVar15 < 0xe0) {
              uVar15 = local_58[1] & 0x3f | (uVar15 & 0x1f) << 6;
              pbVar9 = local_58 + 2;
            }
            else {
              uVar12 = local_58[2] & 0x3f | (local_58[1] & 0x3f) << 6;
              if (uVar15 < 0xf0) {
                uVar15 = uVar12 | (uVar15 & 0x1f) << 0xc;
                pbVar9 = local_58 + 3;
              }
              else {
                pbVar9 = local_58 + 4;
                uVar15 = local_58[3] & 0x3f | uVar12 << 6 | (uVar15 & 7) << 0x12;
              }
            }
          }
          local_58 = pbVar9;
          if (uVar15 != 0x5f) {
            if (bVar18) {
              FUN_00fb77b8(&local_48,uVar15);
              local_30[0] = local_48;
              local_30[1] = iStack_44;
              local_30[2] = iStack_40;
              uVar12 = 2;
              if (iStack_44 == 0) {
                uVar12 = 1;
              }
              if (iStack_40 != 0) {
                uVar12 = 3;
              }
              if ((uint)(local_54 - local_4c) < uVar12) {
                FUN_0132f8cc(&local_54,local_4c,uVar12,1,1);
              }
              uVar16 = 0;
              do {
                iVar6 = local_4c;
                uVar17 = 1;
                uVar13 = local_30[uVar16];
                if (0x7f < uVar13) {
                  uVar17 = 2;
                }
                if ((0x7ff < uVar13) && (uVar17 = 4, uVar13 < 0x10000)) {
                  uVar17 = 3;
                }
                if ((uint)(local_54 - local_4c) < uVar17) {
                  FUN_0132f8cc(&local_54,local_4c,uVar17,1,1);
                  pbVar9 = (byte *)(local_50 + local_4c);
                  if (uVar13 < 0x80) goto LAB_01339fb4;
LAB_0133a010:
                  bVar3 = (byte)uVar13 & 0x3f | 0x80;
                  bVar4 = (byte)(uVar13 >> 6);
                  if (uVar13 < 0x800) {
                    pbVar9[1] = bVar3;
                    *pbVar9 = bVar4 | 0xc0;
                  }
                  else {
                    bVar4 = bVar4 & 0x3f | 0x80;
                    bVar5 = (byte)(uVar13 >> 0xc);
                    if (uVar13 >> 0x10 == 0) {
                      pbVar9[1] = bVar4;
                      pbVar9[2] = bVar3;
                      *pbVar9 = bVar5 | 0xe0;
                    }
                    else {
                      pbVar9[3] = bVar3;
                      pbVar9[2] = bVar4;
                      pbVar9[1] = bVar5 & 0x3f | 0x80;
                      *pbVar9 = (byte)(uVar13 >> 0x12) | 0xf0;
                    }
                  }
                }
                else {
                  pbVar9 = (byte *)(local_50 + local_4c);
                  if (0x7f < uVar13) goto LAB_0133a010;
LAB_01339fb4:
                  *pbVar9 = (byte)uVar13;
                }
                uVar16 = uVar16 + 1;
                local_4c = uVar17 + iVar6;
              } while (uVar12 != uVar16);
            }
            else {
              uVar12 = 1;
              if (0x7f < uVar15) {
                uVar12 = 2;
              }
              if ((0x7ff < uVar15) && (uVar12 = 4, uVar15 < 0x10000)) {
                uVar12 = 3;
              }
              uVar16 = uVar15;
              if ((uint)(local_54 - local_4c) < uVar12) {
                FUN_0132f8cc(&local_54,local_4c,uVar12,1,1);
                pbVar9 = (byte *)(local_50 + local_4c);
                if (0x7f < uVar15) goto LAB_0133a104;
LAB_01339eb0:
                *pbVar9 = (byte)uVar16;
              }
              else {
                pbVar9 = (byte *)(local_50 + local_4c);
                if (uVar15 < 0x80) goto LAB_01339eb0;
LAB_0133a104:
                bVar3 = (byte)uVar15 & 0x3f | 0x80;
                bVar4 = (byte)(uVar15 >> 6);
                if (uVar15 < 0x800) {
                  pbVar9[1] = bVar3;
                  *pbVar9 = bVar4 | 0xc0;
                }
                else {
                  bVar4 = bVar4 & 0x3f | 0x80;
                  bVar5 = (byte)(uVar15 >> 0xc);
                  if (uVar15 >> 0x10 != 0) {
                    pbVar9[3] = bVar3;
                    pbVar9[2] = bVar4;
                    pbVar9[1] = bVar5 & 0x3f | 0x80;
                    uVar16 = uVar15 >> 0x12 | 0xfffffff0;
                    goto LAB_01339eb0;
                  }
                  pbVar9[1] = bVar4;
                  pbVar9[2] = bVar3;
                  *pbVar9 = bVar5 | 0xe0;
                }
              }
              local_4c = uVar12 + iVar6;
            }
          }
          bVar18 = uVar15 == 0x5f;
        } while (local_58 != pbVar8);
        unaff_r7 = local_54;
        goto LAB_01339e60;
      }
      goto LAB_01339e8c;
    }
  }
  local_50 = 1;
  unaff_r7 = 0;
  local_4c = 0;
LAB_01339e60:
  iVar6 = *param_2;
  iVar10 = param_2[1];
  iVar11 = param_2[2];
  iVar14 = param_2[3];
  *param_1 = unaff_r7;
  param_1[1] = local_50;
  param_1[2] = local_4c;
  param_1[3] = param_3;
  param_1[4] = iVar6;
  param_1[5] = iVar10;
  param_1[6] = iVar11;
  param_1[7] = iVar14;
  return;
}


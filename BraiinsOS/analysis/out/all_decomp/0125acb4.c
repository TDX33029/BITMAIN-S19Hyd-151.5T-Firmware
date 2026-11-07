// FUN_0125acb4 @ 0125acb4 size=852 calls_out=8 calls_in=25
// strings: 

void FUN_0125acb4(undefined4 *param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  code *pcVar1;
  byte bVar2;
  byte bVar3;
  undefined1 uVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  int *piVar8;
  undefined4 uVar9;
  byte *pbVar10;
  undefined4 uVar11;
  uint uVar12;
  undefined4 uVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  int *piVar17;
  undefined8 uVar18;
  int local_210;
  int *local_20c;
  undefined4 local_208;
  undefined4 local_204;
  undefined4 local_200;
  undefined4 uStack_1fc;
  undefined4 local_1f8;
  undefined4 uStack_1f4;
  undefined4 uStack_1f0;
  undefined4 local_1ec;
  undefined4 uStack_1e8;
  undefined4 uStack_1e4;
  undefined4 uStack_1e0;
  undefined4 uStack_1dc;
  undefined1 local_188;
  int local_180;
  int *piStack_17c;
  undefined4 uStack_178;
  undefined4 uStack_174;
  undefined4 local_170;
  undefined4 uStack_16c;
  undefined4 uStack_168;
  undefined4 uStack_164;
  undefined4 uStack_160;
  undefined4 local_15c;
  undefined4 uStack_158;
  undefined4 uStack_154;
  undefined4 uStack_150;
  undefined4 uStack_14c;
  int local_f8;
  int *piStack_f4;
  undefined4 uStack_f0;
  undefined4 uStack_ec;
  undefined4 local_e8;
  undefined4 uStack_e4;
  undefined4 local_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 local_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 local_c8;
  undefined4 uStack_c4;
  int *local_c0;
  undefined4 local_bc;
  int *local_b8;
  undefined4 local_b4;
  undefined4 local_b0;
  undefined4 local_ac;
  undefined4 local_a8;
  int *piStack_a4;
  int *piStack_a0;
  undefined1 auStack_9c [52];
  undefined4 local_68;
  int *local_64;
  int *local_60;
  int local_58;
  int *local_54;
  undefined4 local_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
  uVar18 = FUN_013528d4(param_4,param_3);
  iVar6 = (int)uVar18;
  iVar15 = (int)((ulonglong)uVar18 >> 0x20);
  if (iVar6 == 0) {
    uVar16 = *(undefined4 *)(param_2 + 0x50);
    piVar17 = *(int **)(param_2 + 0x54);
    do {
      iVar15 = *piVar17;
      bVar5 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar5);
    *piVar17 = iVar15 + 1;
    if (iVar15 < 0) goto LAB_0125b004;
    piVar8 = *(int **)(param_2 + 0x58);
    if (piVar8 != (int *)0x0) {
      do {
        iVar15 = *piVar8;
        bVar5 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar5);
      *piVar8 = iVar15 + 1;
      goto LAB_0125ae2c;
    }
  }
  else {
    do {
      iVar7 = iVar15;
      if (iVar7 == 0) {
        iVar7 = 0;
        break;
      }
      iVar15 = iVar6 + iVar7;
      pbVar10 = (byte *)(iVar15 + -1);
      uVar12 = (uint)(char)*pbVar10;
      if (0x7fffffff < uVar12) {
        pbVar10 = (byte *)(iVar15 + -2);
        bVar2 = *pbVar10;
        if ((char)bVar2 < -0x40) {
          pbVar10 = (byte *)(iVar15 + -3);
          bVar3 = *pbVar10;
          if ((char)bVar3 < -0x40) {
            pbVar10 = (byte *)(iVar15 + -4);
            uVar14 = (int)(char)bVar3 & 0x3fU | (*pbVar10 & 7) << 6;
          }
          else {
            uVar14 = bVar3 & 0xf;
          }
          uVar14 = (int)(char)bVar2 & 0x3fU | uVar14 << 6;
        }
        else {
          uVar14 = bVar2 & 0x1f;
        }
        uVar12 = uVar12 & 0x3f | uVar14 << 6;
      }
      iVar15 = (int)pbVar10 - iVar6;
    } while (uVar12 == 0x23);
    uVar16 = *(undefined4 *)(param_2 + 0x50);
    iVar15 = *(int *)(param_2 + 0x54);
    local_58 = *(int *)(iVar15 + 0xc);
    local_54 = *(int **)(iVar15 + 0x10);
    local_50 = *(undefined4 *)(iVar15 + 0x14);
    uStack_4c = *(undefined4 *)(iVar15 + 0x18);
    uStack_48 = *(undefined4 *)(iVar15 + 0x1c);
    local_44 = *(undefined4 *)(iVar15 + 0x20);
    local_40 = *(undefined4 *)(iVar15 + 0x24);
    uStack_3c = *(undefined4 *)(iVar15 + 0x28);
    uStack_38 = *(undefined4 *)(iVar15 + 0x2c);
    FUN_0134831c(&local_210,uVar16,&local_58,iVar6,iVar7);
    if (local_210 != -0x7ffffff6) {
      local_e8 = local_200;
      uStack_e4 = uStack_1fc;
      local_e0 = local_1f8;
      uStack_dc = uStack_1f4;
      uStack_d8 = uStack_1f0;
      local_d4 = local_1ec;
      uStack_d0 = uStack_1e8;
      uStack_cc = uStack_1e4;
      local_c8 = uStack_1e0;
      uStack_c4 = uStack_1dc;
      local_f8 = local_210;
      piStack_f4 = local_20c;
      uStack_f0 = local_208;
      uStack_ec = local_204;
      local_180 = local_210;
      piStack_17c = local_20c;
      uStack_178 = local_208;
      uStack_174 = local_204;
      local_170 = local_200;
      uStack_16c = uStack_1fc;
      uStack_168 = local_1f8;
      uStack_164 = uStack_1f4;
      uStack_160 = uStack_1f0;
      local_15c = local_1ec;
      uStack_158 = uStack_1e8;
      uStack_154 = uStack_1e4;
      uStack_150 = uStack_1e0;
      uStack_14c = uStack_1dc;
      uVar16 = FUN_0125a1a4();
      *param_1 = 0;
      param_1[1] = uVar16;
      return;
    }
    piVar8 = *(int **)(param_2 + 0x58);
    piVar17 = local_20c;
    if (piVar8 != (int *)0x0) {
      do {
        iVar15 = *piVar8;
        bVar5 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar5);
      *piVar8 = iVar15 + 1;
LAB_0125ae2c:
      if (iVar15 < 0) goto LAB_0125b004;
    }
  }
  uVar11 = *(undefined4 *)(param_2 + 0x48);
  uVar4 = *(undefined1 *)(param_2 + 0x30);
  uVar13 = *(undefined4 *)(param_2 + 0x4c);
  local_68 = uVar16;
  local_64 = piVar17;
  local_60 = piVar8;
  FUN_01223904(&local_210,param_2);
  local_58 = local_210;
  local_54 = local_20c;
  local_50 = local_208;
  uStack_4c = local_204;
  uStack_48 = local_200;
  local_44 = uStack_1fc;
  local_40 = local_1f8;
  uStack_3c = uStack_1f4;
  uStack_38 = uStack_1f0;
  uStack_34 = local_1ec;
  uStack_30 = uStack_1e8;
  uStack_2c = uStack_1e4;
  local_b8 = *(int **)(param_2 + 0x40);
  do {
    iVar15 = *local_b8;
    bVar5 = (bool)hasExclusiveAccess(local_b8);
  } while (!bVar5);
  *local_b8 = iVar15 + 1;
  if (-1 < iVar15) {
    piVar17 = *(int **)(param_2 + 0x38);
    uVar16 = *(undefined4 *)(param_2 + 0x44);
    do {
      iVar15 = *piVar17;
      bVar5 = (bool)hasExclusiveAccess(piVar17);
    } while (!bVar5);
    *piVar17 = iVar15 + 1;
    if (-1 < iVar15) {
      uVar9 = *(undefined4 *)(param_2 + 0x3c);
      FUN_0119dc58(auStack_9c,param_2 + 0x5c);
      local_a8 = local_68;
      piStack_a4 = local_64;
      piStack_a0 = local_60;
      local_f8 = local_58;
      piStack_f4 = local_54;
      uStack_f0 = local_50;
      uStack_ec = uStack_4c;
      local_e8 = uStack_48;
      uStack_e4 = local_44;
      local_e0 = local_40;
      uStack_dc = uStack_3c;
      uStack_d8 = uStack_38;
      local_d4 = uStack_34;
      uStack_d0 = uStack_30;
      uStack_cc = uStack_2c;
      local_c8 = CONCAT31(local_c8._1_3_,uVar4);
      local_c0 = piVar17;
      local_bc = uVar9;
      local_b4 = uVar16;
      local_b0 = uVar11;
      local_ac = uVar13;
      FUN_016dd1aa(&local_180,&local_f8,0x88);
      FUN_016dd1aa(&local_210,&local_180,0x88);
      local_188 = (undefined1)param_4;
      FUN_0125b034(param_1,&local_210,param_3,0);
      FUN_01161600(&local_210);
      return;
    }
  }
LAB_0125b004:
                    /* WARNING: Does not return */
  pcVar1 = (code *)software_udf(0xfdee,0x125b004);
  (*pcVar1)();
}


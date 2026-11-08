// FUN_0190f070 @ 0190f070 size=1680 calls_out=25 calls_in=0
// strings: 

void FUN_0190f070(int *param_1,undefined4 param_2,int *param_3,uint *param_4)

{
  code *pcVar1;
  byte *pbVar2;
  undefined1 *puVar3;
  char cVar4;
  undefined1 uVar5;
  uint uVar6;
  int *piVar7;
  int iVar8;
  byte *pbVar9;
  uint uVar10;
  undefined4 uVar11;
  byte *pbVar12;
  int iVar13;
  int iVar14;
  uint *puVar15;
  uint uVar16;
  bool bVar17;
  int *local_2a0;
  undefined4 local_29c;
  undefined1 auStack_298 [28];
  int *local_27c;
  int local_274;
  undefined1 *local_238;
  uint *puStack_234;
  int iStack_230;
  undefined1 *puStack_22c;
  uint *local_228;
  int iStack_224;
  int iStack_220;
  int iStack_21c;
  int local_218;
  undefined4 local_214 [17];
  undefined1 auStack_1d0 [48];
  int *local_1a0;
  char local_19c;
  undefined1 auStack_19b [3];
  undefined1 *local_198;
  uint *local_194;
  int local_190;
  undefined1 auStack_188 [20];
  undefined4 local_174;
  int local_170;
  undefined1 local_16c;
  char local_16b;
  undefined1 auStack_168 [68];
  undefined4 local_124;
  byte *local_120;
  uint local_11c;
  int local_118;
  undefined1 *puStack_114;
  uint *puStack_110;
  int iStack_10c;
  int local_108;
  int iStack_104;
  int iStack_100;
  int iStack_fc;
  undefined4 local_e8;
  undefined1 *local_e4;
  uint *puStack_e0;
  int iStack_dc;
  undefined1 *puStack_d8;
  uint *local_d4;
  int iStack_d0;
  int iStack_cc;
  int iStack_c8;
  int iStack_c4;
  undefined1 local_c0;
  int local_b8;
  undefined1 *local_b4;
  uint *local_b0;
  int iStack_ac;
  undefined1 *local_a0;
  uint *local_9c;
  int local_98;
  undefined1 *local_94;
  uint *local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int iStack_80;
  undefined2 local_28;
  
  FUN_01bed4e2(&local_2a0,param_2,0x138);
  if ((*param_4 < 0x80000001) && (param_4[3] == 0x80000012)) {
    puVar15 = param_4 + 4;
LAB_0190f108:
    iVar14 = *param_3;
    FUN_018f3128(&local_a0,iVar14);
    if (local_a0 == (undefined1 *)0x80000029) {
      (**(code **)(local_170 + 0xc))(auStack_168,local_174);
      FUN_018f39e8(&local_124,local_214,auStack_168,&DAT_005210c9);
      pbVar2 = local_120;
      uVar10 = 0;
      if (local_11c == puVar15[2]) {
        if (local_11c == 0) {
          uVar10 = 1;
        }
        else {
          uVar10 = 1;
          pbVar9 = local_120;
          pbVar12 = (byte *)puVar15[1];
          uVar16 = local_11c;
          do {
            uVar6 = FUN_019216e4(((uint)(*pbVar12 ^ *pbVar9) | -(uint)(*pbVar12 ^ *pbVar9) & 0xff)
                                 >> 7 ^ 1);
            uVar10 = uVar6 & uVar10;
            uVar16 = uVar16 - 1;
            pbVar9 = pbVar9 + 1;
            pbVar12 = pbVar12 + 1;
          } while (uVar16 != 0);
        }
      }
      cVar4 = FUN_019216e4(uVar10);
      if (cVar4 != '\0') {
        FUN_0191e124(auStack_188,param_4);
        piVar7 = local_2a0;
        bVar17 = local_2a0 == (int *)0x0;
        local_2a0 = (int *)0x0;
        if (bVar17) {
          piVar7 = (int *)thunk_FUN_01be5118(0x14);
          if (piVar7 == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
            FUN_0066439c(4,0x14);
          }
          iVar14 = 0;
          uVar11 = 0;
          *piVar7 = 1;
          piVar7[1] = 1;
          piVar7[2] = 0;
          piVar7[3] = 1;
          piVar7[4] = 0;
        }
        else {
          iVar14 = piVar7[4];
          uVar11 = local_29c;
        }
        if ((iVar14 == 0) && (local_274 != -0x80000000)) {
          do {
            iVar14 = *local_27c;
            bVar17 = (bool)hasExclusiveAccess(local_27c);
          } while (!bVar17);
          *local_27c = iVar14 + 1;
          if (iVar14 < 0) {
                    /* WARNING: Does not return */
            pcVar1 = (code *)software_udf(0xfdee,0x190f700);
            (*pcVar1)();
          }
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar7;
            bVar17 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar17);
          *piVar7 = iVar14 + -1;
          piVar7 = local_27c;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018fa118();
          }
        }
        iVar14 = local_218;
        if (local_218 == 0) {
          iVar14 = piVar7[4];
        }
        if (local_218 == 0 && iVar14 == 0) {
LAB_0190f414:
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *piVar7;
            bVar17 = (bool)hasExclusiveAccess(piVar7);
          } while (!bVar17);
          *piVar7 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018fa118(piVar7);
          }
        }
        else {
          FUN_0190b0e0(&local_a0,local_1a0[0x25],*(undefined4 *)(local_1a0[0x26] + 8),
                       *(undefined4 *)(local_1a0[0x26] + 0x10));
          puVar3 = local_94;
          iVar14 = local_98;
          if (local_a0 != (undefined1 *)0x80000029) {
            FUN_0190e49c(&local_a0);
            goto LAB_0190f414;
          }
          local_a0 = local_238;
          local_9c = puStack_234;
          local_98 = iStack_230;
          local_94 = puStack_22c;
          local_90 = local_228;
          iStack_8c = iStack_224;
          iStack_88 = iStack_220;
          iStack_84 = iStack_21c;
          iStack_80 = local_218;
          iVar8 = *param_3;
          if ((*(int *)(iVar8 + 0x228) == -0x80000000) ||
             (FUN_018e307c(&local_118,*(undefined4 *)(iVar8 + 0x22c),*(undefined4 *)(iVar8 + 0x230))
             , local_118 == -0x80000000)) {
            local_b0 = (uint *)0x0;
            local_b4 = (undefined1 *)0x4;
            local_b8 = 0;
          }
          else {
            local_b8 = local_118;
            local_b4 = puStack_114;
            local_b0 = puStack_110;
          }
          FUN_018f6450(&local_118,piVar7,auStack_1d0,0x30,iVar14,puVar3,uVar11,&local_b8,
                       local_1a0 + 0x28,local_1a0 + 0x21);
          local_e8 = local_214[0];
          local_e4 = local_a0;
          puStack_e0 = local_9c;
          iStack_dc = local_98;
          puStack_d8 = local_94;
          local_d4 = local_90;
          iStack_d0 = iStack_8c;
          iStack_cc = iStack_88;
          iStack_c8 = iStack_84;
          iStack_c4 = iStack_80;
          local_c0 = local_16c;
          iVar13 = local_1a0[0x1f];
          iVar14 = local_1a0[0x1e];
          iVar8 = *(int *)(iVar13 + 8);
          if (local_19c == '\x01') {
            FUN_01bed4e2((uint)&local_b8 | 1,auStack_19b,0x11);
            uVar5 = 1;
          }
          else {
            if (local_198 == (undefined1 *)0x80000000) {
              local_a0 = local_198;
              local_9c = local_194;
              local_98 = local_190;
            }
            else {
              FUN_006666fc(&local_a0,local_194,local_190);
            }
            local_b4 = local_a0;
            local_b0 = local_9c;
            iStack_ac = local_98;
            uVar5 = 0;
          }
          local_b8 = CONCAT31(local_b8._1_3_,uVar5);
          FUN_01bed4e2(&local_a0,&local_118,0x60);
          (**(code **)(iVar13 + 0x18))(iVar14 + (iVar8 - 1U & 0xfffffff8) + 8,&local_b8,&local_a0);
        }
        iVar14 = *param_3;
        if (local_16b != '\0') {
          local_a0 = &DAT_80000004;
          local_28 = 4;
          FUN_018f1fc4(iVar14,&local_a0,0);
          *(undefined1 *)(iVar14 + 0x31) = 2;
          FUN_0190f9f0(local_214,auStack_188,iVar14);
        }
        FUN_018f2938(iVar14,param_3[2]);
        FUN_01bed4e2(&local_a0,local_214,0x74);
        iVar14 = thunk_FUN_01be5118(0x74);
        if (iVar14 == 0) {
                    /* WARNING: Subroutine does not return */
          FUN_0066439c(4,0x74);
        }
        FUN_01bed4e2(iVar14,local_214,0x74);
        *param_1 = -0x7fffffd7;
        param_1[1] = iVar14;
        param_1[2] = (int)&DAT_01d25160;
        FUN_0134bd64(local_124,local_120);
        DataMemoryBarrier(0xb);
        do {
          iVar14 = *local_1a0;
          bVar17 = (bool)hasExclusiveAccess(local_1a0);
        } while (!bVar17);
        *local_1a0 = iVar14 + -1;
        if (iVar14 == 1) {
          DataMemoryBarrier(0xb);
          FUN_018fa168(local_1a0);
        }
        if (local_274 != -0x80000000) {
          FUN_0190ebd8(auStack_298);
        }
        if ((local_19c == '\0') && (local_198 != (undefined1 *)0x80000000)) {
          FUN_0134bd64(local_198,local_194);
        }
        FUN_01902274(auStack_188);
        if (local_2a0 != (int *)0x0) {
          DataMemoryBarrier(0xb);
          do {
            iVar14 = *local_2a0;
            bVar17 = (bool)hasExclusiveAccess(local_2a0);
          } while (!bVar17);
          *local_2a0 = iVar14 + -1;
          if (iVar14 == 1) {
            DataMemoryBarrier(0xb);
            FUN_018fa118(local_2a0);
          }
        }
        goto LAB_0190f204;
      }
      local_a0 = (undefined1 *)0x80000019;
      FUN_018f1f40(&local_118,iVar14,0x11,&local_a0);
      *param_1 = local_118;
      param_1[1] = (int)puStack_114;
      param_1[2] = (int)puStack_110;
      param_1[3] = iStack_10c;
      param_1[4] = local_108;
      param_1[5] = iStack_104;
      param_1[6] = iStack_100;
      param_1[7] = iStack_fc;
      FUN_0134bd64(local_124,pbVar2);
    }
    else {
      piVar7 = (int *)((uint)&local_a0 | 4);
      iVar14 = piVar7[1];
      iVar8 = piVar7[2];
      param_1[1] = *piVar7;
      param_1[2] = iVar14;
      param_1[3] = iVar8;
      iVar14 = piVar7[4];
      iVar8 = piVar7[5];
      iVar13 = piVar7[6];
      param_1[4] = piVar7[3];
      param_1[5] = iVar14;
      param_1[6] = iVar8;
      param_1[7] = iVar13;
      *param_1 = (int)local_a0;
    }
  }
  else {
    FUN_0191d9a0(&local_a0,param_4,&DAT_0052389f,1,&DAT_00523835,1);
    local_118 = local_98;
    puStack_114 = local_94;
    puStack_110 = local_90;
    iStack_10c = iStack_8c;
    local_108 = iStack_88;
    iStack_104 = iStack_84;
    puVar15 = local_9c;
    if (local_a0 == (undefined1 *)0x80000029) goto LAB_0190f108;
    param_1[2] = local_98;
    param_1[3] = (int)local_94;
    param_1[4] = (int)local_90;
    param_1[5] = iStack_8c;
    param_1[6] = iStack_88;
    param_1[7] = iStack_84;
    *param_1 = (int)local_a0;
    param_1[1] = (int)local_9c;
  }
  FUN_0190e9b0(&local_2a0);
LAB_0190f204:
  FUN_0190eb24(param_4);
  thunk_FUN_01be4678(param_2);
  return;
}


// FUN_00f30690 @ 00f30690 size=4008 calls_out=12 calls_in=2
// strings: BUG: Input vector is not within permitted length boundsRpc | BUG: referral ID doesn't meet prefix lenght requirementsstruct Poolstruct BdfGroupstruct Referralstruct SplitGroupstruct SignedReferralstruct ReferralForModel

void FUN_00f30690(undefined4 *param_1,int param_2,undefined *param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  byte bVar7;
  byte bVar8;
  byte bVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  undefined *puVar14;
  undefined *puVar15;
  uint uVar16;
  undefined *puVar17;
  uint uVar18;
  uint uVar19;
  uint uVar20;
  uint uVar21;
  uint *puVar22;
  int iVar23;
  uint uVar24;
  undefined *puVar25;
  undefined *puVar26;
  undefined *puVar27;
  uint uVar28;
  uint uVar29;
  uint uVar30;
  byte *pbVar32;
  byte *pbVar31;
  int iVar33;
  uint uVar34;
  bool bVar35;
  bool bVar36;
  undefined *local_64;
  uint local_54;
  uint local_48;
  undefined *local_38;
  undefined4 *local_34;
  undefined *local_30;
  uint local_2c;
  undefined *local_28;
  
  if (param_3 < (undefined *)0x8) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa478("BUG: referral ID doesn\'t meet prefix lenght requirementsstruct Poolstruct BdfGroupstruct Referralstruct SplitGroupstruct SignedReferralstruct ReferralForModel"
                 ,0x71,&DAT_0187e820);
  }
  if ((undefined *)0xfffffffc < param_3) {
                    /* WARNING: Subroutine does not return */
    FUN_00fb74b8(&DAT_0035bb6d,0x23,&DAT_0187e750);
  }
  local_30 = (undefined *)(((uint)(param_3 + 3) >> 2) * 3);
  if ((int)local_30 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,local_30);
  }
  local_2c = thunk_FUN_016d4a50(local_30);
  if (local_2c == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,local_30);
  }
  local_28 = (undefined *)0x0;
  local_48 = (uint)(param_3 + 7) >> 3;
  puVar14 = (undefined *)(local_48 * 6);
  if (local_30 < puVar14) {
    FUN_00f304e0(&local_30,0,puVar14);
  }
  puVar25 = local_28;
  uVar16 = local_2c;
  puVar27 = local_28 + local_2c;
  FUN_016dd606(puVar27,0,puVar14 + -1);
  puVar27[(int)(puVar14 + -1)] = 0;
  local_28 = puVar14 + (int)puVar25;
  puVar14 = (undefined *)((uint)param_3 & 7);
  switch(puVar14) {
  case (undefined *)0x0:
    puVar14 = (undefined *)0x8;
    break;
  case (undefined *)0x1:
  case (undefined *)0x5:
    puVar27 = param_3 + -1;
    uVar16 = (uint)(byte)puVar27[param_2];
    if (uVar16 == 0x3d) {
      uVar18 = 1;
    }
    else {
      uVar18 = 0;
      if ((&DAT_0035bb90)[uVar16] == -1) {
        uVar18 = uVar16;
      }
      uVar18 = (uint)((&DAT_0035bb90)[uVar16] != -1) | uVar18 << 8;
    }
    goto joined_r0x00f314d0;
  case (undefined *)0x2:
    puVar14 = (undefined *)0xa;
    break;
  case (undefined *)0x3:
    puVar14 = (undefined *)0xb;
    break;
  case (undefined *)0x4:
    puVar14 = (undefined *)0xc;
  }
  uVar30 = (int)param_3 - (int)puVar14;
  puVar27 = (undefined *)0x0;
  if (param_3 < puVar14) {
    uVar30 = 0;
  }
  if (uVar30 < 0x20) {
    puVar14 = (undefined *)0x0;
  }
  else {
    puVar14 = (undefined *)0x0;
    puVar25 = &DAT_0035bb90;
    do {
      puVar17 = puVar14 + 0x1a;
      if (local_28 < puVar17) {
        puVar25 = &DAT_0187e760;
        param_3 = local_28;
        goto LAB_00f30eb0;
      }
      uVar19 = (uint)(byte)puVar27[param_2];
      pbVar32 = &DAT_0035bb90 + uVar19;
      if (*pbVar32 == 0xff) goto LAB_00f31064;
      uVar19 = (uint)(byte)puVar27[param_2 + 1];
      pbVar31 = &DAT_0035bb90 + uVar19;
      if (*pbVar31 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 1);
        goto LAB_00f31064;
      }
      uVar19 = (uint)(byte)puVar27[param_2 + 2];
      pbVar1 = &DAT_0035bb90 + uVar19;
      if (*pbVar1 == 0xff) goto LAB_00f31028;
      uVar19 = (uint)(byte)puVar27[param_2 + 3];
      pbVar2 = &DAT_0035bb90 + uVar19;
      if (*pbVar2 == 0xff) goto LAB_00f31030;
      uVar19 = (uint)(byte)puVar27[param_2 + 4];
      pbVar3 = &DAT_0035bb90 + uVar19;
      if (*pbVar3 == 0xff) goto LAB_00f31044;
      uVar19 = (uint)(byte)puVar27[param_2 + 5];
      bVar4 = (&DAT_0035bb90)[uVar19];
      if (bVar4 == 0xff) goto LAB_00f31050;
      uVar19 = (uint)(byte)puVar27[param_2 + 6];
      bVar5 = (&DAT_0035bb90)[uVar19];
      if (bVar5 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 6);
        goto LAB_00f31064;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 7];
      bVar6 = (&DAT_0035bb90)[uVar18];
      if (bVar6 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 7);
        goto LAB_00f31454;
      }
      uVar19 = (uint)*pbVar31 << 0x14 | (uint)*pbVar32 << 0x1a;
      uVar20 = uVar19 | (uint)*pbVar1 << 0xe;
      uVar18 = (uint)*pbVar3 << 2;
      puVar22 = (uint *)(puVar14 + uVar16);
      *puVar22 = (uVar18 & 0xff | (uint)(bVar4 >> 4)) << 0x18 |
                 ((uVar20 | (uint)*pbVar2 << 8 | uVar18) >> 8 & 0xff) << 0x10 |
                 ((uVar20 & 0xff0000) >> 0x10) << 8 | uVar19 >> 0x18;
      uVar18 = (uint)bVar5 << 0x16;
      puVar22[1] = ((uVar18 & 0xff0000 | (uint)bVar6 << 0x10) >> 0x10) << 8 |
                   ((uint)bVar4 << 0x1c | uVar18) >> 0x18;
      uVar18 = (uint)(byte)puVar27[param_2 + 8];
      bVar4 = (&DAT_0035bb90)[uVar18];
      if (bVar4 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 8);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 9];
      bVar5 = (&DAT_0035bb90)[uVar18];
      if (bVar5 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 9);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 10];
      bVar6 = (&DAT_0035bb90)[uVar18];
      if (bVar6 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 10);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0xb];
      bVar7 = (&DAT_0035bb90)[uVar18];
      if (bVar7 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0xb);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0xc];
      bVar8 = (&DAT_0035bb90)[uVar18];
      if (bVar8 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0xc);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0xd];
      bVar9 = (&DAT_0035bb90)[uVar18];
      if (bVar9 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0xd);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0xe];
      pbVar32 = &DAT_0035bb90 + uVar18;
      if (*pbVar32 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0xe);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0xf];
      if ((byte)(&DAT_0035bb90)[uVar18] == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0xf);
        goto LAB_00f31454;
      }
      uVar19 = (uint)*pbVar32 << 0x16;
      *(uint *)((int)puVar22 + 10) =
           ((uVar19 & 0xff0000 | (uint)(byte)(&DAT_0035bb90)[uVar18] << 0x10) >> 0x10) << 8 |
           ((uint)bVar9 << 0x1c | uVar19) >> 0x18;
      uVar19 = (uint)bVar5 << 0x14 | (uint)bVar4 << 0x1a;
      uVar20 = uVar19 | (uint)bVar6 << 0xe;
      uVar18 = (uint)bVar8 << 2;
      *(uint *)((int)puVar22 + 6) =
           (uVar18 & 0xff | (uint)(bVar9 >> 4)) << 0x18 |
           ((uVar20 | (uint)bVar7 << 8 | uVar18) >> 8 & 0xff) << 0x10 |
           ((uVar20 & 0xff0000) >> 0x10) << 8 | uVar19 >> 0x18;
      uVar18 = (uint)(byte)puVar27[param_2 + 0x10];
      bVar4 = (&DAT_0035bb90)[uVar18];
      if (bVar4 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x10);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x11];
      bVar5 = (&DAT_0035bb90)[uVar18];
      if (bVar5 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x11);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x12];
      bVar6 = (&DAT_0035bb90)[uVar18];
      if (bVar6 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x12);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x13];
      bVar7 = (&DAT_0035bb90)[uVar18];
      if (bVar7 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x13);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x14];
      bVar8 = (&DAT_0035bb90)[uVar18];
      if (bVar8 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x14);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x15];
      bVar9 = (&DAT_0035bb90)[uVar18];
      if (bVar9 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x15);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x16];
      pbVar32 = &DAT_0035bb90 + uVar18;
      if (*pbVar32 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x16);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x17];
      if ((byte)(&DAT_0035bb90)[uVar18] == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x17);
        goto LAB_00f31454;
      }
      uVar19 = (uint)*pbVar32 << 0x16;
      *(uint *)(puVar14 + uVar16 + 0x10) =
           ((uVar19 & 0xff0000 | (uint)(byte)(&DAT_0035bb90)[uVar18] << 0x10) >> 0x10) << 8 |
           ((uint)bVar9 << 0x1c | uVar19) >> 0x18;
      uVar19 = (uint)bVar5 << 0x14 | (uint)bVar4 << 0x1a;
      uVar20 = uVar19 | (uint)bVar6 << 0xe;
      uVar18 = (uint)bVar8 << 2;
      *(uint *)(puVar14 + uVar16 + 0xc) =
           (uVar18 & 0xff | (uint)(bVar9 >> 4)) << 0x18 |
           ((uVar20 | (uint)bVar7 << 8 | uVar18) >> 8 & 0xff) << 0x10 |
           ((uVar20 & 0xff0000) >> 0x10) << 8 | uVar19 >> 0x18;
      uVar18 = (uint)(byte)puVar27[param_2 + 0x18];
      bVar4 = (&DAT_0035bb90)[uVar18];
      if (bVar4 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x18);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x19];
      bVar5 = (&DAT_0035bb90)[uVar18];
      if (bVar5 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x19);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1a];
      bVar6 = (&DAT_0035bb90)[uVar18];
      if (bVar6 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1a);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1b];
      bVar7 = (&DAT_0035bb90)[uVar18];
      if (bVar7 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1b);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1c];
      bVar8 = (&DAT_0035bb90)[uVar18];
      if (bVar8 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1c);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1d];
      bVar9 = (&DAT_0035bb90)[uVar18];
      if (bVar9 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1d);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1e];
      pbVar32 = &DAT_0035bb90 + uVar18;
      if (*pbVar32 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1e);
        goto LAB_00f31454;
      }
      uVar18 = (uint)(byte)puVar27[param_2 + 0x1f];
      if ((byte)(&DAT_0035bb90)[uVar18] == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 0x1f);
        goto LAB_00f31454;
      }
      uVar19 = (uint)*pbVar32 << 0x16;
      puVar22 = (uint *)(puVar14 + uVar16 + 0x12);
      *(uint *)(puVar14 + uVar16 + 0x16) =
           ((uVar19 & 0xff0000 | (uint)(byte)(&DAT_0035bb90)[uVar18] << 0x10) >> 0x10) << 8 |
           ((uint)bVar9 << 0x1c | uVar19) >> 0x18;
      uVar19 = (uint)bVar5 << 0x14 | (uint)bVar4 << 0x1a;
      uVar20 = uVar19 | (uint)bVar6 << 0xe;
      puVar27 = puVar27 + 0x20;
      uVar18 = (uint)bVar8 << 2;
      puVar14 = puVar14 + 0x18;
      *puVar22 = (uVar18 & 0xff | (uint)(bVar9 >> 4)) << 0x18 |
                 ((uVar20 | (uint)bVar7 << 8 | uVar18) >> 8 & 0xff) << 0x10 |
                 ((uVar20 & 0xff0000) >> 0x10) << 8 | uVar19 >> 0x18;
      local_48 = local_48 - 4;
    } while (puVar27 <= (undefined *)(uVar30 - 0x20));
  }
  if (7 < uVar30) {
    while (puVar27 < (undefined *)(uVar30 - 8)) {
      puVar17 = puVar14 + 8;
      bVar36 = (undefined *)0xfffffff6 < puVar14;
      bVar35 = puVar14 == (undefined *)0xfffffff7;
      if (puVar14 < (undefined *)0xfffffff8) {
        bVar36 = local_28 <= puVar17;
        bVar35 = puVar17 == local_28;
      }
      if (bVar36 && !bVar35) {
        puVar25 = &DAT_0187e770;
        param_3 = local_28;
        goto LAB_00f30eb0;
      }
      uVar18 = (uint)(byte)puVar27[param_2];
      if ((byte)(&DAT_0035bb90)[uVar18] == 0xff) goto LAB_00f31454;
      if ((byte)(&DAT_0035bb90)[(byte)puVar27[param_2 + 1]] == 0xff) {
        uVar18 = (uint)(byte)puVar27[param_2 + 1] << 8;
        puVar27 = (undefined *)((uint)puVar27 | 1);
        goto joined_r0x00f314d0;
      }
      uVar19 = (uint)(byte)puVar27[param_2 + 2];
      pbVar32 = &DAT_0035bb90 + uVar19;
      if (*pbVar32 == 0xff) goto LAB_00f31028;
      uVar19 = (uint)(byte)puVar27[param_2 + 3];
      pbVar31 = &DAT_0035bb90 + uVar19;
      if (*pbVar31 == 0xff) goto LAB_00f31030;
      uVar19 = (uint)(byte)puVar27[param_2 + 4];
      pbVar1 = &DAT_0035bb90 + uVar19;
      if (*pbVar1 == 0xff) goto LAB_00f31044;
      uVar19 = (uint)(byte)puVar27[param_2 + 5];
      bVar4 = (&DAT_0035bb90)[uVar19];
      if (bVar4 == 0xff) goto LAB_00f31050;
      uVar19 = (uint)(byte)puVar27[param_2 + 6];
      bVar5 = (&DAT_0035bb90)[uVar19];
      if (bVar5 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 6);
        goto LAB_00f31064;
      }
      uVar19 = (uint)(byte)puVar27[param_2 + 7];
      bVar6 = (&DAT_0035bb90)[uVar19];
      if (bVar6 == 0xff) {
        puVar27 = (undefined *)((uint)puVar27 | 7);
        goto LAB_00f31064;
      }
      uVar19 = (uint)(byte)(&DAT_0035bb90)[(byte)puVar27[param_2 + 1]] << 0x14 |
               (uint)(byte)(&DAT_0035bb90)[uVar18] << 0x1a;
      uVar20 = uVar19 | (uint)*pbVar32 << 0xe;
      uVar18 = (uint)*pbVar1 << 2;
      puVar22 = (uint *)(puVar14 + uVar16);
      *puVar22 = (uVar18 & 0xff | (uint)(bVar4 >> 4)) << 0x18 |
                 ((uVar20 | (uint)*pbVar31 << 8 | uVar18) >> 8 & 0xff) << 0x10 |
                 ((uVar20 & 0xff0000) >> 0x10) << 8 | uVar19 >> 0x18;
      uVar18 = (uint)bVar5 << 0x16;
      puVar14 = puVar14 + 6;
      puVar22[1] = ((uVar18 & 0xff0000 | (uint)bVar6 << 0x10) >> 0x10) << 8 |
                   ((uint)bVar4 << 0x1c | uVar18) >> 0x18;
      local_48 = local_48 - 1;
      puVar25 = puVar27 + 8;
      puVar27 = puVar25;
    }
  }
  puVar17 = param_3;
  if (1 < local_48) {
    iVar33 = local_48 - 1;
    iVar23 = -(int)puVar27;
    local_64 = &DAT_0187e6d0;
    puVar15 = puVar14;
    puVar14 = puVar27;
    while( true ) {
      if (param_3 < puVar14) {
        puVar25 = &DAT_0187e7c8;
        goto LAB_00f30eb0;
      }
      bVar36 = (undefined *)0xfffffff8 < puVar15;
      bVar35 = puVar15 == (undefined *)0xfffffff9;
      puVar26 = puVar25;
      if (puVar15 < (undefined *)0xfffffffa) {
        puVar26 = puVar15 + 6;
        bVar36 = local_28 <= puVar26;
        bVar35 = puVar26 == local_28;
      }
      if (bVar36 && !bVar35) {
        puVar25 = &DAT_0187e7b8;
        puVar14 = puVar15;
        puVar17 = puVar15 + 6;
        param_3 = local_28;
        goto LAB_00f30eb0;
      }
      if (param_3 == puVar14) {
        puVar14 = (undefined *)0x0;
        puVar25 = (undefined *)0x0;
        goto LAB_00f3166c;
      }
      uVar18 = 0;
      uVar30 = (uint)(byte)puVar14[param_2];
      pbVar32 = &DAT_0035bb90 + uVar30;
      if (*pbVar32 == 0xff) goto LAB_00f31248;
      if (param_3 + -1 == puVar14) {
        puVar14 = (undefined *)0x1;
        puVar25 = (undefined *)0x1;
        local_64 = &DAT_0187e6e0;
        goto LAB_00f3166c;
      }
      uVar30 = (uint)(byte)puVar14[param_2 + 1];
      pbVar31 = &DAT_0035bb90 + uVar30;
      if (*pbVar31 == 0xff) {
        puVar14 = puVar14 + 1;
        goto LAB_00f31248;
      }
      puVar27 = param_3 + iVar23;
      if (puVar27 < (undefined *)0x3) {
        puVar14 = (undefined *)0x2;
        puVar25 = (undefined *)0x2;
        local_64 = &DAT_0187e6f0;
        goto LAB_00f3166c;
      }
      uVar30 = (uint)(byte)puVar14[param_2 + 2];
      puVar25 = (undefined *)(uint)(byte)(&DAT_0035bb90)[uVar30];
      if (puVar25 == (undefined *)0xff) {
        puVar14 = puVar14 + 2;
        goto LAB_00f31248;
      }
      if (param_3 + -3 == puVar14) {
        puVar14 = (undefined *)0x3;
        puVar25 = (undefined *)0x3;
        local_64 = &DAT_0187e700;
        goto LAB_00f3166c;
      }
      uVar30 = (uint)(byte)puVar14[param_2 + 3];
      if ((byte)(&DAT_0035bb90)[uVar30] == 0xff) {
        puVar14 = puVar14 + 3;
        goto LAB_00f31248;
      }
      if (puVar27 < (undefined *)0x5) {
        puVar14 = (undefined *)0x4;
        puVar25 = (undefined *)0x4;
        local_64 = &DAT_0187e710;
        goto LAB_00f3166c;
      }
      uVar18 = (uint)(byte)puVar14[param_2 + 4];
      pbVar1 = &DAT_0035bb90 + uVar18;
      if (*pbVar1 == 0xff) break;
      if (param_3 + -5 == puVar14) {
        puVar14 = (undefined *)0x5;
        puVar25 = (undefined *)0x5;
        local_64 = &DAT_0187e720;
        goto LAB_00f3166c;
      }
      uVar18 = (uint)(byte)puVar14[param_2 + 5];
      bVar4 = (&DAT_0035bb90)[uVar18];
      if (bVar4 == 0xff) {
        puVar27 = puVar14 + 5;
        goto LAB_00f31454;
      }
      if (puVar27 < (undefined *)0x7) {
        puVar14 = (undefined *)0x6;
        puVar25 = (undefined *)0x6;
        local_64 = &DAT_0187e730;
        goto LAB_00f3166c;
      }
      uVar18 = (uint)(byte)puVar14[param_2 + 6];
      pbVar2 = &DAT_0035bb90 + uVar18;
      if (*pbVar2 == 0xff) {
        puVar27 = puVar14 + 6;
        goto LAB_00f31454;
      }
      if (param_3 + -7 == puVar14) {
        puVar14 = (undefined *)0x7;
        puVar25 = (undefined *)0x7;
        local_64 = &DAT_0187e740;
        goto LAB_00f3166c;
      }
      uVar18 = (uint)(byte)puVar14[param_2 + 7];
      bVar5 = (&DAT_0035bb90)[uVar18];
      if (bVar5 == 0xff) {
        puVar27 = puVar14 + 7;
        goto LAB_00f31454;
      }
      iVar23 = iVar23 + -8;
      iVar33 = iVar33 + -1;
      uVar20 = (uint)*pbVar32 << 0x1a | (uint)*pbVar31 << 0x14;
      uVar21 = uVar20 | (int)puVar25 << 0xe;
      uVar18 = (uint)*pbVar1 << 2;
      uVar19 = (uint)*pbVar2 << 0x16;
      *(uint *)(puVar15 + uVar16) =
           (uVar18 & 0xff | (uint)(bVar4 >> 4)) << 0x18 |
           ((uVar21 | (uint)(byte)(&DAT_0035bb90)[uVar30] << 8 | uVar18) >> 8 & 0xff) << 0x10 |
           ((uVar21 & 0xff0000) >> 0x10) << 8 | uVar20 >> 0x18;
      puVar14 = puVar14 + 8;
      *(ushort *)((int)(puVar15 + uVar16) + 4) =
           (ushort)(((uVar19 & 0xff0000 | (uint)bVar5 << 0x10) >> 0x10) << 8) |
           (ushort)(byte)((byte)(((uint)bVar4 << 0x1c) >> 0x18) | (byte)(uVar19 >> 0x18));
      puVar15 = puVar26;
      if (iVar33 == 0) goto LAB_00f30e4c;
    }
    puVar27 = puVar14 + 4;
LAB_00f31454:
    uVar18 = uVar18 << 8;
    goto joined_r0x00f314d0;
  }
  puVar26 = puVar14;
  puVar14 = puVar27;
LAB_00f30e4c:
  if (param_3 < puVar14) {
    puVar25 = &DAT_0187e7a8;
LAB_00f30eb0:
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(puVar14,puVar17,param_3,puVar25);
  }
  if (puVar14 == param_3) {
    uVar30 = 0;
    local_54 = 0;
    uVar19 = 0;
    uVar20 = 0;
    bVar35 = false;
    bVar36 = false;
    bVar10 = false;
    bVar11 = false;
    bVar12 = false;
    bVar13 = false;
    uVar18 = 0;
    goto switchD_00f30ff4_caseD_0;
  }
  uVar21 = 0;
  iVar23 = 0;
  uVar19 = 0;
  uVar20 = 0;
  local_54 = 0;
  uVar18 = 0;
  pbVar32 = puVar14 + param_2;
  uVar29 = 0;
  do {
    while( true ) {
      pbVar31 = pbVar32 + 1;
      uVar30 = (uint)*pbVar32;
      pbVar32 = pbVar31;
      if (uVar30 != 0x3d) break;
      if ((uVar18 & 2) == 0) {
        uVar29 = uVar18;
        if (0 < iVar23) {
          uVar29 = uVar21;
        }
LAB_00f30fa8:
        uVar30 = 0x3d;
        uVar18 = uVar29;
LAB_00f30fac:
        puVar14 = puVar14 + uVar18;
        uVar18 = 0;
        goto LAB_00f31248;
      }
      bVar35 = iVar23 == 0;
      iVar23 = iVar23 + 1;
      if (bVar35) {
        uVar21 = uVar18;
      }
      uVar18 = uVar18 + 1;
      if (pbVar31 == param_3 + param_2) {
        uVar30 = uVar29;
        goto LAB_00f30fb8;
      }
    }
    uVar29 = uVar21;
    if (0 < iVar23) goto LAB_00f30fa8;
    uVar29 = (uint)(byte)(&DAT_0035bb90)[uVar30];
    if (uVar29 == 0xff) goto LAB_00f30fac;
    local_54 = local_54 + 1;
    uVar34 = local_54 * 0x3a & 0x3e;
    uVar24 = uVar34 - 0x20;
    uVar28 = (uint)((byte)(&DAT_0035bb90)[uVar30] >> (0x20 - uVar34 & 0xff));
    if (-1 < (int)uVar24) {
      uVar28 = uVar29 << (uVar24 & 0xff);
    }
    uVar29 = uVar29 << uVar34;
    uVar20 = uVar28 | uVar20;
    if (-1 < (int)uVar24) {
      uVar29 = 0;
    }
    uVar19 = uVar29 | uVar19;
    uVar18 = uVar18 + 1;
    uVar29 = uVar30;
  } while (pbVar31 != param_3 + param_2);
LAB_00f30fb8:
  bVar13 = false;
  bVar12 = false;
  bVar35 = false;
  bVar36 = false;
  bVar10 = false;
  bVar11 = false;
  uVar18 = local_54;
  switch(local_54) {
  case 0:
    goto switchD_00f30ff4_caseD_0;
  default:
    local_34 = &DAT_0157d360;
    local_38 = &DAT_0187e790;
                    /* WARNING: Subroutine does not return */
    FUN_00faa478(&DAT_0056c101,&local_38,&DAT_0187e798);
  case 2:
    uVar18 = 8;
    break;
  case 3:
    uVar18 = 0x10;
    bVar36 = true;
    break;
  case 4:
    uVar18 = 0x18;
    bVar36 = true;
    bVar10 = true;
    break;
  case 6:
    uVar18 = 0x20;
    bVar36 = true;
    bVar10 = true;
    bVar11 = true;
    break;
  case 7:
    bVar12 = true;
    uVar18 = 0x28;
    bVar36 = true;
    bVar10 = true;
    bVar11 = true;
    goto LAB_00f31210;
  case 8:
    uVar18 = 0x30;
    bVar35 = true;
    bVar36 = true;
    bVar10 = true;
    bVar11 = true;
    bVar12 = true;
    bVar13 = true;
    goto switchD_00f30ff4_caseD_0;
  }
  bVar12 = false;
LAB_00f31210:
  bVar35 = true;
switchD_00f30ff4_caseD_0:
  uVar21 = uVar19 >> (0x20 - uVar18 & 0xff) | uVar20 << (uVar18 & 0xff);
  iVar23 = uVar19 << (uVar18 & 0xff);
  if (-1 < (int)(uVar18 - 0x20)) {
    iVar23 = 0;
    uVar21 = uVar19 << (uVar18 - 0x20 & 0xff);
  }
  if (iVar23 == 0 && uVar21 == 0) {
    if (bVar35) {
      puVar14 = local_28;
      if (local_28 < puVar26) {
        puVar14 = puVar26;
      }
      puVar25 = local_28;
      if (local_28 <= puVar26) {
LAB_00f3167c:
        local_64 = &DAT_0187e780;
LAB_00f3166c:
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(puVar14,puVar25,local_64);
      }
      puVar26[uVar16] = (char)(uVar20 >> 0x18);
      puVar27 = puVar26 + 1;
      if (bVar36) {
        if (puVar27 == puVar14) goto LAB_00f3167c;
        puVar27[uVar16] = (char)(uVar20 >> 0x10);
        puVar27 = puVar26 + 2;
        if (bVar10) {
          if (puVar27 == puVar14) goto LAB_00f3167c;
          puVar27[uVar16] = (char)(uVar20 >> 8);
          puVar27 = puVar26 + 3;
          if (bVar11) {
            if (puVar27 == puVar14) goto LAB_00f3167c;
            puVar27[uVar16] = (char)uVar20;
            puVar27 = puVar26 + 4;
            if (bVar12) {
              local_64 = &DAT_0187e780;
              if (puVar27 == puVar14) goto LAB_00f3166c;
              puVar27[uVar16] = (char)(uVar19 >> 0x18);
              puVar27 = puVar26 + 5;
              if (bVar13) {
                if (puVar27 == puVar14) goto LAB_00f3166c;
                puVar27[uVar16] = (char)(uVar19 >> 0x10);
                puVar26 = puVar26 + 6;
              }
              else {
                puVar26 = puVar27;
              }
              goto LAB_00f31340;
            }
          }
        }
      }
      puVar26 = puVar27;
    }
LAB_00f31340:
    puVar27 = local_28;
    if (puVar26 < local_28) {
      puVar27 = puVar26;
    }
    uVar18 = local_2c;
    local_28 = puVar27;
    if (local_30 != (undefined *)0x80000000) {
      if (puVar27 < local_30) {
        if (puVar27 == (undefined *)0x0) {
          thunk_FUN_016d3fb4(local_2c);
          uVar16 = 1;
        }
        else {
          uVar16 = thunk_FUN_016d4ea4(local_2c,puVar27);
          if (uVar16 == 0) {
                    /* WARNING: Subroutine does not return */
            FUN_00600af4(1,puVar27);
          }
        }
      }
      else {
        uVar16 = local_2c;
      }
      if (&DAT_0000ffff < puVar27) {
        thunk_FUN_016d3fb4();
        local_28 = (undefined *)0xffff;
        local_2c = 0;
        local_30 = puVar27;
                    /* WARNING: Subroutine does not return */
        FUN_00fb74f8("BUG: Input vector is not within permitted length boundsRpc",0x37,&local_30,
                     &DAT_0187e6c0);
      }
      param_1[1] = uVar16;
      param_1[2] = puVar27;
      *param_1 = 0x80000005;
      return;
    }
    goto LAB_00f3146c;
  }
  uVar18 = 2;
  puVar14 = puVar14 + (local_54 - 1);
LAB_00f31248:
  uVar18 = uVar18 | uVar30 << 8;
  puVar27 = puVar14;
joined_r0x00f314d0:
  if (local_30 == (undefined *)0x0) goto LAB_00f3146c;
  goto LAB_00f31464;
LAB_00f31028:
  puVar27 = (undefined *)((uint)puVar27 | 2);
  goto LAB_00f31064;
LAB_00f31030:
  puVar27 = (undefined *)((uint)puVar27 | 3);
  goto LAB_00f31064;
LAB_00f31044:
  puVar27 = (undefined *)((uint)puVar27 | 4);
  goto LAB_00f31064;
LAB_00f31050:
  puVar27 = (undefined *)((uint)puVar27 | 5);
LAB_00f31064:
  uVar18 = uVar19 << 8;
  if (local_30 != (undefined *)0x0) {
LAB_00f31464:
    thunk_FUN_016d3fb4(local_2c);
  }
LAB_00f3146c:
  if ((int)param_3 < 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(0,param_3);
  }
  iVar23 = thunk_FUN_016d4a50(param_3);
  if (iVar23 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00600af4(1,param_3);
  }
  FUN_016dd1aa(iVar23,param_2,param_3);
  param_1[1] = iVar23;
  param_1[2] = param_3;
  *param_1 = param_3;
  param_1[3] = uVar18;
  param_1[4] = puVar27;
  return;
}


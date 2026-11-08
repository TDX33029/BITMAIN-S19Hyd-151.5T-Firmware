// FUN_0119d6ac @ 0119d6ac size=1624 calls_out=6 calls_in=0
// strings: 

void FUN_0119d6ac(undefined4 *param_1,undefined4 *param_2)

{
  undefined1 uVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 *puVar6;
  undefined4 uVar7;
  int iVar8;
  int *piVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 local_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 local_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 local_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 local_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0xc)) {
  case 0:
    piVar9 = (int *)*param_2;
    puVar6 = (undefined4 *)param_2[1];
    uVar7 = 0x80000007;
    param_2[2] = puVar6;
    iVar8 = puVar6[4];
    if ((*(int *)(iVar8 + 0x40) == 7) &&
       (iVar2 = thunk_FUN_01bed842(*(int *)(iVar8 + 0x3c) + 8,&DAT_005325f1,7), iVar2 == 0)) {
      uVar7 = puVar6[7];
      uVar10 = puVar6[5];
      uVar11 = puVar6[6];
      uVar1 = *(undefined1 *)(puVar6 + 8);
      uVar3 = puVar6[1];
      uVar4 = puVar6[2];
      uVar5 = puVar6[3];
      param_2[3] = *puVar6;
      param_2[4] = uVar3;
      param_2[5] = uVar4;
      param_2[6] = uVar5;
      param_2[0xd] = piVar9;
      param_2[7] = iVar8 + 0x20;
      param_2[8] = uVar10;
      param_2[9] = uVar11;
      param_2[10] = uVar7;
      param_2[0xe] = puVar6;
      *(undefined1 *)(param_2 + 0xb) = uVar1;
      *(undefined1 *)(param_2 + 0xf) = 0;
LAB_0119d7d8:
      iVar8 = 0xc;
      if (*piVar9 < 0) {
        iVar8 = *piVar9;
      }
                    /* WARNING: Could not recover jumptable at 0x0119d7f0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)(&DAT_0119d7f4 + *(int *)(&DAT_0119d7f4 + iVar8 * 4)))();
      return;
    }
    goto LAB_0119dd70;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01c20c50);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01c20c50);
  case 3:
    puVar6 = param_2 + 0xd;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(*(undefined1 *)(param_2 + 0xf)) {
    case 0:
      piVar9 = (int *)param_2[0xd];
      goto LAB_0119d7d8;
    case 1:
                    /* WARNING: Subroutine does not return */
      FUN_013079f0(&DAT_01c20c50);
    case 2:
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c20c50);
    case 3:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22328);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 4:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22318);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 5:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22338);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 6:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c222f8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 7:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22418);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 8:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22408);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 9:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223c8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 10:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223e8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0xb:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c222d8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0xc:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223f8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0xd:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223a8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0xe:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223d8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 0xc),
                   *(undefined4 *)(param_2[0x10] + 0x10));
      break;
    case 0xf:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c223b8);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0x10:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22398);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
      break;
    case 0x11:
      if ((*(byte *)(param_2 + 0x12) & 1) != 0) {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c22388);
      }
      *(undefined1 *)(param_2 + 0x12) = 1;
      FUN_006666fc(&local_54,*(undefined4 *)(param_2[0x10] + 4),*(undefined4 *)(param_2[0x10] + 8));
    }
    local_b8 = local_54;
    uStack_b4 = uStack_50;
    uStack_b0 = uStack_4c;
    uStack_ac = uStack_48;
    local_a8 = local_44;
    uStack_a4 = uStack_40;
    uStack_a0 = uStack_3c;
    uStack_9c = local_38;
    *(undefined1 *)(param_2 + 0xf) = 1;
    param_2[0x11] = local_54;
    param_2[0x12] = uStack_50;
    param_2[0x13] = uStack_4c;
    param_2[0x10] = 2;
    FUN_01bed864(puVar6,&local_b8,0xc);
    param_2[0x21] = *(undefined4 *)(param_2[2] + 0x10);
    param_2[0x1f] = puVar6;
    param_2[0x20] = param_2 + 3;
    *(undefined1 *)(param_2 + 0x22) = 0;
    break;
  case 4:
    if (*(char *)(param_2 + 0x22) != '\0') {
      if (*(char *)(param_2 + 0x22) == '\x01') {
                    /* WARNING: Subroutine does not return */
        FUN_013079f0(&DAT_01c21c0c);
      }
                    /* WARNING: Subroutine does not return */
      FUN_01307a10(&DAT_01c21c0c);
    }
    puVar6 = (undefined4 *)param_2[0x1f];
  }
  FUN_006666fc(&local_58,puVar6[1],puVar6[2]);
  puVar6 = (undefined4 *)((uint)&local_70 | 4);
  *puVar6 = local_58;
  puVar6[1] = local_54;
  puVar6[2] = uStack_50;
  puVar6[3] = uStack_4c;
  local_98 = local_44;
  uStack_94 = uStack_40;
  uStack_90 = uStack_3c;
  local_8c = local_38;
  local_88 = uStack_34;
  uStack_84 = uStack_30;
  uStack_80 = uStack_2c;
  *(undefined1 *)(param_2 + 0x22) = 1;
  FUN_019bb7e0(param_2[0xd],param_2[0xe]);
  uVar7 = 0x80000002;
LAB_0119dd70:
  *param_1 = 0;
  param_1[1] = local_70;
  param_1[2] = uStack_6c;
  param_1[3] = uStack_68;
  param_1[4] = uStack_64;
  param_1[5] = uStack_60;
  param_1[6] = uVar7;
  param_1[7] = local_98;
  param_1[8] = uStack_94;
  param_1[9] = uStack_90;
  param_1[10] = local_8c;
  param_1[0xb] = local_88;
  param_1[0xc] = uStack_84;
  param_1[0xd] = uStack_80;
  param_1[0xe] = uStack_7c;
  param_1[0xf] = uStack_78;
  *(undefined1 *)(param_2 + 0xc) = 1;
  return;
}


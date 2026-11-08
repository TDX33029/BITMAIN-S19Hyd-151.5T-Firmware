// FUN_0070f288 @ 0070f288 size=1304 calls_out=7 calls_in=1
// strings: 

void FUN_0070f288(undefined4 *param_1,int *param_2,int *param_3,uint param_4,uint param_5)

{
  byte bVar1;
  undefined *puVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  uint uVar12;
  int iStack_3c;
  undefined4 local_38;
  byte local_34;
  int local_30;
  uint local_2c;
  uint local_28;
  
  iVar11 = *param_2;
  if ((param_4 & 1) == 0) {
    param_5 = 0xffffffff;
  }
  if (iVar11 == -0x80000000) {
    uVar4 = param_2[3];
    iVar5 = param_3[1];
    uVar8 = param_3[2];
    if ((uVar4 <= param_5) && (uVar8 <= param_5 - uVar4)) {
      FUN_00724be8(param_2 + 1,iVar5,uVar8);
      iVar11 = *param_3;
      iVar5 = param_3[1];
      iVar6 = param_3[2];
      *param_1 = 0xf;
      param_1[1] = 0;
                    /* WARNING: Could not recover jumptable at 0x0070f300. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar11 + 0x10))(param_3 + 3,iVar5,iVar6);
      return;
    }
LAB_0070f3e8:
    iVar11 = *param_3;
    param_1[3] = uVar8 + uVar4;
    *param_1 = 7;
    param_1[1] = 0;
    param_1[4] = param_5;
    param_1[2] = 1;
                    /* WARNING: Could not recover jumptable at 0x0070f424. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(iVar11 + 0x10))(param_3 + 3,iVar5,uVar8);
    return;
  }
  bVar1 = *(byte *)(param_2 + 3);
  uVar4 = param_2[2];
  iVar5 = param_3[1];
  uVar8 = param_3[2];
  if ((bVar1 & 1) != 0) {
    uVar4 = uVar4 + *(byte *)((int)param_2 + 0x11);
  }
  if ((param_5 < uVar4) || (param_5 - uVar4 < uVar8)) goto LAB_0070f3e8;
  iVar6 = *param_3;
  iVar7 = param_3[1];
  uVar4 = param_3[2];
  iStack_3c = param_3[3];
  *(undefined1 *)(param_2 + 3) = 0;
  uVar8 = uVar4;
  iVar5 = iVar7;
  if ((bVar1 & 1) != 0) {
    uVar8 = 4;
    local_34 = *(byte *)((int)param_2 + 0x11);
    uVar9 = (uint)local_34;
    local_38 = *(undefined4 *)((int)param_2 + 0xd);
    if (4 < uVar9) {
      uVar4 = 4;
      puVar2 = &DAT_01d2fe70;
      goto LAB_0070f72c;
    }
    uVar8 = 4 - uVar9;
    if (uVar4 < 4 - uVar9) {
      uVar8 = uVar4;
    }
    FUN_01bed4e2((int)&local_38 + uVar9,iVar7,uVar8);
    uVar12 = uVar8 + uVar9;
    FUN_012fbd94(&local_30,&local_38,uVar12);
    if (local_30 == 1) {
      if (local_2c == 0) {
        if ((local_28 & 1) == 0) {
          iVar5 = 1;
          local_34 = (byte)uVar12;
          *(undefined1 *)(param_2 + 3) = 1;
          *(undefined4 *)((int)param_2 + 0xd) = local_38;
          *(byte *)((int)param_2 + 0x11) = local_34;
          uVar8 = 0;
          goto LAB_0070f4fc;
        }
        uVar12 = (local_28 & 0xffff) >> 8;
        if (uVar12 < uVar9) {
          puVar2 = &DAT_01d2fe80;
          goto LAB_0070f7a4;
        }
      }
      else {
        uVar12 = local_2c;
        if (local_2c < uVar9) {
          puVar2 = &DAT_01d2fe90;
LAB_0070f7a4:
                    /* WARNING: Subroutine does not return */
          FUN_012fb0cc(puVar2);
        }
      }
      uVar9 = uVar12 - uVar9;
      local_34 = (byte)uVar12;
      if (uVar4 < uVar9) {
        puVar2 = &DAT_01d2fe60;
        uVar8 = uVar4;
        goto LAB_0070f72c;
      }
      uVar12 = uVar12 & 0xff;
      local_34 = 0;
      if (4 < uVar12) goto LAB_0070f710;
      if (local_2c == 0) {
        uVar3 = 10;
        goto LAB_0070f658;
      }
    }
    else {
      uVar9 = uVar8;
      if (4 < (uVar12 & 0xff)) {
LAB_0070f710:
        uVar4 = uVar12;
        local_34 = 0;
        puVar2 = &DAT_01d2fe50;
        uVar9 = 0;
        uVar8 = 4;
        goto LAB_0070f72c;
      }
    }
    local_34 = 0;
    iVar5 = iVar7 + uVar9;
    uVar8 = uVar4 - uVar9;
    iVar10 = param_2[2];
    if ((uint)(iVar11 - iVar10) < uVar12) {
      FUN_0132b898(param_2,iVar10,uVar12,1,1);
      iVar10 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar10,&local_38,uVar12);
    param_2[2] = iVar10 + uVar12;
  }
LAB_0070f4fc:
  if (uVar8 != 0) {
    FUN_012fbd94(&local_30,iVar5,uVar8);
    if (local_30 == 1) {
      if (uVar8 < local_2c) {
        puVar2 = &DAT_01d2feb0;
LAB_0070f740:
                    /* WARNING: Subroutine does not return */
        FUN_012fb100(&DAT_0053349c,0x13,puVar2);
      }
      uVar8 = uVar8 - local_2c;
      if ((local_28 & 1) == 0) {
        uVar9 = 0;
        local_30 = 0;
        if (4 < uVar8) {
          puVar2 = &DAT_01d2fea0;
          uVar4 = uVar8;
          uVar8 = 4;
LAB_0070f72c:
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(uVar9,uVar4,uVar8,puVar2);
        }
        FUN_01bed4e2(&local_30,iVar5 + local_2c,uVar8);
        iVar11 = local_30;
        iVar10 = param_2[2];
        if ((uint)(*param_2 - iVar10) < local_2c) {
          FUN_0132b898(param_2,iVar10,local_2c,1,1);
          iVar10 = param_2[2];
        }
        FUN_01bed4e2(param_2[1] + iVar10,iVar5,local_2c);
        *(char *)((int)param_2 + 0x11) = (char)uVar8;
        *(undefined1 *)(param_2 + 3) = 1;
        param_2[2] = iVar10 + local_2c;
        *(int *)((int)param_2 + 0xd) = iVar11;
        uVar3 = 0xf;
      }
      else {
        if (uVar8 < (local_28 & 0xffff) >> 8) {
          puVar2 = &DAT_01d2fec0;
          goto LAB_0070f740;
        }
        iVar11 = param_2[2];
        if ((uint)(*param_2 - iVar11) < local_2c) {
          FUN_0132b898(param_2,iVar11,local_2c,1,1);
          iVar11 = param_2[2];
        }
        FUN_01bed4e2(param_2[1] + iVar11,iVar5,local_2c);
        param_2[2] = iVar11 + local_2c;
        uVar3 = 10;
      }
      goto LAB_0070f658;
    }
    iVar11 = param_2[2];
    if ((uint)(*param_2 - iVar11) < local_28) {
      FUN_0132b898(param_2,iVar11,local_28,1,1);
      iVar11 = param_2[2];
    }
    FUN_01bed4e2(param_2[1] + iVar11,local_2c,local_28);
    param_2[2] = iVar11 + local_28;
  }
  uVar3 = 0xf;
LAB_0070f658:
  *param_1 = uVar3;
  param_1[1] = 0;
  (**(code **)(iVar6 + 0x10))(&iStack_3c,iVar7,uVar4);
  return;
}


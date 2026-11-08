// FUN_010b037c @ 010b037c size=1108 calls_out=8 calls_in=1
// strings: 

void FUN_010b037c(int *param_1,int *param_2,int *param_3)

{
  byte bVar1;
  undefined3 uVar2;
  undefined1 uVar3;
  undefined4 *puVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  uint *puVar8;
  byte bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint extraout_r12;
  bool bVar15;
  undefined8 uVar16;
  int local_54;
  undefined1 uStack_50;
  uint local_44;
  uint local_40;
  undefined3 local_3c;
  undefined1 uStack_39;
  undefined3 uStack_38;
  int local_34;
  uint local_30;
  int iStack_2c;
  undefined4 uStack_28;
  
  uVar13 = param_1[4];
  iVar14 = param_1[10];
  puVar4 = (undefined4 *)*param_3;
  iVar11 = param_1[0xb];
  if (uVar13 == 3) {
LAB_010b0420:
    param_1[4] = 3;
    if (puVar4 == (undefined4 *)0x0) {
LAB_010b0480:
      uVar3 = (undefined1)param_3[1];
      iVar12 = 0;
    }
    else {
      (*(code *)*puVar4)(&local_34,param_3 + 3,param_3[1],param_3[2]);
      local_40 = CONCAT13((undefined1)iStack_2c,local_30._1_3_);
      local_3c = (undefined3)((uint)iStack_2c >> 8);
      uStack_39 = (undefined1)uStack_28;
      uStack_38 = (undefined3)((uint)uStack_28 >> 8);
      iVar12 = local_34;
      uVar3 = (undefined1)local_30;
    }
    iVar5 = CONCAT31(uStack_38,uStack_39);
    uVar2 = (undefined3)_local_3c;
    local_54 = CONCAT31((int3)local_40,uVar3);
    uStack_50 = (undefined1)(local_40 >> 0x18);
    FUN_010b2694(&local_34,iVar14,param_3);
    if (local_34 == 1) {
      if (*(uint *)(iStack_2c + 0x28) <= local_30) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(local_30,*(uint *)(iStack_2c + 0x28),&DAT_01884ca0);
      }
      uVar13 = 0;
      puVar8 = (uint *)(*(int *)(iStack_2c + 0x24) + local_30 * 0x30);
      bVar15 = (*puVar8 & 1) != 0;
      uVar7 = extraout_r12;
      if (bVar15) {
        uVar7 = puVar8[2];
      }
      puVar8 = &local_44;
      local_40 = (uint)bVar15;
    }
    else {
      puVar8 = &local_40;
      uVar13 = 2;
      local_30 = 0xffffffff;
      uVar7 = 2;
    }
    *puVar8 = uVar7;
    param_1[9] = local_30;
    param_1[6] = local_40;
    param_1[7] = local_44;
    param_1[8] = iStack_2c;
    *param_1 = iVar12;
    param_1[1] = local_54;
    param_1[2] = CONCAT31(uVar2,uStack_50);
    param_1[3] = iVar5;
    param_1[4] = uVar13;
  }
  else {
    iVar12 = *param_1;
    if ((iVar12 != 0) == (puVar4 == (undefined4 *)0x0)) {
      if (iVar12 != 0) {
LAB_010b0404:
        (**(code **)(iVar12 + 0x10))(param_1 + 3,param_1[1],param_1[2]);
        puVar4 = (undefined4 *)*param_3;
      }
      goto LAB_010b0420;
    }
    if (iVar12 == 0) {
      if ((char)param_1[1] == (char)param_3[1]) goto LAB_010b055c;
      param_1[4] = 3;
      goto LAB_010b0480;
    }
    if ((param_1[2] != param_3[2]) ||
       (iVar5 = thunk_FUN_016dd50a(param_1[1],param_3[1]), iVar5 != 0)) goto LAB_010b0404;
  }
LAB_010b055c:
  if (uVar13 == 2) {
    if ((char)iVar11 != '\0') {
      if (*param_3 == 0) {
        uVar16 = FUN_010a84b4((char)param_3[1]);
      }
      else {
        uVar16 = *(undefined8 *)(param_3 + 1);
      }
      uVar13 = (uint)((ulonglong)uVar16 >> 0x20);
      iVar11 = param_2[2];
      if ((uint)(*param_2 - iVar11) < uVar13) {
        FUN_010bf6b0(param_2,iVar11,uVar13,1,1);
        iVar11 = param_2[2];
      }
      else if (uVar13 == 0) {
        return;
      }
      bVar10 = 0x2d;
      do {
        bVar1 = *(byte *)uVar16;
        bVar9 = bVar1;
        if ((byte)(bVar1 + 0x9f) < 0x1a) {
          bVar9 = bVar1 ^ 0x20;
        }
        bVar15 = bVar10 != 0x2d;
        bVar10 = bVar9;
        if (bVar15) {
          bVar10 = bVar1;
        }
        if (iVar11 == *param_2) {
          FUN_006029c0(param_2);
        }
        iVar14 = (int)((ulonglong)uVar16 >> 0x20) + -1;
        uVar16 = CONCAT44(iVar14,(byte *)uVar16 + 1);
        *(byte *)(param_2[1] + iVar11) = bVar10;
        iVar11 = iVar11 + 1;
        param_2[2] = iVar11;
      } while (iVar14 != 0);
      return;
    }
    if (*param_3 == 0) {
      uVar16 = FUN_010a84b4((char)param_3[1]);
    }
    else {
      uVar16 = *(undefined8 *)(param_3 + 1);
    }
    iVar11 = param_2[2];
    uVar13 = *param_2 - iVar11;
    goto LAB_010b071c;
  }
  if ((uVar13 & 1) == 0) {
    uVar7 = param_1[9];
    uVar13 = *(uint *)(param_1[8] + 0x28);
    if (uVar13 <= uVar7) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar7,uVar13,&DAT_018847b8);
    }
    piVar6 = (int *)(*(int *)(param_1[8] + 0x24) + uVar7 * 0x30);
    if (param_1[6] == 0) {
      param_1[6] = 2;
      param_1[4] = 2;
    }
    else {
      if (*piVar6 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa464(&DAT_00419463,0x28,&DAT_018847c8);
      }
      iVar11 = piVar6[1];
      param_1[4] = 1;
      param_1[5] = iVar11;
    }
    piVar6 = piVar6 + 3;
  }
  else {
    uVar13 = param_1[5];
    uVar7 = *(uint *)(param_1[8] + 0x34);
    if (uVar7 <= uVar13) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar13,uVar7,&DAT_018847d8);
    }
    uVar7 = param_1[6];
    iVar11 = *(int *)(param_1[8] + 0x30) + uVar13 * 0x20;
    bVar15 = uVar7 == 1;
    if (bVar15) {
      uVar7 = param_1[7];
    }
    if (bVar15 && uVar13 == uVar7) {
      param_1[6] = 2;
    }
    else if (*(int *)(iVar11 + 8) != 0) {
      iVar14 = *(int *)(iVar11 + 0xc);
      param_1[4] = 1;
      piVar6 = (int *)(iVar11 + 0x10);
      param_1[5] = iVar14;
      goto LAB_010b070c;
    }
    param_1[4] = 2;
    piVar6 = (int *)(iVar11 + 0x10);
  }
LAB_010b070c:
  iVar11 = param_2[2];
  uVar16 = *(undefined8 *)(piVar6 + 1);
  uVar13 = *param_2 - iVar11;
LAB_010b071c:
  uVar7 = (uint)((ulonglong)uVar16 >> 0x20);
  if (uVar13 < uVar7) {
    FUN_010bf6b0(param_2,iVar11,uVar7,1,1);
    iVar11 = param_2[2];
  }
  FUN_016dd1aa(param_2[1] + iVar11,(int)uVar16,uVar7);
  param_2[2] = iVar11 + uVar7;
  return;
}


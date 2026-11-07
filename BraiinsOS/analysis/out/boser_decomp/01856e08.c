// FUN_01856e08 @ 01856e08 size=1524 calls_out=16 calls_in=2
// strings: cookie2

void FUN_01856e08(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  int local_e0;
  undefined4 local_dc;
  undefined4 local_d8;
  undefined4 local_d0;
  int *local_cc;
  uint local_c8;
  ushort local_c4;
  ushort local_c2;
  uint local_c0;
  undefined4 local_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  char local_88;
  undefined2 local_87;
  undefined1 local_85;
  int *local_80;
  undefined *local_7c;
  undefined4 local_78;
  undefined4 local_74;
  undefined4 local_70;
  undefined4 local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined1 local_3c;
  undefined4 local_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  char local_28;
  undefined2 local_27;
  undefined1 local_25;
  
  local_7c = &DAT_01d1f1c0;
  local_80 = &local_e0;
  local_d8 = 0;
  local_e0 = 0;
  local_74 = 0;
  local_dc = 1;
  local_78 = 0x60000020;
  iVar3 = FUN_01415570(param_2 + 0x40,&local_80);
  uVar2 = local_dc;
  iVar1 = local_e0;
  if (iVar3 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_013073dc(&DAT_00533383,0x37,&local_38,&DAT_01d1f208,&DAT_01d30334);
  }
  local_78 = 0;
  local_80 = (int *)0x0;
  local_70 = 0;
  FUN_01ac814c(&local_e0,&local_80,local_dc,local_d8);
  if (local_e0 == 2) goto LAB_018571c4;
  iVar10 = *(int *)(param_1 + 8);
  iVar11 = *(int *)(param_1 + 4) + iVar10 * 0x48;
  iVar3 = iVar11 + -0x48;
  if (iVar10 == 0 || iVar3 == 0) goto LAB_01857194;
  uVar12 = FUN_01ac9ac0(&local_e0);
  iVar7 = (int)((ulonglong)uVar12 >> 0x20);
  iVar5 = (int)uVar12;
  uVar12 = FUN_01ac9ac0(iVar3);
  iVar4 = (int)uVar12;
  if (iVar5 == 0 || iVar4 == 0) {
    if (iVar5 != 0 || iVar4 != 0) goto LAB_01857030;
LAB_01856f2c:
    if ((local_c4 & 1) != 0) {
      uVar12 = CONCAT44((uint)local_c2,1);
LAB_01856fac:
      if (*(short *)(iVar11 + -0x2c) == 1) {
        uVar13 = CONCAT44((uint)*(ushort *)(iVar11 + -0x2a),1);
      }
      else {
        uVar9 = *(uint *)(iVar11 + -0x28);
        piVar6 = *(int **)(iVar11 + -0x34);
        if (uVar9 != 0) {
          uVar8 = *(uint *)(iVar11 + -0x30);
          if (uVar9 < uVar8) {
            if (*(char *)((int)piVar6 + uVar9) < -0x40) goto LAB_0185720c;
          }
          else if (uVar9 != uVar8) goto LAB_0185720c;
        }
        uVar13 = FUN_01ac9f18(piVar6,uVar9);
      }
      if (((uint)uVar13 & (uint)uVar12 & 0xffff) == 0) {
        if ((((uint)uVar13 | (uint)uVar12) & 0xffff) != 0) goto LAB_01857030;
      }
      else if (((uint)((ulonglong)uVar12 >> 0x20) & 0xffff) !=
               ((uint)((ulonglong)uVar13 >> 0x20) & 0xffff)) goto LAB_01857030;
      goto LAB_01857194;
    }
    if (local_c0 == 0) {
LAB_01856f98:
      uVar12 = FUN_01ac9f18(local_cc,local_c0);
      goto LAB_01856fac;
    }
    if (local_c0 < local_c8) {
      if (-0x41 < *(char *)((int)local_cc + local_c0)) goto LAB_01856f98;
    }
    else if (local_c0 == local_c8) goto LAB_01856f98;
    goto LAB_01857200;
  }
  if ((iVar7 == (int)((ulonglong)uVar12 >> 0x20)) &&
     (iVar5 = thunk_FUN_01bed842(iVar5,iVar4,iVar7), iVar5 == 0)) goto LAB_01856f2c;
LAB_01857030:
  local_38 = 0;
  uStack_34 = 0x10;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0141dc00(&local_80,param_2,&local_38);
  if ((char)local_70 != '\x02') {
    (*(code *)local_80[4])(&local_74,local_7c,local_78);
  }
  local_38 = 0;
  uStack_34 = 0x1e;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0141dc00(&local_80,param_2,&local_38);
  if ((char)local_70 != '\x02') {
    (*(code *)local_80[4])(&local_74,local_7c,local_78);
  }
  FUN_0141de40(&local_80,param_2,"cookie2",7);
  if ((char)local_70 != '\x02') {
    (*(code *)local_80[4])(&local_74,local_7c,local_78);
  }
  local_38 = 0;
  uStack_34 = 0x33;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0141dc00(&local_80,param_2,&local_38);
  if ((char)local_70 != '\x02') {
    (*(code *)local_80[4])(&local_74,local_7c,local_78);
  }
  local_38 = 0;
  uStack_34 = 0x4c;
  uStack_30 = 0;
  uStack_2c = 0;
  FUN_0141dc00(&local_80,param_2,&local_38);
  if ((char)local_70 != '\x02') {
    (*(code *)local_80[4])(&local_74,local_7c,local_78);
  }
LAB_01857194:
  if ((iVar3 != 0) && ((*(byte *)(param_1 + 0x10) & 1) != 0 && iVar10 != 0)) {
    if (local_c0 != 0) {
      if (local_c0 < local_c8) {
        if (-0x41 < *(char *)((int)local_cc + local_c0)) {
LAB_01857228:
          if (((local_c0 == 4) && (*local_cc == 0x70747468)) &&
             (uVar9 = *(uint *)(iVar11 + -0x28), uVar9 != 0)) {
            piVar6 = *(int **)(iVar11 + -0x34);
            uVar8 = *(uint *)(iVar11 + -0x30);
            if (uVar9 < uVar8) {
              if (*(char *)((int)piVar6 + uVar9) < -0x40) goto LAB_0185720c;
            }
            else if (uVar9 != uVar8) goto LAB_0185720c;
            if ((uVar9 == 5) && (iVar3 = thunk_FUN_01bed842(piVar6,&DAT_0053278b,5), iVar3 == 0))
            goto LAB_018571b0;
          }
          goto LAB_01857248;
        }
      }
      else if (local_c0 == local_c8) goto LAB_01857228;
LAB_01857200:
      piVar6 = local_cc;
      uVar8 = local_c8;
      uVar9 = local_c0;
LAB_0185720c:
                    /* WARNING: Subroutine does not return */
      FUN_012fb514(piVar6,uVar8,0,uVar9,&DAT_01d2fde8);
    }
LAB_01857248:
    FUN_006666fc(&local_70,*(undefined4 *)(iVar11 + -0x34),*(undefined4 *)(iVar11 + -0x30));
    local_60 = *(undefined4 *)(iVar11 + -0x28);
    local_5c = *(undefined4 *)(iVar11 + -0x24);
    local_58 = *(undefined4 *)(iVar11 + -0x20);
    local_54 = *(undefined4 *)(iVar11 + -0x1c);
    local_4c = *(undefined4 *)(iVar11 + -0x14);
    uStack_48 = *(undefined4 *)(iVar11 + -0x10);
    uStack_44 = *(undefined4 *)(iVar11 + -0xc);
    uStack_40 = *(undefined4 *)(iVar11 + -8);
    local_3c = *(undefined1 *)(iVar11 + -4);
    local_64 = *(undefined4 *)(iVar11 + -0x2c);
    local_80 = *(int **)(iVar11 + -0x48);
    local_7c = *(undefined **)(iVar11 + -0x44);
    local_78 = *(undefined4 *)(iVar11 + -0x40);
    local_74 = *(undefined4 *)(iVar11 + -0x3c);
    local_50 = *(undefined4 *)(iVar11 + -0x18);
    FUN_01ac91f4();
    FUN_01ac9018(&local_80);
    FUN_01ac8e24(&local_80);
    FUN_01ac61a4(&local_38,local_6c,local_68);
    if (local_28 == '\x02') {
      FUN_019bb7e0(local_70,local_6c);
    }
    else {
      local_98 = local_38;
      uStack_94 = uStack_34;
      uStack_90 = uStack_30;
      uStack_8c = uStack_2c;
      local_85 = local_25;
      local_87 = local_27;
      FUN_019bb7e0(local_70,local_6c);
      local_88 = local_28;
      local_38 = 0;
      uStack_34 = 0x37;
      uStack_30 = 0;
      uStack_2c = 0;
      FUN_0141d310(&local_80,param_2,&local_38,&local_98);
      if ((char)local_70 != '\x02') {
        (*(code *)local_80[4])(&local_74,local_7c,local_78);
      }
    }
  }
LAB_018571b0:
  FUN_019bb7e0(local_d0,local_cc);
LAB_018571c4:
  FUN_019bb7e0(iVar1,uVar2);
  return;
}


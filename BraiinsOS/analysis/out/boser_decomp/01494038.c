// FUN_01494038 @ 01494038 size=1356 calls_out=11 calls_in=4
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01494038(ulonglong *param_1,undefined4 *param_2)

{
  ulonglong uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int *extraout_r1;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int *piVar15;
  int *piVar16;
  ulonglong uVar17;
  ulonglong uVar18;
  int local_100;
  int *local_fc;
  undefined4 local_f4;
  int local_d8;
  int local_d4;
  int local_d0;
  int local_c8;
  int iStack_c4;
  int iStack_c0;
  int iStack_bc;
  int iStack_b8;
  int iStack_b4;
  int *local_b0;
  int *local_ac;
  undefined4 local_a8;
  int *local_a4;
  int local_a0;
  int iStack_9c;
  int local_98;
  int iStack_94;
  int local_90;
  int iStack_8c;
  int iStack_88;
  int iStack_84;
  int local_80;
  int iStack_7c;
  int iStack_78;
  int iStack_74;
  int iStack_70;
  int iStack_6c;
  int local_68;
  int local_64;
  int local_60;
  undefined1 auStack_5c [12];
  int local_50;
  int local_4c;
  int local_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int local_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  
  uVar2 = FUN_01a429a4();
  iVar6 = param_2[2];
  local_a8 = *param_2;
  local_b0 = (int *)param_2[1];
  *(undefined2 *)(uVar2 + 0x192) = 0;
  local_a4 = local_b0 + iVar6 * 10;
  local_100 = 0;
  *(undefined4 *)(uVar2 + 0x108) = 0;
  local_fc = (int *)0x0;
  uVar1 = (ulonglong)uVar2;
  local_d8 = -0x7fffffff;
  iVar6 = local_d8;
  piVar15 = local_b0;
  local_ac = local_b0;
  piVar16 = local_a4;
  do {
    iVar13 = (int)(uVar1 >> 0x20);
    local_f4 = (undefined4)uVar1;
    if (iVar6 == -0x7fffffff) {
      if (piVar15 == piVar16) {
LAB_014942d8:
        local_d8 = -0x7fffffff;
        FUN_014897cc(&local_d8,local_fc);
        uVar17 = uVar1;
        while( true ) {
          do {
            if (iVar13 == 0) {
              *param_1 = uVar1;
              *(int *)(param_1 + 1) = local_100;
              return;
            }
            iVar6 = (int)uVar17;
            if (*(ushort *)(iVar6 + 0x192) == 0) {
                    /* WARNING: Subroutine does not return */
              FUN_012fb0ec(&DAT_00533a28,0x19,&DAT_01d305a8);
            }
            iVar3 = *(ushort *)(iVar6 + 0x192) - 1;
            iVar13 = (int)(uVar17 >> 0x20) + -1;
            iVar8 = iVar6 + iVar3 * 4;
            iVar10 = *(int *)(iVar8 + 0x19c);
            uVar17 = CONCAT44(iVar13,iVar10);
            uVar2 = (uint)*(ushort *)(iVar10 + 0x192);
          } while (4 < uVar2);
          iVar8 = *(int *)(iVar8 + 0x198);
          uVar11 = (uint)*(ushort *)(iVar8 + 0x192);
          uVar12 = -uVar2 + 5;
          if (uVar11 < uVar12) {
                    /* WARNING: Subroutine does not return */
            FUN_012fb0ec(&DAT_00533acc,0x27,&DAT_01d30618);
          }
          iVar14 = uVar11 - uVar12;
          *(ushort *)(iVar8 + 0x192) = (ushort)iVar14;
          iVar7 = iVar10 + 0x10c;
          *(ushort *)(iVar10 + 0x192) = 5;
          FUN_01bed864(iVar7 + uVar12 * 0xc,iVar7,uVar2 * 0xc);
          FUN_01bed864(iVar10 + uVar12 * 0x18,iVar10,uVar2 * 0x18);
          iVar9 = iVar14 + 1;
          iVar4 = uVar11 - iVar9;
          if (iVar4 != -uVar2 + 4) break;
          FUN_01bed4e2(iVar7,iVar8 + 0x10c + iVar9 * 0xc,iVar4 * 0xc);
          FUN_01bed4e2(iVar10,iVar8 + iVar9 * 0x18,iVar4 * 0x18);
          piVar16 = (int *)(iVar8 + iVar14 * 0x18);
          local_a0 = *piVar16;
          iStack_9c = piVar16[1];
          local_98 = piVar16[2];
          iStack_94 = piVar16[3];
          local_90 = piVar16[4];
          iStack_8c = piVar16[5];
          iVar5 = iVar6 + iVar3 * 0xc;
          local_d8 = *(int *)(iVar5 + 0x10c);
          local_d4 = *(int *)(iVar5 + 0x110);
          local_d0 = *(int *)(iVar5 + 0x114);
          FUN_01bed864((int *)(iVar5 + 0x10c),iVar8 + 0x10c + iVar14 * 0xc,0xc);
          piVar16 = (int *)(iVar6 + iVar3 * 0x18);
          local_50 = *piVar16;
          local_4c = piVar16[1];
          local_48 = piVar16[2];
          iStack_44 = piVar16[3];
          iStack_40 = piVar16[4];
          iStack_3c = piVar16[5];
          *piVar16 = local_a0;
          piVar16[1] = iStack_9c;
          piVar16[2] = local_98;
          piVar16[3] = iStack_94;
          piVar16[4] = local_90;
          piVar16[5] = iStack_8c;
          local_80 = local_d8;
          iStack_7c = local_d4;
          iStack_78 = local_d0;
          piVar16 = (int *)(iVar7 + iVar4 * 0xc);
          piVar15 = (int *)(iVar10 + iVar4 * 0x18);
          *piVar16 = local_d8;
          piVar16[1] = local_d4;
          piVar16[2] = local_d0;
          *piVar15 = local_50;
          piVar15[1] = local_4c;
          piVar15[2] = local_48;
          piVar15[3] = iStack_44;
          piVar15[4] = iStack_40;
          piVar15[5] = iStack_3c;
          local_c8 = local_50;
          iStack_c4 = local_4c;
          iStack_c0 = local_48;
          iStack_bc = iStack_44;
          iStack_b8 = iStack_40;
          iStack_b4 = iStack_3c;
          if (iVar13 != 0) {
            iVar6 = iVar10 + 0x198;
            FUN_01bed864(iVar6 + uVar12 * 4,iVar6,uVar12 * -4 + 0x18);
            FUN_01bed4e2(iVar6,iVar8 + iVar9 * 4 + 0x198,uVar12 * 4);
            iVar6 = 0;
            do {
              iVar8 = *(int *)(iVar10 + iVar6 * 4 + 0x198);
              *(short *)(iVar8 + 400) = (short)iVar6;
              iVar6 = iVar6 + 1;
              *(int *)(iVar8 + 0x108) = iVar10;
            } while (iVar6 != 6);
          }
        }
                    /* WARNING: Subroutine does not return */
        FUN_012fb0ec(&DAT_00533a71,0x28,&DAT_01d305f8);
      }
      local_ac = piVar15 + 10;
      iVar6 = *piVar15;
      local_fc = piVar15 + 1;
      piVar15 = local_ac;
    }
    else {
      local_fc = (int *)((uint)&local_d8 | 4);
    }
    if (iVar6 == -0x80000000) goto LAB_014942d8;
    FUN_01bed864((uint)&local_50 | 4,local_fc,0x24);
    local_50 = iVar6;
    if (piVar15 == piVar16) {
LAB_01494184:
      local_d8 = -0x80000000;
      iVar8 = local_4c;
LAB_01494198:
      local_a0 = local_48;
      iStack_9c = iStack_44;
      local_98 = iStack_40;
      iStack_94 = iStack_3c;
      local_90 = local_38;
      iStack_8c = iStack_34;
      iStack_88 = iStack_30;
      iStack_84 = iStack_2c;
      local_80 = iStack_40;
      iStack_7c = iStack_3c;
      iStack_78 = local_38;
      iStack_74 = iStack_34;
      iStack_70 = iStack_30;
      iStack_6c = iStack_2c;
      if (*(ushort *)(uVar2 + 0x192) < 0xb) {
        local_64 = iVar8;
        local_68 = iVar6;
        local_60 = local_48;
        local_50 = iStack_40;
        local_4c = iStack_3c;
        local_48 = local_38;
        iStack_44 = iStack_34;
        iStack_40 = iStack_30;
        iStack_3c = iStack_2c;
        FUN_01964254(auStack_5c,uVar2,&local_68);
      }
      else {
        iVar10 = 0;
        do {
          uVar2 = *(uint *)(uVar2 + 0x108);
          if (uVar2 == 0) {
            uVar17 = FUN_01964440(local_f4,iVar13);
            uVar1 = uVar17;
            break;
          }
          iVar10 = iVar10 + 1;
          uVar17 = CONCAT44(iVar10,uVar2);
        } while (10 < *(ushort *)(uVar2 + 0x192));
        iVar10 = (int)(uVar17 >> 0x20);
        uVar2 = FUN_01a429a4();
        uVar18 = (ulonglong)uVar2;
        *(undefined2 *)(uVar2 + 0x192) = 0;
        *(undefined4 *)(uVar2 + 0x108) = 0;
        iVar13 = iVar10;
        while (iVar13 = iVar13 + -1, iVar13 != 0) {
          uVar18 = FUN_01964440();
        }
        local_50 = iVar6;
        local_4c = iVar8;
        local_48 = local_a0;
        FUN_0196436c((int)uVar17,iVar10,&local_50,&local_98,uVar18);
        while( true ) {
          iVar6 = (int)(uVar17 >> 0x20);
          uVar2 = (uint)uVar17;
          if (iVar6 == 0) break;
          uVar17 = CONCAT44(iVar6 + -1,
                            *(undefined4 *)(uVar2 + (uint)*(ushort *)(uVar2 + 0x192) * 4 + 0x198));
        }
      }
      local_fc = (int *)(uVar1 >> 0x20);
      local_100 = local_100 + 1;
      iVar6 = local_d8;
      piVar15 = local_ac;
      piVar16 = local_a4;
    }
    else {
      iVar10 = *piVar15;
      local_ac = piVar15 + 10;
      FUN_01bed864((int *)((uint)&local_d8 | 4),piVar15 + 1,0x24);
      iVar8 = local_4c;
      if (iVar10 == -0x80000000) goto LAB_01494184;
      if ((local_48 != local_d0) || (iVar3 = thunk_FUN_01bed842(local_4c,local_d4), iVar3 != 0)) {
        local_d8 = iVar10;
        goto LAB_01494198;
      }
      FUN_019bb7e0(iVar6,iVar8);
      FUN_00db4764(&iStack_40);
      local_fc = extraout_r1;
      iVar6 = iVar10;
      piVar15 = piVar15 + 10;
    }
  } while( true );
}


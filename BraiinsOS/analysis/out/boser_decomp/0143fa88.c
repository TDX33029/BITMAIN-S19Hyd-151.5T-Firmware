// FUN_0143fa88 @ 0143fa88 size=1048 calls_out=13 calls_in=3
// strings: 

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_0143fa88(int *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  undefined1 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  undefined4 uVar13;
  int iVar14;
  ulonglong uVar15;
  longlong lVar16;
  int local_1c0;
  int local_1b8;
  int local_1b4;
  uint local_1ac;
  undefined1 auStack_1a8 [72];
  undefined1 auStack_160 [72];
  undefined1 auStack_118 [72];
  int local_d0 [18];
  int local_88;
  int iStack_84;
  int iStack_80;
  int local_7c;
  int iStack_78;
  int iStack_74;
  int local_40;
  int local_3c;
  int local_38;
  int local_30;
  int local_2c;
  int local_28;
  
  if (*(char *)(param_2 + 0x30) != '\0') {
    param_1[0x17] = -0x7ffffffe;
    param_1[6] = -0x7ffffffe;
    *param_1 = 0;
    param_1[1] = 1;
    param_1[2] = 0;
    param_1[3] = 0;
    param_1[4] = 4;
    param_1[5] = 0;
    FUN_0143ff54(param_2);
    return;
  }
  FUN_0143ff80(auStack_1a8,*(undefined4 *)(param_2 + 4),*(undefined4 *)(param_2 + 8));
  FUN_0143ff80(&local_88,*(undefined4 *)(param_2 + 0x10),*(undefined4 *)(param_2 + 0x14));
  if (local_88 == -0x7ffffffe) {
    FUN_01440ae4(auStack_160,auStack_1a8);
  }
  else {
    FUN_01bed4e2(auStack_160,&local_88,0x44);
  }
  FUN_0143ff80(local_d0,*(undefined4 *)(param_2 + 0x1c),*(undefined4 *)(param_2 + 0x20));
  FUN_01bed4e2(&local_88,auStack_1a8,0x44);
  if (local_d0[0] == -0x7ffffffe) {
    FUN_01bed4e2(auStack_118,auStack_1a8,0x44);
  }
  else {
    FUN_01bed4e2(auStack_118,local_d0,0x44);
    if (local_88 != -0x7ffffffe) {
      FUN_01440d14(&local_88);
    }
  }
  uVar10 = *(uint *)(param_2 + 0x2c);
  iVar11 = *(int *)(param_2 + 0x28);
  local_1b4 = 1;
  iVar14 = 0;
  local_2c = 4;
  uVar12 = 0;
  local_38 = 0;
  local_3c = 1;
  local_40 = 0;
  local_28 = 0;
  local_30 = 0;
  uVar9 = 0;
LAB_0143fbf8:
  do {
    if (uVar10 < uVar12) {
LAB_0143fcb0:
      bVar1 = true;
      uVar7 = uVar10;
      local_1ac = uVar9;
    }
    else {
      uVar7 = uVar10 - uVar12;
      if (uVar7 < 8) {
        uVar4 = 0;
        if (uVar7 == 0) {
          uVar15 = 0;
        }
        else {
          do {
            if (*(char *)(iVar11 + uVar12 + uVar4) == ',') {
              uVar15 = CONCAT44(uVar4,1);
              goto LAB_0143fc5c;
            }
            uVar4 = uVar4 + 1;
          } while (uVar7 != uVar4);
          uVar15 = (ulonglong)uVar7 << 0x20;
        }
      }
      else {
        uVar15 = FUN_01307168(0x2c,iVar11 + uVar12);
      }
LAB_0143fc5c:
      if ((uVar15 & 1) == 0) {
        uVar12 = uVar10;
        goto LAB_0143fcb0;
      }
      uVar7 = (int)(uVar15 >> 0x20) + uVar12;
      uVar12 = uVar7 + 1;
      if ((uVar10 <= uVar7) || (*(char *)(iVar11 + uVar7) != ',')) goto LAB_0143fbf8;
      bVar1 = false;
      local_1ac = uVar12;
    }
    lVar16 = FUN_013245a0(iVar11 + uVar9,uVar7 - uVar9);
    iVar5 = (int)((ulonglong)lVar16 >> 0x20);
    uVar8 = (undefined4)lVar16;
    FUN_014f9194(local_d0,uVar8,iVar5);
    if ((char)local_d0[0] == '\x02') {
      FUN_01304dac(&local_88,uVar8,iVar5);
      if ((char)local_88 != '\x02') {
        if (iVar14 == local_40) {
          FUN_014438ac(&local_40);
          local_1b4 = local_3c;
        }
        puVar6 = (undefined1 *)(local_1b4 + iVar14 * 0x12);
        *puVar6 = 2;
        uVar8 = 0x11;
        puVar6 = puVar6 + 1;
        piVar3 = &local_88;
        goto LAB_0143fdb4;
      }
      FUN_013245a0(uVar8,iVar5);
      if (extraout_r1 != 0) {
        uVar13 = 0;
        if (lVar16 < 0) {
LAB_0143fe94:
                    /* WARNING: Subroutine does not return */
          FUN_00664620(uVar13,local_1b8);
        }
        if (iVar5 == 0) {
          local_1b8 = 1;
          local_1c0 = 0;
        }
        else {
          uVar13 = 1;
          local_1b8 = FUN_01298504(iVar5,1);
          if (local_1b8 == 0) {
            local_1b8 = iVar5;
            goto LAB_0143fe94;
          }
          local_1c0 = iVar5;
        }
        FUN_01bed4e2(local_1b8,uVar8,iVar5);
        iVar2 = local_28;
        if (local_28 == local_30) {
          FUN_019abd3c(&local_30);
        }
        piVar3 = (int *)(local_2c + iVar2 * 0xc);
        *piVar3 = local_1c0;
        piVar3[1] = local_1b8;
        piVar3[2] = iVar5;
        local_28 = iVar2 + 1;
      }
    }
    else {
      if (iVar14 == local_40) {
        FUN_014438ac(&local_40);
        local_1b4 = local_3c;
      }
      uVar8 = 0x12;
      puVar6 = (undefined1 *)(local_1b4 + iVar14 * 0x12);
      piVar3 = local_d0;
LAB_0143fdb4:
      FUN_01bed4e2(puVar6,piVar3,uVar8);
      iVar14 = iVar14 + 1;
      local_38 = iVar14;
    }
    uVar9 = local_1ac;
    if (bVar1) {
      local_88 = local_40;
      iStack_84 = local_3c;
      iStack_80 = local_38;
      local_7c = local_30;
      iStack_78 = local_2c;
      iStack_74 = local_28;
      FUN_01bed4e2(param_1 + 6,auStack_160,0x44);
      FUN_01bed4e2(param_1 + 0x17,auStack_118,0x44);
      *param_1 = local_88;
      param_1[1] = iStack_84;
      param_1[2] = iStack_80;
      param_1[3] = local_7c;
      param_1[4] = iStack_78;
      param_1[5] = iStack_74;
      FUN_0143ff54(param_2);
      return;
    }
  } while( true );
}


// FUN_0111f590 @ 0111f590 size=2180 calls_out=7 calls_in=2
// strings: 

/* WARNING: Removing unreachable block (ram,0x0111f8ec) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

int FUN_0111f590(undefined1 *param_1,int *param_2)

{
  bool bVar1;
  ulonglong uVar2;
  int iVar3;
  ulonglong *puVar4;
  uint uVar5;
  int iVar6;
  undefined1 *puVar7;
  uint *puVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  code *pcVar15;
  int iVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  ulonglong uVar19;
  undefined8 uVar20;
  undefined4 local_5c;
  uint local_58 [4];
  undefined4 local_48;
  undefined4 local_44;
  int local_40;
  undefined4 local_3c;
  int local_38;
  uint local_30;
  undefined4 local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_1) {
  case 0:
    iVar12 = *param_2;
    pcVar15 = *(code **)(param_2[1] + 0x1c);
    puVar7 = &DAT_00567318;
LAB_0111f648:
    uVar17 = 4;
    goto LAB_0111f7c8;
  case 1:
    iVar12 = *param_2;
    pcVar15 = *(code **)(param_2[1] + 0x1c);
    if (param_1[1] != '\0') {
      puVar7 = &DAT_00568b2c;
      goto LAB_0111f648;
    }
    uVar17 = 5;
    puVar7 = &DAT_00414fdc;
LAB_0111f7c8:
    (*pcVar15)(local_58,iVar12,puVar7,uVar17);
    break;
  case 2:
    iVar12 = *param_2;
    iVar14 = param_2[1];
    puVar4 = (ulonglong *)(param_1 + 0x10);
    if (*(int *)(param_1 + 8) == 0) {
      uVar13 = (uint)*puVar4;
      uVar5 = *(uint *)(param_1 + 0x14);
      uVar2 = *puVar4;
      uVar19 = *puVar4;
      iVar16 = 0x14;
      if (uVar5 == 0 && (9999 < uVar13) <= uVar5) {
        if ((uint)(uVar13 < 100) <= -uVar5) goto LAB_01124c50;
LAB_01124b2c:
        uVar13 = (uint)(uVar2 >> 0x20);
        uVar5 = (uint)uVar2;
        iVar3 = iVar16;
        if (uVar13 == 0 && (9 < uVar5) <= uVar13) {
LAB_01124ca0:
          iVar16 = iVar3 + -1;
          *(byte *)((int)local_58 + iVar3 + -1) = (byte)uVar5 | 0x30;
          goto LAB_01124cb0;
        }
      }
      else {
        iVar3 = 0;
        local_5c = iVar12;
        do {
          iVar16 = iVar3;
          iVar12 = (int)(uVar19 >> 0x20);
          uVar9 = (uint)uVar19;
          uVar19 = FUN_01846088(uVar9,iVar12,10000,0);
          uVar13 = (uint)uVar19;
          uVar10 = uVar9 + uVar13 * -10000;
          uVar5 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_58 + iVar16 + 0x10) =
               *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
          *(undefined2 *)((int)local_58 + iVar16 + 0x12) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar5 * -100 & 0xffff) * 2);
          iVar3 = iVar16 + -4;
        } while ((uint)(uVar9 < 100000000) <= (uint)-iVar12);
        iVar16 = iVar16 + 0x10;
        iVar12 = local_5c;
        uVar2 = uVar19;
        if ((uint)-(int)(uVar19 >> 0x20) < (uint)(uVar13 < 100)) goto LAB_01124b2c;
LAB_01124c50:
        iVar3 = iVar16 + -2;
        uVar5 = (uint)((short)((uVar13 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_58 + iVar16 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar13 + uVar5 * -100 & 0xffff) * 2);
        if (uVar5 < 10) goto LAB_01124ca0;
      }
      iVar16 = iVar3 + -2;
      *(undefined2 *)((int)local_58 + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
    }
    else {
      if (*(int *)(param_1 + 8) != 1) {
        uVar19 = *puVar4;
        uVar13 = (uint)(uVar19 >> 0x20);
        if ((int)uVar19 == 0 && (uVar19 & 0xfffff00000000) == 0) {
          if ((int)uVar19 == 0 && (uVar13 & 0x7fffffff) == 0x7ff00000) goto LAB_01124b8c;
        }
        else if ((~uVar13 & 0x7ff00000) == 0) {
LAB_01124b8c:
          (**(code **)(iVar14 + 0x1c))(local_58,iVar12,&DAT_00567318,4);
          if ((char)local_58[0] == '\x04') {
            return 0;
          }
          iVar12 = FUN_0157c4a0(local_58[0],local_58[1]);
          return iVar12;
        }
        puVar8 = local_58;
        iVar16 = FUN_016d1b20(puVar8);
        iVar16 = iVar16 - (int)puVar8;
        pcVar15 = *(code **)(iVar14 + 0x1c);
        goto LAB_01124cc4;
      }
      uVar9 = *(uint *)(param_1 + 0x14);
      uVar13 = (int)uVar9 >> 0x1f;
      uVar5 = (uint)*puVar4 ^ uVar13;
      uVar10 = uVar5 - uVar13;
      uVar13 = (uVar9 ^ uVar13) - (uVar13 + (uVar5 < uVar13));
      uVar20 = CONCAT44(uVar13,uVar10);
      iVar16 = 0x14;
      if (uVar13 == 0 && (9999 < uVar10) <= uVar13) {
        if ((uint)(uVar10 < 100) <= -uVar13) goto LAB_01124bcc;
LAB_01124a34:
        uVar5 = (uint)((ulonglong)uVar20 >> 0x20);
        uVar13 = (uint)uVar20;
        iVar3 = iVar16;
        if (uVar5 != 0 || uVar5 < (9 < uVar13)) goto LAB_01124a44;
LAB_01124c14:
        iVar6 = iVar3 + -1;
        *(byte *)((int)local_58 + iVar3 + -1) = (byte)uVar13 | 0x30;
      }
      else {
        iVar3 = 0;
        local_5c = iVar12;
        do {
          iVar16 = iVar3;
          iVar12 = (int)((ulonglong)uVar20 >> 0x20);
          uVar11 = (uint)uVar20;
          uVar20 = FUN_01846088(uVar11,iVar12,10000,0);
          uVar10 = (uint)uVar20;
          uVar5 = uVar11 + uVar10 * -10000;
          uVar13 = (uint)((short)((uVar5 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)local_58 + iVar16 + 0x10) =
               *(undefined2 *)(&DAT_0040f4ca + uVar13 * 2);
          *(undefined2 *)((int)local_58 + iVar16 + 0x12) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar5 + uVar13 * -100 & 0xffff) * 2);
          iVar3 = iVar16 + -4;
        } while ((uint)(uVar11 < 100000000) <= (uint)-iVar12);
        iVar16 = iVar16 + 0x10;
        iVar12 = local_5c;
        if ((uint)-(int)((ulonglong)uVar20 >> 0x20) < (uint)(uVar10 < 100)) goto LAB_01124a34;
LAB_01124bcc:
        iVar3 = iVar16 + -2;
        uVar13 = (uint)((short)((uVar10 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)local_58 + iVar16 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar10 + uVar13 * -100 & 0xffff) * 2);
        if (uVar13 < 10) goto LAB_01124c14;
LAB_01124a44:
        iVar6 = iVar3 + -2;
        *(undefined2 *)((int)local_58 + iVar3 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar13 * 2);
      }
      iVar16 = iVar6;
      if (0x7fffffff < uVar9) {
        iVar16 = iVar6 + -1;
        *(undefined1 *)((int)local_58 + iVar6 + -1) = 0x2d;
      }
    }
LAB_01124cb0:
    pcVar15 = *(code **)(iVar14 + 0x1c);
    puVar8 = (uint *)((int)local_58 + iVar16);
    iVar16 = 0x14 - iVar16;
LAB_01124cc4:
    (*pcVar15)(&local_30,iVar12,puVar8,iVar16);
    if ((char)local_30 == '\x04') {
      return 0;
    }
    iVar12 = FUN_0157c4a0(local_30,local_2c);
    return iVar12;
  case 3:
    FUN_0111f934(local_58,*param_2,*(undefined4 *)(param_2[1] + 0x1c),*(undefined4 *)(param_1 + 8),
                 *(undefined4 *)(param_1 + 0xc));
    break;
  case 4:
    iVar16 = *param_2;
    iVar12 = *(int *)(param_1 + 8);
    iVar14 = *(int *)(param_1 + 0xc);
    pcVar15 = *(code **)(param_2[1] + 0x1c);
    (*pcVar15)(&local_30,iVar16,&DAT_00418df9,1);
    if ((char)local_30 == '\x04') {
      if (iVar14 != 0) {
        iVar3 = FUN_0111f590(iVar12,param_2);
        if (iVar3 == 0) {
          if (iVar14 != 1) {
            iVar14 = iVar14 * 0x18 + -0x18;
            do {
              iVar12 = iVar12 + 0x18;
              (*pcVar15)(&local_30,iVar16,&DAT_004144ea,1);
              if ((char)local_30 != '\x04') goto LAB_0111f570;
              iVar3 = FUN_0111f590(iVar12,param_2);
              if (iVar3 != 0) {
                return iVar3;
              }
              iVar14 = iVar14 + -0x18;
            } while (iVar14 != 0);
          }
          (*pcVar15)(&local_30,iVar16,&DAT_00418ec5,1);
          iVar3 = 0;
          if ((char)local_30 != '\x04') goto LAB_0111f570;
        }
        return iVar3;
      }
      (*pcVar15)(&local_30,iVar16,&DAT_00418ec5,1);
      if ((local_30 & 0xff) == 4) {
        return 0;
      }
    }
LAB_0111f570:
    iVar12 = FUN_0157c4a0(local_30,local_2c);
    return iVar12;
  case 5:
    iVar12 = *(int *)(param_1 + 0xc);
    local_5c = param_2[1];
    iVar14 = *param_2;
    pcVar15 = *(code **)(local_5c + 0x1c);
    (*pcVar15)(local_58,iVar14,&DAT_004144eb,1);
    if ((char)local_58[0] != '\x04') goto LAB_0111f7dc;
    bVar1 = true;
    if (iVar12 == 0) {
      (*pcVar15)(local_58,iVar14,"}",1);
      if ((char)local_58[0] != '\x04') goto LAB_0111f7dc;
      bVar1 = false;
    }
    local_58[2] = *(uint *)(param_1 + 4);
    local_58[3] = *(uint *)(param_1 + 8);
    local_58[0] = (uint)(local_58[2] != 0);
    local_38 = 0;
    if (local_58[2] != 0) {
      local_38 = iVar12;
    }
    local_44 = 0;
    local_58[1] = 0;
    local_48 = local_58[0];
    local_40 = local_58[2];
    local_3c = local_58[3];
    uVar20 = FUN_00f45584(local_58);
    iVar16 = (int)uVar20;
    if (iVar16 == 0) {
      if (!bVar1) {
        return 0;
      }
    }
    else {
      uVar17 = *(undefined4 *)(iVar16 + 4);
      uVar18 = *(undefined4 *)(iVar16 + 8);
      if (iVar12 == 0) {
        (*pcVar15)(&local_30,iVar14,&DAT_004144ea,1);
        if ((char)local_30 != '\x04') goto LAB_0111f8d8;
      }
      pcVar15 = *(code **)(local_5c + 0x1c);
      FUN_0111f934(&local_30,iVar14,pcVar15,uVar17,uVar18);
      if ((char)local_30 != '\x04') {
LAB_0111f8d8:
        iVar12 = FUN_0157c4a0(local_30,local_2c);
        return iVar12;
      }
      (*pcVar15)(&local_30,iVar14,&DAT_00418eb8,1);
      if ((char)local_30 != '\x04') goto LAB_0111f8d8;
      iVar12 = FUN_0111f590((int)((ulonglong)uVar20 >> 0x20),param_2);
      if (iVar12 != 0) {
        return iVar12;
      }
      while( true ) {
        uVar20 = FUN_00f45584(local_58);
        iVar12 = (int)uVar20;
        if (iVar12 == 0) break;
        uVar17 = *(undefined4 *)(iVar12 + 4);
        uVar18 = *(undefined4 *)(iVar12 + 8);
        (*pcVar15)(&local_30,iVar14,&DAT_004144ea,1);
        if ((char)local_30 != '\x04') goto LAB_0111f8d8;
        pcVar15 = *(code **)(local_5c + 0x1c);
        FUN_0111f934(&local_30,iVar14,pcVar15,uVar17,uVar18);
        if ((char)local_30 != '\x04') goto LAB_0111f8d8;
        (*pcVar15)(&local_30,iVar14,&DAT_00418eb8,1);
        if ((char)local_30 != '\x04') goto LAB_0111f8d8;
        iVar12 = FUN_0111f590((int)((ulonglong)uVar20 >> 0x20),param_2);
        if (iVar12 != 0) {
          return iVar12;
        }
      }
    }
    (*pcVar15)(local_58,iVar14,"}",1);
  }
  if ((char)local_58[0] == '\x04') {
    return 0;
  }
LAB_0111f7dc:
  iVar12 = FUN_0157c4a0(local_58[0],local_58[1]);
  return iVar12;
}


// FUN_015a18cc @ 015a18cc size=7944 calls_out=7 calls_in=0
// strings: 

/* WARNING: Type propagation algorithm not settling */

void FUN_015a18cc(undefined4 *param_1,int *param_2,undefined1 *param_3,uint param_4,
                 undefined4 *param_5)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  longlong lVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  undefined1 *puVar8;
  byte *pbVar9;
  undefined2 *puVar10;
  undefined2 uVar11;
  undefined2 uVar12;
  uint uVar13;
  undefined *puVar14;
  undefined4 uVar15;
  int iVar16;
  byte bVar17;
  undefined1 uVar18;
  code *pcVar19;
  uint uVar20;
  byte *pbVar21;
  uint uVar22;
  undefined4 uVar23;
  int iVar24;
  undefined1 *puVar25;
  undefined4 local_50;
  byte local_4c [4];
  undefined1 local_48;
  byte bStack_47;
  undefined2 uStack_46;
  undefined1 local_44 [32];
  
  pbVar9 = local_4c + 1;
  pbVar21 = local_4c + 2;
  uVar22 = 0;
  uVar20 = (int)param_4 >> 10;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*param_3) {
  case 0:
    uVar22 = param_4 & 0x1ff;
    uVar6 = 0x3b - ((int)(param_4 << 0x16) >> 0x1f);
    uVar20 = uVar22 - uVar6;
    if (uVar22 < uVar6 || uVar20 == 0) {
      uVar20 = uVar22;
    }
    uVar20 = uVar20 - ((uVar20 * 0x10c + 0x1f5f >> 0xd) * 0xf4d + 0x70e6 >> 7);
    if (param_3[1] != '\x02') {
      if (param_3[1] == '\x01') {
        if ((uVar20 & 0xff) != 0) {
LAB_015a209c:
          iVar24 = 0;
          if (0xff < ((uVar20 & 0xff) + 0x2f6 & (uVar20 & 0xff) + 0x19c)) goto LAB_015a2f90;
        }
        puVar14 = &DAT_00412ff6;
      }
      else {
        if ((uVar20 & 0xff) != 0) goto LAB_015a2f4c;
LAB_015a2f6c:
        puVar14 = &DAT_0041545b;
      }
      iVar24 = 1;
      FUN_015adb98(param_2,puVar14,1);
LAB_015a2f90:
      bVar17 = (byte)uVar20;
      uVar22 = uVar20 & 0xff;
      if (uVar22 < 100) {
        if (9 < uVar22) {
          local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 & 0x7f) * 2);
          local_4c[2] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar20 & 0x7f) * 2) >> 8);
          uVar20 = 1;
          goto LAB_015a31a4;
        }
        uVar20 = 2;
      }
      else {
        uVar22 = (uint)((short)uVar22 * 0x29) >> 0xc;
        bVar17 = (byte)uVar22;
        local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + uVar22 * -100 & 0xff) * 2);
        local_4c[2] = (byte)((ushort)*(undefined2 *)
                                      (&DAT_0040f4ca + (uVar20 + uVar22 * -100 & 0xff) * 2) >> 8);
        uVar20 = 0;
      }
      local_4c[uVar20] = bVar17 | 0x30;
LAB_015a31a4:
      FUN_015adb98(param_2,local_4c + uVar20,uVar20 ^ 3);
      *param_1 = 4;
      param_1[1] = (uVar20 ^ 3) + iVar24;
      return;
    }
    break;
  case 1:
    if (param_3[3] != '\0') {
      if (param_3[3] == '\x01') {
        uVar22 = param_4 & 0x1ff;
        uVar6 = 0x3b - ((int)(param_4 << 0x16) >> 0x1f);
        uVar13 = uVar22 - uVar6;
        uVar20 = uVar13;
        if (uVar22 < uVar6 || uVar13 == 0) {
          uVar20 = uVar22;
        }
        uVar5 = uVar20 * 0x10c + 0x1f5f;
        uVar20 = uVar5 >> 0xd;
        if (uVar22 >= uVar6 && uVar13 != 0) {
          uVar20 = (uVar5 >> 0xd) + 2;
        }
        iVar24 = (uVar20 & 0xff) * 8;
        pbVar21 = *(byte **)(&DAT_018aa144 + iVar24);
        uVar20 = *(uint *)(&DAT_018aa148 + iVar24);
        goto LAB_015a500c;
      }
      uVar22 = param_4 & 0x1ff;
      uVar6 = 0x3b - ((int)(param_4 << 0x16) >> 0x1f);
      uVar13 = uVar22 - uVar6;
      uVar20 = uVar13;
      if (uVar22 < uVar6 || uVar13 == 0) {
        uVar20 = uVar22;
      }
      uVar5 = uVar20 * 0x10c + 0x1f5f;
      uVar20 = uVar5 >> 0xd;
      if (uVar22 >= uVar6 && uVar13 != 0) {
        uVar20 = (uVar5 >> 0xd) + 2;
      }
      iVar24 = (uVar20 & 0xff) * 8;
      if (*(uint *)(&DAT_018aa148 + iVar24) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,3,*(uint *)(&DAT_018aa148 + iVar24),&DAT_018aa1ac);
      }
      pbVar21 = *(byte **)(&DAT_018aa144 + iVar24);
LAB_015a3044:
      uVar20 = 3;
      goto LAB_015a500c;
    }
    uVar22 = param_4 & 0x1ff;
    uVar6 = 0x3b - ((int)(param_4 << 0x16) >> 0x1f);
    uVar13 = uVar22 - uVar6;
    uVar20 = uVar13;
    if (uVar22 < uVar6 || uVar13 == 0) {
      uVar20 = uVar22;
    }
    uVar5 = uVar20 * 0x10c + 0x1f5f;
    uVar20 = uVar5 >> 0xd;
    if (uVar22 >= uVar6 && uVar13 != 0) {
      uVar20 = (uVar5 >> 0xd) + 2;
    }
    if (*(ushort *)(param_3 + 1) >> 8 == 0) {
LAB_015a2f4c:
      iVar24 = 0;
      if (((uVar20 & 0xff) + 0x2f6 & (uVar20 & 0xff) + 0x19c) < 0x100) goto LAB_015a2f6c;
      goto LAB_015a2f90;
    }
    if (*(ushort *)(param_3 + 1) >> 8 == 1) goto LAB_015a209c;
    break;
  case 2:
    uVar20 = param_4 & 0x1ff;
    if (param_3[1] != '\x02') {
      if (param_3[1] == '\x01') {
        if (uVar20 == 0) {
          uVar22 = 0xff;
        }
        else {
          uVar6 = uVar20 + 0x5fff6 & uVar20 + 0x7ff9c;
          if (1 < (uVar6 >> 0x11 ^ 2)) goto LAB_015a308c;
          uVar22 = uVar6 >> 0x11 ^ 0xfd;
        }
        iVar24 = param_2[2];
        uVar22 = uVar22 + 3 & 0xff;
        uVar6 = uVar22;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar6 = uVar6 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar6 != 0);
      }
      else {
        if (uVar20 == 0) {
          uVar22 = 0xff;
        }
        else {
          uVar6 = uVar20 + 0x5fff6 & uVar20 + 0x7ff9c;
          if (1 < (uVar6 >> 0x11 ^ 2)) goto LAB_015a308c;
          uVar22 = uVar6 >> 0x11 ^ 0xfd;
        }
        iVar24 = param_2[2];
        uVar22 = uVar22 + 3 & 0xff;
        uVar6 = uVar22;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar6 = uVar6 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x20;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar6 != 0);
      }
LAB_015a308c:
      if (uVar20 < 100) {
        if (9 < uVar20) {
          local_4c[3] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2);
          local_48 = (undefined1)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2) >> 8);
          iVar24 = 3;
          goto LAB_015a40c0;
        }
        iVar24 = 4;
      }
      else {
        param_4 = (uint)((short)uVar20 * 0x290) >> 0x10;
        local_4c[3] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + param_4 * -100 & 0xffff) * 2);
        local_48 = (undefined1)
                   ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + param_4 * -100 & 0xffff) * 2)
                   >> 8);
        iVar24 = 2;
      }
      local_4c[iVar24] = (byte)param_4 | 0x30;
LAB_015a40c0:
      FUN_015adb98(param_2,local_4c + iVar24,5 - iVar24);
      *param_1 = 4;
      param_1[1] = (5 - iVar24) + uVar22;
      return;
    }
    if (uVar20 < 100) {
      if (uVar20 < 10) {
        iVar24 = 4;
        goto LAB_015a321c;
      }
      local_4c[3] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2);
      local_48 = (undefined1)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2) >> 8);
      iVar24 = 3;
    }
    else {
      param_4 = (uint)((short)uVar20 * 0x290) >> 0x10;
      local_4c[3] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + param_4 * -100 & 0xffff) * 2);
      local_48 = (undefined1)
                 ((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + param_4 * -100 & 0xffff) * 2) >>
                 8);
      iVar24 = 2;
LAB_015a321c:
      local_4c[iVar24] = (byte)param_4 | 0x30;
    }
    pbVar21 = local_4c + iVar24;
    uVar20 = 5 - iVar24;
    goto LAB_015a500c;
  case 3:
    iVar24 = uVar20 + 999999;
    iVar16 = (int)((ulonglong)((longlong)iVar24 * -0x51eb851f) >> 0x20);
    lVar4 = (longlong)iVar24 * 0x5b5 + ((ulonglong)((longlong)iVar24 * 0x5b5) >> 0x3e);
    uVar20 = (param_4 & 0x1ff) + ((iVar16 >> 5) - (iVar16 >> 0x1f)) + iVar24 / 400 +
             ((uint)lVar4 >> 2 | (int)((ulonglong)lVar4 >> 0x20) << 0x1e) + 0xea551bcd;
    iVar24 = (int)(((ulonglong)uVar20 << 0x20) + (longlong)(int)uVar20 * -0x6db6db6d >> 0x20);
    iVar24 = uVar20 + ((iVar24 >> 2) - (iVar24 >> 0x1f)) * -7 + 6;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
    switch(param_3[3]) {
    case 0:
      if (*(uint *)(&DAT_018aa108 + *(int *)(&DAT_00423f54 + iVar24 * 4) * 8) < 3) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,3,*(uint *)(&DAT_018aa108 + *(int *)(&DAT_00423f54 + iVar24 * 4) * 8),
                     &DAT_018aa13c);
      }
      pbVar21 = *(byte **)(&DAT_018aa104 + *(int *)(&DAT_00423f54 + iVar24 * 4) * 8);
      goto LAB_015a3044;
    case 1:
      pbVar21 = *(byte **)(&DAT_018aa104 + *(int *)(&DAT_00423f88 + iVar24 * 4) * 8);
      uVar20 = *(uint *)(&DAT_018aa108 + *(int *)(&DAT_00423f88 + iVar24 * 4) * 8);
      goto LAB_015a500c;
    case 2:
      puVar14 = &UNK_00423fbc;
      break;
    case 3:
      puVar14 = &UNK_00423fc9;
    }
    bVar17 = puVar14[iVar24] + ((byte)*(undefined2 *)(param_3 + 1) & 1);
    goto LAB_015a4104;
  case 4:
    if (param_3[2] == '\x02') {
      iVar24 = uVar20 + 999999;
      iVar16 = (int)((ulonglong)((longlong)iVar24 * -0x51eb851f) >> 0x20);
      lVar4 = (longlong)iVar24 * 0x5b5 + ((ulonglong)((longlong)iVar24 * 0x5b5) >> 0x3e);
      iVar24 = (param_4 & 0x1ff) + ((iVar16 >> 5) - (iVar16 >> 0x1f)) + iVar24 / 400 +
               ((uint)lVar4 >> 2 | (int)((ulonglong)lVar4 >> 0x20) << 0x1e);
      puVar14 = &UNK_00423ff0;
LAB_015a1fac:
      uVar20 = iVar24 + 0xea551bcd;
      iVar24 = (int)(((ulonglong)uVar20 << 0x20) + (longlong)(int)uVar20 * -0x6db6db6d >> 0x20);
      uVar22 = (((param_4 & 0x1ff) -
                (uint)(byte)puVar14[uVar20 + ((iVar24 >> 2) - (iVar24 >> 0x1f)) * -7 + 6]) + 6 &
               0xffff) * 0x2493 >> 0x10;
    }
    else {
      if (param_3[2] == '\x01') {
        iVar24 = uVar20 + 999999;
        iVar16 = (int)((ulonglong)((longlong)iVar24 * -0x51eb851f) >> 0x20);
        lVar4 = (longlong)iVar24 * 0x5b5 + ((ulonglong)((longlong)iVar24 * 0x5b5) >> 0x3e);
        iVar24 = (param_4 & 0x1ff) + ((iVar16 >> 5) - (iVar16 >> 0x1f)) + iVar24 / 400 +
                 ((uint)lVar4 >> 2 | (int)((ulonglong)lVar4 >> 0x20) << 0x1e);
        puVar14 = &UNK_00423fe3;
        goto LAB_015a1fac;
      }
      iVar16 = uVar20 + 999999;
      iVar24 = (int)((ulonglong)((longlong)iVar16 * -0x51eb851f) >> 0x20);
      lVar4 = (longlong)iVar16 * 0x5b5 + ((ulonglong)((longlong)iVar16 * 0x5b5) >> 0x3e);
      uVar22 = (param_4 & 0x1ff) + ((iVar24 >> 5) - (iVar24 >> 0x1f)) + iVar16 / 400 +
               ((uint)lVar4 >> 2 | (int)((ulonglong)lVar4 >> 0x20) << 0x1e) + 0xea551bcd;
      iVar24 = (int)(((ulonglong)uVar22 << 0x20) + (longlong)(int)uVar22 * -0x6db6db6d >> 0x20);
      uVar22 = ((param_4 & 0x1ff) -
               (uint)(byte)(&DAT_00423fdc)[uVar22 + ((iVar24 >> 2) - (iVar24 >> 0x1f)) * -7]) + 10 &
               0xffff;
      if (uVar22 * 0x249300 >> 0x18 == 0x35) {
        uVar22 = 0x35;
        switch((int)uVar20 % 400) {
        case -0x18c:
        case -0x187:
        case -0x181:
        case -0x17c:
        case -0x176:
        case -0x170:
        case -0x16b:
        case -0x165:
        case -0x160:
        case -0x15a:
        case -0x154:
        case -0x14f:
        case -0x149:
        case -0x144:
        case -0x13e:
        case -0x138:
        case -0x133:
        case -0x12d:
        case -0x127:
        case -0x121:
        case -0x11c:
        case -0x116:
        case -0x110:
        case -0x10b:
        case -0x105:
        case -0x100:
        case -0xfa:
        case -0xf4:
        case -0xef:
        case -0xe9:
        case -0xe4:
        case -0xde:
        case -0xd8:
        case -0xd3:
        case -0xcd:
        case -199:
        case -0xc1:
        case -0xbc:
        case -0xb6:
        case -0xb0:
        case -0xab:
        case -0xa5:
        case -0xa0:
        case -0x9a:
        case -0x94:
        case -0x8f:
        case -0x89:
        case -0x84:
        case -0x7e:
        case -0x78:
        case -0x73:
        case -0x6d:
        case -0x68:
        case -0x61:
        case -0x5c:
        case -0x56:
        case -0x50:
        case -0x4b:
        case -0x45:
        case -0x40:
        case -0x3a:
        case -0x34:
        case -0x2f:
        case -0x29:
        case -0x24:
        case -0x1e:
        case -0x18:
        case -0x13:
        case -0xd:
        case -8:
        case -2:
        case 4:
        case 9:
        case 0xf:
        case 0x14:
        case 0x1a:
        case 0x20:
        case 0x25:
        case 0x2b:
        case 0x30:
        case 0x36:
        case 0x3c:
        case 0x41:
        case 0x47:
        case 0x4c:
        case 0x52:
        case 0x58:
        case 0x5d:
        case 99:
        case 0x69:
        case 0x6f:
        case 0x74:
        case 0x7a:
        case 0x80:
        case 0x85:
        case 0x8b:
        case 0x90:
        case 0x96:
        case 0x9c:
        case 0xa1:
        case 0xa7:
        case 0xac:
        case 0xb2:
        case 0xb8:
        case 0xbd:
        case 0xc3:
        case 0xc9:
        case 0xcf:
        case 0xd4:
        case 0xda:
        case 0xe0:
        case 0xe5:
        case 0xeb:
        case 0xf0:
        case 0xf6:
        case 0xfc:
        case 0x101:
        case 0x107:
        case 0x10c:
        case 0x112:
        case 0x118:
        case 0x11d:
        case 0x123:
        case 0x128:
        case 0x12f:
        case 0x134:
        case 0x13a:
        case 0x140:
        case 0x145:
        case 0x14b:
        case 0x150:
        case 0x156:
        case 0x15c:
        case 0x161:
        case 0x167:
        case 0x16c:
        case 0x172:
        case 0x178:
        case 0x17d:
        case 0x183:
        case 0x188:
        case 0x18e:
          break;
        default:
          uVar22 = 1;
        }
      }
      else {
        uVar22 = uVar22 * 0x2493 >> 0x10;
        if (uVar22 == 0) {
          uVar22 = 0x34;
          switch((int)(uVar20 - 1) % 400) {
          case -0x18c:
          case -0x187:
          case -0x181:
          case -0x17c:
          case -0x176:
          case -0x170:
          case -0x16b:
          case -0x165:
          case -0x160:
          case -0x15a:
          case -0x154:
          case -0x14f:
          case -0x149:
          case -0x144:
          case -0x13e:
          case -0x138:
          case -0x133:
          case -0x12d:
          case -0x127:
          case -0x121:
          case -0x11c:
          case -0x116:
          case -0x110:
          case -0x10b:
          case -0x105:
          case -0x100:
          case -0xfa:
          case -0xf4:
          case -0xef:
          case -0xe9:
          case -0xe4:
          case -0xde:
          case -0xd8:
          case -0xd3:
          case -0xcd:
          case -199:
          case -0xc1:
          case -0xbc:
          case -0xb6:
          case -0xb0:
          case -0xab:
          case -0xa5:
          case -0xa0:
          case -0x9a:
          case -0x94:
          case -0x8f:
          case -0x89:
          case -0x84:
          case -0x7e:
          case -0x78:
          case -0x73:
          case -0x6d:
          case -0x68:
          case -0x61:
          case -0x5c:
          case -0x56:
          case -0x50:
          case -0x4b:
          case -0x45:
          case -0x40:
          case -0x3a:
          case -0x34:
          case -0x2f:
          case -0x29:
          case -0x24:
          case -0x1e:
          case -0x18:
          case -0x13:
          case -0xd:
          case -8:
          case -2:
          case 4:
          case 9:
          case 0xf:
          case 0x14:
          case 0x1a:
          case 0x20:
          case 0x25:
          case 0x2b:
          case 0x30:
          case 0x36:
          case 0x3c:
          case 0x41:
          case 0x47:
          case 0x4c:
          case 0x52:
          case 0x58:
          case 0x5d:
          case 99:
          case 0x69:
          case 0x6f:
          case 0x74:
          case 0x7a:
          case 0x80:
          case 0x85:
          case 0x8b:
          case 0x90:
          case 0x96:
          case 0x9c:
          case 0xa1:
          case 0xa7:
          case 0xac:
          case 0xb2:
          case 0xb8:
          case 0xbd:
          case 0xc3:
          case 0xc9:
          case 0xcf:
          case 0xd4:
          case 0xda:
          case 0xe0:
          case 0xe5:
          case 0xeb:
          case 0xf0:
          case 0xf6:
          case 0xfc:
          case 0x101:
          case 0x107:
          case 0x10c:
          case 0x112:
          case 0x118:
          case 0x11d:
          case 0x123:
          case 0x128:
          case 0x12f:
          case 0x134:
          case 0x13a:
          case 0x140:
          case 0x145:
          case 0x14b:
          case 0x150:
          case 0x156:
          case 0x15c:
          case 0x161:
          case 0x167:
          case 0x16c:
          case 0x172:
          case 0x178:
          case 0x17d:
          case 0x183:
          case 0x188:
          case 0x18e:
            uVar22 = 0x35;
          }
        }
      }
    }
    if (param_3[1] == '\x02') {
      if (uVar22 < 10) {
        local_4c[2] = (byte)uVar22 | 0x30;
        uVar23 = 1;
        uVar15 = 1;
        pbVar9 = pbVar21;
      }
      else {
        uVar23 = 2;
        uVar15 = 2;
        local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
        local_4c[2] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar22 * 2) >> 8);
      }
      FUN_015adb98(param_2,pbVar9,uVar15);
      *param_1 = 4;
      param_1[1] = uVar23;
      return;
    }
    uVar20 = uVar22;
    if (param_3[1] == '\x01') {
      if ((uVar22 != 0) && (iVar24 = 0, 0xff < (uVar22 + 0x2f6 & uVar22 + 0x19c)))
      goto joined_r0x015a4048;
      puVar14 = &DAT_00412ff6;
    }
    else {
      if ((uVar22 != 0) && (iVar24 = 0, 0xff < (uVar22 + 0x2f6 & uVar22 + 0x19c)))
      goto joined_r0x015a4048;
      puVar14 = &DAT_0041545b;
    }
    iVar24 = 1;
    FUN_015adb98(param_2,puVar14,1);
joined_r0x015a4048:
    if (uVar22 < 10) {
      local_4c[2] = (byte)uVar20 | 0x30;
      iVar16 = 1;
      uVar15 = 1;
      pbVar9 = pbVar21;
    }
    else {
      iVar16 = 2;
      local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
      local_4c[2] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar22 * 2) >> 8);
      uVar15 = 2;
    }
    FUN_015adb98(param_2,pbVar9,uVar15);
    *param_1 = 4;
    param_1[1] = iVar16 + iVar24;
    return;
  case 5:
    uVar3 = param_3[4];
    cVar2 = param_3[5];
    if (param_3[2] == '\x01') {
      iVar24 = uVar20 + 999999;
      iVar16 = (int)((ulonglong)((longlong)iVar24 * -0x51eb851f) >> 0x20);
      lVar4 = (longlong)iVar24 * 0x5b5 + ((ulonglong)((longlong)iVar24 * 0x5b5) >> 0x3e);
      uVar22 = (param_4 & 0x1ff) + ((iVar16 >> 5) - (iVar16 >> 0x1f)) + iVar24 / 400 +
               ((uint)lVar4 >> 2 | (int)((ulonglong)lVar4 >> 0x20) << 0x1e) + 0xea551bcd;
      iVar24 = (int)(((ulonglong)uVar22 << 0x20) + (longlong)(int)uVar22 * -0x6db6db6d >> 0x20);
      uVar22 = ((param_4 & 0x1ff) -
               (uint)(byte)(&DAT_00424003)[uVar22 + ((iVar24 >> 2) - (iVar24 >> 0x1f)) * -7]) + 10 &
               0xffff;
      if (uVar22 * 0x249300 >> 0x18 == 0x35) {
        switch((int)uVar20 % 400) {
        case -0x18c:
        case -0x187:
        case -0x181:
        case -0x17c:
        case -0x176:
        case -0x170:
        case -0x16b:
        case -0x165:
        case -0x160:
        case -0x15a:
        case -0x154:
        case -0x14f:
        case -0x149:
        case -0x144:
        case -0x13e:
        case -0x138:
        case -0x133:
        case -0x12d:
        case -0x127:
        case -0x121:
        case -0x11c:
        case -0x116:
        case -0x110:
        case -0x10b:
        case -0x105:
        case -0x100:
        case -0xfa:
        case -0xf4:
        case -0xef:
        case -0xe9:
        case -0xe4:
        case -0xde:
        case -0xd8:
        case -0xd3:
        case -0xcd:
        case -199:
        case -0xc1:
        case -0xbc:
        case -0xb6:
        case -0xb0:
        case -0xab:
        case -0xa5:
        case -0xa0:
        case -0x9a:
        case -0x94:
        case -0x8f:
        case -0x89:
        case -0x84:
        case -0x7e:
        case -0x78:
        case -0x73:
        case -0x6d:
        case -0x68:
        case -0x61:
        case -0x5c:
        case -0x56:
        case -0x50:
        case -0x4b:
        case -0x45:
        case -0x40:
        case -0x3a:
        case -0x34:
        case -0x2f:
        case -0x29:
        case -0x24:
        case -0x1e:
        case -0x18:
        case -0x13:
        case -0xd:
        case -8:
        case -2:
        case 4:
        case 9:
        case 0xf:
        case 0x14:
        case 0x1a:
        case 0x20:
        case 0x25:
        case 0x2b:
        case 0x30:
        case 0x36:
        case 0x3c:
        case 0x41:
        case 0x47:
        case 0x4c:
        case 0x52:
        case 0x58:
        case 0x5d:
        case 99:
        case 0x69:
        case 0x6f:
        case 0x74:
        case 0x7a:
        case 0x80:
        case 0x85:
        case 0x8b:
        case 0x90:
        case 0x96:
        case 0x9c:
        case 0xa1:
        case 0xa7:
        case 0xac:
        case 0xb2:
        case 0xb8:
        case 0xbd:
        case 0xc3:
        case 0xc9:
        case 0xcf:
        case 0xd4:
        case 0xda:
        case 0xe0:
        case 0xe5:
        case 0xeb:
        case 0xf0:
        case 0xf6:
        case 0xfc:
        case 0x101:
        case 0x107:
        case 0x10c:
        case 0x112:
        case 0x118:
        case 0x11d:
        case 0x123:
        case 0x128:
        case 0x12f:
        case 0x134:
        case 0x13a:
        case 0x140:
        case 0x145:
        case 0x14b:
        case 0x150:
        case 0x156:
        case 0x15c:
        case 0x161:
        case 0x167:
        case 0x16c:
        case 0x172:
        case 0x178:
        case 0x17d:
        case 0x183:
        case 0x188:
        case 0x18e:
          goto switchD_015a3258_caseD_fffffe74;
        default:
          uVar20 = uVar20 + 1;
        }
      }
      else if (uVar22 * 0x2493 >> 0x10 == 0) {
        uVar20 = uVar20 - 1;
      }
      uVar22 = uVar20;
      if (cVar2 != '\0') goto LAB_015a3edc;
LAB_015a1e40:
      uVar6 = uVar22;
      if ((int)uVar22 < 0) {
        uVar6 = -uVar22;
      }
      uVar20 = uVar22;
      if (9999 < uVar6) {
LAB_015a3efc:
        puVar7 = (undefined4 *)thunk_FUN_016d4a50(0x28);
        if (puVar7 == (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
          FUN_00600874(8,0x28);
        }
        puVar7[2] = 0xffffd8f1;
        puVar7[3] = 0xffffffff;
        puVar7[4] = 9999;
        puVar7[5] = 0;
        puVar7[6] = uVar20;
        puVar7[7] = (int)uVar20 >> 0x1f;
        *puVar7 = &DAT_005672ac;
        puVar7[1] = 4;
        puVar7[8] = &DAT_0040f593;
        puVar7[9] = 0x1d;
        *param_1 = 2;
        param_1[1] = puVar7;
        param_1[2] = puVar7 + 2;
        return;
      }
      pcVar19 = FUN_015ae878;
    }
    else {
switchD_015a3258_caseD_fffffe74:
      uVar22 = uVar20;
      if (cVar2 == '\0') goto LAB_015a1e40;
LAB_015a3edc:
      if (cVar2 != '\x01') {
        pcVar19 = FUN_015ae27c;
        uVar22 = (int)uVar20 % 100;
        iVar24 = 0;
        if ((int)uVar22 < 0) {
          uVar22 = -uVar22;
        }
        goto LAB_015a4218;
      }
      uVar22 = uVar20;
      if ((int)uVar20 < 0) {
        uVar22 = -uVar20;
      }
      if (9999 < uVar22) goto LAB_015a3efc;
      pcVar19 = FUN_015ae27c;
      uVar22 = (int)uVar20 / 100;
    }
    if ((int)uVar20 < 0) {
      iVar16 = param_2[2];
      if (*param_2 == iVar16) {
        FUN_015afa68(param_2,iVar16,1,1,1);
        iVar16 = param_2[2];
      }
      iVar24 = param_2[1];
      uVar18 = 0x2d;
    }
    else {
      iVar24 = 0;
      if (param_3[3] == '\0') goto LAB_015a4218;
      iVar16 = param_2[2];
      if (*param_2 == iVar16) {
        FUN_015afa68(param_2,iVar16,1,1,1);
        iVar16 = param_2[2];
      }
      iVar24 = param_2[1];
      uVar18 = 0x2b;
    }
    *(undefined1 *)(iVar24 + iVar16) = uVar18;
    iVar24 = 1;
    param_2[2] = iVar16 + 1;
LAB_015a4218:
    if ((int)uVar22 < 0) {
      uVar22 = -uVar22;
    }
    (*pcVar19)(local_4c,param_2,uVar22,uVar3);
    if (local_4c[0] == 4) {
      *param_1 = 4;
      param_1[1] = CONCAT22(uStack_46,CONCAT11(bStack_47,local_48)) + iVar24;
      return;
    }
    *param_1 = 3;
    param_1[1] = CONCAT31(CONCAT12(local_4c[3],CONCAT11(local_4c[2],local_4c[1])),local_4c[0]);
    param_1[2] = CONCAT22(uStack_46,CONCAT11(bStack_47,local_48));
    return;
  case 6:
    if (*(char *)((int)param_5 + 7) != '\0') goto switchD_015a18f8_caseD_b;
    uVar22 = (uint)*(byte *)((int)param_5 + 6);
    uVar20 = uVar22;
    if (((param_3[1] == '\x01') && (uVar20 = 0xc, uVar22 != 0xc && uVar22 != 0)) &&
       (uVar20 = uVar22 - 0xc, uVar22 < 0xc)) {
      uVar20 = uVar22;
    }
    bVar17 = (byte)uVar20;
    if (param_3[2] == '\0') {
      if (((uVar20 & 0xff) == 0) ||
         (iVar24 = 0, ((uVar20 & 0xff) + 0x2f6 & (uVar20 & 0xff) + 0x19c) < 0x100)) {
        puVar14 = &DAT_0041545b;
LAB_015a4024:
        iVar24 = 1;
        FUN_015adb98(param_2,puVar14,1);
      }
LAB_015a4040:
      uVar22 = uVar20 & 0xff;
      goto joined_r0x015a4048;
    }
    if (param_3[2] == '\x01') {
      if (((uVar20 & 0xff) == 0) ||
         (iVar24 = 0, ((uVar20 & 0xff) + 0x2f6 & (uVar20 & 0xff) + 0x19c) < 0x100)) {
        puVar14 = &DAT_00412ff6;
        goto LAB_015a4024;
      }
      goto LAB_015a4040;
    }
    uVar20 = uVar20 & 0xff;
    goto joined_r0x015a30e8;
  case 7:
    if (*(char *)((int)param_5 + 7) != '\0') goto switchD_015a18f8_caseD_b;
    bVar17 = *(byte *)((int)param_5 + 5);
    goto LAB_015a1f0c;
  case 8:
    if (*(char *)((int)param_5 + 7) == '\0') {
      iVar24 = param_2[2];
      bVar17 = *(byte *)((int)param_5 + 6);
      cVar2 = param_3[1];
      if ((uint)(*param_2 - iVar24) < 2) {
        FUN_015afa68(param_2,iVar24,2,1,1);
        iVar24 = param_2[2];
      }
      param_2[2] = iVar24 + 2;
      uVar12 = 0x6d70;
      uVar11 = 0x6d61;
      if (cVar2 != '\0') {
        uVar12 = 0x4d50;
        uVar11 = 0x4d41;
      }
      uVar22 = 2;
      if (0xb < bVar17) {
        uVar11 = uVar12;
      }
      *(undefined2 *)(param_2[1] + iVar24) = uVar11;
      goto switchD_015a18f8_caseD_e;
    }
  default:
switchD_015a18f8_caseD_b:
    *param_1 = 0;
    return;
  case 9:
    if (*(char *)((int)param_5 + 7) != '\0') goto switchD_015a18f8_caseD_b;
    bVar17 = *(byte *)(param_5 + 1);
LAB_015a1f0c:
    uVar20 = (uint)bVar17;
    if (param_3[1] == '\x02') {
joined_r0x015a30e8:
      if (uVar20 < 10) {
LAB_015a4104:
        local_4c[2] = bVar17 | 0x30;
        uVar20 = 1;
        goto LAB_015a500c;
      }
    }
    else if (param_3[1] == '\x01') {
      if (uVar20 < 10) {
        puVar14 = &DAT_00412ff6;
        goto LAB_015a4134;
      }
    }
    else if (uVar20 < 10) {
      puVar14 = &DAT_0041545b;
LAB_015a4134:
      FUN_015adb98(param_2,puVar14,1);
      local_4c[2] = bVar17 | 0x30;
      FUN_015adb98(param_2,pbVar21,1);
      *param_1 = 4;
      param_1[1] = 2;
      return;
    }
    local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2);
    local_4c[2] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + uVar20 * 2) >> 8);
    uVar20 = 2;
    pbVar21 = pbVar9;
    goto LAB_015a500c;
  case 10:
    if (*(char *)((int)param_5 + 7) != '\0') goto switchD_015a18f8_caseD_b;
    puVar25 = (undefined1 *)*param_5;
    puVar10 = (undefined2 *)((int)local_44 + 1);
    local_50 = param_1;
    switch(param_3[1]) {
    case 1:
      break;
    case 2:
LAB_015a528c:
      uVar22 = (uint)puVar25 / 1000000;
      uVar20 = 0xff;
      if (puVar25 < &DAT_000f4240) {
LAB_015a5cc4:
        iVar24 = param_2[2];
        uVar6 = uVar20 + 3 & 0xff;
        uVar20 = uVar6;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar20 = uVar20 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar20 != 0);
      }
      else {
        uVar6 = 0;
        uVar20 = uVar22 + 0x5fff6 & uVar22 + 0x7ff9c ^ uVar22 + 0x5fc18;
        if (uVar20 >> 0x12 == 0) {
          uVar20 = uVar20 >> 0x11 ^ 0xff;
          goto LAB_015a5cc4;
        }
      }
      if ((undefined1 *)0x5f5e0ff < puVar25) {
        uVar20 = (uint)((short)uVar22 * 0x147b) >> 0x13;
        local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + (uVar22 + uVar20 * -100 & 0xffff) * 2);
        iVar16 = 7;
        uVar22 = uVar20;
        goto LAB_015a5bf4;
      }
      iVar16 = 9;
      if (puVar25 < &LAB_00989680) goto LAB_015a5bf4;
      local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
      iVar16 = 8;
      goto LAB_015a5c1c;
    case 3:
LAB_015a5140:
      uVar22 = (uint)puVar25 / 100000;
      uVar20 = 0xff;
      if (puVar25 < (undefined1 *)0x186a0) {
LAB_015a5c54:
        iVar24 = param_2[2];
        uVar20 = uVar20 + 4 & 0xff;
        uVar6 = uVar20;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar6 = uVar6 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar6 != 0);
      }
      else {
        uVar20 = 0;
        uVar6 = uVar22 + 0x5fff6 & uVar22 + 0x7ff9c ^ uVar22 + 0xdfc18 & uVar22 + 0x7d8f0;
        if (uVar6 < 0x60000) {
          uVar20 = uVar6 >> 0x11 ^ 0xff;
          goto LAB_015a5c54;
        }
      }
      iVar24 = 10;
      if (&LAB_00989680 <= puVar25) {
        uVar6 = (uint)((short)(uVar22 >> 2) * 0x147b) >> 0x11;
        local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + (uVar22 + uVar6 * -100 & 0xffff) * 2);
        iVar24 = 8;
        uVar22 = uVar6;
      }
      if (uVar22 < 10) {
        iVar16 = iVar24 + -1;
        local_4c[iVar24 + -1] = (byte)uVar22 | 0x30;
      }
      else {
        iVar16 = iVar24 + -2;
        *(undefined2 *)(local_4c + iVar24 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
      }
      goto LAB_015a581c;
    case 4:
LAB_015a51fc:
      uVar22 = (uint)puVar25 / 10000;
      uVar20 = 0xff;
      if ((undefined1 *)0x270f < puVar25) {
        if ((undefined1 *)0x5f5e0ff < puVar25) {
          uVar6 = 0;
          uVar20 = uVar22 % 10000;
          uVar22 = (uint)puVar25 / 100000000;
          uStack_46 = *(undefined2 *)(&DAT_0040f4ca + (uVar20 * 0x28f60 >> 0x18) * 2);
          iVar24 = 6;
          goto LAB_015a5bb4;
        }
        uVar20 = (uVar22 + 0x5fff6 & uVar22 + 0x7ff9c ^ uVar22 + 0xdfc18 & uVar22 + 0x7d8f0) >> 0x11
                 ^ 0xff;
      }
      iVar24 = param_2[2];
      uVar6 = uVar20 + 5 & 0xff;
      uVar20 = uVar6;
      do {
        if (*param_2 == iVar24) {
          FUN_015afa68(param_2,iVar24,1,1,1);
          iVar24 = param_2[2];
        }
        uVar20 = uVar20 - 1;
        *(undefined1 *)(param_2[1] + iVar24) = 0x30;
        iVar24 = iVar24 + 1;
        param_2[2] = iVar24;
      } while (uVar20 != 0);
      uVar20 = uVar22;
      if (puVar25 < &DAT_000f4240) goto LAB_015a57d4;
LAB_015a5b9c:
      uVar22 = (uint)((short)((uVar20 & 0xffff) >> 2) * 0x147b) >> 0x11;
      iVar24 = 8;
LAB_015a5bb4:
      local_44._0_2_ =
           *(undefined2 *)
            (&DAT_0040f4ca +
            (uVar20 + ((uint)((short)((uVar20 & 0xffff) >> 2) * 0x147b) >> 0x11) * -100 & 0xffff) *
            2);
      goto LAB_015a5be8;
    case 5:
LAB_015a504c:
      uVar22 = (uint)puVar25 / 1000;
      uVar20 = 0xff;
      if (puVar25 < (undefined1 *)0x3e8) {
LAB_015a5a78:
        iVar24 = param_2[2];
        uVar6 = uVar20 + 6 & 0xff;
        uVar20 = uVar6;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar20 = uVar20 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar20 != 0);
      }
      else {
        uVar6 = 0;
        uVar20 = uVar22;
        if ((undefined1 *)0x5f5e0ff < puVar25) {
          uVar20 = (uint)puVar25 / 100000000;
        }
        uVar13 = uVar20 + 0x5fff6 & uVar20 + 0x7ff9c ^ uVar20 + 0xdfc18 & uVar20 + 0x7d8f0;
        uVar20 = uVar13 >> 0x11;
        if ((undefined1 *)0x5f5e0ff < puVar25) {
          uVar20 = (uVar13 >> 0x11) + 5;
        }
        if (uVar20 < 5) {
          uVar20 = uVar20 ^ 0xff;
          goto LAB_015a5a78;
        }
      }
      if (&LAB_00989680 <= puVar25) {
        uVar20 = uVar22 % 10000;
        uVar22 = (uint)puVar25 / 10000000;
        uStack_46 = *(undefined2 *)(&DAT_0040f4ca + (uVar20 * 0x28f60 >> 0x18) * 2);
        iVar24 = 6;
        goto LAB_015a5bb4;
      }
      uVar20 = uVar22;
      if ((undefined1 *)0x1869f < puVar25) goto LAB_015a5b9c;
LAB_015a57d4:
      iVar24 = 10;
LAB_015a5be8:
      if (uVar22 < 10) {
        iVar16 = iVar24 + -1;
LAB_015a5bf4:
        local_4c[iVar16] = (byte)uVar22 | 0x30;
      }
      else {
        iVar16 = iVar24 + -2;
        *(undefined2 *)(local_4c + iVar24 + -2) = *(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
      }
LAB_015a5c1c:
      FUN_015adb98(param_2,local_4c + iVar16,10 - iVar16);
      iVar24 = (10 - iVar16) + uVar6;
      goto LAB_015a5c38;
    case 6:
LAB_015a5330:
      uVar6 = (uint)puVar25 / 100;
      uVar22 = 0xff;
      if (puVar25 < (undefined1 *)0x64) {
LAB_015a5a0c:
        iVar24 = param_2[2];
        uVar20 = uVar22 + 7 & 0xff;
        uVar22 = uVar20;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar22 = uVar22 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar22 != 0);
      }
      else {
        uVar20 = 0;
        uVar22 = uVar6;
        if ((undefined1 *)0x98967f < puVar25) {
          uVar22 = (uint)puVar25 / 10000000;
        }
        uVar13 = uVar22 + 0x5fff6 & uVar22 + 0x7ff9c ^ uVar22 + 0xdfc18 & uVar22 + 0x7d8f0;
        uVar22 = uVar13 >> 0x11;
        if ((undefined1 *)0x98967f < puVar25) {
          uVar22 = (uVar13 >> 0x11) + 5;
        }
        if (uVar22 < 6) {
          uVar22 = uVar22 ^ 0xff;
          goto LAB_015a5a0c;
        }
      }
      iVar16 = 10;
      if ((undefined1 *)0xf423f < puVar25) {
        uVar22 = uVar6 % 10000;
        uVar6 = (uint)puVar25 / 1000000;
        uStack_46 = *(undefined2 *)(&DAT_0040f4ca + (uVar22 / 100) * 2);
        local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + (uVar22 % 100) * 2);
        iVar16 = 6;
      }
      uVar22 = uVar6;
      if (99 < uVar6) goto LAB_015a5544;
LAB_015a542c:
      iVar24 = iVar16;
      goto LAB_015a5580;
    case 7:
LAB_015a5444:
      uVar6 = (uint)puVar25 / 10;
      uVar22 = 0xff;
      if (puVar25 < (undefined1 *)0xa) {
LAB_015a59a0:
        iVar24 = param_2[2];
        uVar20 = uVar22 + 8 & 0xff;
        uVar22 = uVar20;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar22 = uVar22 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar22 != 0);
      }
      else {
        uVar20 = 0;
        uVar22 = uVar6;
        if ((undefined1 *)0xf423f < puVar25) {
          uVar22 = (uint)puVar25 / 1000000;
        }
        uVar13 = uVar22 + 0x5fff6 & uVar22 + 0x7ff9c ^ uVar22 + 0xdfc18 & uVar22 + 0x7d8f0;
        uVar22 = uVar13 >> 0x11;
        if ((undefined1 *)0xf423f < puVar25) {
          uVar22 = (uVar13 >> 0x11) + 5;
        }
        if (uVar22 < 7) {
          uVar22 = uVar22 ^ 0xff;
          goto LAB_015a59a0;
        }
      }
      iVar16 = 10;
      if ((undefined1 *)0x1869f < puVar25) {
        uVar22 = uVar6 % 10000;
        uVar6 = (uint)puVar25 / 100000;
        uStack_46 = *(undefined2 *)(&DAT_0040f4ca + (uVar22 / 100) * 2);
        local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + (uVar22 % 100) * 2);
        iVar16 = 6;
      }
      uVar22 = uVar6;
      if (uVar6 < 100) goto LAB_015a542c;
LAB_015a5544:
      iVar24 = iVar16 + -2;
      uVar22 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)(local_4c + iVar16 + -2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 + uVar22 * -100 & 0xffff) * 2);
LAB_015a5580:
      if (uVar22 < 10) {
        bVar17 = (byte)uVar22;
LAB_015a572c:
        iVar16 = iVar24 + -1;
        local_4c[iVar24 + -1] = bVar17 | 0x30;
      }
      else {
        uVar12 = *(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
LAB_015a5740:
        iVar16 = iVar24 + -2;
        *(undefined2 *)(local_4c + iVar24 + -2) = uVar12;
      }
LAB_015a581c:
      FUN_015adb98(param_2,local_4c + iVar16,10 - iVar16);
      iVar24 = (10 - iVar16) + uVar20;
      goto LAB_015a5c38;
    case 8:
      if (puVar25 == (undefined1 *)0x0) {
        uVar22 = 0xff;
LAB_015a5758:
        iVar24 = param_2[2];
        uVar20 = uVar22 + 9 & 0xff;
        uVar22 = uVar20;
        do {
          if (*param_2 == iVar24) {
            FUN_015afa68(param_2,iVar24,1,1,1);
            iVar24 = param_2[2];
          }
          uVar22 = uVar22 - 1;
          *(undefined1 *)(param_2[1] + iVar24) = 0x30;
          iVar24 = iVar24 + 1;
          param_2[2] = iVar24;
        } while (uVar22 != 0);
      }
      else {
LAB_015a55cc:
        uVar20 = 0;
        puVar8 = puVar25;
        if ((undefined1 *)0x1869f < puVar25) {
          puVar8 = (undefined1 *)((uint)puVar25 / 100000);
        }
        uVar6 = (uint)(puVar8 + 0x5fff6) & (uint)(puVar8 + 0x7ff9c) ^
                (uint)(puVar8 + 0xdfc18) & (uint)(puVar8 + 0x7d8f0);
        uVar22 = uVar6 >> 0x11;
        if ((undefined1 *)0x1869f < puVar25) {
          uVar22 = (uVar6 >> 0x11) + 5;
        }
        if (uVar22 < 8) {
          uVar22 = uVar22 ^ 0xff;
          goto LAB_015a5758;
        }
      }
      iVar24 = 10;
      if ((undefined1 *)0x270f < puVar25) {
        iVar16 = 0;
        puVar8 = puVar25;
        do {
          iVar24 = iVar16;
          puVar25 = (undefined1 *)((uint)puVar8 / 10000);
          uVar22 = (uint)((short)((uint)puVar8 % 10000 >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)(local_4c + iVar24 + 6) = *(undefined2 *)(&DAT_0040f4ca + uVar22 * 2);
          *(undefined2 *)((int)local_44 + iVar24) =
               *(undefined2 *)(&DAT_0040f4ca + ((uint)puVar8 % 10000 + uVar22 * -100 & 0xffff) * 2);
          bVar1 = (undefined1 *)0x5f5e0ff < puVar8;
          iVar16 = iVar24 + -4;
          puVar8 = puVar25;
        } while (bVar1);
        iVar24 = iVar24 + 6;
      }
      if ((undefined1 *)0x63 < puVar25) {
        puVar8 = (undefined1 *)((uint)((short)(((uint)puVar25 & 0xffff) >> 2) * 0x147b) >> 0x11);
        *(undefined2 *)(local_4c + iVar24 + -2) =
             *(undefined2 *)(&DAT_0040f4ca + ((uint)(puVar25 + (int)puVar8 * -100) & 0xffff) * 2);
        iVar24 = iVar24 + -2;
        puVar25 = puVar8;
      }
      if (puVar25 < (undefined1 *)0xa) {
        bVar17 = (byte)puVar25;
        goto LAB_015a572c;
      }
      uVar12 = *(undefined2 *)(&DAT_0040f4ca + (int)puVar25 * 2);
      goto LAB_015a5740;
    case 9:
      if ((uint)puVar25 % 10 != 0) goto LAB_015a55cc;
      if (0x19999999 <
          (((uint)puVar25 / 10) * -0x33333333 >> 1 | ((uint)puVar25 / 10) * -0x80000000))
      goto LAB_015a5444;
      if (0x19999999 <
          (((uint)puVar25 / 100) * -0x33333333 >> 1 | ((uint)puVar25 / 100) * -0x80000000))
      goto LAB_015a5330;
      if (0x19999999 <
          (((uint)puVar25 / 1000) * -0x33333333 >> 1 | ((uint)puVar25 / 1000) * -0x80000000))
      goto LAB_015a504c;
      if (0x19999999 <
          (((uint)puVar25 / 10000) * -0x33333333 >> 1 | ((uint)puVar25 / 10000) * -0x80000000))
      goto LAB_015a51fc;
      if (0x19999999 <
          (((uint)puVar25 / 100000) * -0x33333333 >> 1 | ((uint)puVar25 / 100000) * -0x80000000))
      goto LAB_015a5140;
      if (0x19999999 <
          (((uint)puVar25 / 1000000) * -0x33333333 >> 1 | ((uint)puVar25 / 1000000) * -0x80000000))
      goto LAB_015a528c;
      if ((((uint)puVar25 / 10000000) * -0x33333333 >> 1 | ((uint)puVar25 / 10000000) * -0x80000000)
          < 0x1999999a) goto switchD_015a1980_default;
      break;
    default:
switchD_015a1980_default:
      iVar24 = 1;
      local_44._0_2_ = CONCAT11((char)((uint)puVar25 / 100000000),local_44[0]) | 0x3000;
      FUN_015adb98(param_2,puVar10,1);
      goto LAB_015a5c38;
    }
    uVar20 = (uint)puVar25 / 10000000;
    if ((puVar25 < &LAB_00989680) || (iVar16 = 0, (uVar20 + 0x5fff6 & 0x60000) == 0x40000)) {
      iVar16 = 1;
      FUN_015adb98(param_2,&DAT_00412ff6,1);
    }
    if (puVar25 < (undefined1 *)0x5f5e100) {
      local_44._0_2_ = CONCAT11((char)uVar20,local_44[0]) | 0x3000;
      iVar24 = 1;
      uVar15 = 1;
    }
    else {
      puVar10 = (undefined2 *)local_44;
      iVar24 = 2;
      local_44._0_2_ = *(undefined2 *)(&DAT_0040f4ca + uVar20 * 2);
      uVar15 = 2;
    }
    FUN_015adb98(param_2,puVar10,uVar15);
    iVar24 = iVar24 + iVar16;
LAB_015a5c38:
    *local_50 = 4;
    local_50[1] = iVar24;
    return;
  case 0xe:
  case 0x10:
switchD_015a18f8_caseD_e:
    *param_1 = 4;
    param_1[1] = uVar22;
    return;
  }
  bVar17 = (byte)uVar20;
  uVar22 = uVar20 & 0xff;
  if (uVar22 < 100) {
    if (uVar22 < 10) {
      uVar20 = 2;
      goto LAB_015a317c;
    }
    local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 & 0x7f) * 2);
    local_4c[2] = (byte)((ushort)*(undefined2 *)(&DAT_0040f4ca + (uVar20 & 0x7f) * 2) >> 8);
    uVar20 = 1;
  }
  else {
    uVar22 = (uint)((short)uVar22 * 0x29) >> 0xc;
    bVar17 = (byte)uVar22;
    local_4c[1] = (byte)*(undefined2 *)(&DAT_0040f4ca + (uVar20 + uVar22 * -100 & 0xff) * 2);
    local_4c[2] = (byte)((ushort)*(undefined2 *)
                                  (&DAT_0040f4ca + (uVar20 + uVar22 * -100 & 0xff) * 2) >> 8);
    uVar20 = 0;
LAB_015a317c:
    local_4c[uVar20] = bVar17 | 0x30;
  }
  pbVar21 = local_4c + uVar20;
  uVar20 = uVar20 ^ 3;
LAB_015a500c:
  FUN_015adb98(param_2,pbVar21,uVar20);
  *param_1 = 4;
  param_1[1] = uVar20;
  return;
}


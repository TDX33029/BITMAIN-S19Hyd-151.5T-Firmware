// FUN_013208dc @ 013208dc size=5712 calls_out=19 calls_in=10
// strings: explicit panic

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_013208dc(undefined4 *param_1,int param_2,int param_3,uint param_4)

{
  code *pcVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  int iVar7;
  undefined *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  bool bVar14;
  bool bVar15;
  uint *local_70;
  uint local_68;
  undefined4 local_50;
  int local_4c;
  uint local_48;
  uint local_44;
  undefined1 local_40;
  uint local_3c;
  char local_38;
  uint local_34;
  uint local_30;
  int local_2c;
  char local_28;
  
  FUN_0131ecd0(&local_34,param_2,param_4);
  if ((char)local_30 != '\x04') {
    *(char *)(param_1 + 2) = (char)local_30;
    *param_1 = 0x80000000;
    param_1[1] = local_34;
    return;
  }
  FUN_018a7af8();
  local_40 = 4;
  local_44 = local_48;
  FUN_0131ecd0(&local_34,param_2,param_4);
  uVar3 = local_30 & 0xff;
  uVar12 = uVar3;
  if (uVar3 == 4) {
    uVar12 = local_34;
  }
  if (uVar3 != 4 || local_48 != uVar12) {
    FUN_0131ee84(&local_44,&local_34);
                    /* WARNING: Does not return */
    pcVar1 = (code *)software_udf(0xfdee,0x1321f30);
    (*pcVar1)();
  }
  bVar2 = *(byte *)(param_2 + 0x201);
  uVar12 = (uint)bVar2;
  local_68 = local_48;
  switch(uVar12 & 7) {
  case 1:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131eec8(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131eec8(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 8;
          bVar15 = 0xfffffff6 < uVar10;
          bVar14 = uVar10 == 0xfffffff7;
          if (uVar10 < 0xfffffff8) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) goto LAB_01321af0;
          }
          uVar12 = 8 - iVar7;
          if ((iVar7 == 8) || ((uVar12 & 7) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = uVar12 >> 3;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131eec8(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131efc4(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131efc4(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 8;
          bVar15 = 0xfffffff6 < uVar10;
          bVar14 = uVar10 == 0xfffffff7;
          if (uVar10 < 0xfffffff8) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) goto LAB_01321af0;
          }
          uVar12 = 8 - iVar7;
          if ((iVar7 == 8) || ((uVar12 & 7) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = uVar12 >> 3;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131efc4(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    break;
  case 2:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f0c0(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f0c0(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 4;
          bVar15 = 0xfffffffa < uVar10;
          bVar14 = uVar10 == 0xfffffffb;
          if (uVar10 < 0xfffffffc) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 3 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 4) goto LAB_01321af0;
          }
          uVar12 = 4 - iVar7;
          if ((iVar7 == 4) || ((uVar12 & 3) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          uVar6 = (uVar12 & 0x7fffffff) >> 2;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f0c0(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f1bc(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f1bc(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 4;
          bVar15 = 0xfffffffa < uVar10;
          bVar14 = uVar10 == 0xfffffffb;
          if (uVar10 < 0xfffffffc) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 3 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 4) goto LAB_01321af0;
          }
          uVar12 = 4 - iVar7;
          if ((iVar7 == 4) || ((uVar12 & 3) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          uVar6 = (uVar12 & 0x7fffffff) >> 2;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f1bc(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    break;
  case 3:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f2b8(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f2b8(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                       local_4c + uVar3,local_68 - uVar3);
          if (local_28 == '\x04') {
            break;
          }
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 8;
          bVar15 = 0xfffffff6 < uVar10;
          bVar14 = uVar10 == 0xfffffff7;
          if (uVar10 < 0xfffffff8) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          uVar13 = local_30 + uVar3;
          iVar7 = 0;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) goto LAB_01321adc;
          }
          uVar5 = 8 - iVar7;
          if (iVar7 == 8) goto LAB_01321ae0;
          uVar3 = uVar5 * 3 & 7;
          if (2 < uVar3) goto LAB_01321ae0;
          if (2 < uVar3) goto LAB_01321eec;
          uVar3 = uVar5 + uVar10;
          if ((CARRY4(uVar5,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = uVar5 * 3 >> 3;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f2b8(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar5,local_4c + uVar13
                       ,uVar6);
          if (local_28 != '\x04') {
            local_44 = uVar10;
            local_3c = local_2c + uVar10;
            goto LAB_01321d9c;
          }
          local_68 = (local_68 + uVar6) - 3;
        } while (uVar11 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f420(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f420(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                       local_4c + uVar3,local_68 - uVar3);
          if (local_28 == '\x04') {
            break;
          }
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 8;
          bVar15 = 0xfffffff6 < uVar10;
          bVar14 = uVar10 == 0xfffffff7;
          if (uVar10 < 0xfffffff8) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          uVar13 = local_30 + uVar3;
          iVar7 = 0;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) goto LAB_01321adc;
          }
          uVar5 = 8 - iVar7;
          if (iVar7 == 8) goto LAB_01321ae0;
          uVar3 = uVar5 * 3 & 7;
          if (2 < uVar3) goto LAB_01321ae0;
          if (2 < uVar3) {
LAB_01321eec:
            local_70 = &local_34;
            local_34 = uVar5 - uVar3 / 3;
                    /* WARNING: Subroutine does not return */
            FUN_013073dc(&DAT_00533467,0x2b,local_70,&DAT_01ce4f20,&DAT_01ce4e20);
          }
          uVar3 = uVar5 + uVar10;
          if ((CARRY4(uVar5,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = uVar5 * 3 >> 3;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f420(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar5,local_4c + uVar13
                       ,uVar6);
          if (local_28 != '\x04') goto LAB_01321d78;
          local_68 = (local_68 + uVar6) - 3;
        } while (uVar11 < param_4);
      }
    }
    break;
  case 4:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f580(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f580(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 2;
          bVar15 = 0xfffffffc < uVar10;
          bVar14 = uVar10 == 0xfffffffd;
          if (uVar10 < 0xfffffffe) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 1 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 2) goto LAB_01321af0;
          }
          uVar12 = 2 - iVar7;
          if ((iVar7 == 2) || ((uVar12 & 1) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          uVar6 = (uVar12 & 0x3fffffff) >> 1;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f580(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f67c(&local_44,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f67c(&local_34,iVar9,param_3 + uVar11,param_4 - uVar11,local_4c + uVar3,
                       local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d24;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 2;
          bVar15 = 0xfffffffc < uVar10;
          bVar14 = uVar10 == 0xfffffffd;
          if (uVar10 < 0xfffffffe) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 1 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 2) goto LAB_01321af0;
          }
          uVar12 = 2 - iVar7;
          if ((iVar7 == 2) || ((uVar12 & 1) != 0)) goto LAB_01321af4;
          uVar3 = uVar12 + uVar10;
          uVar6 = (uVar12 & 0x3fffffff) >> 1;
          if ((CARRY4(uVar12,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f67c(&local_34,iVar9,param_3 + uVar10,uVar12,local_4c + uVar13,uVar6);
          if (local_28 != '\x04') goto LAB_01321d58;
          local_68 = (local_68 + uVar6) - 1;
        } while (uVar11 < param_4);
      }
    }
    break;
  case 5:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131f778(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131f778(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                       local_4c + uVar3,local_68 - uVar3);
          if (local_28 == '\x04') break;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 8;
          bVar15 = 0xfffffff6 < uVar10;
          bVar14 = uVar10 == 0xfffffff7;
          if (uVar10 < 0xfffffff8) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (!(!bVar15 || bVar14)) goto LAB_01321b18;
          uVar13 = local_30 + uVar3;
          iVar7 = 0;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 8) goto LAB_01321adc;
          }
          uVar5 = 8 - iVar7;
          if ((iVar7 == 8) || (4 < (uVar5 * 5 & 7))) goto LAB_01321ae0;
          uVar3 = uVar5 + uVar10;
          if ((CARRY4(uVar5,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = uVar5 * 5 >> 3;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131f778(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar5,local_4c + uVar13
                       ,uVar6);
          if (local_28 != '\x04') goto LAB_01321d78;
          local_68 = (local_68 + uVar6) - 5;
        } while (uVar11 < param_4);
      }
      local_44 = local_68;
      local_28 = '\x04';
      goto LAB_01321d9c;
    }
    if (*(char *)(param_2 + 0x200) < '\0') {
      FUN_0131f8e0(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
      goto LAB_01321da0;
    }
    if (param_4 != 0) {
      uVar11 = 0;
      uVar3 = 0;
      do {
        if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
        FUN_0131f8e0(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                     local_4c + uVar3,local_68 - uVar3);
        if (local_28 == '\x04') goto LAB_01321d40;
        uVar10 = local_34 + uVar11;
        uVar11 = uVar10 + 8;
        bVar15 = 0xfffffff6 < uVar10;
        bVar14 = uVar10 == 0xfffffff7;
        if (uVar10 < 0xfffffff8) {
          bVar15 = param_4 <= uVar11;
          bVar14 = uVar11 == param_4;
        }
        if (bVar15 && !bVar14) goto LAB_01321b18;
        uVar13 = local_30 + uVar3;
        iVar7 = 0;
        while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 7 + uVar10) - iVar7)) == -0x7e) {
          iVar7 = iVar7 + 1;
          if (iVar7 == 8) goto LAB_01321adc;
        }
        uVar5 = 8 - iVar7;
        if ((iVar7 == 8) || (4 < (uVar5 * 5 & 7))) goto LAB_01321ae0;
        uVar3 = uVar5 + uVar10;
        if ((CARRY4(uVar5,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
        uVar6 = uVar5 * 5 >> 3;
        uVar3 = uVar6 + uVar13;
        if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
        FUN_0131f8e0(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar5,local_4c + uVar13,
                     uVar6);
        if (local_28 != '\x04') goto LAB_01321d78;
        local_68 = (local_68 + uVar6) - 5;
      } while (uVar11 < param_4);
    }
    goto LAB_01321d48;
  case 6:
    iVar9 = param_2 + 0x100;
    if ((bVar2 & 8) == 0) {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131fa40(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131fa40(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                       local_4c + uVar3,local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d40;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 4;
          bVar15 = 0xfffffffa < uVar10;
          bVar14 = uVar10 == 0xfffffffb;
          if (uVar10 < 0xfffffffc) {
            bVar15 = param_4 <= uVar11;
            bVar14 = uVar11 == param_4;
          }
          if (bVar15 && !bVar14) goto LAB_01321b18;
          iVar7 = 0;
          uVar13 = local_30 + uVar3;
          while (*(char *)(iVar9 + (uint)*(byte *)((param_3 + 3 + uVar10) - iVar7)) == -0x7e) {
            iVar7 = iVar7 + 1;
            if (iVar7 == 4) {
              uVar6 = 0;
              goto LAB_01321d0c;
            }
          }
          uVar6 = 4 - iVar7;
          if ((iVar7 == 4) || ((uVar6 * 6 & 6) == 6)) {
LAB_01321d0c:
            local_3c = uVar6 + uVar10;
            local_44 = uVar10;
            goto LAB_01321d18;
          }
          uVar3 = uVar6 + uVar10;
          if ((CARRY4(uVar6,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar5 = uVar6 * 6 >> 3;
          uVar3 = uVar5 + uVar13;
          if ((CARRY4(uVar5,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131fa40(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar6,local_4c + uVar13
                       ,uVar5);
          if (local_28 != '\x04') {
            local_44 = uVar10;
            local_3c = local_2c + uVar10;
            goto LAB_01321e10;
          }
          local_68 = (local_68 + uVar5) - 3;
        } while (uVar11 < param_4);
      }
    }
    else {
      if (*(char *)(param_2 + 0x200) < '\0') {
        FUN_0131fbb0(&local_44,(uVar12 & 0x1f) >> 4,iVar9,param_3,param_4,local_4c,local_48);
        goto LAB_01321da0;
      }
      if (param_4 != 0) {
        uVar11 = 0;
        uVar3 = 0;
        do {
          if ((local_48 < local_68) || (local_68 < uVar3)) goto LAB_01321e54;
          FUN_0131fbb0(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar11,param_4 - uVar11,
                       local_4c + uVar3,local_68 - uVar3);
          if (local_28 == '\x04') goto LAB_01321d40;
          uVar10 = local_34 + uVar11;
          uVar11 = uVar10 + 4;
          if ((0xfffffffb < uVar10) || (param_4 < uVar11)) goto LAB_01321b18;
          uVar6 = 0;
          uVar13 = local_30 + uVar3;
          while (uVar3 = (uint)*(byte *)(iVar9 + (uint)*(byte *)((param_3 + 3 + uVar10) - uVar6)),
                uVar3 == 0x82) {
            uVar6 = uVar6 + 1;
            if (uVar6 == 4) goto LAB_01321adc;
          }
          uVar5 = 4 - uVar6;
          bVar14 = uVar6 == 4;
          if (!bVar14) {
            uVar6 = uVar5 * 3;
            uVar3 = uVar5 * 6 & 6;
          }
          if (bVar14 || uVar3 == 6) goto LAB_01321ae0;
          uVar3 = uVar5 + uVar10;
          if ((CARRY4(uVar5,uVar10)) || (param_4 < uVar3)) goto LAB_01321ed0;
          uVar6 = (uVar6 & 0x7fffffff) >> 2;
          uVar3 = uVar6 + uVar13;
          if ((CARRY4(uVar6,uVar13)) || (local_48 < uVar3)) goto LAB_01321f3c;
          FUN_0131fbb0(&local_34,(uVar12 & 0x1f) >> 4,iVar9,param_3 + uVar10,uVar5,local_4c + uVar13
                       ,uVar6);
          if (local_28 != '\x04') goto LAB_01321d78;
          local_68 = (local_68 + uVar6) - 3;
        } while (uVar11 < param_4);
      }
    }
LAB_01321d48:
    local_28 = '\x04';
    local_44 = local_68;
    goto LAB_01321d9c;
  default:
                    /* WARNING: Subroutine does not return */
    FUN_012fb0ec("explicit panic",0xe,&DAT_01ce4eb0);
  }
LAB_01321d30:
  local_44 = local_68;
  local_28 = '\x04';
  goto LAB_01321d9c;
LAB_01321d40:
  local_68 = local_68;
  goto LAB_01321d48;
LAB_01321adc:
  uVar5 = 0;
LAB_01321ae0:
  local_3c = uVar5 + uVar10;
  local_44 = uVar10;
LAB_01321d18:
  local_28 = '\x03';
  goto LAB_01321d9c;
LAB_01321d78:
  local_44 = uVar10;
  local_3c = local_2c + uVar10;
LAB_01321e10:
  goto LAB_01321d9c;
LAB_01321e54:
  puVar8 = &DAT_01ce4e00;
  goto LAB_01321b24;
LAB_01321d24:
  goto LAB_01321d30;
LAB_01321b18:
  puVar8 = &DAT_01ce4e10;
  local_48 = param_4;
  local_68 = uVar11;
  uVar3 = uVar10;
  goto LAB_01321b24;
LAB_01321ed0:
  puVar8 = &DAT_01ce4e30;
  local_48 = param_4;
  local_68 = uVar3;
  uVar3 = uVar10;
  goto LAB_01321b24;
LAB_01321d58:
  local_44 = uVar10;
  local_3c = local_2c + uVar10;
  goto LAB_01321d9c;
LAB_01321f3c:
  puVar8 = &DAT_01ce4e40;
  local_68 = uVar3;
  uVar3 = uVar13;
LAB_01321b24:
                    /* WARNING: Subroutine does not return */
  FUN_012faff4(uVar3,local_68,local_48,puVar8);
LAB_01321af0:
  uVar12 = 0;
LAB_01321af4:
  local_3c = uVar12 + uVar10;
  local_28 = '\x03';
  local_44 = uVar10;
LAB_01321d9c:
  local_38 = local_28;
LAB_01321da0:
  puVar4 = &local_44;
  if (local_38 != '\x04') {
    puVar4 = &local_3c;
  }
  uVar12 = *puVar4;
  if (local_38 == '\x04') {
    if (uVar12 <= local_48) {
      local_48 = uVar12;
    }
    *param_1 = local_50;
    param_1[1] = local_4c;
    param_1[2] = local_48;
    return;
  }
  *(char *)(param_1 + 2) = local_38;
  *param_1 = 0x80000000;
  param_1[1] = uVar12;
  FUN_0134bd64(local_50,local_4c);
  return;
}


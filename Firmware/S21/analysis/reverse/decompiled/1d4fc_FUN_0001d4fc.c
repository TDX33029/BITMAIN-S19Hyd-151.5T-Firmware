// FUN_0001d4fc @ 0001d4fc  size=1180
// callers: [FUN_00050ef8, FUN_00027e60, FUN_00055518, FUN_0003dba0]

undefined4 FUN_0001d4fc(int param_1,undefined2 *param_2)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  char *pcVar7;
  undefined4 uVar8;
  int *piVar9;
  int *piVar10;
  int iVar11;
  int iVar12;
  undefined4 *puVar13;
  undefined4 *puVar14;
  int iVar15;
  int *piVar16;
  undefined4 local_20dc;
  uint local_20d8;
  undefined4 local_20d4;
  undefined1 local_20d0;
  undefined4 local_20cc;
  undefined4 local_20c8;
  undefined4 local_20c4;
  undefined4 local_20c0;
  undefined2 local_20bc;
  undefined4 local_20ba;
  undefined4 local_20b6;
  undefined1 local_20b2;
  undefined2 local_20b1;
  undefined1 local_20af;
  char local_20ae [134];
  undefined4 auStack_2028 [6];
  undefined4 auStack_2010 [2043];
  
  memset(local_20ae + 6,0,0x80);
  local_20dc = 0x80;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (DAT_000be63c < 5) {
      return 0xffffffff;
    }
    snprintf((char *)auStack_2028,0x2000,"eeprom is not init, chain = %d\n",param_1);
    FUN_0004948c(4,auStack_2028,0);
    return 0xffffffff;
  }
  if (param_2 != (undefined2 *)0x0) {
    iVar15 = *(int *)(DAT_000c0410 + param_1 * 4);
    iVar3 = (**(code **)(iVar15 + 0x18))(iVar15);
    if ((iVar3 == 5) || (iVar3 = (**(code **)(iVar15 + 0x18))(iVar15), iVar3 == 6)) {
      uVar2 = (**(code **)(iVar15 + 0xfc))(iVar15);
      *param_2 = uVar2;
      piVar9 = (int *)(param_2 + 4);
      uVar2 = (**(code **)(iVar15 + 0x104))(iVar15);
      param_2[1] = uVar2;
      uVar5 = 0;
      uVar1 = (**(code **)(iVar15 + 0x10c))(iVar15);
      *(undefined1 *)(param_2 + 2) = uVar1;
      iVar3 = (**(code **)(iVar15 + 0x11c))(iVar15);
      *(bool *)(param_2 + 0x204) = iVar3 == 1;
      (**(code **)(iVar15 + 0x114))(iVar15,local_20ae + 6,&local_20dc);
      do {
        if ((uVar5 & 1) == 0) {
          uVar6 = (byte)local_20ae[((int)uVar5 >> 1) + 6] & 0xf;
        }
        else {
          uVar6 = (uint)((byte)local_20ae[((int)uVar5 >> 1) + 6] >> 4);
        }
        if ((ushort)param_2[1] == 0) {
          iVar3 = (**(code **)(iVar15 + 0xcc))(iVar15);
          *piVar9 = iVar3;
        }
        else {
          *piVar9 = *(byte *)(param_2 + 2) * uVar6 + (uint)(ushort)param_2[1];
        }
        uVar5 = uVar5 + 1;
        piVar9 = piVar9 + 1;
      } while (uVar5 != 0x100);
    }
    else {
      iVar3 = (**(code **)(iVar15 + 0x18))(iVar15);
      if (iVar3 == 4) {
        puVar14 = (undefined4 *)(param_2 + 2);
        do {
          uVar8 = (**(code **)(iVar15 + 0xcc))(iVar15);
          puVar14 = puVar14 + 1;
          *puVar14 = uVar8;
        } while (puVar14 != (undefined4 *)(param_2 + 0x202));
      }
    }
    iVar3 = FUN_0002a514();
    if (iVar3 != 0) {
      piVar10 = (int *)(param_2 + 2);
      piVar16 = (int *)(param_2 + 4);
      piVar9 = piVar10 + iVar3;
      iVar4 = 0;
      do {
        piVar10 = piVar10 + 1;
        iVar4 = iVar4 + *piVar10;
      } while (piVar10 != piVar9);
      iVar12 = 0;
      uVar5 = FUN_000983e0(iVar4,iVar3);
      do {
        uVar6 = (**(code **)(iVar15 + 0xcc))(iVar15);
        iVar12 = iVar12 + 1;
        if (uVar5 < uVar6) {
          iVar4 = (**(code **)(iVar15 + 0xcc))(iVar15);
          *piVar16 = (*piVar16 - uVar5) + iVar4;
        }
        piVar16 = piVar16 + 1;
      } while (iVar3 != iVar12);
    }
    local_20d0 = 0;
    local_20d4 = 0;
    FUN_0001d438(param_1,&local_20d4,5);
    local_20cc = 0;
    local_20d8 = 0;
    local_20c8 = 0;
    local_20c4 = 0;
    local_20c0 = 0;
    FUN_0001d2f0(param_1,&local_20d8);
    FUN_0001d368(param_1,&local_20cc,0x10);
    local_20ae[0] = '\0';
    local_20ae[1] = '\0';
    local_20ae[2] = '\0';
    local_20ae[3] = '\0';
    local_20ba = local_20cc;
    local_20b6 = local_20c8;
    local_20b1 = DAT_0009a338;
    local_20ae[4] = '\0';
    local_20ae[5] = '\0';
    local_20b2 = (undefined1)local_20c4;
    local_20af = DAT_0009a33a;
    local_20bc = (undefined2)local_20d4;
    snprintf(local_20ae,2,"%x",local_20d8 & 0xff);
    if (4 < DAT_000be63c) {
      snprintf((char *)auStack_2028,0x2000,"chip_tech_ft_bin:%s",(char *)&local_20bc);
      FUN_0004948c(4,auStack_2028,0);
    }
    auStack_2028[0] = DAT_00099dc0;
    auStack_2028[1] = DAT_00099dc4;
    auStack_2028[2] = DAT_00099dc8;
    auStack_2028[3] = DAT_00099dcc;
    auStack_2028[4] = DAT_00099dd0;
    auStack_2028[5] = DAT_00099dd4;
    puVar14 = auStack_2028;
    do {
      puVar13 = puVar14 + 1;
      if (((char *)*puVar14 != (char *)0x0) &&
         (iVar15 = strcmp((char *)&local_20bc,(char *)*puVar14), iVar15 == 0)) {
        return 0;
      }
      puVar14 = puVar13;
    } while (auStack_2010 != puVar13);
    DAT_000c0414 = 10;
    if (iVar3 == 0) {
      pcVar7 = strstr((char *)&local_20bc,"BCF3V01B3C1BIN3");
      if (pcVar7 != (char *)0x0) {
        return 0;
      }
      iVar4 = 0x14;
      iVar15 = 0;
    }
    else {
      piVar10 = (int *)(param_2 + 2);
      uVar6 = 0;
      uVar5 = 0;
      piVar9 = piVar10;
      iVar15 = 0;
      do {
        piVar9 = piVar9 + 1;
        iVar4 = iVar15 + 1;
        if (iVar15 < 0x2d) {
          uVar5 = uVar5 + *piVar9;
        }
        else {
          uVar6 = uVar6 + *piVar9;
        }
        iVar15 = iVar4;
      } while (iVar3 != iVar4);
      iVar15 = uVar5 / 0x2d - uVar6 / 0x28;
      pcVar7 = strstr((char *)&local_20bc,"BCF3V01B3C1BIN3");
      if (pcVar7 == (char *)0x0) {
        iVar4 = 0x14;
      }
      else {
        iVar4 = 0x28;
      }
      if (iVar4 <= iVar15) {
        piVar9 = piVar10 + iVar3;
        do {
          piVar10 = piVar10 + 1;
          *piVar10 = *piVar10 + 10;
        } while (piVar9 != piVar10);
        return 0;
      }
    }
    if (iVar3 != 0) {
      piVar9 = (int *)(param_2 + 2);
      iVar15 = (iVar4 - iVar15) / 2;
      iVar4 = 0;
      do {
        piVar9 = piVar9 + 1;
        iVar11 = iVar4 + 1;
        iVar12 = iVar15;
        if (0x2c < iVar4) {
          iVar12 = -iVar15;
        }
        *piVar9 = iVar12 + 10 + *piVar9;
        iVar4 = iVar11;
      } while (iVar3 != iVar11);
    }
  }
  return 0;
}



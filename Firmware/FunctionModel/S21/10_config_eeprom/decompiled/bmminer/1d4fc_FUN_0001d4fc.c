// FUN_0001d4fc @ 0001d4fc  size=1180  callers=4
// program: bmminer


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
  char **ppcVar14;
  char **ppcVar13;
  undefined4 *puVar15;
  int iVar16;
  int *piVar17;
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
  char *apcStack_2028 [6];
  char *apcStack_2010 [2043];
  
  memset(local_20ae + 6,0,0x80);
  local_20dc = 0x80;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (DAT_000be63c < 5) {
      return 0xffffffff;
    }
    snprintf((char *)apcStack_2028,0x2000,"eeprom is not init, chain = %d\n",param_1);
    FUN_0004948c(4,apcStack_2028,0);
    return 0xffffffff;
  }
  if (param_2 != (undefined2 *)0x0) {
    iVar16 = *(int *)(DAT_000c0410 + param_1 * 4);
    iVar3 = (**(code **)(iVar16 + 0x18))(iVar16);
    if ((iVar3 == 5) || (iVar3 = (**(code **)(iVar16 + 0x18))(iVar16), iVar3 == 6)) {
      uVar2 = (**(code **)(iVar16 + 0xfc))(iVar16);
      *param_2 = uVar2;
      piVar9 = (int *)(param_2 + 4);
      uVar2 = (**(code **)(iVar16 + 0x104))(iVar16);
      param_2[1] = uVar2;
      uVar5 = 0;
      uVar1 = (**(code **)(iVar16 + 0x10c))(iVar16);
      *(undefined1 *)(param_2 + 2) = uVar1;
      iVar3 = (**(code **)(iVar16 + 0x11c))(iVar16);
      *(bool *)(param_2 + 0x204) = iVar3 == 1;
      (**(code **)(iVar16 + 0x114))(iVar16,local_20ae + 6,&local_20dc);
      do {
        if ((uVar5 & 1) == 0) {
          uVar6 = (byte)local_20ae[((int)uVar5 >> 1) + 6] & 0xf;
        }
        else {
          uVar6 = (uint)((byte)local_20ae[((int)uVar5 >> 1) + 6] >> 4);
        }
        if ((ushort)param_2[1] == 0) {
          iVar3 = (**(code **)(iVar16 + 0xcc))(iVar16);
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
      iVar3 = (**(code **)(iVar16 + 0x18))(iVar16);
      if (iVar3 == 4) {
        puVar15 = (undefined4 *)(param_2 + 2);
        do {
          uVar8 = (**(code **)(iVar16 + 0xcc))(iVar16);
          puVar15 = puVar15 + 1;
          *puVar15 = uVar8;
        } while (puVar15 != (undefined4 *)(param_2 + 0x202));
      }
    }
    iVar3 = FUN_0002a514();
    if (iVar3 != 0) {
      piVar10 = (int *)(param_2 + 2);
      piVar17 = (int *)(param_2 + 4);
      piVar9 = piVar10 + iVar3;
      iVar4 = 0;
      do {
        piVar10 = piVar10 + 1;
        iVar4 = iVar4 + *piVar10;
      } while (piVar10 != piVar9);
      iVar12 = 0;
      uVar5 = FUN_000983e0(iVar4,iVar3);
      do {
        uVar6 = (**(code **)(iVar16 + 0xcc))(iVar16);
        iVar12 = iVar12 + 1;
        if (uVar5 < uVar6) {
          iVar4 = (**(code **)(iVar16 + 0xcc))(iVar16);
          *piVar17 = (*piVar17 - uVar5) + iVar4;
        }
        piVar17 = piVar17 + 1;
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
    local_20b1 = 0x4942;
    local_20ae[4] = '\0';
    local_20ae[5] = '\0';
    local_20b2 = (undefined1)local_20c4;
    local_20af = 0x4e;
    local_20bc = (undefined2)local_20d4;
    snprintf(local_20ae,2,"%x",local_20d8 & 0xff);
    if (4 < DAT_000be63c) {
      snprintf((char *)apcStack_2028,0x2000,"chip_tech_ft_bin:%s",(char *)&local_20bc);
      FUN_0004948c(4,apcStack_2028,0);
    }
    apcStack_2028[0] = "PAF2V01B3C2BIN2";
    apcStack_2028[1] = "AAF1V01B1C2BIN2";
    apcStack_2028[2] = "AAF1V01B5C2BIN4";
    apcStack_2028[3] = "BCF1V01B2C2BIN3";
    apcStack_2028[4] = "BCF1V01B5C2BIN4";
    apcStack_2028[5] = "BCF1V01B1C2BIN4";
    ppcVar13 = apcStack_2028;
    do {
      ppcVar14 = ppcVar13 + 1;
      if ((*ppcVar13 != (char *)0x0) &&
         (iVar16 = strcmp((char *)&local_20bc,*ppcVar13), iVar16 == 0)) {
        return 0;
      }
      ppcVar13 = ppcVar14;
    } while (apcStack_2010 != ppcVar14);
    DAT_000c0414 = 10;
    if (iVar3 == 0) {
      pcVar7 = strstr((char *)&local_20bc,"BCF3V01B3C1BIN3");
      if (pcVar7 != (char *)0x0) {
        return 0;
      }
      iVar4 = 0x14;
      iVar16 = 0;
    }
    else {
      piVar10 = (int *)(param_2 + 2);
      uVar6 = 0;
      uVar5 = 0;
      piVar9 = piVar10;
      iVar16 = 0;
      do {
        piVar9 = piVar9 + 1;
        iVar4 = iVar16 + 1;
        if (iVar16 < 0x2d) {
          uVar5 = uVar5 + *piVar9;
        }
        else {
          uVar6 = uVar6 + *piVar9;
        }
        iVar16 = iVar4;
      } while (iVar3 != iVar4);
      iVar16 = uVar5 / 0x2d - uVar6 / 0x28;
      pcVar7 = strstr((char *)&local_20bc,"BCF3V01B3C1BIN3");
      if (pcVar7 == (char *)0x0) {
        iVar4 = 0x14;
      }
      else {
        iVar4 = 0x28;
      }
      if (iVar4 <= iVar16) {
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
      iVar16 = (iVar4 - iVar16) / 2;
      iVar4 = 0;
      do {
        piVar9 = piVar9 + 1;
        iVar11 = iVar4 + 1;
        iVar12 = iVar16;
        if (0x2c < iVar4) {
          iVar12 = -iVar16;
        }
        *piVar9 = iVar12 + 10 + *piVar9;
        iVar4 = iVar11;
      } while (iVar3 != iVar11);
    }
  }
  return 0;
}


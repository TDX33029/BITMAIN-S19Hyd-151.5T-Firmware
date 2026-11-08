// FUN_017a3bd4 @ 017a3bd4 size=1232 calls_out=6 calls_in=1
// strings: 

uint FUN_017a3bd4(int param_1,int *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                 uint param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9,int param_10,
                 undefined2 *param_11,int param_12,int param_13,uint param_14,int param_15,
                 undefined4 *param_16,undefined4 *param_17,int param_18)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  char *pcVar8;
  undefined2 *puVar9;
  uint uVar10;
  int local_44;
  uint local_40;
  int local_3c;
  
  iVar7 = (int)param_11 + 3;
  if (param_14 == 0) {
    if (param_6 < 0x400) {
      local_3c = 3;
      goto LAB_017a3de8;
    }
    local_40 = (0x3fff < param_6) + 4;
    *param_16 = 0;
    puVar9 = (undefined2 *)(iVar7 + local_40);
    local_3c = 3;
LAB_017a3e08:
    iVar3 = *param_2;
    if (iVar3 == 0) goto LAB_017a3c68;
LAB_017a3e14:
    if (iVar3 == 1) {
      uVar2 = FUN_017a2750(iVar7,param_12 + -3,param_5,param_6);
    }
    else {
      if (iVar3 == 2) {
        uVar2 = param_14 & 1;
      }
      else {
        uVar2 = 0;
      }
      if (uVar2 == 0) {
        local_44 = 0;
      }
      else {
        FUN_016dd1aa(puVar9,param_2 + 1,param_2[0x21]);
        local_44 = param_2[0x21];
        puVar9 = (undefined2 *)((int)puVar9 + local_44);
      }
      if (local_40 == 3) {
        iVar3 = FUN_01796ee8(puVar9,(int)param_11 + (param_12 - (int)puVar9),param_5,param_6,param_1
                             ,param_13 != 0);
      }
      else {
        iVar3 = FUN_01796efc();
      }
      if (0xffffff86 < iVar3 - 1U && iVar3 != -0x78) {
        return 0;
      }
      uVar2 = iVar3 + local_44;
      if (uVar2 < param_6) {
        uVar10 = 0;
      }
      else {
        uVar10 = (param_14 ^ 1) & 1;
      }
      if ((uVar10 != 0) || ((0x3ff < uVar2 && (local_40 < (0x3fff < uVar2) + 4))))
      goto LAB_017a3c68;
      iVar5 = param_6 * 0x10;
      if (local_40 == 4) {
        *(uint *)((int)param_11 + 3) = iVar5 + 8 + local_3c + uVar2 * 0x40000;
      }
      else if (local_40 == 5) {
        *(uint *)((int)param_11 + 3) = iVar5 + 0xc + local_3c + uVar2 * 0x400000;
        *(char *)((int)param_11 + 7) = (char)(uVar2 >> 10);
      }
      else {
        iVar5 = local_3c + iVar5 + uVar2 * 0x4000;
        *(short *)((int)param_11 + 3) = (short)iVar5;
        *(char *)((int)param_11 + 5) = (char)((uint)iVar5 >> 0x10);
      }
      uVar2 = (int)puVar9 + (iVar3 - iVar7);
      *param_16 = 1;
    }
  }
  else {
    if (param_6 < 0x338) {
      local_3c = *param_2;
LAB_017a3de8:
      puVar9 = param_11 + 3;
      *param_16 = 0;
      if (param_6 != 0) {
        local_40 = 3;
        goto LAB_017a3e08;
      }
    }
    else {
      local_3c = *param_2;
      *param_16 = 0;
      iVar3 = *param_2;
      local_40 = (0x3f37 < param_6) + 4;
      puVar9 = (undefined2 *)(iVar7 + local_40);
      if (iVar3 != 0) goto LAB_017a3e14;
    }
LAB_017a3c68:
    uVar2 = FUN_017a2690(iVar7,param_12 + -3,param_5,param_6);
  }
  if (0xffffff88 < uVar2) {
    return uVar2;
  }
  if (uVar2 != 0) {
    pcVar4 = (char *)(iVar7 + uVar2);
    uVar10 = *(uint *)(param_10 + 4);
    *param_17 = 0;
    if ((int)param_11 + (param_12 - (int)pcVar4) < 4) {
      return 0xffffffba;
    }
    if (param_4 < 0x80) {
      *(char *)(iVar7 + uVar2) = (char)param_4;
      pcVar8 = pcVar4 + 1;
      pcVar6 = pcVar8;
      if (param_4 == 0) goto LAB_017a3d9c;
    }
    else if (param_4 < 0x7f00) {
      pcVar4[1] = (char)param_4;
      *pcVar4 = (char)(param_4 >> 8) + -0x80;
      pcVar6 = pcVar4 + 2;
    }
    else {
      *pcVar4 = -1;
      *(short *)(pcVar4 + 1) = (short)param_4 + -0x7f00;
      pcVar6 = pcVar4 + 3;
    }
    bVar1 = 0x19 < uVar10;
    pcVar8 = pcVar6 + 1;
    if (param_15 == 0) {
      *pcVar6 = -4;
      uVar2 = FUN_017a32bc(pcVar8,(int)param_11 + (param_12 - (int)pcVar8),param_1 + 0x70c,param_8,
                           param_1 + 0x408,param_9,param_1 + 0xcb8,param_7,param_3,param_4,bVar1,
                           param_13);
      if (0xffffff88 < uVar2) {
        return uVar2;
      }
      pcVar8 = pcVar8 + uVar2;
    }
    else {
      *pcVar6 = (char)param_2[0x23] * '\x10' + (char)param_2[0x22] * '@' +
                (char)param_2[0x24] * '\x04';
      FUN_016dd1aa(pcVar8,param_2 + 0x25,param_2[0x47]);
      pcVar8 = pcVar8 + param_2[0x47];
      uVar2 = FUN_017a32bc(pcVar8,(int)param_11 + (param_12 - (int)pcVar8),param_1 + 0x70c,param_8,
                           param_1 + 0x408,param_9,param_1 + 0xcb8,param_7,param_3,param_4,bVar1,
                           param_13);
      if (0xffffff88 < uVar2) {
        return uVar2;
      }
      pcVar8 = pcVar8 + uVar2;
      if ((param_2[0x48] != 0) && (uVar2 + param_2[0x48] < 4)) {
        return 0;
      }
    }
    if (3 < (int)pcVar8 - (int)pcVar6) {
      uVar2 = (int)pcVar8 - (int)pcVar4;
      *param_17 = 1;
      if (0xffffff88 < uVar2) {
        return uVar2;
      }
      if (uVar2 != 0) {
LAB_017a3d9c:
        iVar7 = param_18 + ((int)pcVar8 - (int)param_11) * 8 + -0x14;
        *param_11 = (short)iVar7;
        *(char *)(param_11 + 1) = (char)((uint)iVar7 >> 0x10);
        return (int)pcVar8 - (int)param_11;
      }
    }
  }
  return 0;
}


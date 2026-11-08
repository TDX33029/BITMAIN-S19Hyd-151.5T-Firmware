// FUN_0001ccc8 @ 0001ccc8  size=712  callers=1
// program: bmminer


int FUN_0001ccc8(int param_1,undefined2 *param_2)

{
  int iVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  byte bVar5;
  char *__format;
  uint uVar6;
  uint uVar7;
  int iVar8;
  uint uVar9;
  uint *puVar10;
  undefined4 local_21b0;
  undefined1 local_21ac [4];
  byte local_21a8 [128];
  undefined1 auStack_2128 [256];
  char acStack_2028 [8196];
  
  memset(local_21a8,0,0x80);
  memset(auStack_2128,0,0x100);
  iVar8 = DAT_000c0410;
  local_21b0 = 0x80;
  if ((DAT_000c0410 == 0) || (*(char *)(DAT_000c0410 + 0x1c) == '\0')) {
    if (4 < DAT_000be63c) {
      snprintf(acStack_2028,0x2000,"eeprom is not init, chain = %d\n",param_1);
      FUN_0004948c(4,acStack_2028,0);
      return -1;
    }
  }
  else {
    if (param_2 == (undefined2 *)0x0) {
      return 0;
    }
    memset(local_21a8,0,0x80);
    iVar8 = *(int *)(iVar8 + param_1 * 4);
    (**(code **)(iVar8 + 0x100))(iVar8,*param_2);
    (**(code **)(iVar8 + 0x108))(iVar8,param_2[1]);
    (**(code **)(iVar8 + 0x110))(iVar8,*(undefined1 *)(param_2 + 2));
    uVar4 = *(uint *)(param_2 + 4);
    uVar9 = (uint)(ushort)param_2[1];
    if (uVar4 < uVar9) {
LAB_0001cdfc:
      if (DAT_000be63c < 4) {
        return -1;
      }
      __format = "freq value[%d] less than freq base[%d] for chain %d.\n";
    }
    else {
      bVar2 = *(byte *)(param_2 + 2);
      uVar7 = uVar9 + (uint)bVar2 * 0x10;
      if (uVar4 < uVar7) {
        puVar10 = (uint *)(param_2 + 4);
        uVar6 = 0;
        do {
          bVar3 = FUN_000983e0(uVar4 - uVar9,(uint)bVar2);
          iVar1 = (int)uVar6 >> 1;
          bVar5 = bVar3 << 4;
          uVar4 = uVar6 & 1;
          uVar6 = uVar6 + 1;
          if (uVar4 == 0) {
            bVar5 = bVar3 & 0xf;
          }
          local_21a8[iVar1] = local_21a8[iVar1] | bVar5;
          if (uVar6 == 0x100) {
            (**(code **)(iVar8 + 0x118))(iVar8,local_21a8,&local_21b0);
            (**(code **)(iVar8 + 0x120))(iVar8,*(char *)(param_2 + 0x204) != '\0');
            local_21b0 = 0x100;
            (**(code **)(iVar8 + 0x14))(iVar8,auStack_2128,&local_21b0,local_21ac);
            iVar8 = FUN_0006a270(param_1,local_21ac[0],auStack_2128,local_21b0);
            if (iVar8 == 0) {
              return 0;
            }
            if (DAT_000be63c < 4) {
              return iVar8;
            }
            snprintf(acStack_2028,0x2000,"Write sweep result fail for chain %d.\n",param_1);
            FUN_0004948c(3,acStack_2028,0);
            return iVar8;
          }
          puVar10 = puVar10 + 1;
          uVar4 = *puVar10;
          if (uVar4 < uVar9) goto LAB_0001cdfc;
        } while (uVar4 < uVar7);
      }
      if (DAT_000be63c < 4) {
        return -1;
      }
      __format = "freq value[%d] greater than freq max[%d] for chain %d.\n";
      uVar9 = uVar7;
    }
    snprintf(acStack_2028,0x2000,__format,uVar4,uVar9,param_1);
    FUN_0004948c(3,acStack_2028,0);
  }
  return -1;
}


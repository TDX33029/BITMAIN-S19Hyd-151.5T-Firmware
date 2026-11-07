// FUN_0072f5cc @ 0072f5cc size=580 calls_out=1 calls_in=1
// strings: Invalid ELF symbol table data | Invalid ELF symtab_shndx data | Invalid ELF symtab_shndx data | Invalid ELF symtab_shndx data | Invalid ELF string section type | Invalid ELF section index

void FUN_0072f5cc(undefined4 *param_1,undefined4 param_2,undefined4 param_3,int param_4,uint param_5
                 ,int param_6,int param_7)

{
  uint uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  char *pcVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  int iVar10;
  undefined4 uVar11;
  uint uVar12;
  bool bVar13;
  int local_4c;
  uint local_3c;
  int local_30;
  undefined4 local_2c;
  uint local_28;
  
  FUN_0072dff0(&local_30,param_7,param_2,param_3);
  uVar2 = local_2c;
  if ((local_30 != 0) || ((local_28 & 0xf) != 0)) {
    param_1[2] = 0x1d;
    *param_1 = 0;
    param_1[1] = "Invalid ELF symbol table data";
    return;
  }
  uVar1 = local_28 >> 4;
  uVar8 = *(uint *)(param_7 + 0x18);
  if (uVar8 == 0) {
    uVar4 = 0;
    local_3c = 0;
    if (param_5 == 0) {
      uVar3 = 1;
      local_4c = 0;
      uVar12 = 0;
      uVar11 = 0;
      iVar5 = 0;
    }
    else {
      uVar12 = 0;
      uVar11 = 0;
      local_4c = 0;
LAB_0072f6e8:
      uVar4 = 0;
      iVar5 = 0;
      iVar9 = 0;
      iVar10 = param_5 * 0x28;
      uVar3 = 1;
      do {
        iVar7 = *(int *)(param_4 + 4);
        bVar13 = iVar7 == 0x12;
        if (bVar13) {
          iVar7 = *(int *)(param_4 + 0x18);
        }
        if (bVar13 && iVar7 == param_6) {
          FUN_0072dff0(&local_30,param_4,param_2,param_3);
          if (local_30 != 0) {
            uVar4 = 0x1d;
            pcVar6 = "Invalid ELF symtab_shndx data";
            goto LAB_0072f7fc;
          }
          uVar4 = 0x1d;
          bVar13 = (local_28 & 3) == 0;
          if (bVar13) {
            uVar4 = local_28 >> 2;
          }
          pcVar6 = "Invalid ELF symtab_shndx data";
          uVar3 = local_2c;
          iVar5 = iVar9;
          if (!bVar13) goto LAB_0072f7fc;
        }
        param_4 = param_4 + 0x28;
        iVar9 = iVar9 + 1;
        iVar10 = iVar10 + -0x28;
      } while (iVar10 != 0);
    }
    param_1[0xc] = iVar5;
    param_1[1] = uVar1;
    param_1[2] = uVar3;
    param_1[3] = uVar4;
    param_1[4] = uVar11;
    param_1[6] = local_3c;
    param_1[10] = param_6;
    param_1[0xb] = uVar8;
    *param_1 = uVar2;
    param_1[5] = param_3;
    param_1[7] = 0;
    param_1[8] = local_4c;
    param_1[9] = uVar12;
  }
  else {
    uVar4 = 0x19;
    if (uVar8 < param_5) {
      iVar5 = param_4 + uVar8 * 0x28;
      if (*(int *)(iVar5 + 4) == 3) {
        local_3c = *(uint *)(iVar5 + 0x10);
        local_4c = *(uint *)(iVar5 + 0x14) + local_3c;
        uVar12 = (uint)CARRY4(*(uint *)(iVar5 + 0x14),local_3c);
        uVar11 = param_2;
        goto LAB_0072f6e8;
      }
      uVar4 = 0x1f;
      pcVar6 = "Invalid ELF string section type";
    }
    else {
      pcVar6 = "Invalid ELF section index";
    }
LAB_0072f7fc:
    param_1[1] = pcVar6;
    *param_1 = 0;
    param_1[2] = uVar4;
  }
  return;
}


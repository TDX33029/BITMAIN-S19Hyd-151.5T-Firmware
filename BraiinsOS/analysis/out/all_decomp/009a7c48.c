// FUN_009a7c48 @ 009a7c48 size=592 calls_out=8 calls_in=0
// strings: 

undefined8 FUN_009a7c48(int param_1,int param_2)

{
  uint uVar1;
  code *pcVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  undefined4 uVar12;
  int iVar13;
  int *piVar14;
  uint *puVar15;
  int iVar16;
  undefined4 uVar17;
  uint uVar18;
  int local_40;
  int local_3c;
  undefined1 auStack_38 [12];
  int *local_2c;
  undefined4 *local_28;
  
  iVar16 = *(int *)(param_1 + 4);
  puVar15 = (uint *)(iVar16 + 0x98);
  uVar8 = *(uint *)(iVar16 + 0x98);
  local_3c = param_2;
  if ((uVar8 < 0xfffffff0) && ((uVar8 & 8) == 0)) {
    if (*puVar15 == uVar8) {
      bVar6 = (bool)hasExclusiveAccess(puVar15);
      if (bVar6) {
        *puVar15 = uVar8 + 0x10;
        DataMemoryBarrier(0xb);
        goto LAB_009a7ca0;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0127d66c(puVar15);
LAB_009a7ca0:
  FUN_0128236c(puVar15);
  uVar8 = (uint)puVar15 | 1;
  FUN_0128236c(uVar8);
  iVar7 = local_3c;
  DataMemoryBarrier(0xb);
  if (*(int *)(iVar16 + 0xa0) == 2) {
    uVar17 = FUN_009cc698(&DAT_003496cc,0x19);
  }
  else {
    if (*(int *)(iVar16 + 300) != 0) {
      uVar9 = FUN_009bd354(*(undefined4 *)(iVar16 + 0x130),*(undefined4 *)(iVar16 + 0x134),
                           *(undefined4 *)(iVar16 + 0x138),*(undefined4 *)(iVar16 + 0x13c),local_3c)
      ;
      iVar13 = *(int *)(iVar16 + 0x120);
      uVar1 = uVar9 >> 0x19;
      local_40 = 0;
      while( true ) {
        uVar9 = *(uint *)(iVar16 + 0x124) & uVar9;
        uVar18 = *(uint *)(iVar13 + uVar9);
        uVar10 = uVar18 ^ uVar1 * 0x1010101;
        uVar10 = ~uVar10 & 0x80808080 & uVar10 + 0xfefefeff;
        while (uVar10 != 0) {
          uVar11 = uVar10 >> 8;
          uVar3 = uVar10 >> 0x10;
          uVar4 = uVar10 >> 0x18;
          uVar5 = uVar10 << 0x18;
          uVar10 = uVar10 - 1 & uVar10;
          uVar11 = uVar9 + ((uint)LZCOUNT(uVar5 | (uVar11 & 0xff) << 0x10 | (uVar3 & 0xff) << 8 |
                                          uVar4) >> 3) & *(uint *)(iVar16 + 0x124);
          if (iVar7 == *(int *)(iVar13 + -8 + uVar11 * -8)) {
            iVar13 = iVar13 + uVar11 * -8;
            piVar14 = *(int **)(iVar13 + -4);
            do {
              iVar16 = *piVar14;
              bVar6 = (bool)hasExclusiveAccess(piVar14);
            } while (!bVar6);
            *piVar14 = iVar16 + 1;
            if (iVar16 < 0) {
                    /* WARNING: Does not return */
              pcVar2 = (code *)software_udf(0xfdee,0x9a7e94);
              (*pcVar2)();
            }
            uVar17 = *(undefined4 *)(iVar13 + -4);
            FUN_01282570(puVar15);
            FUN_01282570(uVar8);
            DataMemoryBarrier(0xb);
            do {
              uVar8 = *puVar15;
              bVar6 = (bool)hasExclusiveAccess(puVar15);
            } while (!bVar6);
            *puVar15 = uVar8 - 0x10;
            uVar12 = 0;
            goto joined_r0x009a7de8;
          }
        }
        if ((uVar18 & 0x80808080 & uVar18 << 1) != 0) break;
        local_40 = local_40 + 4;
        uVar9 = uVar9 + local_40;
      }
    }
    local_2c = &local_3c;
    local_28 = &DAT_00f5c97c;
    FUN_00600d2c(auStack_38,&DAT_00582541,&local_2c);
    uVar17 = FUN_009cc4c8(auStack_38);
  }
  FUN_01282570(puVar15);
  FUN_01282570(uVar8);
  DataMemoryBarrier(0xb);
  do {
    uVar8 = *puVar15;
    bVar6 = (bool)hasExclusiveAccess(puVar15);
  } while (!bVar6);
  *puVar15 = uVar8 - 0x10;
  uVar12 = 1;
joined_r0x009a7de8:
  if ((uVar8 & 0xfffffff2) == 0x12) {
    FUN_0127d34c(puVar15);
    return CONCAT44(uVar17,uVar12);
  }
  return CONCAT44(uVar17,uVar12);
}


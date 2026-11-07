// FUN_0077ea50 @ 0077ea50 size=644 calls_out=8 calls_in=0
// strings: 

undefined8 FUN_0077ea50(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  double dVar16;
  undefined8 uVar17;
  int local_48;
  int local_44;
  int local_40;
  undefined4 *local_3c;
  undefined4 **local_38;
  undefined4 ***local_34;
  
  FUN_0074fb54(&local_48,param_1);
  iVar9 = local_40;
  iVar12 = local_44;
  if (local_40 == 0) {
    uVar17 = 0;
  }
  else {
    iVar2 = local_44 + local_40 * 0x3c;
    iVar3 = local_44;
    do {
      uVar7 = *(uint *)(iVar3 + 0x28);
      uVar6 = *(uint *)(iVar3 + 0x2c);
      if (uVar7 < uVar6) {
LAB_0077ec84:
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar6,uVar7,&DAT_0188f948);
      }
      iVar8 = iVar3 + 0x3c;
      iVar10 = *(int *)(iVar3 + 0x24);
      iVar3 = uVar6 * 0x50;
      iVar1 = iVar10;
      while (iVar11 = iVar1, iVar11 != iVar10 + iVar3) {
        uVar7 = *(uint *)(iVar11 + 0x18);
        uVar6 = *(uint *)(iVar11 + 0x1c);
        if (uVar7 < uVar6) goto LAB_0077ec84;
        iVar1 = iVar11 + 0x50;
        if (uVar6 != 0) {
          iVar13 = *(int *)(iVar11 + 0x14);
          iVar14 = 0;
          do {
            iVar4 = iVar13 + iVar14;
            uVar7 = (uint)*(byte *)(iVar4 + 0xc);
            bVar15 = uVar7 == 1;
            if (bVar15) {
              uVar7 = *(uint *)(iVar4 + 8);
            }
            if ((bVar15 && uVar7 == 4) && (**(int **)(iVar4 + 4) == 0x656d616e)) {
              uVar7 = (uint)*(byte *)(iVar4 + 0x1c);
              bVar15 = uVar7 == 1;
              if (bVar15) {
                uVar7 = *(uint *)(iVar4 + 0x18);
              }
              if ((bVar15 && uVar7 == 7) &&
                 (iVar4 = thunk_FUN_016dd50a(*(undefined4 *)(iVar4 + 0x14),param_2,7), iVar4 == 0))
              {
                if (*(char *)(iVar11 + 0x24) == '\0') {
                  local_3c = &DAT_018d9154;
                  DataMemoryBarrier(0xb);
                  if (DAT_018d9154 != 0) {
                    local_38 = &local_3c;
                    local_34 = &local_38;
                    FUN_015eedc4(&DAT_018d9154,0,&local_34,&DAT_0188bd9c,&DAT_0188bca0);
                  }
                  puVar5 = (uint *)local_3c[1];
                }
                else {
                  puVar5 = *(uint **)(iVar11 + 0x20);
                  if (puVar5 == (uint *)0x0) {
                    /* WARNING: Subroutine does not return */
                    FUN_00faa444(&DAT_01890768);
                  }
                }
                if ((*puVar5 & 1) == 0) {
                  dVar16 = 0.0;
                }
                else {
                  dVar16 = *(double *)(puVar5 + 2);
                }
                uVar17 = FUN_01845ca8(SUB84(dVar16,0),(int)((ulonglong)dVar16 >> 0x20));
                if (dVar16 < -9.223372036854776e+18) {
                  uVar17 = 0x8000000000000000;
                }
                if (9.223372036854775e+18 < dVar16) {
                  uVar17 = 0x7fffffffffffffff;
                }
                iVar9 = local_40;
                iVar12 = local_44;
                if (NAN(dVar16)) {
                  uVar17 = 0;
                }
                goto LAB_0077ec38;
              }
            }
            iVar14 = iVar14 + 0x28;
          } while (uVar6 * 0x28 != iVar14);
        }
      }
      iVar3 = iVar8;
    } while (iVar8 != iVar2);
    uVar17 = 0;
  }
LAB_0077ec38:
  iVar9 = iVar9 + 1;
  iVar3 = iVar12;
  while (iVar9 = iVar9 + -1, iVar9 != 0) {
    FUN_012b6d58(iVar3);
    iVar3 = iVar3 + 0x3c;
  }
  if (local_48 != 0) {
    thunk_FUN_016d3fb4(iVar12);
  }
  return uVar17;
}


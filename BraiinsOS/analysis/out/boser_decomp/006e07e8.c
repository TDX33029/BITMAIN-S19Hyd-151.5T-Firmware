// FUN_006e07e8 @ 006e07e8 size=1032 calls_out=9 calls_in=13
// strings: 

void FUN_006e07e8(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3,undefined4 param_4)

{
  byte bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  uint *puVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  undefined4 *puVar16;
  undefined4 uVar17;
  uint uVar18;
  uint local_d0;
  undefined *local_cc;
  uint local_c0;
  undefined4 local_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [92];
  uint local_28;
  
  iVar14 = param_3[2];
  uVar17 = param_3[1];
  uVar4 = FUN_01adafd4(*param_2,param_2[1],param_2[2],param_2[3],uVar17,iVar14);
  iVar9 = param_2[5];
  local_c0 = param_2[6];
  if (param_2[9] == 0) {
    FUN_006b8e94(param_2 + 7);
  }
  piVar5 = param_2 + 4;
  puVar12 = (uint *)param_2[7];
  uVar18 = param_2[8];
  bVar2 = false;
  iVar10 = 0;
  bVar3 = false;
  uVar11 = uVar4;
  do {
    uVar11 = uVar18 & uVar11;
    uVar6 = *(uint *)((int)puVar12 + uVar11);
    uVar7 = uVar6 ^ (uVar4 >> 0x19) * 0x1010101;
    for (uVar7 = ~uVar7 & 0x80808080 & uVar7 + 0xfefefeff; uVar7 != 0; uVar7 = uVar7 - 1 & uVar7) {
      local_cc = &DAT_01d307c8;
      uVar15 = puVar12[-1 - (uVar11 + ((uint)LZCOUNT(uVar7 << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                                     (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >>
                                      3) & uVar18)];
      if (local_c0 <= uVar15) {
LAB_006e0be0:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar15,local_c0,local_cc);
      }
      iVar8 = uVar15 * 0x6c + iVar9;
      if ((iVar14 == *(int *)(iVar8 + 8)) &&
         (iVar8 = thunk_FUN_01bed842(uVar17,*(undefined4 *)(iVar8 + 4),iVar14), iVar8 == 0)) {
        local_c0 = param_2[6];
        if (local_c0 <= uVar15) {
          local_cc = &DAT_01d307d8;
          goto LAB_006e0be0;
        }
        iVar9 = uVar15 * 0x6c + param_2[5];
        puVar16 = (undefined4 *)(iVar9 + 0xc);
        uVar13 = *puVar16;
        FUN_01bed4e2(&local_90,iVar9 + 0x10,0x58);
        FUN_01bed4e2(puVar16,param_4,0x5c);
        FUN_019bb7e0(*param_3,uVar17);
        goto LAB_006e0b7c;
      }
    }
    if (bVar2) {
      if (bVar3) goto LAB_006e0994;
      bVar2 = true;
      bVar3 = false;
    }
    else {
      uVar7 = uVar6 & 0x80808080;
      if (uVar7 == 0) {
        bVar3 = false;
        bVar2 = false;
      }
      else {
        local_d0 = uVar11 + ((uint)LZCOUNT((uVar6 & 0x80) << 0x18 | (uVar7 >> 8 & 0xff) << 0x10 |
                                           (uVar7 >> 0x10 & 0xff) << 8 | uVar7 >> 0x18) >> 3) &
                   uVar18;
LAB_006e0994:
        if ((uVar6 & 0x80808080 & uVar6 << 1) != 0) break;
        bVar2 = true;
        bVar3 = true;
      }
    }
    iVar10 = iVar10 + 4;
    uVar11 = uVar11 + iVar10;
  } while( true );
  uVar11 = (uint)*(char *)((int)puVar12 + local_d0);
  if (-1 < (int)uVar11) {
    uVar11 = *puVar12 & 0x80808080;
    uVar7 = LZCOUNT((*puVar12 & 0x80) << 0x18 | (uVar11 >> 8 & 0xff) << 0x10 |
                    (uVar11 >> 0x10 & 0xff) << 8 | uVar11 >> 0x18);
    uVar11 = (uint)*(byte *)((int)puVar12 + (uVar7 >> 3));
    local_d0 = uVar7 >> 3;
  }
  iVar10 = param_2[10];
  uVar7 = param_2[6];
  iVar9 = param_2[9];
  bVar1 = (byte)(uVar4 >> 0x19);
  *(byte *)((int)puVar12 + local_d0) = bVar1;
  *(byte *)((int)puVar12 + (uVar18 & local_d0 - 4) + 4) = bVar1;
  puVar12[-1 - local_d0] = uVar7;
  iVar14 = param_2[6];
  param_2[9] = iVar9 - (uVar11 & 1);
  param_2[10] = iVar10 + 1;
  if (iVar14 == param_2[4]) {
    uVar11 = 0x12f684b;
    if ((uint)(param_2[9] + param_2[10]) < 0x12f684b) {
      uVar11 = param_2[9] + param_2[10];
    }
    if (1 < uVar11 - iVar14) {
      iVar9 = FUN_0132b728(piVar5,iVar14,uVar11 - iVar14,4,0x6c);
      iVar14 = param_2[6];
      if (iVar9 == -0x7fffffff) goto LAB_006e0b18;
    }
    FUN_0132b704(piVar5,iVar14,1,4,0x6c);
    iVar14 = param_2[6];
  }
LAB_006e0b18:
  local_90 = *param_3;
  uStack_8c = param_3[1];
  uStack_88 = param_3[2];
  FUN_01bed4e2(auStack_84,param_4,0x5c);
  local_28 = uVar4;
  if (iVar14 == *piVar5) {
    FUN_006e4e98(piVar5);
  }
  FUN_01bed4e2(iVar14 * 0x6c + param_2[5],&local_90,0x6c);
  param_2[6] = iVar14 + 1;
  uVar13 = 0x80000000;
LAB_006e0b7c:
  *param_1 = uVar13;
  FUN_01bed4e2(param_1 + 1,&local_90,0x58);
  return;
}


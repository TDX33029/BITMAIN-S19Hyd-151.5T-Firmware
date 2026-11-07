// FUN_01a4b734 @ 01a4b734 size=800 calls_out=7 calls_in=25
// strings: 

void FUN_01a4b734(undefined4 *param_1,undefined4 *param_2,int param_3,undefined4 param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  bool bVar6;
  int iVar7;
  int iVar8;
  uint *puVar9;
  uint uVar10;
  undefined4 *puVar11;
  undefined4 uVar12;
  bool bVar13;
  uint uVar14;
  uint uVar15;
  int iVar16;
  uint local_d8;
  undefined *local_d4;
  uint local_a4;
  undefined1 auStack_90 [108];
  
  iVar8 = *(int *)(param_3 + 8);
  uVar12 = *(undefined4 *)(param_3 + 4);
  uVar2 = FUN_0133db9c(*param_2,param_2[1],param_2[2],param_2[3],uVar12,iVar8);
  iVar7 = param_2[5];
  local_a4 = param_2[6];
  if (param_2[9] == 0) {
    FUN_01a528c8(param_2 + 7,1,iVar7,local_a4);
  }
  uVar15 = param_2[8];
  puVar9 = (uint *)param_2[7];
  iVar16 = 0;
  bVar6 = false;
  bVar13 = false;
  uVar5 = uVar2;
  do {
    uVar5 = uVar15 & uVar5;
    uVar14 = *(uint *)((int)puVar9 + uVar5);
    uVar3 = uVar14 ^ (uVar2 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      local_d4 = &DAT_01d307c8;
      uVar10 = puVar9[-1 - (uVar5 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                   (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3
                                    ) & uVar15)];
      if (local_a4 <= uVar10) {
LAB_01a4ba44:
                    /* WARNING: Subroutine does not return */
        FUN_012fb12c(uVar10,local_a4,local_d4);
      }
      iVar4 = iVar7 + uVar10 * 0xc0;
      if ((iVar8 == *(int *)(iVar4 + 0x78)) &&
         (iVar4 = thunk_FUN_01bed842(uVar12,*(undefined4 *)(iVar4 + 0x74)), iVar4 == 0)) {
        local_a4 = param_2[6];
        if (local_a4 <= uVar10) {
          local_d4 = &DAT_01d307d8;
          goto LAB_01a4ba44;
        }
        puVar11 = (undefined4 *)(param_2[5] + uVar10 * 0xc0);
        uVar12 = *puVar11;
        FUN_01bed4e2(auStack_90,puVar11 + 1,0x6c);
        FUN_01bed4e2(puVar11,param_4,0x70);
        FUN_01a49de4(param_3);
        goto LAB_01a4b9e0;
      }
    }
    if (bVar6) {
      if (bVar13) goto LAB_01a4b8e4;
      bVar6 = true;
      bVar13 = false;
    }
    else {
      uVar3 = uVar14 & 0x80808080;
      if (uVar3 == 0) {
        bVar13 = false;
        bVar6 = false;
      }
      else {
        local_d8 = uVar5 + ((uint)LZCOUNT((uVar14 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                          (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                   uVar15;
LAB_01a4b8e4:
        if ((uVar14 & 0x80808080 & uVar14 << 1) != 0) {
          uVar5 = (uint)*(char *)((int)puVar9 + local_d8);
          if (-1 < (int)uVar5) {
            uVar5 = *puVar9 & 0x80808080;
            uVar3 = LZCOUNT((*puVar9 & 0x80) << 0x18 | (uVar5 >> 8 & 0xff) << 0x10 |
                            (uVar5 >> 0x10 & 0xff) << 8 | uVar5 >> 0x18);
            uVar5 = (uint)*(byte *)((int)puVar9 + (uVar3 >> 3));
            local_d8 = uVar3 >> 3;
          }
          iVar7 = param_2[10];
          param_2[9] = param_2[9] - (uVar5 & 1);
          uVar5 = param_2[6];
          bVar1 = (byte)(uVar2 >> 0x19);
          *(byte *)((int)puVar9 + local_d8) = bVar1;
          param_2[10] = iVar7 + 1;
          *(byte *)((int)puVar9 + (uVar15 & local_d8 - 4) + 4) = bVar1;
          puVar9[-1 - local_d8] = uVar5;
          FUN_01a49e20(param_2 + 4,uVar2,param_3,param_4);
          uVar12 = 4;
LAB_01a4b9e0:
          *param_1 = uVar12;
          FUN_01bed4e2(param_1 + 1,auStack_90,0x6c);
          return;
        }
        bVar6 = true;
        bVar13 = true;
      }
    }
    iVar16 = iVar16 + 4;
    uVar5 = uVar5 + iVar16;
  } while( true );
}


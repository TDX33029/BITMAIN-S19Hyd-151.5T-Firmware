// FUN_00750340 @ 00750340 size=972 calls_out=6 calls_in=1
// strings: 

void FUN_00750340(uint *param_1,uint *param_2,uint param_3,undefined4 param_4,int param_5,
                 undefined4 param_6,undefined4 param_7)

{
  byte bVar1;
  bool bVar2;
  uint uVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint *puVar11;
  uint uVar12;
  int iVar13;
  uint local_60;
  int local_30;
  uint local_2c;
  undefined4 local_28;
  
  uVar7 = param_2[2];
  uVar6 = param_2[1];
  if (param_2[5] == 0) {
    FUN_0075076c(param_2 + 3);
  }
  uVar12 = param_2[4];
  puVar11 = (uint *)param_2[3];
  iVar13 = 0;
  bVar2 = false;
  uVar8 = param_3;
  do {
    uVar8 = uVar12 & uVar8;
    uVar9 = *(uint *)((int)puVar11 + uVar8);
    uVar3 = uVar9 ^ (param_3 >> 0x19) * 0x1010101;
    for (uVar3 = ~uVar3 & 0x80808080 & uVar3 + 0xfefefeff; uVar3 != 0; uVar3 = uVar3 - 1 & uVar3) {
      uVar10 = puVar11[-1 - (uVar8 + ((uint)LZCOUNT(uVar3 << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                                    (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >>
                                     3) & uVar12)];
      if (uVar7 <= uVar10) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa4a4(uVar10,uVar7,&DAT_018adbc8);
      }
      puVar4 = (undefined4 *)(uVar6 + uVar10 * 0x14);
      if ((param_5 == puVar4[1]) &&
         (iVar5 = thunk_FUN_016dd50a(param_4,*puVar4,param_5), iVar5 == 0)) {
        if (param_2[2] <= uVar10) {
                    /* WARNING: Subroutine does not return */
          FUN_00faa4a4(uVar10,param_2[2],&DAT_01882cc0);
        }
        iVar13 = param_2[1] + uVar10 * 0x14;
        uVar7 = *(uint *)(iVar13 + 8);
        uVar6 = *(uint *)(iVar13 + 0xc);
        *(undefined4 *)(iVar13 + 8) = param_6;
        *(undefined4 *)(iVar13 + 0xc) = param_7;
        *param_1 = uVar10;
        param_1[1] = uVar7;
        param_1[2] = uVar6;
        return;
      }
    }
    uVar3 = uVar9 & 0x80808080;
    if (bVar2) {
LAB_00750498:
      if ((uVar3 & uVar9 << 1) != 0) break;
      bVar2 = true;
    }
    else {
      if (uVar3 != 0) {
        local_60 = uVar8 + ((uint)LZCOUNT((uVar9 & 0x80) << 0x18 | (uVar3 >> 8 & 0xff) << 0x10 |
                                          (uVar3 >> 0x10 & 0xff) << 8 | uVar3 >> 0x18) >> 3) &
                   uVar12;
        goto LAB_00750498;
      }
      bVar2 = false;
    }
    iVar13 = iVar13 + 4;
    uVar8 = iVar13 + uVar8;
  } while( true );
  uVar6 = (uint)*(char *)((int)puVar11 + local_60);
  if (-1 < (int)uVar6) {
    uVar6 = *puVar11 & 0x80808080;
    uVar7 = LZCOUNT((*puVar11 & 0x80) << 0x18 | (uVar6 >> 8 & 0xff) << 0x10 |
                    (uVar6 >> 0x10 & 0xff) << 8 | uVar6 >> 0x18);
    uVar6 = (uint)*(byte *)((int)puVar11 + (uVar7 >> 3));
    local_60 = uVar7 >> 3;
  }
  uVar8 = param_2[6];
  uVar9 = param_2[2];
  uVar3 = param_2[5];
  bVar1 = (byte)(param_3 >> 0x19);
  *(byte *)((int)puVar11 + local_60) = bVar1;
  *(byte *)((int)puVar11 + (local_60 - 4 & uVar12) + 4) = bVar1;
  puVar11[-1 - local_60] = uVar9;
  uVar7 = param_2[2];
  param_2[5] = uVar3 - (uVar6 & 1);
  param_2[6] = uVar8 + 1;
  if (uVar7 != *param_2) {
    uVar6 = uVar7;
    uVar7 = *param_2;
    goto LAB_00750578;
  }
  uVar8 = param_2[5] + param_2[6];
  uVar6 = 0x6666666;
  if (uVar8 < 0x6666666) {
    uVar6 = uVar8;
  }
  if ((uVar6 - uVar7 < 2) || (uVar8 < uVar7)) {
LAB_00750610:
    FUN_006bc77c(&local_30,uVar7,param_2[1],uVar7 + 1,4,0x14);
    uVar7 = uVar7 + 1;
    if (local_30 == 1) {
LAB_00750710:
                    /* WARNING: Subroutine does not return */
      FUN_00600af4(local_2c,local_28);
    }
  }
  else {
    FUN_006bc77c(&local_30,uVar7,param_2[1],uVar6,4,0x14);
    uVar7 = uVar6;
    if (local_30 != 0) {
      uVar7 = *param_2;
      uVar6 = param_2[2];
      if (uVar7 != uVar6) goto LAB_00750578;
      if (uVar7 == 0xffffffff) {
        local_2c = 0;
        local_28 = 0xffffffff;
        goto LAB_00750710;
      }
      goto LAB_00750610;
    }
  }
  uVar6 = param_2[2];
  param_2[1] = local_2c;
  *param_2 = uVar7;
LAB_00750578:
  if (uVar6 == uVar7) {
    FUN_006bc9a0(param_2);
  }
  puVar4 = (undefined4 *)(param_2[1] + uVar6 * 0x14);
  *puVar4 = param_4;
  puVar4[1] = param_5;
  puVar4[2] = param_6;
  puVar4[4] = param_3;
  puVar4[3] = param_7;
  param_2[2] = uVar6 + 1;
  *param_1 = uVar9;
  param_1[1] = 0;
  return;
}


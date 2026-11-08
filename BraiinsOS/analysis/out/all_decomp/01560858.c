// FUN_01560858 @ 01560858 size=768 calls_out=8 calls_in=0
// strings: 

undefined2 FUN_01560858(int *param_1,char *param_2)

{
  uint uVar1;
  char cVar2;
  char cVar3;
  bool bVar4;
  undefined2 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  char *pcVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  int iVar14;
  uint uVar15;
  int local_44;
  uint local_30;
  int *local_2c;
  undefined1 local_28;
  
  do {
    if (*param_1 != 0) {
      ClearExclusiveLocal();
      FUN_015bf680(param_1);
      goto LAB_0156088c;
    }
    bVar4 = (bool)hasExclusiveAccess(param_1);
  } while (!bVar4);
  *param_1 = 1;
  DataMemoryBarrier(0xb);
LAB_0156088c:
  uVar15 = 0;
  if ((DAT_018dd988 & 0x7fffffff) != 0) {
    uVar15 = FUN_015bf3f8();
    uVar15 = uVar15 ^ 1;
  }
  local_30 = (uint)*(byte *)(param_1 + 1);
  local_28 = (undefined1)uVar15;
  local_2c = param_1;
  if (local_30 != 0) {
    local_30 = 1;
    FUN_0155f3e8(&local_30);
                    /* WARNING: Subroutine does not return */
    FUN_00faa444(&DAT_018a8eac);
  }
  if (param_1[9] == 0) {
    uVar5 = 0x10;
joined_r0x01560a88:
    if (((uVar15 == 0) && ((DAT_018dd988 & 0x7fffffff) != 0)) &&
       (iVar12 = FUN_015bf3f8(), iVar12 == 0)) {
      *(undefined1 *)(param_1 + 1) = 1;
    }
    DataMemoryBarrier(0xb);
    do {
      iVar12 = *param_1;
      bVar4 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar4);
    *param_1 = 0;
    if (iVar12 == 2) {
      FUN_016d6968(0xf0,param_1,0x81,1);
      return uVar5;
    }
    return uVar5;
  }
  uVar6 = FUN_0156d824(param_1[10],param_1[0xb],param_1[0xc],param_1[0xd],param_2);
  uVar1 = uVar6 >> 0x19;
  uVar13 = param_1[7];
  local_44 = 0;
  cVar2 = *param_2;
  cVar3 = param_2[1];
  iVar12 = *(int *)(param_2 + 2);
  iVar14 = param_1[6];
  do {
    uVar6 = uVar13 & uVar6;
    uVar7 = *(uint *)(iVar14 + uVar6);
    uVar8 = uVar7 ^ uVar1 * 0x1010101;
    for (uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff; uVar8 != 0; uVar8 = uVar8 - 1 & uVar8) {
      uVar9 = uVar6 + ((uint)LZCOUNT(uVar8 << 0x18 | (uVar8 >> 8 & 0xff) << 0x10 |
                                     (uVar8 >> 0x10 & 0xff) << 8 | uVar8 >> 0x18) >> 3) & uVar13;
      pcVar10 = (char *)(iVar14 + -0x90 + uVar9 * -0x90);
      if (cVar2 == *pcVar10) {
        if (cVar2 == '\0') {
          iVar11 = FUN_0157531c(param_2 + 4,pcVar10 + 4);
          if (iVar11 != 0) goto LAB_01560a6c;
        }
        else if (cVar3 == pcVar10[1]) {
          if (cVar3 == '\0') {
            if (iVar12 == *(int *)(pcVar10 + 2)) goto LAB_01560a6c;
          }
          else {
            iVar11 = thunk_FUN_016dd50a(param_2 + 2,pcVar10 + 2,0x10);
            if (iVar11 == 0) {
LAB_01560a6c:
              uVar5 = *(undefined2 *)(iVar14 + uVar9 * -0x90 + -8);
              goto joined_r0x01560a88;
            }
          }
        }
      }
    }
    uVar5 = 0x10;
    if ((uVar7 & 0x80808080 & uVar7 << 1) != 0) goto joined_r0x01560a88;
    local_44 = local_44 + 4;
    uVar6 = uVar6 + local_44;
  } while( true );
}


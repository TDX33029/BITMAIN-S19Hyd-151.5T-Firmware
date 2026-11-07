// FUN_01336020 @ 01336020 size=620 calls_out=3 calls_in=1
// strings: 

void FUN_01336020(int *param_1,undefined4 param_2,code *param_3,int param_4)

{
  char cVar1;
  byte bVar2;
  uint uVar3;
  undefined4 *puVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  uint *puVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  bool bVar15;
  
  uVar13 = param_1[1];
  uVar7 = uVar13 + 1;
  if (uVar13 == 0xffffffff) {
    uVar7 = 0;
  }
  else {
    uVar9 = uVar7 >> 2;
    if ((uVar7 & 3) != 0) {
      uVar9 = (uVar7 >> 2) + 1;
    }
    puVar4 = (undefined4 *)*param_1;
    iVar10 = 0;
    do {
      puVar4[-iVar10] = (~((uint)puVar4[-iVar10] >> 7) & 0x1010101) + (puVar4[-iVar10] | 0x7f7f7f7f)
      ;
      iVar10 = iVar10 + -1;
    } while (-iVar10 != uVar9);
    if (uVar7 < 4) {
      FUN_016dd52c(puVar4 + 1);
    }
    else {
      *(undefined4 *)((int)puVar4 + uVar7) = *puVar4;
    }
    uVar7 = 0;
    do {
      if (*(char *)(*param_1 + uVar7) == -0x80) {
        iVar10 = param_4 * ~uVar7 + *param_1;
        while( true ) {
          uVar3 = (*param_3)(param_2,param_1,uVar7);
          puVar8 = (uint *)*param_1;
          uVar11 = param_1[1];
          uVar5 = uVar11 & uVar3;
          uVar12 = *(uint *)((int)puVar8 + uVar5) & 0x80808080;
          uVar9 = uVar5;
          if (uVar12 == 0) {
            iVar14 = 4;
            do {
              uVar9 = uVar9 + iVar14 & uVar11;
              iVar14 = iVar14 + 4;
              uVar12 = *(uint *)((int)puVar8 + uVar9) & 0x80808080;
            } while (uVar12 == 0);
          }
          uVar9 = uVar9 + ((uint)LZCOUNT(uVar12 << 0x18 | (uVar12 >> 8 & 0xff) << 0x10 |
                                         (uVar12 >> 0x10 & 0xff) << 8 | uVar12 >> 0x18) >> 3) &
                  uVar11;
          if (-1 < *(char *)((int)puVar8 + uVar9)) {
            uVar9 = *puVar8 & 0x80808080;
            uVar9 = (uint)LZCOUNT((*puVar8 & 0x80) << 0x18 | (uVar9 >> 8 & 0xff) << 0x10 |
                                  (uVar9 >> 0x10 & 0xff) << 8 | uVar9 >> 0x18) >> 3;
          }
          bVar2 = (byte)(uVar3 >> 0x18);
          if (((uVar9 - uVar5 ^ uVar7 - uVar5) & uVar11) < 4) {
            bVar2 = bVar2 >> 1;
            *(byte *)((int)puVar8 + uVar7) = bVar2;
            *(byte *)(*param_1 + (uVar11 & uVar7 - 4) + 4) = bVar2;
            goto LAB_013361ec;
          }
          puVar6 = (uint *)(param_4 * ~uVar9 + (int)puVar8);
          cVar1 = *(char *)((int)puVar8 + uVar9);
          bVar2 = bVar2 >> 1;
          *(byte *)((int)puVar8 + uVar9) = bVar2;
          *(byte *)(*param_1 + (uVar9 - 4 & uVar11) + 4) = bVar2;
          if (cVar1 == -1) break;
          FUN_013362a4(iVar10,puVar6,param_4);
        }
        uVar9 = param_1[1];
        *(undefined1 *)(*param_1 + uVar7) = 0xff;
        *(undefined1 *)(*param_1 + (uVar9 & uVar7 - 4) + 4) = 0xff;
        FUN_016dd1aa(puVar6,iVar10,param_4);
      }
LAB_013361ec:
      bVar15 = uVar7 != uVar13;
      uVar7 = uVar7 + 1;
    } while (bVar15);
    uVar7 = param_1[1];
    if (7 < uVar7) {
      uVar7 = (uVar7 + 1 & 0xfffffff8) - (uVar7 + 1 >> 3);
    }
  }
  param_1[2] = uVar7 - param_1[3];
  return;
}


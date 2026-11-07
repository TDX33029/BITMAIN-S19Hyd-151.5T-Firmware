// FUN_012674d8 @ 012674d8 size=752 calls_out=10 calls_in=2
// strings: 

void FUN_012674d8(int *param_1,int param_2,undefined4 *param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  int local_2e4;
  undefined1 auStack_2d8 [344];
  int local_180 [87];
  
  uVar5 = param_1[0xc];
  puVar10 = (uint *)(param_1 + 0xc);
  if (uVar5 < 0x3ffffffe) {
    if (*puVar10 == uVar5) {
      bVar4 = (bool)hasExclusiveAccess(puVar10);
      if (bVar4) {
        *puVar10 = uVar5 + 1;
        DataMemoryBarrier(0xb);
        goto LAB_0126751c;
      }
    }
    else {
      ClearExclusiveLocal();
    }
  }
  FUN_0197a5c8(puVar10);
LAB_0126751c:
  if ((char)param_1[0xe] == '\0') {
    if (param_1[0x13] != 0) {
      iVar12 = *(int *)(*(int *)(param_2 + 0x10) + 0x24);
      uVar6 = FUN_01ab33ec(param_1[0x14],param_1[0x15],param_1[0x16],param_1[0x17],iVar12,
                           *(undefined4 *)(*(int *)(param_2 + 0x10) + 0x28));
      uVar5 = uVar6 >> 0x19;
      iVar9 = param_1[0x10];
      local_2e4 = 0;
      do {
        uVar6 = param_1[0x11] & uVar6;
        uVar11 = *(uint *)(iVar9 + uVar6);
        uVar8 = uVar11 ^ uVar5 * 0x1010101;
        uVar8 = ~uVar8 & 0x80808080 & uVar8 + 0xfefefeff;
        while (uVar8 != 0) {
          uVar7 = uVar8 >> 8;
          uVar1 = uVar8 >> 0x10;
          uVar2 = uVar8 >> 0x18;
          uVar3 = uVar8 << 0x18;
          uVar8 = uVar8 - 1 & uVar8;
          uVar7 = uVar6 + ((uint)LZCOUNT(uVar3 | (uVar7 & 0xff) << 0x10 | (uVar1 & 0xff) << 8 |
                                         uVar2) >> 3) & param_1[0x11];
          if (iVar12 == *(int *)(iVar9 + -0x160 + uVar7 * -0x160)) {
            FUN_01ab4ad4(auStack_2d8,uVar7 * -0x160 + iVar9 + -0x158,param_2);
            if (*param_1 == 0) {
              bVar4 = (bool)hasExclusiveAccess(param_1);
              if (!bVar4) goto LAB_01267728;
              *param_1 = 0x3fffffff;
              DataMemoryBarrier(0xb);
            }
            else {
              ClearExclusiveLocal();
LAB_01267728:
              FUN_019ae2e0(param_1);
            }
            uVar5 = 0;
            if ((DAT_01d51b08 & 0x7fffffff) != 0) {
              uVar5 = FUN_0197ac0c();
              uVar5 = uVar5 ^ 1;
            }
            if ((char)param_1[2] != '\0') {
              if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar9 = FUN_0197ac0c(), iVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
                FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25344);
              }
              FUN_01ac2a34(param_1,uVar5);
              FUN_01ab1fe0(auStack_2d8);
              DataMemoryBarrier(0xb);
              do {
                uVar5 = *puVar10 - 1;
                bVar4 = (bool)hasExclusiveAccess(puVar10);
              } while (!bVar4);
              *puVar10 = uVar5;
              goto LAB_012676c0;
            }
            FUN_01ab917c(local_180,param_1 + 4,*param_3,param_3[1],auStack_2d8);
            if (local_180[0] != 2) {
              FUN_01ab1fe0(local_180);
            }
            FUN_01ac2a34(param_1,uVar5);
            goto LAB_012676a8;
          }
        }
        if ((uVar11 & 0x80808080 & uVar11 << 1) != 0) break;
        local_2e4 = local_2e4 + 4;
        uVar6 = uVar6 + local_2e4;
      } while( true );
    }
LAB_012676a8:
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar10 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar4);
    *puVar10 = uVar5;
  }
  else {
    if (((DAT_01d51b08 & 0x7fffffff) == 0) || (iVar9 = FUN_0197ac0c(), iVar9 != 0)) {
                    /* WARNING: Subroutine does not return */
      FUN_01979f74(&DAT_00531614,0xd,&DAT_01c25354);
    }
    DataMemoryBarrier(0xb);
    do {
      uVar5 = *puVar10 - 1;
      bVar4 = (bool)hasExclusiveAccess(puVar10);
    } while (!bVar4);
    *puVar10 = uVar5;
  }
LAB_012676c0:
  if ((uVar5 & 0xbfffffff) == 0x80000000) {
    FUN_019a33c4(puVar10);
    return;
  }
  return;
}


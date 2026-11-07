// FUN_017522dc @ 017522dc size=1080 calls_out=13 calls_in=1
// strings: 

void FUN_017522dc(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  undefined1 uVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint uVar11;
  byte local_110 [112];
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x138)) {
  case 0:
    FUN_01bed4e2(param_2 + 0x9c,param_2,0x9c);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d19fbc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d19fbc);
  }
  iVar10 = param_2 + 0x9c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x136)) {
  case 0:
    piVar4 = *(int **)(param_2 + 0xb4);
    iVar5 = *(int *)(param_2 + 0xb8);
    *(undefined2 *)(param_2 + 0x134) = 1;
    *(int **)(param_2 + 0xac) = piVar4;
    *(int *)(param_2 + 0xb0) = iVar5;
    if ((iVar5 == 0) || ((char)piVar4[2] != '\0')) {
      *(undefined1 *)(param_2 + 0x134) = 0;
      FUN_019a8a34(&local_a0,piVar4 + 2,iVar5);
      uVar8 = local_9c;
      uVar7 = local_a0;
      if ((local_a0 & 1) == 0) {
        FUN_01bed4e2(local_110,&local_98,0x6a);
        uVar11 = local_2c;
      }
      else {
        puVar3 = (uint *)((uint)&local_a0 | 4);
        uVar8 = puVar3[1];
        uVar11 = *puVar3;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(piVar4,iVar5);
      }
      if ((uVar7 & 1) == 0) {
        FUN_01bed4e2(&local_a0,local_110,0x6c);
        *(uint *)(param_2 + 0xbc) = uVar11;
        *(uint *)(param_2 + 0xc0) = uVar8;
        FUN_01bed4e2(param_2 + 0xc4,&local_a0,0x6c);
        goto LAB_01752574;
      }
      uVar9 = uVar11 & 0xff;
      uVar7 = uVar11 >> 8 | uVar8 << 0x18;
      uVar8 = uVar8 >> 8;
    }
    else {
      FUN_01bed93e(local_110,0,0x6b);
      if (iVar5 - 1U < 0x6c) {
        FUN_01bed4e2(local_110,(int)piVar4 + 9);
        FUN_01bed4e2(&local_a0,(uint)local_110 | 1,0x6a);
        *(int *)(param_2 + 0xbc) = iVar5 + 2;
        *(uint *)(param_2 + 0xc0) = (uint)local_110[0] << 0x18 | 1;
        FUN_01bed4e2(param_2 + 0xc4,&local_a0,0x6c);
LAB_01752574:
        FUN_01609718(&local_a0,param_2 + 0xbc);
        if (((char)local_a0 == '\x04') || (uVar9 = local_a0 & 0xff, uVar9 == 4)) {
          *(undefined1 *)(param_2 + 0x135) = 0;
          FUN_019dc1a0(&local_a0,local_9c);
          if (local_a0 != 2) {
            *(uint *)(param_2 + 0xa0) = local_9c;
            *(uint *)(param_2 + 0xa4) = local_98;
            *(uint *)(param_2 + 0x9c) = local_a0;
            *(int *)(param_2 + 0x130) = iVar10;
            *(undefined4 *)(param_2 + 0xa8) = local_94;
            iVar5 = iVar10;
            goto LAB_017523b4;
          }
          uVar7 = local_9c >> 8 | local_98 << 0x18;
          uVar9 = local_9c & 0xff;
          uVar8 = local_98 >> 8;
        }
        else {
          uVar7 = local_a0 >> 8 | local_9c << 0x18;
          uVar8 = local_9c >> 8;
        }
        goto LAB_0175260c;
      }
      uVar9 = 2;
      uVar8 = 0x1d2ce;
      uVar7 = 0xf0000000;
    }
LAB_01752614:
    if (*(char *)(param_2 + 0x134) != '\0') {
      piVar4 = *(int **)(param_2 + 0xac);
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0));
      }
    }
    uVar9 = uVar9 | uVar7 << 8;
    *(undefined1 *)(param_2 + 0x136) = 1;
    *(undefined1 *)(param_2 + 0x134) = 0;
    uVar7 = uVar8 << 8 | uVar7 >> 0x18;
    iVar5 = 2;
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_013079f0(&DAT_01d1e10c);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_01307a10(&DAT_01d1e10c);
  case 3:
    iVar5 = *(int *)(param_2 + 0x130);
LAB_017523b4:
    FUN_019e7220(&local_a0,*(undefined4 *)(iVar5 + 8),param_3,1);
    if (local_a0 == 2) {
      *(undefined1 *)(param_2 + 0x136) = 3;
LAB_017523dc:
      uVar2 = 3;
      *param_1 = 3;
      goto LAB_01752684;
    }
    if ((local_a0 & 1) != 0) {
      uVar9 = local_9c & 0xff;
      uVar7 = local_9c >> 8 | local_98 << 0x18;
LAB_017524ec:
      uVar8 = local_98 >> 8;
      FUN_00b76614(iVar10);
LAB_0175260c:
      *(undefined1 *)(param_2 + 0x135) = 0;
      goto LAB_01752614;
    }
    if (*(int *)(param_2 + 0xa8) == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_012fb0cc(&DAT_01d28f7c);
    }
    FUN_0160968c(&local_a0);
    uVar7 = local_9c >> 8 | local_98 << 0x18;
    uVar9 = local_9c & 0xff;
    if (local_a0 != 0 || uVar9 != 4) goto LAB_017524ec;
    uVar9 = *(uint *)(param_2 + 0xa0);
    uVar7 = *(uint *)(param_2 + 0xa4);
    iVar5 = *(int *)(param_2 + 0x9c);
    uVar8 = *(uint *)(param_2 + 0xa8);
    *(undefined1 *)(param_2 + 0x135) = 0;
    if (*(char *)(param_2 + 0x134) == '\x01') {
      piVar4 = *(int **)(param_2 + 0xac);
      DataMemoryBarrier(0xb);
      do {
        iVar6 = *piVar4;
        bVar1 = (bool)hasExclusiveAccess(piVar4);
      } while (!bVar1);
      *piVar4 = iVar6 + -1;
      if (iVar6 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0070451c(*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0));
      }
    }
    *(undefined1 *)(param_2 + 0x136) = 1;
    *(undefined1 *)(param_2 + 0x134) = 0;
    if (iVar5 == 3) goto LAB_017523dc;
  }
  FUN_017520a0(iVar10);
  *param_1 = iVar5;
  param_1[1] = uVar9;
  param_1[2] = uVar7;
  uVar2 = 1;
  param_1[3] = uVar8;
LAB_01752684:
  *(undefined1 *)(param_2 + 0x138) = uVar2;
  return;
}


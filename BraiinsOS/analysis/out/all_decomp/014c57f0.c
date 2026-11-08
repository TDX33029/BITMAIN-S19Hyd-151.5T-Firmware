// FUN_014c57f0 @ 014c57f0 size=1224 calls_out=16 calls_in=2
// strings: 

void FUN_014c57f0(int *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  uint local_110 [28];
  uint local_a0;
  uint local_9c;
  uint local_98;
  undefined4 local_94;
  uint local_2c;
  
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x138)) {
  case 0:
    FUN_016dd1aa(param_2 + 0x9c,param_2,0x9c);
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a65bc);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a65bc);
  }
  iVar10 = param_2 + 0x9c;
                    /* WARNING (jumptable): Sanity check requires truncation of jumptable */
                    /* WARNING: Could not find normalized switch variable to match jumptable */
  switch(*(undefined1 *)(param_2 + 0x136)) {
  case 0:
    piVar3 = *(int **)(param_2 + 0xb4);
    iVar4 = *(int *)(param_2 + 0xb8);
    *(undefined2 *)(param_2 + 0x134) = 1;
    *(int **)(param_2 + 0xac) = piVar3;
    *(int *)(param_2 + 0xb0) = iVar4;
    if ((iVar4 == 0) || ((char)piVar3[2] != '\0')) {
      *(undefined1 *)(param_2 + 0x134) = 0;
      FUN_015f03ac(&local_a0,piVar3 + 2,iVar4);
      uVar8 = local_9c;
      uVar6 = local_a0;
      if ((local_a0 & 1) == 0) {
        FUN_016dd1aa(local_110,&local_98,0x6a);
        uVar9 = local_2c;
      }
      else {
        puVar2 = (uint *)((uint)&local_a0 | 4);
        uVar8 = puVar2[1];
        uVar9 = *puVar2;
      }
      DataMemoryBarrier(0xb);
      do {
        iVar5 = *piVar3;
        bVar1 = (bool)hasExclusiveAccess(piVar3);
      } while (!bVar1);
      *piVar3 = iVar5 + -1;
      if (iVar5 == 1) {
        DataMemoryBarrier(0xb);
        FUN_0143daec(piVar3,iVar4);
      }
      if ((uVar6 & 1) == 0) {
        FUN_016dd1aa(&local_a0,local_110,0x6c);
        *(uint *)(param_2 + 0xbc) = uVar9;
        *(uint *)(param_2 + 0xc0) = uVar8;
        goto LAB_014c5aa0;
      }
      uVar6 = uVar9 >> 8 | uVar8 << 0x18;
      uVar8 = uVar8 >> 8;
    }
    else {
      FUN_016dd606(&local_a0,0,0x6b);
      if (iVar4 - 1U < 0x6c) {
        FUN_016dd1aa(&local_a0,(int)piVar3 + 9);
        uVar8 = local_a0;
        FUN_016dd1aa(local_110,(uint)&local_a0 | 1,0x6a);
        FUN_016dd1aa(&local_a0,local_110,0x6c);
        *(int *)(param_2 + 0xbc) = iVar4 + 2;
        *(uint *)(param_2 + 0xc0) = uVar8 << 0x18 | 1;
LAB_014c5aa0:
        FUN_016dd1aa(param_2 + 0xc4,&local_a0,0x6c);
        FUN_0126e120(&local_a0,param_2 + 0xbc);
        if (((char)local_a0 == '\x04') || ((local_a0 & 0xff) == 4)) {
          *(undefined1 *)(param_2 + 0x135) = 0;
          FUN_0163dd78(&local_a0,local_9c);
          if (local_a0 != 2) {
            *(uint *)(param_2 + 0x9c) = local_a0;
            *(uint *)(param_2 + 0xa0) = local_9c;
            *(uint *)(param_2 + 0xa4) = local_98;
            *(int *)(param_2 + 0x130) = iVar10;
            *(undefined4 *)(param_2 + 0xa8) = local_94;
            iVar4 = iVar10;
            goto LAB_014c58cc;
          }
          uVar6 = local_9c >> 8 | local_98 << 0x18;
          uVar8 = local_98 >> 8;
          uVar9 = local_9c;
        }
        else {
          uVar6 = local_a0 >> 8 | local_9c << 0x18;
          uVar8 = local_9c >> 8;
          uVar9 = local_a0;
        }
        goto LAB_014c5b7c;
      }
      uVar9 = 2;
      uVar8 = 0x18a47;
      uVar6 = 0x78000000;
    }
    break;
  case 1:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7ca0(&DAT_018a6560);
  case 2:
                    /* WARNING: Subroutine does not return */
    FUN_00fb7cc0(&DAT_018a6560);
  case 3:
    iVar4 = *(int *)(param_2 + 0x130);
LAB_014c58cc:
    FUN_01657318(&local_a0,*(undefined4 *)(iVar4 + 8),param_3,1);
    if (local_a0 == 2) {
      *(undefined1 *)(param_2 + 0x136) = 3;
LAB_014c58f4:
      *param_1 = 3;
      *(undefined1 *)(param_2 + 0x138) = 3;
      return;
    }
    if ((local_a0 & 1) == 0) {
      if (*(int *)(param_2 + 0xa8) == -1) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa444(&DAT_018ad11c);
      }
      uVar9 = 0;
      local_a0 = 4;
      local_110[0] = 0;
      iVar4 = FUN_016d7828(*(int *)(param_2 + 0xa8),1,4,local_110,&local_a0);
      if (iVar4 == -1) {
        puVar2 = (uint *)FUN_016d2bc8();
        uVar8 = *puVar2 >> 8;
        uVar6 = *puVar2 << 0x18;
      }
      else if (local_110[0] == 0) {
        uVar6 = 0;
        uVar9 = 4;
        if (iVar4 != -1) {
          uVar7 = *(uint *)(param_2 + 0xa0);
          uVar8 = *(uint *)(param_2 + 0xa4);
          iVar4 = *(int *)(param_2 + 0x9c);
          uVar9 = *(uint *)(param_2 + 0xa8);
          *(undefined1 *)(param_2 + 0x135) = 0;
          if (*(char *)(param_2 + 0x134) == '\x01') {
            piVar3 = *(int **)(param_2 + 0xac);
            DataMemoryBarrier(0xb);
            do {
              iVar5 = *piVar3;
              bVar1 = (bool)hasExclusiveAccess(piVar3);
            } while (!bVar1);
            *piVar3 = iVar5 + -1;
            if (iVar5 == 1) {
              DataMemoryBarrier(0xb);
              FUN_0143daec(*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0));
            }
          }
          *(undefined1 *)(param_2 + 0x136) = 1;
          *(undefined1 *)(param_2 + 0x134) = 0;
          if (iVar4 == 3) goto LAB_014c58f4;
          goto LAB_014c5be4;
        }
        uVar8 = 0;
      }
      else {
        uVar8 = local_110[0] >> 8;
        uVar6 = local_110[0] << 0x18;
        uVar9 = 0;
      }
    }
    else {
      uVar6 = local_9c >> 8 | local_98 << 0x18;
      uVar8 = local_98 >> 8;
      uVar9 = local_9c;
    }
    FUN_005e6cdc(iVar10);
    if (*(int *)(param_2 + 0xa8) != -1) {
      FUN_016dffb2();
    }
    FUN_00f02ff8(iVar10);
LAB_014c5b7c:
    *(undefined1 *)(param_2 + 0x135) = 0;
  }
  if (*(char *)(param_2 + 0x134) != '\0') {
    piVar3 = *(int **)(param_2 + 0xac);
    DataMemoryBarrier(0xb);
    do {
      iVar4 = *piVar3;
      bVar1 = (bool)hasExclusiveAccess(piVar3);
    } while (!bVar1);
    *piVar3 = iVar4 + -1;
    if (iVar4 == 1) {
      DataMemoryBarrier(0xb);
      FUN_0143daec(*(undefined4 *)(param_2 + 0xac),*(undefined4 *)(param_2 + 0xb0));
    }
  }
  *(undefined1 *)(param_2 + 0x136) = 1;
  *(undefined1 *)(param_2 + 0x134) = 0;
  uVar7 = uVar9 & 0xff | uVar6 << 8;
  uVar8 = uVar8 << 8 | uVar6 >> 0x18;
  iVar4 = 2;
LAB_014c5be4:
  FUN_014c5278(iVar10);
  *param_1 = iVar4;
  param_1[1] = uVar7;
  param_1[2] = uVar8;
  param_1[3] = uVar9;
  *(undefined1 *)(param_2 + 0x138) = 1;
  return;
}


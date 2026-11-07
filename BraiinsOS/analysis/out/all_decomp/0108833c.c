// FUN_0108833c @ 0108833c size=752 calls_out=7 calls_in=1
// strings: 

char * FUN_0108833c(int *param_1,char *param_2)

{
  longlong lVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  char *pcVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  bool bVar18;
  ulonglong uVar19;
  
  if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01883d80);
  }
  uVar16 = *(uint *)(*(int *)(param_2 + 4) + 0x28);
  uVar17 = *(uint *)(*(int *)(param_2 + 4) + 0x2c);
  ClearExclusiveLocal();
  DataMemoryBarrier(0xb);
  if ((uVar16 & uVar17) == 0xffffffff) {
    if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
      FUN_00faa464(&DAT_00419463,0x28,&DAT_01883d30);
    }
    iVar11 = *(int *)(param_2 + 8);
    param_2[1] = '\0';
    pcVar12 = (char *)(iVar11 + 4);
    if (*pcVar12 == '\0') {
      bVar18 = (bool)hasExclusiveAccess(pcVar12);
      if (bVar18) {
        *pcVar12 = '\x01';
        DataMemoryBarrier(0xb);
        goto LAB_01088550;
      }
    }
    else {
      ClearExclusiveLocal();
    }
    FUN_01280da8(pcVar12);
LAB_01088550:
    FUN_0128236c(pcVar12);
    *(undefined4 *)(iVar11 + 0x10) = 0;
    FUN_01282570(pcVar12);
    if (*pcVar12 == '\x01') {
      DataMemoryBarrier(0xb);
      do {
        bVar18 = (bool)hasExclusiveAccess(pcVar12);
        if (bVar18) {
          *pcVar12 = '\0';
          return param_2;
        }
      } while (*pcVar12 == '\x01');
    }
    ClearExclusiveLocal();
    FUN_01280a5c(pcVar12);
    return param_2;
  }
  uVar15 = 0;
  uVar4 = param_1[2];
  uVar5 = param_1[3];
  uVar8 = param_1[4];
  uVar13 = uVar16 - uVar4;
  uVar2 = param_1[5];
  iVar11 = uVar17 - (uVar5 + (uVar4 > uVar16));
  if (uVar17 <= uVar5 && (uint)(uVar4 <= uVar16) <= uVar17 - uVar5) {
    uVar13 = 0;
    iVar11 = 0;
  }
  uVar19 = FUN_01846088(uVar13,iVar11,&DAT_3b9aca00,0);
  uVar5 = (uint)(uVar19 >> 0x20);
  lVar1 = (uVar19 & 0xffffffff) * 1000000000;
  uVar4 = (uint)lVar1;
  uVar10 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar14 = uVar13 - uVar4;
  lVar1 = (ulonglong)uVar5 * 1000000000 + (ulonglong)uVar10;
  uVar6 = (uint)lVar1;
  uVar9 = (uint)((ulonglong)lVar1 >> 0x20);
  uVar5 = iVar11 - (uVar10 + uVar5 * 1000000000 + (uint)(uVar13 < uVar4));
  uVar13 = uVar4 + uVar14;
  bVar18 = CARRY4(uVar6,uVar5) || CARRY4(uVar6 + uVar5,(uint)CARRY4(uVar4,uVar14));
  uVar4 = uVar6 + uVar5 + (uint)CARRY4(uVar4,uVar14);
  if (uVar9 + bVar18 != 0 || CARRY4(uVar9,(uint)bVar18)) {
    uVar13 = 0xffffffff;
    uVar4 = 0xffffffff;
  }
  uVar5 = uVar17 - (uVar2 + (uVar8 > uVar16));
  if (uVar17 <= uVar2 && (uint)(uVar8 <= uVar16) <= uVar17 - uVar2) {
    uVar5 = 0;
  }
  if (0xf < uVar5) {
    uVar15 = 1;
    if (0x3ff < uVar5) {
      uVar15 = 2;
    }
    if ((0x7fff < uVar5) && (uVar15 = 3, uVar5 >> 0x11 != 0)) {
      uVar15 = 4;
      uVar16 = 0;
      goto LAB_01088484;
    }
  }
  uVar17 = (&DAT_00385088)[uVar15 * 2] & 0x3f;
  uVar16 = uVar13 >> uVar17 | uVar4 << (0x20 - uVar17 & 0xff);
  if (-1 < (int)(uVar17 - 0x20)) {
    uVar16 = uVar4 >> (uVar17 - 0x20 & 0xff);
  }
  uVar16 = uVar16 & (&DAT_003850b0)[uVar15 * 2] - 1;
LAB_01088484:
  if (*param_2 == '\0') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_01883d70);
  }
  uVar17 = param_1[1];
  param_2[3] = (char)uVar16;
  param_2[2] = (char)uVar15;
  param_2[1] = '\x01';
  if (uVar15 < uVar17) {
    piVar7 = (int *)(*param_1 + uVar15 * 8);
    uVar17 = piVar7[1];
    if (uVar16 < uVar17) {
      iVar3 = *piVar7 + uVar16 * 0x18;
      param_2[0xc] = '\0';
      param_2[0xd] = '\0';
      param_2[0xe] = '\0';
      param_2[0xf] = '\0';
      iVar11 = *(int *)(iVar3 + 0x10);
      *(int *)(param_2 + 0x10) = iVar11;
      if (iVar11 == 0) {
        iVar11 = iVar3;
      }
      *(char **)(iVar11 + 0xc) = param_2;
      *(char **)(iVar3 + 0x10) = param_2;
      *(int *)(iVar3 + 8) = *(int *)(iVar3 + 8) + 1;
      return (char *)0x0;
    }
    uVar15 = uVar16;
  }
                    /* WARNING: Subroutine does not return */
  FUN_00faa4a4(uVar15,uVar17,&DAT_01883d60);
}


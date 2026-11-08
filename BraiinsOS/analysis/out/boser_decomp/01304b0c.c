// FUN_01304b0c @ 01304b0c size=664 calls_out=1 calls_in=2
// strings: 

longlong FUN_01304b0c(int *param_1,undefined4 *param_2)

{
  bool bVar1;
  char *pcVar2;
  uint uVar3;
  uint uVar4;
  char *pcVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  char *pcVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  
  uVar12 = param_2[1];
  if (uVar12 == 0) {
    bVar1 = false;
    pcVar10 = (char *)*param_2;
    uVar9 = 0;
    pcVar2 = (char *)0x0;
    iVar6 = 0;
    pcVar5 = (char *)0x0;
    uVar12 = 0;
    if (*param_1 == 0) goto LAB_01304bfc;
  }
  else {
    pcVar10 = (char *)*param_2;
    bVar1 = *pcVar10 == '0';
    if (*param_1 == 0) {
      pcVar2 = (char *)param_1[2];
      if (&DAT_00000022 < pcVar2 + -2) goto LAB_01304d7c;
      uVar9 = 0;
      pcVar5 = (char *)0x0;
      if (pcVar2 < &DAT_0000000b) {
        do {
          if (pcVar2 <= (char *)((byte)pcVar10[uVar9] - 0x30)) goto LAB_01304d58;
          pcVar5 = (char *)(((uint)pcVar5 & 0xffff) * ((uint)pcVar2 & 0xffff));
          bVar13 = (uint)pcVar5 >> 0x10 != 0;
          if (!bVar13) {
            pcVar5 = (char *)(((uint)pcVar5 & 0xffff) + ((byte)pcVar10[uVar9] - 0x30 & 0xffff));
          }
          if (bVar13 || ((uint)pcVar5 & 0x10000) != 0) goto LAB_01304cd4;
          uVar9 = uVar9 + 1;
        } while (uVar12 != uVar9);
      }
      else {
        do {
          uVar4 = (uint)(byte)pcVar10[uVar9];
          pcVar8 = (char *)(uVar4 - 0x30);
          if (0x39 < uVar4) {
            pcVar8 = (char *)((uVar4 - 0x41 & 0xffffffdf) + 10);
          }
          if (pcVar2 <= pcVar8) goto LAB_01304d58;
          pcVar5 = (char *)(((uint)pcVar5 & 0xffff) * ((uint)pcVar2 & 0xffff));
          bVar13 = (uint)pcVar5 >> 0x10 != 0;
          if (!bVar13) {
            pcVar5 = (char *)(((uint)pcVar5 & 0xffff) + ((uint)pcVar8 & 0xffff));
          }
          if (bVar13 || ((uint)pcVar5 & 0x10000) != 0) goto LAB_01304cd4;
          uVar9 = uVar9 + 1;
        } while (uVar12 != uVar9);
      }
      pcVar10 = pcVar10 + uVar12;
LAB_01304bfc:
      *param_2 = pcVar10;
      param_2[1] = 0;
      pcVar2 = pcVar5;
      uVar9 = uVar12;
      goto joined_r0x01304d74;
    }
    uVar4 = param_1[2];
    if (0x22 < uVar4 - 2) {
LAB_01304d7c:
      *param_2 = pcVar10 + 1;
      param_2[1] = uVar12 - 1;
                    /* WARNING: Subroutine does not return */
      FUN_012fb100(&DAT_00425b53,0x8f,&DAT_01ce49f0);
    }
    uVar11 = param_1[1];
    uVar9 = 0;
    pcVar2 = (char *)0x0;
    if (uVar4 < 0xb) {
      do {
        if (uVar4 <= (byte)pcVar10[uVar9] - 0x30) goto LAB_01304cec;
        if (uVar11 == uVar9) goto LAB_01304d38;
        pcVar2 = (char *)(uVar4 * (int)pcVar2 + ((byte)pcVar10[uVar9] - 0x30));
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    else {
      do {
        uVar3 = (uint)(byte)pcVar10[uVar9];
        uVar7 = uVar3 - 0x30;
        if (0x39 < uVar3) {
          uVar7 = (uVar3 - 0x41 & 0xffffffdf) + 10;
        }
        if (uVar4 <= uVar7) goto LAB_01304cec;
        if (uVar11 == uVar9) goto LAB_01304d38;
        pcVar2 = (char *)(uVar4 * (int)pcVar2 + uVar7);
        uVar9 = uVar9 + 1;
      } while (uVar12 != uVar9);
    }
    pcVar10 = pcVar10 + uVar12;
    iVar6 = 0;
    uVar9 = uVar12;
  }
  goto LAB_01304cf8;
LAB_01304d58:
  *param_2 = pcVar10 + uVar9;
  param_2[1] = uVar12 - uVar9;
  pcVar2 = pcVar5;
joined_r0x01304d74:
  uVar12 = 1;
  if (uVar9 == 0) goto LAB_01304d4c;
  goto LAB_01304d14;
LAB_01304cd4:
  *param_2 = pcVar10 + uVar9 + 1;
  param_2[1] = ~uVar9 + uVar12;
  goto LAB_01304d4c;
LAB_01304d38:
  pcVar2 = pcVar10 + uVar11 + 1;
  *param_2 = pcVar2;
  param_2[1] = uVar12 + ~uVar11;
  goto LAB_01304d4c;
LAB_01304cec:
  iVar6 = uVar12 - uVar9;
  pcVar10 = pcVar10 + uVar9;
LAB_01304cf8:
  *param_2 = pcVar10;
  param_2[1] = iVar6;
  uVar12 = (uint)(pcVar2 < (char *)0x10000);
  if (uVar9 != 0) {
LAB_01304d14:
    uVar4 = 0;
    if ((char)param_1[3] != '\0') {
      uVar4 = uVar12;
    }
    if (!bVar1) {
      uVar4 = uVar12;
    }
    if (uVar9 == 1) {
      uVar4 = uVar12;
    }
    return CONCAT44(pcVar2,uVar4);
  }
LAB_01304d4c:
  return ZEXT48(pcVar2) << 0x20;
}


// FUN_00e61810 @ 00e61810 size=1028 calls_out=5 calls_in=1
// strings: errors

undefined4 FUN_00e61810(char *param_1,uint *param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  bool bVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 *puVar11;
  int iVar12;
  uint *puVar14;
  uint *puVar13;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 auStack_49 [18];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar11 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar9 = (int *)*puVar11;
    iVar5 = piVar9[2];
    if (*piVar9 == iVar5) {
      FUN_00edff4c(piVar9,iVar5,1,1,1);
      iVar5 = piVar9[2];
    }
    *(undefined1 *)(piVar9[1] + iVar5) = 0x2c;
    piVar9[2] = iVar5 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar11,"errors",6);
  if ((char)local_50 != '\x04') {
    uVar4 = FUN_0157c4a0(local_50,local_4c);
    return uVar4;
  }
  piVar9 = (int *)*puVar11;
  iVar5 = piVar9[2];
  if (*piVar9 == iVar5) {
    FUN_00edff4c(piVar9,iVar5,1,1,1);
    iVar5 = piVar9[2];
  }
  *(undefined1 *)(piVar9[1] + iVar5) = 0x3a;
  piVar9[2] = iVar5 + 1;
  local_54 = (int *)*puVar11;
  iVar5 = local_54[2];
  if (*local_54 == iVar5) {
    FUN_00edff4c(local_54,iVar5,1,1,1);
    iVar5 = local_54[2];
  }
  iVar12 = iVar5 + 1;
  *(undefined1 *)(local_54[1] + iVar5) = 0x5b;
  local_54[2] = iVar12;
  if (param_3 != 0) {
    bVar3 = true;
    puVar13 = param_2;
    do {
      puVar14 = puVar13 + 1;
      uVar10 = *puVar13;
      if (!bVar3) {
        if (*local_54 == iVar12) {
          FUN_00edff4c(local_54,iVar12,1,1,1);
          iVar12 = local_54[2];
        }
        *(undefined1 *)(local_54[1] + iVar12) = 0x2c;
        iVar12 = iVar12 + 1;
        local_54[2] = iVar12;
      }
      uVar6 = uVar10;
      if ((int)uVar10 < 0) {
        uVar6 = -uVar10;
      }
      iVar5 = 0xb;
      if (uVar6 < 10000) {
        if (99 < uVar6) goto LAB_00e61a1c;
LAB_00e619e0:
        uVar7 = uVar6;
        if (9 < uVar6) goto LAB_00e619f0;
LAB_00e61a54:
        iVar5 = iVar5 + -1;
        *(byte *)((int)&local_50 + iVar5) = (byte)uVar7 | 0x30;
      }
      else {
        iVar2 = 0;
        uVar7 = uVar6;
        do {
          iVar5 = iVar2;
          uVar6 = uVar7 / 10000;
          uVar8 = uVar6 * 0xd8f0 + uVar7;
          uVar1 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
          *(undefined2 *)((int)((int)register0x00000054 + -0x49) + iVar5) =
               *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
          *(undefined2 *)((int)((int)register0x00000054 + -0x49) + iVar5 + 2) =
               *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar8 & 0xffff) * 2);
          bVar3 = 99999999 < uVar7;
          iVar2 = iVar5 + -4;
          uVar7 = uVar6;
        } while (bVar3);
        iVar5 = iVar5 + 7;
        if (uVar6 < 100) goto LAB_00e619e0;
LAB_00e61a1c:
        iVar5 = iVar5 + -2;
        uVar7 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        *(undefined2 *)((int)&local_50 + iVar5) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar7 * 0xff9c + uVar6 & 0xffff) * 2);
        if (uVar7 < 10) goto LAB_00e61a54;
LAB_00e619f0:
        iVar5 = iVar5 + -2;
        *(undefined2 *)((int)&local_50 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
      }
      if (0x7fffffff < uVar10) {
        iVar5 = iVar5 + -1;
        *(undefined1 *)((int)&local_50 + iVar5) = 0x2d;
      }
      uVar10 = 0xb - iVar5;
      if ((uint)(*local_54 - iVar12) < uVar10) {
        FUN_00edff4c(local_54,iVar12,uVar10,1,1);
        iVar12 = local_54[2];
      }
      FUN_016dd1aa(local_54[1] + iVar12,(int)&local_50 + iVar5,uVar10);
      iVar12 = iVar12 + uVar10;
      bVar3 = false;
      local_54[2] = iVar12;
      puVar13 = puVar14;
    } while (puVar14 != param_2 + param_3);
  }
  if (*local_54 == iVar12) {
    FUN_00edff4c(local_54,iVar12,1,1,1);
    iVar12 = local_54[2];
  }
  *(undefined1 *)(local_54[1] + iVar12) = 0x5d;
  local_54[2] = iVar12 + 1;
  return 0;
}


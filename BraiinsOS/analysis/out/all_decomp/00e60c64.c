// FUN_00e60c64 @ 00e60c64 size=1360 calls_out=5 calls_in=2
// strings: 

undefined4
FUN_00e60c64(char *param_1,undefined4 param_2,undefined4 param_3,ushort *param_4,int param_5)

{
  uint uVar1;
  ushort uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  undefined4 *puVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 local_4c;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar8 = (int *)*puVar7;
    iVar4 = piVar8[2];
    if (*piVar8 == iVar4) {
      FUN_00edff4c(piVar8,iVar4,1,1,1);
      iVar4 = piVar8[2];
    }
    *(undefined1 *)(piVar8[1] + iVar4) = 0x2c;
    piVar8[2] = iVar4 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar7,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar3 = FUN_0157c4a0(local_50,local_4c);
    return uVar3;
  }
  piVar8 = (int *)*puVar7;
  iVar4 = piVar8[2];
  if (*piVar8 == iVar4) {
    FUN_00edff4c(piVar8,iVar4,1,1,1);
    iVar4 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar4) = 0x3a;
  piVar8[2] = iVar4 + 1;
  piVar8 = (int *)*puVar7;
  iVar4 = piVar8[2];
  if (*piVar8 == iVar4) {
    FUN_00edff4c(piVar8,iVar4,1,1,1);
    iVar4 = piVar8[2];
  }
  iVar10 = iVar4 + 1;
  *(undefined1 *)(piVar8[1] + iVar4) = 0x5b;
  piVar8[2] = iVar10;
  if (param_5 == 0) {
    if (*piVar8 == iVar10) {
      FUN_00edff4c(piVar8,iVar10,1,1,1);
      iVar10 = piVar8[2];
    }
    *(undefined1 *)(piVar8[1] + iVar10) = 0x5d;
    piVar8[2] = iVar10 + 1;
    return 0;
  }
  uVar2 = *param_4;
  uVar6 = (int)(short)uVar2 >> 0xf;
  uVar6 = (uVar2 ^ uVar6) - uVar6;
  uVar5 = uVar6 & 0xffff;
  if (uVar5 < 10000) {
    iVar4 = 6;
    if (uVar5 < 100) {
      uVar5 = uVar6;
      uVar6 = uVar6 & 0xffff;
    }
    else {
      uVar5 = (uint)((short)(uVar5 >> 2) * 0x147b) >> 0x11;
      local_4c = CONCAT22(local_4c._2_2_,
                          *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar6 & 0xffff) * 2));
      iVar4 = 4;
      uVar6 = uVar5;
    }
    if (9 < uVar6) {
      iVar4 = iVar4 + -2;
      *(undefined2 *)((int)&local_50 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      goto joined_r0x00e60e48;
    }
  }
  else {
    uVar5 = (uint)((short)(uVar5 >> 4) * 0x347) >> 0x13;
    uVar6 = uVar5 * 0xd8f0 + uVar6;
    uVar1 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
    local_50 = CONCAT22(*(undefined2 *)(&DAT_0040f4ca + uVar1 * 2),(undefined2)local_50);
    local_4c = CONCAT22(local_4c._2_2_,
                        *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar6 & 0xffff) * 2));
    iVar4 = 2;
  }
  iVar4 = iVar4 + -1;
  *(byte *)((int)&local_50 + iVar4) = (byte)uVar5 | 0x30;
joined_r0x00e60e48:
  if (0x7fffffff < (uint)(int)(short)uVar2) {
    iVar4 = iVar4 + -1;
    *(undefined1 *)((int)&local_50 + iVar4) = 0x2d;
  }
  uVar6 = 6 - iVar4;
  if ((uint)(*piVar8 - iVar10) < uVar6) {
    FUN_00edff4c(piVar8,iVar10,uVar6,1,1);
    iVar10 = piVar8[2];
  }
  FUN_016dd1aa(piVar8[1] + iVar10,(int)&local_50 + iVar4,uVar6);
  iVar10 = iVar10 + uVar6;
  piVar8[2] = iVar10;
  if (param_5 != 1) {
    iVar4 = param_5 * 2 + -2;
    do {
      param_4 = param_4 + 1;
      uVar2 = *param_4;
      if (*piVar8 == iVar10) {
        FUN_00edff4c(piVar8,iVar10,1,1,1);
        iVar10 = piVar8[2];
      }
      iVar9 = iVar10 + 1;
      *(undefined1 *)(piVar8[1] + iVar10) = 0x2c;
      uVar6 = ((int)(short)uVar2 ^ (int)(short)uVar2 >> 0xf) - ((int)(short)uVar2 >> 0xf);
      piVar8[2] = iVar9;
      uVar5 = uVar6 & 0xffff;
      if (uVar5 < 10000) {
        iVar10 = 6;
        if (uVar5 < 100) {
          uVar5 = uVar6 & 0xffff;
          if (9 < uVar5) goto LAB_00e60fdc;
          goto LAB_00e61014;
        }
        uVar5 = (uint)((short)(uVar5 >> 2) * 0x147b) >> 0x11;
        local_4c = CONCAT22(local_4c._2_2_,
                            *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar6 & 0xffff) * 2));
        iVar10 = 4;
        uVar6 = uVar5;
        if (uVar5 < 10) goto LAB_00e61014;
LAB_00e60fdc:
        iVar10 = iVar10 + -2;
        *(undefined2 *)((int)&local_50 + iVar10) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
      }
      else {
        uVar5 = (uint)((short)(uVar5 >> 4) * 0x347) >> 0x13;
        uVar6 = uVar5 * 0xd8f0 + uVar6;
        uVar1 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
        local_50 = CONCAT22(*(undefined2 *)(&DAT_0040f4ca + uVar1 * 2),(undefined2)local_50);
        local_4c = CONCAT22(local_4c._2_2_,
                            *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar6 & 0xffff) * 2));
        iVar10 = 2;
        uVar6 = uVar5;
LAB_00e61014:
        iVar10 = iVar10 + -1;
        *(byte *)((int)&local_50 + iVar10) = (byte)uVar6 | 0x30;
      }
      if (0x7fffffff < (uint)(int)(short)uVar2) {
        iVar10 = iVar10 + -1;
        *(undefined1 *)((int)&local_50 + iVar10) = 0x2d;
      }
      uVar6 = 6 - iVar10;
      if ((uint)(*piVar8 - iVar9) < uVar6) {
        FUN_00edff4c(piVar8,iVar9,uVar6,1,1);
        iVar9 = piVar8[2];
      }
      FUN_016dd1aa(piVar8[1] + iVar9,(int)&local_50 + iVar10,uVar6);
      iVar10 = iVar9 + uVar6;
      iVar4 = iVar4 + -2;
      piVar8[2] = iVar10;
    } while (iVar4 != 0);
  }
  if (*piVar8 == iVar10) {
    FUN_00edff4c(piVar8,iVar10,1,1,1);
    iVar10 = piVar8[2];
  }
  *(undefined1 *)(piVar8[1] + iVar10) = 0x5d;
  piVar8[2] = iVar10 + 1;
  return 0;
}


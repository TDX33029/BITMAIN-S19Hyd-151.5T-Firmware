// FUN_00e66024 @ 00e66024 size=808 calls_out=5 calls_in=6
// strings: 

undefined4
FUN_00e66024(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 auStack_49 [18];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar6 = (int *)*puVar8;
    iVar4 = piVar6[2];
    if (*piVar6 == iVar4) {
      FUN_00edff4c(piVar6,iVar4,1,1,1);
      iVar4 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar4) = 0x2c;
    piVar6[2] = iVar4 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar8,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar3 = FUN_0157c4a0(local_50,local_4c);
    return uVar3;
  }
  piVar6 = (int *)*puVar8;
  iVar4 = piVar6[2];
  if (*piVar6 == iVar4) {
    FUN_00edff4c(piVar6,iVar4,1,1,1);
    iVar4 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar4) = 0x3a;
  piVar6[2] = iVar4 + 1;
  piVar6 = (int *)*puVar8;
  if ((param_4 & 1) == 0) {
    iVar4 = piVar6[2];
    if ((uint)(*piVar6 - iVar4) < 4) {
      FUN_00edff4c(piVar6,iVar4,4,1,1);
      iVar4 = piVar6[2];
    }
    *(undefined4 *)(piVar6[1] + iVar4) = 0x6c6c756e;
    piVar6[2] = iVar4 + 4;
    return 0;
  }
  uVar7 = param_5;
  if ((int)param_5 < 0) {
    uVar7 = -param_5;
  }
  iVar4 = 0xb;
  if (9999 < uVar7) {
    iVar10 = 0;
    uVar5 = uVar7;
    do {
      iVar4 = iVar10;
      uVar7 = uVar5 / 10000;
      uVar9 = uVar7 * 0xd8f0 + uVar5;
      uVar2 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)((int)register0x00000054 + -0x49) + iVar4) =
           *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)((int)register0x00000054 + -0x49) + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar9 & 0xffff) * 2);
      bVar1 = 99999999 < uVar5;
      iVar10 = iVar4 + -4;
      uVar5 = uVar7;
    } while (bVar1);
    iVar4 = iVar4 + 7;
    local_54 = param_5;
  }
  if (99 < uVar7) {
    iVar4 = iVar4 + -2;
    uVar5 = (uint)((short)((uVar7 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)&local_50 + iVar4) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar5 * 0xff9c + uVar7 & 0xffff) * 2);
    uVar7 = uVar5;
  }
  if (uVar7 < 10) {
    iVar4 = iVar4 + -1;
    *(byte *)((int)&local_50 + iVar4) = (byte)uVar7 | 0x30;
  }
  else {
    iVar4 = iVar4 + -2;
    *(undefined2 *)((int)&local_50 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar7 * 2);
  }
  if (0x7fffffff < param_5) {
    iVar4 = iVar4 + -1;
    *(undefined1 *)((int)&local_50 + iVar4) = 0x2d;
  }
  iVar10 = piVar6[2];
  uVar7 = 0xb - iVar4;
  if ((uint)(*piVar6 - iVar10) < uVar7) {
    FUN_00edff4c(piVar6,iVar10,uVar7,1,1);
    iVar10 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar10,(int)&local_50 + iVar4,uVar7);
  piVar6[2] = iVar10 + uVar7;
  return 0;
}


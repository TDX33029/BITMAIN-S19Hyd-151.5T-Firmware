// FUN_00e65278 @ 00e65278 size=660 calls_out=5 calls_in=4
// strings: 

undefined4 FUN_00e65278(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 auStack_4a [19];
  
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
  iVar5 = 10;
  piVar6[2] = iVar4 + 1;
  piVar6 = (int *)*puVar8;
  if (9999 < param_4) {
    iVar4 = 0;
    uVar7 = param_4;
    do {
      iVar5 = iVar4;
      param_4 = uVar7 / 10000;
      uVar9 = param_4 * 0xd8f0 + uVar7;
      uVar2 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar5) =
           *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar5 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar9 & 0xffff) * 2);
      bVar1 = 99999999 < uVar7;
      iVar4 = iVar5 + -4;
      uVar7 = param_4;
    } while (bVar1);
    iVar5 = iVar5 + 6;
  }
  if (99 < param_4) {
    iVar5 = iVar5 + -2;
    uVar7 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)&local_50 + iVar5) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar7 * 0xff9c + param_4 & 0xffff) * 2);
    param_4 = uVar7;
  }
  if (param_4 < 10) {
    iVar5 = iVar5 + -1;
    *(byte *)((int)&local_50 + iVar5) = (byte)param_4 | 0x30;
  }
  else {
    iVar5 = iVar5 + -2;
    *(undefined2 *)((int)&local_50 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + param_4 * 2);
  }
  iVar4 = piVar6[2];
  uVar7 = 10 - iVar5;
  if ((uint)(*piVar6 - iVar4) < uVar7) {
    FUN_00edff4c(piVar6,iVar4,uVar7,1,1);
    iVar4 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar4,(int)&local_50 + iVar5,uVar7);
  piVar6[2] = iVar4 + uVar7;
  return 0;
}


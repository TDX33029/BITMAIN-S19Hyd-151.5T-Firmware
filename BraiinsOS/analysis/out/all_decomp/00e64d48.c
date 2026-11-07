// FUN_00e64d48 @ 00e64d48 size=760 calls_out=5 calls_in=1
// strings: 

undefined4
FUN_00e64d48(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  uint uVar6;
  int iVar7;
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
    piVar5 = (int *)*puVar8;
    iVar4 = piVar5[2];
    if (*piVar5 == iVar4) {
      FUN_00edff4c(piVar5,iVar4,1,1,1);
      iVar4 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar4) = 0x2c;
    piVar5[2] = iVar4 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar8,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar3 = FUN_0157c4a0(local_50,local_4c);
    return uVar3;
  }
  piVar5 = (int *)*puVar8;
  iVar4 = piVar5[2];
  if (*piVar5 == iVar4) {
    FUN_00edff4c(piVar5,iVar4,1,1,1);
    iVar4 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar4) = 0x3a;
  piVar5[2] = iVar4 + 1;
  piVar5 = (int *)*puVar8;
  if ((param_4 & 1) == 0) {
    iVar4 = piVar5[2];
    if ((uint)(*piVar5 - iVar4) < 4) {
      FUN_00edff4c(piVar5,iVar4,4,1,1);
      iVar4 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar4) = 0x6c6c756e;
    piVar5[2] = iVar4 + 4;
    return 0;
  }
  iVar4 = 10;
  if (9999 < param_5) {
    iVar7 = 0;
    uVar6 = param_5;
    do {
      iVar4 = iVar7;
      param_5 = uVar6 / 10000;
      uVar9 = param_5 * 0xd8f0 + uVar6;
      uVar2 = (uint)((short)((uVar9 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar4) =
           *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar4 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar2 * 0xff9c + uVar9 & 0xffff) * 2);
      bVar1 = 99999999 < uVar6;
      iVar7 = iVar4 + -4;
      uVar6 = param_5;
    } while (bVar1);
    iVar4 = iVar4 + 6;
  }
  if (99 < param_5) {
    iVar4 = iVar4 + -2;
    uVar6 = (uint)((short)((param_5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)&local_50 + iVar4) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + param_5 & 0xffff) * 2);
    param_5 = uVar6;
  }
  if (param_5 < 10) {
    iVar4 = iVar4 + -1;
    *(byte *)((int)&local_50 + iVar4) = (byte)param_5 | 0x30;
  }
  else {
    iVar4 = iVar4 + -2;
    *(undefined2 *)((int)&local_50 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + param_5 * 2);
  }
  iVar7 = piVar5[2];
  uVar6 = 10 - iVar4;
  if ((uint)(*piVar5 - iVar7) < uVar6) {
    FUN_00edff4c(piVar5,iVar7,uVar6,1,1);
    iVar7 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar7,(int)&local_50 + iVar4,uVar6);
  piVar5[2] = iVar7 + uVar6;
  return 0;
}


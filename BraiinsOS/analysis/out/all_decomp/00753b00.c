// FUN_00753b00 @ 00753b00 size=656 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00753b00(char *param_1,undefined4 param_2,uint param_3)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  uint uVar7;
  undefined4 *puVar8;
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
      FUN_006bca64(piVar6,iVar4,1,1,1);
      iVar4 = piVar6[2];
    }
    *(undefined1 *)(piVar6[1] + iVar4) = 0x2c;
    piVar6[2] = iVar4 + 1;
  }
  param_1[1] = '\x02';
  FUN_007536f4(&local_50,*puVar8,param_2,5);
  if ((char)local_50 != '\x04') {
    uVar3 = FUN_0157c4a0(local_50,local_4c);
    return uVar3;
  }
  piVar6 = (int *)*puVar8;
  iVar4 = piVar6[2];
  if (*piVar6 == iVar4) {
    FUN_006bca64(piVar6,iVar4,1,1,1);
    iVar4 = piVar6[2];
  }
  *(undefined1 *)(piVar6[1] + iVar4) = 0x3a;
  iVar5 = 10;
  piVar6[2] = iVar4 + 1;
  piVar6 = (int *)*puVar8;
  if (9999 < param_3) {
    iVar4 = 0;
    uVar7 = param_3;
    do {
      iVar5 = iVar4;
      param_3 = uVar7 / 10000;
      uVar2 = (uint)((short)(uVar7 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar5) =
           *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar5 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar7 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar7;
      iVar4 = iVar5 + -4;
      uVar7 = param_3;
    } while (bVar1);
    iVar5 = iVar5 + 6;
  }
  if (99 < param_3) {
    iVar5 = iVar5 + -2;
    uVar7 = (uint)((short)((param_3 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)&local_50 + iVar5) =
         *(undefined2 *)(&DAT_0040f4ca + (param_3 + uVar7 * -100 & 0xffff) * 2);
    param_3 = uVar7;
  }
  if (param_3 < 10) {
    iVar5 = iVar5 + -1;
    *(byte *)((int)&local_50 + iVar5) = (byte)param_3 | 0x30;
  }
  else {
    iVar5 = iVar5 + -2;
    *(undefined2 *)((int)&local_50 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + param_3 * 2);
  }
  iVar4 = piVar6[2];
  uVar7 = 10 - iVar5;
  if ((uint)(*piVar6 - iVar4) < uVar7) {
    FUN_006bca64(piVar6,iVar4,uVar7,1,1);
    iVar4 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar4,(int)&local_50 + iVar5,uVar7);
  piVar6[2] = iVar4 + uVar7;
  return 0;
}


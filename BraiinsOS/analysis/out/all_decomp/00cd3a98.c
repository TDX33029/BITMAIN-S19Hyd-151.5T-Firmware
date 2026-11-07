// FUN_00cd3a98 @ 00cd3a98 size=676 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_00cd3a98(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  bool bVar1;
  uint uVar2;
  undefined4 uVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  undefined2 uStack_52;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 auStack_4a [19];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  piVar8 = *(int **)(param_1 + 4);
  piVar4 = (int *)*piVar8;
  if (param_1[1] != '\x01') {
    iVar6 = piVar4[2];
    if (*piVar4 == iVar6) {
      FUN_00d653ec(piVar4,iVar6,1,1,1);
      iVar6 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar6) = 0x2c;
    piVar4[2] = piVar4[2] + 1;
    piVar4 = (int *)*piVar8;
  }
  param_1[1] = '\x02';
  FUN_00cd2b24(&local_50,piVar4,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar3 = FUN_0157c4a0(local_50,local_4c);
    return uVar3;
  }
  piVar4 = (int *)*piVar8;
  iVar6 = piVar4[2];
  if (*piVar4 == iVar6) {
    FUN_00d653ec(piVar4,iVar6,1,1,1);
    iVar6 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar6) = 0x3a;
  iVar6 = 10;
  piVar4[2] = piVar4[2] + 1;
  piVar8 = (int *)*piVar8;
  if (9999 < param_4) {
    iVar5 = 0;
    uVar7 = param_4;
    do {
      iVar6 = iVar5;
      param_4 = uVar7 / 10000;
      uVar2 = (uint)((short)(uVar7 % 10000 >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar6) =
           *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      *(undefined2 *)((int)((int)register0x00000054 + -0x4a) + iVar6 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar7 % 10000 + uVar2 * -100 & 0xffff) * 2);
      bVar1 = 99999999 < uVar7;
      iVar5 = iVar6 + -4;
      uVar7 = param_4;
    } while (bVar1);
    iVar6 = iVar6 + 6;
  }
  if (99 < param_4) {
    iVar6 = iVar6 + -2;
    uVar7 = (uint)((short)((param_4 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)&local_50 + iVar6) =
         *(undefined2 *)(&DAT_0040f4ca + (param_4 + uVar7 * -100 & 0xffff) * 2);
    param_4 = uVar7;
  }
  if (param_4 < 10) {
    iVar6 = iVar6 + -1;
    *(byte *)((int)&local_50 + iVar6) = (byte)param_4 | 0x30;
  }
  else {
    iVar6 = iVar6 + -2;
    *(undefined2 *)((int)&local_50 + iVar6) = *(undefined2 *)(&DAT_0040f4ca + param_4 * 2);
  }
  uVar7 = 10 - iVar6;
  iVar5 = piVar8[2];
  if ((uint)(*piVar8 - iVar5) < uVar7) {
    FUN_00d653ec(piVar8,iVar5,uVar7,1,1);
    iVar5 = piVar8[2];
  }
  FUN_016dd1aa(piVar8[1] + iVar5,(int)&local_50 + iVar6,uVar7);
  piVar8[2] = piVar8[2] + uVar7;
  return 0;
}


// FUN_00e64138 @ 00e64138 size=784 calls_out=5 calls_in=6
// strings: 

undefined4
FUN_00e64138(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,short param_5)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined4 *puVar6;
  int iVar7;
  byte bVar8;
  uint uVar9;
  undefined2 uStack_4a;
  undefined4 local_48;
  undefined4 local_44;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar6 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar6;
    iVar3 = piVar5[2];
    if (*piVar5 == iVar3) {
      FUN_00edff4c(piVar5,iVar3,1,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar3) = 0x2c;
    piVar5[2] = iVar3 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_48,*puVar6,param_2,param_3);
  if ((char)local_48 != '\x04') {
    uVar2 = FUN_0157c4a0(local_48,local_44);
    return uVar2;
  }
  piVar5 = (int *)*puVar6;
  iVar3 = piVar5[2];
  if (*piVar5 == iVar3) {
    FUN_00edff4c(piVar5,iVar3,1,1,1);
    iVar3 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar3) = 0x3a;
  piVar5[2] = iVar3 + 1;
  piVar5 = (int *)*puVar6;
  if ((param_4 & 1) == 0) {
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 4) {
      FUN_00edff4c(piVar5,iVar3,4,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar3) = 0x6c6c756e;
    piVar5[2] = iVar3 + 4;
    return 0;
  }
  uVar4 = ((int)param_5 ^ (int)param_5 >> 0xf) - ((int)param_5 >> 0xf);
  uVar9 = uVar4 & 0xffff;
  if (uVar9 < 10000) {
    iVar3 = 6;
    if (uVar9 < 100) {
      uVar9 = uVar4;
      uVar4 = uVar4 & 0xffff;
    }
    else {
      uVar1 = (short)(uVar9 >> 2) * 0x147b;
      uVar9 = uVar1 >> 0x11;
      iVar3 = 4;
      local_44 = CONCAT22(local_44._2_2_,
                          *(undefined2 *)
                           (&DAT_0040f4ca +
                           ((short)(ushort)(uVar1 >> 0x11) * -100 + uVar4 & 0xffff) * 2));
      uVar4 = uVar9;
    }
    bVar8 = (byte)uVar9;
    if (9 < uVar4) {
      iVar3 = iVar3 + -2;
      *(undefined2 *)((int)&local_48 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar4 * 2);
      goto joined_r0x00e64314;
    }
  }
  else {
    uVar9 = (short)(uVar9 >> 4) * 0x347;
    bVar8 = (byte)(uVar9 >> 0x13);
    uVar4 = (short)(ushort)(uVar9 >> 0x13) * -10000 + uVar4;
    uVar9 = (short)((uVar4 & 0xffff) >> 2) * 0x147b;
    local_48 = CONCAT22(*(undefined2 *)(&DAT_0040f4ca + (uVar9 >> 0x11) * 2),(undefined2)local_48);
    iVar3 = 2;
    local_44 = CONCAT22(local_44._2_2_,
                        *(undefined2 *)
                         (&DAT_0040f4ca +
                         ((short)(ushort)(uVar9 >> 0x11) * -100 + uVar4 & 0xffff) * 2));
  }
  iVar3 = iVar3 + -1;
  *(byte *)((int)&local_48 + iVar3) = bVar8 | 0x30;
joined_r0x00e64314:
  if (0x7fffffff < (uint)(int)param_5) {
    iVar3 = iVar3 + -1;
    *(undefined1 *)((int)&local_48 + iVar3) = 0x2d;
  }
  iVar7 = piVar5[2];
  uVar4 = 6 - iVar3;
  if ((uint)(*piVar5 - iVar7) < uVar4) {
    FUN_00edff4c(piVar5,iVar7,uVar4,1,1);
    iVar7 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar7,(int)&local_48 + iVar3,uVar4);
  piVar5[2] = iVar7 + uVar4;
  return 0;
}


// FUN_00e6c758 @ 00e6c758 size=680 calls_out=5 calls_in=1
// strings: 

int FUN_00e6c758(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4,uint param_5)

{
  uint uVar1;
  byte bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined2 uStack_42;
  byte local_40;
  undefined2 uStack_3f;
  undefined1 uStack_3d;
  undefined1 uStack_3c;
  
  if (*param_1 != '\0') {
    local_40 = 10;
    uStack_3f = 0;
    uStack_3d = 0;
    iVar3 = FUN_0157c50c(&local_40,0,0);
    return iVar3;
  }
  iVar3 = FUN_00e5b230(param_1);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a9504);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  piVar6 = (int *)*puVar7;
  iVar3 = piVar6[2];
  if ((uint)(*piVar6 - iVar3) < 2) {
    FUN_00edff4c(piVar6,iVar3,2,1,1);
    iVar3 = piVar6[2];
  }
  piVar6[2] = iVar3 + 2;
  *(undefined2 *)(piVar6[1] + iVar3) = 0x203a;
  piVar6 = (int *)*puVar7;
  if ((param_4 & 1) == 0) {
    iVar3 = piVar6[2];
    if ((uint)(*piVar6 - iVar3) < 4) {
      FUN_00edff4c(piVar6,iVar3,4,1,1);
      iVar3 = piVar6[2];
    }
    *(undefined4 *)(piVar6[1] + iVar3) = 0x6c6c756e;
    iVar3 = iVar3 + 4;
    goto LAB_00e6c964;
  }
  uVar5 = param_5 & 0xffff;
  if (uVar5 < 10000) {
    if (uVar5 < 100) {
      iVar3 = 5;
      uVar5 = param_5 & 0xffff;
    }
    else {
      uVar1 = (short)(uVar5 >> 2) * 0x147b;
      uVar5 = uVar1 >> 0x11;
      iVar3 = 3;
      uStack_3d = (undefined1)
                  *(undefined2 *)
                   (&DAT_0040f4ca + ((short)(ushort)(uVar1 >> 0x11) * -100 + param_5 & 0xffff) * 2);
      uStack_3c = (undefined1)
                  ((ushort)*(undefined2 *)
                            (&DAT_0040f4ca +
                            ((short)(ushort)(uVar1 >> 0x11) * -100 + param_5 & 0xffff) * 2) >> 8);
      param_5 = uVar5;
    }
    if (uVar5 < 10) {
      bVar2 = (byte)param_5;
      goto LAB_00e6c920;
    }
    iVar4 = iVar3 + -2;
    *(undefined2 *)((int)&uStack_42 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar5 * 2);
  }
  else {
    uVar5 = (short)(uVar5 >> 4) * 0x347;
    bVar2 = (byte)(uVar5 >> 0x13);
    param_5 = (short)(ushort)(uVar5 >> 0x13) * -10000 + param_5;
    uVar5 = (short)((param_5 & 0xffff) >> 2) * 0x147b;
    uStack_3f = *(undefined2 *)(&DAT_0040f4ca + (uVar5 >> 0x11) * 2);
    iVar3 = 1;
    uStack_3d = (undefined1)
                *(undefined2 *)
                 (&DAT_0040f4ca + ((short)(ushort)(uVar5 >> 0x11) * -100 + param_5 & 0xffff) * 2);
    uStack_3c = (undefined1)
                ((ushort)*(undefined2 *)
                          (&DAT_0040f4ca +
                          ((short)(ushort)(uVar5 >> 0x11) * -100 + param_5 & 0xffff) * 2) >> 8);
LAB_00e6c920:
    iVar4 = iVar3 + -1;
    *(byte *)((int)&uStack_42 + iVar3 + 1) = bVar2 | 0x30;
  }
  iVar3 = piVar6[2];
  uVar5 = 5 - iVar4;
  if ((uint)(*piVar6 - iVar3) < uVar5) {
    FUN_00edff4c(piVar6,iVar3,uVar5,1,1);
    iVar3 = piVar6[2];
  }
  FUN_016dd1aa(piVar6[1] + iVar3,&local_40 + iVar4,uVar5);
  iVar3 = iVar3 + uVar5;
LAB_00e6c964:
  piVar6[2] = iVar3;
  *(undefined1 *)(puVar7 + 4) = 1;
  return 0;
}


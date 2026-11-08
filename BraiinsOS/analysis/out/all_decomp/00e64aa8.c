// FUN_00e64aa8 @ 00e64aa8 size=652 calls_out=5 calls_in=1
// strings: 

undefined4 FUN_00e64aa8(char *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  int *piVar5;
  byte *pbVar6;
  undefined4 *puVar7;
  int iVar8;
  byte bVar9;
  byte abStack_4a [3];
  undefined2 uStack_47;
  undefined1 uStack_45;
  undefined4 uStack_44;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar7 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar7;
    iVar4 = piVar5[2];
    if (*piVar5 == iVar4) {
      FUN_00edff4c(piVar5,iVar4,1,1,1);
      iVar4 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar4) = 0x2c;
    piVar5[2] = iVar4 + 1;
  }
  pbVar6 = abStack_4a + 2;
  param_1[1] = '\x02';
  FUN_00e5d350(pbVar6,*puVar7,param_2,param_3);
  if (abStack_4a[2] != '\x04') {
    uVar3 = FUN_0157c4a0(CONCAT13(uStack_45,CONCAT21(uStack_47,abStack_4a[2])),uStack_44);
    return uVar3;
  }
  piVar5 = (int *)*puVar7;
  iVar4 = piVar5[2];
  if (*piVar5 == iVar4) {
    FUN_00edff4c(piVar5,iVar4,1,1,1);
    iVar4 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar4) = 0x3a;
  piVar5[2] = iVar4 + 1;
  uVar2 = param_4 & 0xffff;
  piVar5 = (int *)*puVar7;
  if (uVar2 < 10000) {
    if (uVar2 < 100) {
      iVar4 = 5;
      uVar2 = param_4 & 0xffff;
    }
    else {
      uVar1 = (short)(uVar2 >> 2) * 0x147b;
      uVar2 = uVar1 >> 0x11;
      uStack_45 = (undefined1)
                  *(undefined2 *)
                   (&DAT_0040f4ca + ((short)(ushort)(uVar1 >> 0x11) * -100 + param_4 & 0xffff) * 2);
      uStack_44._0_1_ =
           (undefined1)
           ((ushort)*(undefined2 *)
                     (&DAT_0040f4ca + ((short)(ushort)(uVar1 >> 0x11) * -100 + param_4 & 0xffff) * 2
                     ) >> 8);
      iVar4 = 3;
      param_4 = uVar2;
    }
    if (9 < uVar2) {
      iVar4 = iVar4 + -2;
      *(undefined2 *)(pbVar6 + iVar4) = *(undefined2 *)(&DAT_0040f4ca + uVar2 * 2);
      goto LAB_00e64c58;
    }
    bVar9 = (byte)param_4;
  }
  else {
    uVar2 = (short)(uVar2 >> 4) * 0x347;
    bVar9 = (byte)(uVar2 >> 0x13);
    param_4 = (short)(ushort)(uVar2 >> 0x13) * -10000 + param_4;
    uVar2 = (short)((param_4 & 0xffff) >> 2) * 0x147b;
    uStack_47 = *(undefined2 *)(&DAT_0040f4ca + (uVar2 >> 0x11) * 2);
    uStack_45 = (undefined1)
                *(undefined2 *)
                 (&DAT_0040f4ca + ((short)(ushort)(uVar2 >> 0x11) * -100 + param_4 & 0xffff) * 2);
    uStack_44._0_1_ =
         (undefined1)
         ((ushort)*(undefined2 *)
                   (&DAT_0040f4ca + ((short)(ushort)(uVar2 >> 0x11) * -100 + param_4 & 0xffff) * 2)
         >> 8);
    iVar4 = 1;
  }
  iVar4 = iVar4 + -1;
  pbVar6[iVar4] = bVar9 | 0x30;
LAB_00e64c58:
  iVar8 = piVar5[2];
  uVar2 = 5 - iVar4;
  if ((uint)(*piVar5 - iVar8) < uVar2) {
    FUN_00edff4c(piVar5,iVar8,uVar2,1,1);
    iVar8 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar8,pbVar6 + iVar4,uVar2);
  piVar5[2] = iVar8 + uVar2;
  return 0;
}


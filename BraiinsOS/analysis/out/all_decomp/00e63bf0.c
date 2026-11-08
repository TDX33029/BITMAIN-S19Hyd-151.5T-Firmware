// FUN_00e63bf0 @ 00e63bf0 size=1284 calls_out=8 calls_in=1
// strings: 

int FUN_00e63bf0(char *param_1,undefined4 param_2,undefined4 param_3,byte *param_4)

{
  uint uVar1;
  byte bVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  uint **ppuVar6;
  int iVar7;
  int iVar8;
  undefined1 *puVar9;
  uint uVar10;
  int *piVar11;
  undefined4 *puVar12;
  uint uVar13;
  uint *local_6c;
  undefined4 local_68;
  undefined4 local_64;
  undefined4 local_60;
  undefined3 uStack_5c;
  uint **local_40;
  undefined1 *local_3c;
  undefined1 *local_38;
  uint **local_30;
  undefined1 *local_2c;
  undefined1 uStack_21;
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar12 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar11 = (int *)*puVar12;
    iVar7 = piVar11[2];
    if (*piVar11 == iVar7) {
      FUN_00edff4c(piVar11,iVar7,1,1,1);
      iVar7 = piVar11[2];
    }
    *(undefined1 *)(piVar11[1] + iVar7) = 0x2c;
    piVar11[2] = iVar7 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_68,*puVar12,param_2,param_3);
  if ((char)local_68 != '\x04') {
    iVar7 = FUN_0157c4a0(local_68,local_64);
    return iVar7;
  }
  piVar11 = (int *)*puVar12;
  iVar7 = piVar11[2];
  if (*piVar11 == iVar7) {
    FUN_00edff4c(piVar11,iVar7,1,1,1);
    iVar7 = piVar11[2];
  }
  bVar2 = *param_4;
  *(undefined1 *)(piVar11[1] + iVar7) = 0x3a;
  piVar11[2] = iVar7 + 1;
  piVar11 = (int *)*puVar12;
  if (bVar2 == 2) {
    iVar7 = piVar11[2];
    if ((uint)(*piVar11 - iVar7) < 4) {
      FUN_00edff4c(piVar11,iVar7,4,1,1);
      iVar7 = piVar11[2];
    }
    *(undefined4 *)(piVar11[1] + iVar7) = 0x6c6c756e;
    piVar11[2] = iVar7 + 4;
    return 0;
  }
  puVar4 = (uint *)(param_4 + 1);
  if ((bVar2 & 1) == 0) {
    bVar2 = (byte)*puVar4;
    uVar10 = (uint)bVar2;
    uStack_5c = 0x2e2e2e;
    local_60 = 0x2e2e2e2e;
    local_64 = 0x2e2e2e2e;
    if (uVar10 < 100) {
      if (uVar10 < 10) {
        uVar13 = (uint)&local_68 | 1;
        local_68 = (uint *)CONCAT31(0x2e2e2e,bVar2 | 0x30);
        iVar7 = 1;
      }
      else {
        uVar13 = (uint)&local_68 | 2;
        iVar7 = 2;
        local_68 = (uint *)CONCAT22(0x2e2e,*(undefined2 *)(&DAT_0040f4ca + uVar10 * 2));
      }
    }
    else {
      uVar13 = (uint)&local_68 | 3;
      iVar7 = 3;
      local_68 = (uint *)(CONCAT13(0x2e,CONCAT21(*(undefined2 *)
                                                  (&DAT_0040f4ca +
                                                  ((short)((uint)((short)(ushort)bVar2 * 0x29) >>
                                                          0xc) * -100 + uVar10 & 0xff) * 2),
                                                 (char)((uint)((short)(ushort)bVar2 * 0x29) >> 0xc))
                                  ) | 0x30);
    }
    uVar5 = *puVar4;
    uVar10 = uVar5 >> 0x10;
    uVar1 = uVar5 >> 8;
    if ((uVar5 & 0xffff) >> 8 < 100) {
      if ((uVar1 & 0xff) < 10) {
        *(byte *)(uVar13 + 1) = (byte)(uVar5 >> 8) | 0x30;
        iVar8 = 2;
      }
      else {
        iVar8 = 3;
        *(undefined2 *)(uVar13 + 1) = *(undefined2 *)(&DAT_0040f4ca + (uVar1 & 0x7f) * 2);
      }
    }
    else {
      uVar3 = (short)((ushort)(uVar5 >> 8) & 0xff) * 0x29;
      *(byte *)(uVar13 + 1) = (byte)(uVar3 >> 0xc) | 0x30;
      *(undefined2 *)(uVar13 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + ((short)(uVar3 >> 0xc) * -100 + uVar1 & 0xff) * 2);
      iVar8 = 4;
    }
    iVar8 = iVar8 + iVar7;
    uVar13 = uVar10 & 0xff;
    if (uVar13 < 100) {
      if (uVar13 < 10) {
        *(byte *)((int)&local_68 + iVar8 + 1) = (byte)(uVar5 >> 0x10) | 0x30;
        iVar7 = 2;
      }
      else {
        *(undefined2 *)((int)&local_68 + iVar8 + 1) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar10 & 0x7f) * 2);
        iVar7 = 3;
      }
    }
    else {
      uVar13 = (short)uVar13 * 0x29;
      *(byte *)((int)&local_68 + iVar8 + 1) = (byte)(uVar13 >> 0xc) | 0x30;
      *(undefined2 *)((int)&local_68 + iVar8 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + ((short)(uVar13 >> 0xc) * -100 + uVar10 & 0xff) * 2);
      iVar7 = 4;
    }
    iVar7 = iVar7 + iVar8;
    bVar2 = (byte)(uVar5 >> 0x18);
    if (uVar5 < 0x64000000) {
      if (uVar5 >> 0x19 < 5) {
        *(byte *)((int)&local_68 + iVar7 + 1) = bVar2 | 0x30;
        iVar8 = 2;
      }
      else {
        *(undefined2 *)((int)&local_68 + iVar7 + 1) =
             *(undefined2 *)(&DAT_0040f4ca + (uVar5 >> 0x18) * 2);
        iVar8 = 3;
      }
    }
    else {
      uVar10 = (short)(ushort)bVar2 * 0x29;
      *(byte *)((int)&local_68 + iVar7 + 1) = (byte)(uVar10 >> 0xc) | 0x30;
      *(undefined2 *)((int)&local_68 + iVar7 + 2) =
           *(undefined2 *)
            (&DAT_0040f4ca + ((short)(uVar10 >> 0xc) * -100 + (uVar5 >> 0x18) & 0xff) * 2);
      iVar8 = 4;
    }
    FUN_00e5d350(&local_40,piVar11,&local_68,iVar8 + iVar7);
    if ((char)local_40 != '\x04') {
      ppuVar6 = local_40;
      puVar9 = local_3c;
      goto LAB_00e640e0;
    }
  }
  else {
    local_6c = puVar4;
    FUN_016dd606(&local_68,0,0x27);
    local_38 = (undefined1 *)0x0;
    local_2c = &LAB_0098b894;
    local_30 = &local_6c;
    local_3c = (undefined1 *)0x27;
    local_40 = (uint **)&local_68;
    iVar7 = FUN_00fa948c(&local_40,&DAT_0187be50,&DAT_00590e71,&local_30);
    if (iVar7 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_00fb74f8(&DAT_00418ec6,0x2b,&uStack_21,&DAT_0187bee8,&DAT_0187be68);
    }
    if (local_3c < local_38) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,local_38,local_3c,&DAT_018a92dc);
    }
    FUN_00e5d350(&local_30,piVar11,local_40);
    if ((char)local_30 != '\x04') {
      ppuVar6 = local_30;
      puVar9 = local_2c;
LAB_00e640e0:
      iVar7 = FUN_0157c4a0(ppuVar6,puVar9);
      if (iVar7 == 0) {
        iVar7 = 0;
      }
      return iVar7;
    }
  }
  return 0;
}


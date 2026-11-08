// FUN_00e60924 @ 00e60924 size=816 calls_out=6 calls_in=1
// strings: profile_loaded_at

undefined4
FUN_00e60924(char *param_1,undefined4 param_2,uint param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  int iVar9;
  undefined8 uVar10;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  uVar10 = CONCAT44(param_6,param_5);
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar5 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar4 = (int *)*puVar5;
    iVar2 = piVar4[2];
    if (*piVar4 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
    piVar4[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar5,"profile_loaded_at",0x11);
  if ((char)local_50 != '\x04') {
    uVar1 = FUN_0157c4a0(local_50,local_4c);
    return uVar1;
  }
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  piVar4 = (int *)*puVar5;
  if ((param_3 & 1) == 0) {
    iVar2 = piVar4[2];
    if ((uint)(*piVar4 - iVar2) < 4) {
      FUN_00edff4c(piVar4,iVar2,4,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined4 *)(piVar4[1] + iVar2) = 0x6c6c756e;
    piVar4[2] = iVar2 + 4;
    return 0;
  }
  iVar2 = 0x14;
  if (param_6 == 0 && (9999 < param_5) <= param_6) {
    if ((uint)(param_5 < 100) <= -param_6) goto LAB_00e60b0c;
LAB_00e60a98:
    uVar3 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar6 = (uint)uVar10;
    iVar7 = iVar2;
    if (uVar3 == 0 && (9 < uVar6) <= uVar3) {
LAB_00e60b4c:
      iVar2 = iVar7 + -1;
      *(byte *)((int)local_40 + iVar7 + -0x11) = (byte)uVar6 | 0x30;
      goto LAB_00e60b58;
    }
  }
  else {
    iVar7 = 0;
    local_54 = piVar4;
    do {
      iVar2 = iVar7;
      iVar9 = (int)((ulonglong)uVar10 >> 0x20);
      uVar8 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar8,iVar9,10000,0);
      param_5 = (uint)uVar10;
      uVar3 = param_5 * 0xd8f0 + uVar8;
      uVar6 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar2) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      *(undefined2 *)((int)local_40 + iVar2 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + uVar3 & 0xffff) * 2);
      iVar7 = iVar2 + -4;
    } while ((uint)(uVar8 < 100000000) <= (uint)-iVar9);
    iVar2 = iVar2 + 0x10;
    piVar4 = local_54;
    if ((uint)-(int)((ulonglong)uVar10 >> 0x20) < (uint)(param_5 < 100)) goto LAB_00e60a98;
LAB_00e60b0c:
    iVar7 = iVar2 + -2;
    uVar6 = (uint)((short)((param_5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar2 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + param_5 & 0xffff) * 2);
    if (uVar6 < 10) goto LAB_00e60b4c;
  }
  iVar2 = iVar7 + -2;
  *(undefined2 *)((int)local_40 + iVar7 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
LAB_00e60b58:
  iVar7 = piVar4[2];
  uVar6 = 0x14 - iVar2;
  if ((uint)(*piVar4 - iVar7) < uVar6) {
    FUN_00edff4c(piVar4,iVar7,uVar6,1,1);
    iVar7 = piVar4[2];
  }
  FUN_016dd1aa(piVar4[1] + iVar7,(int)local_40 + iVar2 + -0x10,uVar6);
  piVar4[2] = iVar7 + uVar6;
  return 0;
}


// FUN_00e64458 @ 00e64458 size=876 calls_out=6 calls_in=5
// strings: 

undefined4
FUN_00e64458(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            undefined4 param_6,uint param_7,uint param_8)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
  uint uVar9;
  int iVar10;
  undefined8 uVar11;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  if (*param_1 == '\x01') {
                    /* WARNING: Subroutine does not return */
    FUN_00faa464(&DAT_00419463,0x28,&DAT_018a94f4);
  }
  puVar8 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar8;
    iVar3 = piVar5[2];
    if (*piVar5 == iVar3) {
      FUN_00edff4c(piVar5,iVar3,1,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar3) = 0x2c;
    piVar5[2] = iVar3 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar8,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar2 = FUN_0157c4a0(local_50,local_4c);
    return uVar2;
  }
  piVar5 = (int *)*puVar8;
  iVar3 = piVar5[2];
  if (*piVar5 == iVar3) {
    FUN_00edff4c(piVar5,iVar3,1,1,1);
    iVar3 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar3) = 0x3a;
  piVar5[2] = iVar3 + 1;
  piVar5 = (int *)*puVar8;
  if ((param_5 & 1) == 0) {
    iVar3 = piVar5[2];
    if ((uint)(*piVar5 - iVar3) < 4) {
      FUN_00edff4c(piVar5,iVar3,4,1,1);
      iVar3 = piVar5[2];
    }
    *(undefined4 *)(piVar5[1] + iVar3) = 0x6c6c756e;
    piVar5[2] = iVar3 + 4;
    return 0;
  }
  uVar9 = (int)param_8 >> 0x1f;
  uVar6 = (param_7 ^ uVar9) - uVar9;
  uVar9 = (param_8 ^ uVar9) - (uVar9 + ((param_7 ^ uVar9) < uVar9));
  uVar11 = CONCAT44(uVar9,uVar6);
  iVar3 = 0x14;
  if (uVar9 == 0 && (9999 < uVar6) <= uVar9) {
    if ((uint)(uVar6 < 100) <= -uVar9) goto LAB_00e64668;
LAB_00e645ec:
    uVar6 = (uint)((ulonglong)uVar11 >> 0x20);
    uVar9 = (uint)uVar11;
    iVar1 = iVar3;
    if (uVar6 == 0 && (9 < uVar9) <= uVar6) {
LAB_00e646a8:
      iVar3 = iVar1 + -1;
      *(byte *)((int)local_40 + iVar1 + -0x11) = (byte)uVar9 | 0x30;
      goto joined_r0x00e646b8;
    }
  }
  else {
    local_54 = param_8;
    iVar1 = 0;
    do {
      iVar3 = iVar1;
      iVar10 = (int)((ulonglong)uVar11 >> 0x20);
      uVar7 = (uint)uVar11;
      uVar11 = FUN_01846088(uVar7,iVar10,10000,0);
      uVar6 = (uint)uVar11;
      uVar4 = uVar6 * 0xd8f0 + uVar7;
      uVar9 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
      *(undefined2 *)((int)local_40 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar9 * 0xff9c + uVar4 & 0xffff) * 2);
      iVar1 = iVar3 + -4;
    } while ((uint)(uVar7 < 100000000) <= (uint)-iVar10);
    iVar3 = iVar3 + 0x10;
    param_8 = local_54;
    if ((uint)-(int)((ulonglong)uVar11 >> 0x20) < (uint)(uVar6 < 100)) goto LAB_00e645ec;
LAB_00e64668:
    iVar1 = iVar3 + -2;
    uVar9 = (uint)((short)((uVar6 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar3 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar9 * 0xff9c + uVar6 & 0xffff) * 2);
    if (uVar9 < 10) goto LAB_00e646a8;
  }
  iVar3 = iVar1 + -2;
  *(undefined2 *)((int)local_40 + iVar1 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar9 * 2);
joined_r0x00e646b8:
  iVar1 = iVar3;
  if (0x7fffffff < param_8) {
    iVar1 = iVar3 + -1;
    *(undefined1 *)((int)local_40 + iVar3 + -0x11) = 0x2d;
  }
  iVar3 = piVar5[2];
  uVar9 = 0x14 - iVar1;
  if ((uint)(*piVar5 - iVar3) < uVar9) {
    FUN_00edff4c(piVar5,iVar3,uVar9,1,1);
    iVar3 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar3,(int)local_40 + iVar1 + -0x10,uVar9);
  piVar5[2] = iVar3 + uVar9;
  return 0;
}


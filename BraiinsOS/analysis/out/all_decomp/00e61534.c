// FUN_00e61534 @ 00e61534 size=720 calls_out=6 calls_in=3
// strings: 

undefined4
FUN_00e61534(char *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,uint param_5,
            uint param_6)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint uVar6;
  uint uVar7;
  undefined4 *puVar8;
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
  puVar8 = *(undefined4 **)(param_1 + 4);
  if (param_1[1] != '\x01') {
    piVar5 = (int *)*puVar8;
    iVar2 = piVar5[2];
    if (*piVar5 == iVar2) {
      FUN_00edff4c(piVar5,iVar2,1,1,1);
      iVar2 = piVar5[2];
    }
    *(undefined1 *)(piVar5[1] + iVar2) = 0x2c;
    piVar5[2] = iVar2 + 1;
  }
  param_1[1] = '\x02';
  FUN_00e5d350(&local_50,*puVar8,param_2,param_3);
  if ((char)local_50 != '\x04') {
    uVar1 = FUN_0157c4a0(local_50,local_4c);
    return uVar1;
  }
  piVar5 = (int *)*puVar8;
  iVar2 = piVar5[2];
  if (*piVar5 == iVar2) {
    FUN_00edff4c(piVar5,iVar2,1,1,1);
    iVar2 = piVar5[2];
  }
  *(undefined1 *)(piVar5[1] + iVar2) = 0x3a;
  iVar3 = 0x14;
  piVar5[2] = iVar2 + 1;
  piVar5 = (int *)*puVar8;
  if (param_6 == 0 && (9999 < param_5) <= param_6) {
    if ((uint)(param_5 < 100) <= -param_6) goto LAB_00e616dc;
LAB_00e616a0:
    uVar4 = (uint)((ulonglong)uVar10 >> 0x20);
    uVar6 = (uint)uVar10;
    iVar2 = iVar3;
    if (uVar4 == 0 && (9 < uVar6) <= uVar4) {
LAB_00e6171c:
      iVar3 = iVar2 + -1;
      *(byte *)((int)local_40 + iVar2 + -0x11) = (byte)uVar6 | 0x30;
      goto LAB_00e61728;
    }
  }
  else {
    iVar2 = 0;
    local_54 = piVar5;
    do {
      iVar3 = iVar2;
      iVar9 = (int)((ulonglong)uVar10 >> 0x20);
      uVar7 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar7,iVar9,10000,0);
      param_5 = (uint)uVar10;
      uVar4 = param_5 * 0xd8f0 + uVar7;
      uVar6 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar3) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
      *(undefined2 *)((int)local_40 + iVar3 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + uVar4 & 0xffff) * 2);
      iVar2 = iVar3 + -4;
    } while ((uint)(uVar7 < 100000000) <= (uint)-iVar9);
    iVar3 = iVar3 + 0x10;
    piVar5 = local_54;
    if ((uint)-(int)((ulonglong)uVar10 >> 0x20) < (uint)(param_5 < 100)) goto LAB_00e616a0;
LAB_00e616dc:
    iVar2 = iVar3 + -2;
    uVar6 = (uint)((short)((param_5 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar3 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar6 * 0xff9c + param_5 & 0xffff) * 2);
    if (uVar6 < 10) goto LAB_00e6171c;
  }
  iVar3 = iVar2 + -2;
  *(undefined2 *)((int)local_40 + iVar2 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar6 * 2);
LAB_00e61728:
  iVar2 = piVar5[2];
  uVar6 = 0x14 - iVar3;
  if ((uint)(*piVar5 - iVar2) < uVar6) {
    FUN_00edff4c(piVar5,iVar2,uVar6,1,1);
    iVar2 = piVar5[2];
  }
  FUN_016dd1aa(piVar5[1] + iVar2,(int)local_40 + iVar3 + -0x10,uVar6);
  piVar5[2] = iVar2 + uVar6;
  return 0;
}


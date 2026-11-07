// FUN_00d5a118 @ 00d5a118 size=896 calls_out=9 calls_in=1
// strings: idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections

int FUN_00d5a118(undefined8 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int *piVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  ulonglong uVar10;
  uint local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
  piVar2 = (int *)*param_2;
  iVar5 = piVar2[2];
  if (*piVar2 == iVar5) {
    FUN_00d653ec(piVar2,iVar5,1,1,1);
    iVar5 = piVar2[2];
  }
  uVar8 = *(uint *)(param_1 + 2);
  *(undefined1 *)(piVar2[1] + iVar5) = 0x7b;
  piVar2[2] = iVar5 + 1;
  local_58 = CONCAT22(local_58._2_2_,0x200);
  local_54 = param_2;
  FUN_00cd2b24(&local_50,piVar2,&DAT_0035783c,2);
  if ((char)local_50 != '\x04') {
    iVar5 = FUN_0157c4a0(local_50,local_4c);
    return iVar5;
  }
  piVar2 = (int *)*param_2;
  iVar5 = piVar2[2];
  if (*piVar2 == iVar5) {
    FUN_00d653ec(piVar2,iVar5,1,1,1);
    iVar5 = piVar2[2];
  }
  *(undefined1 *)(piVar2[1] + iVar5) = 0x3a;
  piVar2[2] = piVar2[2] + 1;
  piVar2 = (int *)*param_2;
  if (uVar8 < 10000) {
    uVar10 = (ulonglong)uVar8;
    iVar5 = 0x14;
    if (99 < uVar8) goto LAB_00d5a2b0;
LAB_00d5a274:
    uVar8 = (uint)(uVar10 >> 0x20);
    uVar1 = (uint)uVar10;
    iVar3 = iVar5;
    if (uVar8 != 0 || uVar8 < (9 < uVar1)) goto LAB_00d5a284;
LAB_00d5a2f4:
    iVar5 = iVar3 + -1;
    *(byte *)((int)local_40 + iVar3 + -0x11) = (byte)uVar1 | 0x30;
  }
  else {
    uVar10 = (ulonglong)uVar8;
    iVar3 = 0;
    do {
      iVar5 = iVar3;
      iVar7 = (int)(uVar10 >> 0x20);
      uVar9 = (uint)uVar10;
      uVar10 = FUN_01846088(uVar9,iVar7,10000,0);
      uVar8 = (uint)uVar10;
      uVar4 = uVar9 + uVar8 * -10000;
      uVar1 = (uint)((short)((uVar4 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar5) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_40 + iVar5 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar4 + uVar1 * -100 & 0xffff) * 2);
      iVar3 = iVar5 + -4;
    } while ((uint)(uVar9 < 100000000) <= (uint)-iVar7);
    iVar5 = iVar5 + 0x10;
    if ((uint)-(int)(uVar10 >> 0x20) < (uint)(uVar8 < 100)) goto LAB_00d5a274;
LAB_00d5a2b0:
    iVar3 = iVar5 + -2;
    uVar1 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar5 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar8 + uVar1 * -100 & 0xffff) * 2);
    if (uVar1 < 10) goto LAB_00d5a2f4;
LAB_00d5a284:
    iVar5 = iVar3 + -2;
    *(undefined2 *)((int)local_40 + iVar3 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
  }
  uVar8 = 0x14 - iVar5;
  iVar3 = piVar2[2];
  if ((uint)(*piVar2 - iVar3) < uVar8) {
    FUN_00d653ec(piVar2,iVar3,uVar8,1,1);
    iVar3 = piVar2[2];
  }
  FUN_016dd1aa(piVar2[1] + iVar3,(int)local_40 + iVar5 + -0x10,uVar8);
  uVar6 = *(undefined4 *)((int)param_1 + 0x14);
  piVar2[2] = piVar2[2] + uVar8;
  iVar5 = FUN_00cd2f2c(&local_58,
                       "idxptrMaxBufferSizeExceededMaxRecordLimitExceededrecord_typeNoConnections",3
                       ,uVar6);
  if (iVar5 == 0) {
    if ((char)local_58 != '\0') {
LAB_00d5a3f8:
      local_50 = 10;
      iVar5 = FUN_0157c50c(&local_50,0,0);
      return iVar5;
    }
    iVar5 = FUN_00cd3ed8((int)*param_1,&local_58,&DAT_0035783e,0xb);
    if (iVar5 == 0) {
      if ((char)local_58 != '\0') goto LAB_00d5a3f8;
      iVar5 = FUN_00cd3ed8((int)param_1[1],&local_58,"mcr",3);
      if (iVar5 == 0) {
        iVar5 = 0;
        if (((local_58 & 0xff00) != 0) && ((local_58 & 1) == 0)) {
          FUN_00cde0e0(*local_54,"}",1);
          return 0;
        }
      }
    }
  }
  return iVar5;
}


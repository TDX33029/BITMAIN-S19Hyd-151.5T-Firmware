// FUN_00e65518 @ 00e65518 size=1260 calls_out=8 calls_in=0
// strings: restart_due_to | retry_count

int FUN_00e65518(char *param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint *puVar10;
  ulonglong uVar11;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  undefined2 local_40 [14];
  
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
  FUN_00e5d350(&local_50,*puVar5,&DAT_00418440,7);
  if ((char)local_50 != '\x04') {
LAB_00e658e4:
    iVar2 = FUN_0157c4a0(local_50,local_4c);
    return iVar2;
  }
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  iVar6 = *param_2;
  iVar7 = param_2[1];
  puVar10 = (uint *)param_2[2];
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x7b;
  piVar4[2] = iVar2 + 1;
  local_58 = CONCAT22(local_58._2_2_,0x100);
  local_54 = puVar5;
  iVar2 = FUN_00e647d0(&local_58,"restart_due_to",0xe,*(undefined4 *)(iVar6 + 4),
                       *(undefined4 *)(iVar6 + 8));
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((char)local_58 != '\0') {
LAB_00e658c4:
    local_50 = 10;
    iVar2 = FUN_0157c50c(&local_50,0,0);
    return iVar2;
  }
  iVar2 = FUN_00e647d0(&local_58,&DAT_00418447,5,*(undefined4 *)(iVar7 + 4),
                       *(undefined4 *)(iVar7 + 8));
  puVar5 = local_54;
  if (iVar2 != 0) {
    return iVar2;
  }
  if ((char)local_58 != '\0') goto LAB_00e658c4;
  uVar8 = *puVar10;
  if (local_58._1_1_ != '\x01') {
    piVar4 = (int *)*local_54;
    iVar2 = piVar4[2];
    if (*piVar4 == iVar2) {
      FUN_00edff4c(piVar4,iVar2,1,1,1);
      iVar2 = piVar4[2];
    }
    *(undefined1 *)(piVar4[1] + iVar2) = 0x2c;
    piVar4[2] = iVar2 + 1;
  }
  local_58._0_2_ = CONCAT11(2,(char)local_58);
  FUN_00e5d350(&local_50,*puVar5,"retry_count",0xb);
  if ((char)local_50 != '\x04') goto LAB_00e658e4;
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x3a;
  piVar4[2] = iVar2 + 1;
  piVar4 = (int *)*puVar5;
  if (uVar8 < 10000) {
    uVar11 = (ulonglong)uVar8;
    iVar2 = 0x14;
    if (uVar8 < 100) goto LAB_00e657c0;
LAB_00e657fc:
    iVar6 = iVar2 + -2;
    uVar1 = (uint)((short)((uVar8 & 0xffff) >> 2) * 0x147b) >> 0x11;
    *(undefined2 *)((int)local_40 + iVar2 + -0x12) =
         *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar8 & 0xffff) * 2);
    if (uVar1 < 10) {
LAB_00e6583c:
      iVar2 = iVar6 + -1;
      *(byte *)((int)local_40 + iVar6 + -0x11) = (byte)uVar1 | 0x30;
      goto LAB_00e65848;
    }
  }
  else {
    uVar11 = (ulonglong)uVar8;
    iVar6 = 0;
    do {
      iVar2 = iVar6;
      iVar7 = (int)(uVar11 >> 0x20);
      uVar9 = (uint)uVar11;
      uVar11 = FUN_01846088(uVar9,iVar7,10000,0);
      uVar8 = (uint)uVar11;
      uVar3 = uVar8 * 0xd8f0 + uVar9;
      uVar1 = (uint)((short)((uVar3 & 0xffff) >> 2) * 0x147b) >> 0x11;
      *(undefined2 *)((int)local_40 + iVar2) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
      *(undefined2 *)((int)local_40 + iVar2 + 2) =
           *(undefined2 *)(&DAT_0040f4ca + (uVar1 * 0xff9c + uVar3 & 0xffff) * 2);
      iVar6 = iVar2 + -4;
    } while ((uint)(uVar9 < 100000000) <= (uint)-iVar7);
    iVar2 = iVar2 + 0x10;
    if ((uint)(uVar8 < 100) <= (uint)-(int)(uVar11 >> 0x20)) goto LAB_00e657fc;
LAB_00e657c0:
    uVar8 = (uint)(uVar11 >> 0x20);
    uVar1 = (uint)uVar11;
    iVar6 = iVar2;
    if (uVar8 == 0 && (9 < uVar1) <= uVar8) goto LAB_00e6583c;
  }
  iVar2 = iVar6 + -2;
  *(undefined2 *)((int)local_40 + iVar6 + -0x12) = *(undefined2 *)(&DAT_0040f4ca + uVar1 * 2);
LAB_00e65848:
  iVar6 = piVar4[2];
  uVar8 = 0x14 - iVar2;
  if ((uint)(*piVar4 - iVar6) < uVar8) {
    FUN_00edff4c(piVar4,iVar6,uVar8,1,1);
    iVar6 = piVar4[2];
  }
  FUN_016dd1aa(piVar4[1] + iVar6,(int)local_40 + iVar2 + -0x10,uVar8);
  piVar4[2] = iVar6 + uVar8;
  if (((local_58 & 0xff00) == 0) || ((local_58 & 1) != 0)) {
    return 0;
  }
  piVar4 = (int *)*puVar5;
  iVar2 = piVar4[2];
  if (*piVar4 == iVar2) {
    FUN_00edff4c(piVar4,iVar2,1,1,1);
    iVar2 = piVar4[2];
  }
  *(undefined1 *)(piVar4[1] + iVar2) = 0x7d;
  piVar4[2] = iVar2 + 1;
  return 0;
}


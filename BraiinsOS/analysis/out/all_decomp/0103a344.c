// FUN_0103a344 @ 0103a344 size=344 calls_out=2 calls_in=4
// strings: 

longlong FUN_0103a344(undefined4 *param_1)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  uint uVar4;
  short *psVar5;
  byte bVar6;
  uint uVar7;
  short *psVar8;
  
  bVar1 = *(byte *)((int)param_1 + 5);
  if (bVar1 <= *(byte *)(param_1 + 1)) {
    return ZEXT48(param_1) << 0x20;
  }
  psVar5 = (short *)*param_1;
  bVar6 = bVar1 - 1;
  *(byte *)((int)param_1 + 5) = bVar6;
  if (psVar5[0x12] == 1) {
    psVar8 = *(short **)(psVar5 + 0x16);
    uVar4 = *(uint *)(psVar5 + 0x18);
    if (uVar4 <= bVar6) {
LAB_0103a38c:
      return (ulonglong)uVar4 << 0x20;
    }
  }
  else {
    uVar4 = (uint)(ushort)psVar5[0x13];
    if (0x18 < uVar4) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar4,0x18,&DAT_01883538);
    }
    psVar8 = psVar5 + 0x14;
    if (uVar4 <= bVar6) goto LAB_0103a38c;
  }
  uVar4 = (uint)*(byte *)((int)psVar8 + (uint)bVar6);
  if (bVar1 == 1) {
    uVar7 = 0;
    sVar2 = *psVar5;
  }
  else {
    if (psVar5[0x12] == 0) {
      uVar7 = (uint)(ushort)psVar5[0x13];
      if (0x18 < uVar7) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar7,0x18,&DAT_01883538);
      }
      psVar8 = psVar5 + 0x14;
    }
    else {
      psVar8 = *(short **)(psVar5 + 0x16);
      uVar7 = *(uint *)(psVar5 + 0x18);
    }
    uVar3 = (uint)(byte)(bVar1 - 2);
    if (uVar7 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uVar7,&DAT_01883268);
    }
    uVar7 = (uint)*(byte *)((int)psVar8 + uVar3);
    sVar2 = *psVar5;
  }
  if (sVar2 == 1) {
    psVar8 = *(short **)(psVar5 + 4);
    uVar3 = *(uint *)(psVar5 + 6);
  }
  else {
    uVar3 = (uint)(ushort)psVar5[1];
    if (0x20 < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,0x20,&DAT_01883538);
    }
    psVar8 = psVar5 + 2;
  }
  if (uVar4 < uVar7 || uVar3 < uVar4) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar7,uVar4,uVar3,&DAT_01883278);
  }
  return CONCAT44(uVar4 - uVar7,(int)psVar8 + uVar7);
}


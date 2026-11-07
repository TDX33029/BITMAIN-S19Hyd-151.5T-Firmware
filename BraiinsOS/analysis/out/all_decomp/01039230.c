// FUN_01039230 @ 01039230 size=348 calls_out=2 calls_in=5
// strings: 

longlong FUN_01039230(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  short *psVar4;
  uint uVar5;
  short *psVar6;
  
  uVar3 = (uint)*(byte *)(param_1 + 1);
  if (*(byte *)((int)param_1 + 5) <= uVar3) {
    return (ulonglong)(uint)*(byte *)((int)param_1 + 5) << 0x20;
  }
  psVar6 = (short *)*param_1;
  if (psVar6[0x12] == 1) {
    psVar4 = *(short **)(psVar6 + 0x16);
    uVar2 = *(uint *)(psVar6 + 0x18);
  }
  else {
    uVar2 = (uint)(ushort)psVar6[0x13];
    if (0x18 < uVar2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar2,0x18,&DAT_01883538);
    }
    psVar4 = psVar6 + 0x14;
  }
  if (uVar2 <= uVar3) {
    return (ulonglong)uVar2 << 0x20;
  }
  uVar2 = (uint)*(byte *)((int)psVar4 + uVar3);
  if (uVar3 == 0) {
    uVar3 = 0;
  }
  else {
    if (psVar6[0x12] == 0) {
      uVar5 = (uint)(ushort)psVar6[0x13];
      if (0x18 < uVar5) {
                    /* WARNING: Subroutine does not return */
        FUN_00faa36c(0,uVar5,0x18,&DAT_01883538);
      }
      psVar4 = psVar6 + 0x14;
    }
    else {
      psVar4 = *(short **)(psVar6 + 0x16);
      uVar5 = *(uint *)(psVar6 + 0x18);
    }
    uVar3 = uVar3 - 1 & 0xff;
    if (uVar5 <= uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa4a4(uVar3,uVar5,&DAT_01883248);
    }
    uVar3 = (uint)*(byte *)((int)psVar4 + uVar3);
  }
  sVar1 = *psVar6;
  *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
  if (sVar1 == 1) {
    psVar4 = *(short **)(psVar6 + 4);
    uVar5 = *(uint *)(psVar6 + 6);
  }
  else {
    uVar5 = (uint)(ushort)psVar6[1];
    if (0x20 < uVar5) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar5,0x20,&DAT_01883538);
    }
    psVar4 = psVar6 + 2;
  }
  if (uVar2 < uVar3 || uVar5 < uVar2) {
                    /* WARNING: Subroutine does not return */
    FUN_00faa36c(uVar3,uVar2,uVar5,&DAT_01883258);
  }
  return CONCAT44(uVar2 - uVar3,(int)psVar4 + uVar3);
}


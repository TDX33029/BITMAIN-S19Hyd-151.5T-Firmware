// FUN_013c7a64 @ 013c7a64 size=332 calls_out=2 calls_in=5
// strings: 

undefined8 FUN_013c7a64(undefined4 *param_1)

{
  short sVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  short *psVar5;
  uint uVar6;
  short *psVar7;
  
  uVar3 = (uint)*(byte *)(param_1 + 1);
  iVar4 = 0;
  uVar2 = (uint)*(byte *)((int)param_1 + 5);
  if (uVar3 < uVar2) {
    psVar7 = (short *)*param_1;
    if (psVar7[0x12] == 1) {
      psVar5 = *(short **)(psVar7 + 0x16);
      uVar2 = *(uint *)(psVar7 + 0x18);
    }
    else {
      uVar2 = (uint)(ushort)psVar7[0x13];
      if (0x18 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar2,0x18,&DAT_01cf2da0);
      }
      psVar5 = psVar7 + 0x14;
    }
    if (uVar3 < uVar2) {
      uVar2 = (uint)*(byte *)((int)psVar5 + uVar3);
      if (uVar3 == 0) {
        uVar3 = 0;
      }
      else {
        if (psVar7[0x12] == 0) {
          uVar6 = (uint)(ushort)psVar7[0x13];
          if (0x18 < uVar6) {
                    /* WARNING: Subroutine does not return */
            FUN_012faff4(0,uVar6,0x18,&DAT_01cf2da0);
          }
          psVar5 = psVar7 + 0x14;
        }
        else {
          psVar5 = *(short **)(psVar7 + 0x16);
          uVar6 = *(uint *)(psVar7 + 0x18);
        }
        uVar3 = uVar3 - 1 & 0xff;
        if (uVar6 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          FUN_012fb12c(uVar3,uVar6,&DAT_01cf1edc);
        }
        uVar3 = (uint)*(byte *)((int)psVar5 + uVar3);
      }
      sVar1 = *psVar7;
      *(byte *)(param_1 + 1) = *(byte *)(param_1 + 1) + 1;
      if (sVar1 == 1) {
        psVar5 = *(short **)(psVar7 + 4);
        uVar6 = *(uint *)(psVar7 + 6);
      }
      else {
        uVar6 = (uint)(ushort)psVar7[1];
        if (0x20 < uVar6) {
                    /* WARNING: Subroutine does not return */
          FUN_012faff4(0,uVar6,0x20,&DAT_01cf2da0);
        }
        psVar5 = psVar7 + 2;
      }
      if (uVar2 < uVar3 || uVar6 < uVar2) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(uVar3,uVar2,uVar6,&DAT_01cf1eec);
      }
      iVar4 = (int)psVar5 + uVar3;
      uVar2 = uVar2 - uVar3;
    }
  }
  return CONCAT44(uVar2,iVar4);
}


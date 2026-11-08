// FUN_008cf244 @ 008cf244 size=124 calls_out=2 calls_in=0
// strings: 

undefined8 FUN_008cf244(uint param_1,int param_2)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  uVar4 = *(uint *)(param_2 + 0xb8);
  if (uVar4 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01864ebc);
  }
  if (uVar4 >> 0x10 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_00faf2a4(&DAT_01864ecc);
  }
  uVar1 = param_1 >> 0x10 & 0xff;
  iVar5 = *(int *)(param_2 + 0xc0);
  uVar2 = FUN_018462e8(0xffff,uVar4 & 0xffff);
  iVar3 = FUN_018462e8((uVar1 << 8 | param_1 >> 8 & 0xff) >> 1 & 0xff |
                       (uVar1 >> 1 | (param_1 >> 0x18 & 1) << 7) << 8,uVar2);
  return CONCAT44(param_1 >> 0x19,iVar5 * iVar3);
}


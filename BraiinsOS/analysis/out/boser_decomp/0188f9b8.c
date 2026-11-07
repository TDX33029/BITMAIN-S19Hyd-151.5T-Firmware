// FUN_0188f9b8 @ 0188f9b8 size=172 calls_out=5 calls_in=2
// strings: 

undefined8 FUN_0188f9b8(undefined4 *param_1,undefined4 *param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint unaff_r8;
  undefined8 uVar5;
  undefined1 auStack_24 [12];
  
  uVar2 = 0;
  if ((uint)param_1[4] <= (uint)param_2[4]) {
    uVar4 = param_2[1];
    uVar3 = param_1[1];
    if ((uVar3 != uVar4) || (iVar1 = FUN_01bd4ff4(*param_1,*param_2,uVar3), iVar1 == -1)) {
      FUN_0189ba04(auStack_24,uVar4);
      uVar5 = FUN_0189b9a4(auStack_24);
      unaff_r8 = (uint)((ulonglong)uVar5 >> 0x20);
      uVar2 = (undefined4)uVar5;
      if (unaff_r8 < uVar3) {
                    /* WARNING: Subroutine does not return */
        FUN_012faff4(0,uVar3,unaff_r8,&DAT_01d211d4);
      }
      FUN_01bed4e2(uVar2,*param_1,uVar3 << 2);
    }
  }
  return CONCAT44(unaff_r8,uVar2);
}


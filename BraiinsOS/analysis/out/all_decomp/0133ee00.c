// FUN_0133ee00 @ 0133ee00 size=264 calls_out=4 calls_in=2
// strings: 

void FUN_0133ee00(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  
  uVar5 = *(uint *)(param_1 + 0x108);
  iVar6 = param_1 + 8;
  uVar4 = 0;
  do {
    if (0x3f < uVar5) {
      uVar5 = *(uint *)(param_1 + 0x148);
      if ((*(int *)(param_1 + 0x14c) < (int)(uint)(uVar5 == 0)) ||
         (*(int *)(param_1 + 0x150) - DAT_018dd8e0 < 0)) {
        FUN_0133eb98(param_1 + 0x110,iVar6);
      }
      else {
        *(uint *)(param_1 + 0x148) = uVar5 - 0x100;
        *(uint *)(param_1 + 0x14c) = *(int *)(param_1 + 0x14c) - (uint)(uVar5 < 0x100);
        FUN_0133db84(param_1 + 0x110,iVar6);
      }
      uVar5 = 0;
      *(undefined4 *)(param_1 + 0x108) = 0;
    }
    uVar2 = 0x40 - uVar5;
    uVar3 = 0x20 - uVar4;
    if (uVar2 * 4 <= uVar3) {
      uVar3 = uVar2 * 4;
    }
    uVar1 = uVar3 + 3;
    if (uVar2 < uVar1 >> 2) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar1 >> 2,uVar2,&DAT_01892008);
    }
    if ((uVar1 & 0x7c) < uVar3) {
                    /* WARNING: Subroutine does not return */
      FUN_00faa36c(0,uVar3,uVar1 & 0x7c,&DAT_01891ff8);
    }
    FUN_016dd1aa(param_2 + uVar4,iVar6 + uVar5 * 4,uVar3);
    uVar5 = uVar5 + (uVar1 >> 2);
    uVar4 = uVar3 + uVar4;
    *(uint *)(param_1 + 0x108) = uVar5;
  } while (uVar4 < 0x20);
  return;
}


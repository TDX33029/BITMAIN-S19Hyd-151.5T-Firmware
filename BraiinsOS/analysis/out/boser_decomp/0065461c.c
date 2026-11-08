// FUN_0065461c @ 0065461c size=156 calls_out=2 calls_in=2
// strings: 

void FUN_0065461c(int param_1)

{
  uint *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  ulonglong uVar6;
  
  uVar3 = *(uint *)(param_1 + 0x2fc);
  if (*(uint *)(param_1 + 0x1ac) <= uVar3) {
                    /* WARNING: Subroutine does not return */
    FUN_012fb12c(uVar3,*(uint *)(param_1 + 0x1ac),&DAT_01c03458);
  }
  iVar5 = *(int *)(param_1 + 0x1b4);
  uVar4 = *(uint *)(param_1 + 0x1b8);
  uVar2 = *(uint *)(*(int *)(param_1 + 0x1a8) + uVar3 * 0x14);
  uVar6 = (ulonglong)uVar2 << 0x20;
  if (uVar2 != 0) {
    uVar6 = CONCAT44(uVar2,1);
  }
  while( true ) {
    uVar2 = (uint)(uVar6 >> 0x20);
    if ((uVar6 & 1) == 0) {
      return;
    }
    if (uVar4 <= uVar2) break;
    puVar1 = (uint *)(iVar5 + uVar2 * 9 + 1);
    if (*puVar1 == 1) {
      *puVar1 = uVar3;
    }
    uVar6 = FUN_006541a0(param_1 + 0x1a4,uVar3,1);
  }
                    /* WARNING: Subroutine does not return */
  FUN_012fb12c(uVar2,uVar4,&DAT_01c03518);
}


// FUN_0172cc2c @ 0172cc2c size=244 calls_out=6 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x0172cb80) */

int FUN_0172cc2c(void)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  code *pcVar4;
  
  iVar1 = FUN_0177a9c0(0x24);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) == 0) {
      uVar3 = FUN_0172cb38();
      *(undefined4 *)(iVar1 + 0x18) = uVar3;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    FUN_016f19c4(iVar1 + 0x20);
    if (*(undefined4 **)(iVar1 + 0x18) == (undefined4 *)0x0) {
      return iVar1;
    }
    pcVar4 = (code *)**(undefined4 **)(iVar1 + 0x18);
    if (pcVar4 == (code *)0x0) {
      return iVar1;
    }
    iVar2 = (*pcVar4)(iVar1);
    if (iVar2 != 0) {
      return iVar1;
    }
    FUN_016f19e8(&DAT_018df028,iVar1,iVar1 + 0x20);
    FUN_0177aafc(iVar1);
  }
  return 0;
}


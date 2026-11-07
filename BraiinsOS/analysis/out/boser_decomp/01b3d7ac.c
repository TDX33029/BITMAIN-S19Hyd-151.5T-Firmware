// FUN_01b3d7ac @ 01b3d7ac size=232 calls_out=6 calls_in=7
// strings: 

/* WARNING: Removing unreachable block (ram,0x01b3d708) */

int FUN_01b3d7ac(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  code *pcVar4;
  
  iVar1 = FUN_01b6b0a8(0x24);
  if (iVar1 != 0) {
    if (*(int *)(iVar1 + 0x18) == 0) {
      uVar2 = FUN_01b3d6c4();
      *(undefined4 *)(iVar1 + 0x18) = uVar2;
    }
    *(undefined4 *)(iVar1 + 0x1c) = 0;
    *(undefined4 *)(iVar1 + 0x10) = 4;
    *(undefined4 *)(iVar1 + 0x14) = 1;
    FUN_01b0c4fc(iVar1 + 0x20);
    if (*(undefined4 **)(iVar1 + 0x18) == (undefined4 *)0x0) {
      return iVar1;
    }
    pcVar4 = (code *)**(undefined4 **)(iVar1 + 0x18);
    if (pcVar4 == (code *)0x0) {
      return iVar1;
    }
    iVar3 = (*pcVar4)(iVar1);
    if (iVar3 != 0) {
      return iVar1;
    }
    FUN_01b0c518(&DAT_01d524d8,iVar1,iVar1 + 0x20);
    FUN_01b6b1c4(iVar1);
  }
  return 0;
}


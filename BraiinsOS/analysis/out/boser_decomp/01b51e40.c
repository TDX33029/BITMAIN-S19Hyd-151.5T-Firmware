// FUN_01b51e40 @ 01b51e40 size=152 calls_out=3 calls_in=1
// strings: 

int FUN_01b51e40(void)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  
  iVar1 = FUN_01b6b0a8(8);
  if (iVar1 != 0) {
    puVar2 = (undefined4 *)FUN_01b229d8();
    *(undefined4 **)(iVar1 + 4) = puVar2;
    if ((((puVar2 != (undefined4 *)0x0) && (puVar2[1] != 0)) && (puVar2[2] != 0)) &&
       (((puVar2[3] != 0 && ((code *)*puVar2 != (code *)0x0)) &&
        (iVar3 = (*(code *)*puVar2)(iVar1), iVar3 == 1)))) {
      return iVar1;
    }
    FUN_01b6b1c4(iVar1);
  }
  return 0;
}


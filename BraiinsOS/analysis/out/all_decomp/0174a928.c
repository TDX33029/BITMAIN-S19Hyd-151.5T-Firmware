// FUN_0174a928 @ 0174a928 size=292 calls_out=4 calls_in=1
// strings: 

int FUN_0174a928(void)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  iVar1 = FUN_0177a9c0(8);
  puVar3 = DAT_018de728;
  if (iVar1 == 0) {
    return 0;
  }
  if (DAT_018de724 == 1) {
    *(undefined4 **)(iVar1 + 4) = DAT_018de728;
    if (puVar3 == (undefined4 *)0x0) goto LAB_0174aa00;
  }
  else {
    iVar2 = FUN_01782b68();
    if (iVar2 == 1) {
      FUN_01781ff4(&DAT_018de6e0,FUN_01703c28);
      puVar3 = &DAT_018de6e8;
      *(undefined4 **)(iVar1 + 4) = &DAT_018de6e8;
    }
    else {
      FUN_01781ff4(&DAT_018de704,FUN_01703b78);
      puVar3 = &DAT_018de708;
      *(undefined4 **)(iVar1 + 4) = &DAT_018de708;
    }
  }
  if ((((puVar3[1] != 0) && (puVar3[2] != 0)) && (puVar3[3] != 0)) &&
     (((code *)*puVar3 != (code *)0x0 && (iVar2 = (*(code *)*puVar3)(iVar1), iVar2 == 1)))) {
    return iVar1;
  }
LAB_0174aa00:
  FUN_0177aafc(iVar1);
  return 0;
}


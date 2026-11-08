// FUN_00d40058 @ 00d40058 size=264 calls_out=5 calls_in=2
// strings: 

undefined4 FUN_00d40058(byte *param_1)

{
  char cVar1;
  byte bVar2;
  undefined4 uVar3;
  int iVar4;
  int *extraout_r2;
  int extraout_r3;
  int iVar5;
  bool bVar6;
  undefined8 uVar7;
  
  uVar7 = thunk_FUN_016de0ee();
  iVar4 = (int)((ulonglong)uVar7 >> 0x20);
  iVar5 = (int)uVar7 + extraout_r3;
  if (*(char *)(iVar5 + 0x38) != '\x01') {
    if (*(char *)(iVar5 + 0x38) == '\x02') goto LAB_00d400c0;
    FUN_015e8e6c(iVar5,FUN_00bacf28);
    *(undefined1 *)(iVar5 + 0x38) = 1;
  }
  cVar1 = *(char *)(iVar5 + 0x30);
  bVar6 = cVar1 == '\x01';
  if (bVar6) {
    cVar1 = *(char *)(iVar5 + 0x31);
  }
  if (bVar6 && cVar1 == '\0') {
    FUN_016455a4(*(undefined4 *)*extraout_r2,((undefined4 *)*extraout_r2)[1]);
    return 3;
  }
LAB_00d400c0:
  bVar2 = *param_1;
  if ((bVar2 & 1) == 0) {
    iVar5 = FUN_016af5f0(iVar4,extraout_r2);
    bVar2 = *param_1;
    if (iVar5 == 0) {
      *param_1 = bVar2 | 1;
      return 0;
    }
    uVar3 = 3;
  }
  else {
    uVar3 = 2;
  }
  if ((bVar2 & 2) == 0) {
    iVar4 = FUN_01657fc4(iVar4 + 8,*extraout_r2);
    uVar3 = 3;
    if (iVar4 == 0) {
      *param_1 = *param_1 | 2;
      uVar3 = 1;
    }
  }
  return uVar3;
}


// FUN_00d65650 @ 00d65650 size=212 calls_out=6 calls_in=2
// strings: 

void FUN_00d65650(undefined4 *param_1,char *param_2)

{
  char cVar1;
  undefined4 uVar2;
  undefined8 uVar3;
  char local_30 [8];
  int local_28;
  undefined4 local_20;
  undefined4 uStack_1c;
  undefined1 uStack_11;
  
  cVar1 = *param_2;
  *param_2 = '\x06';
  if (cVar1 == '\x06') {
    uVar2 = FUN_00c4c3ec(&DAT_00565810,0x10);
    *param_1 = 1;
    param_1[1] = uVar2;
    return;
  }
  local_30[0] = cVar1;
  FUN_016dd1aa((uint)local_30 | 1,param_2 + 1,0x17);
  uVar3 = CONCAT44(uStack_1c,local_20);
  if (cVar1 != '\x02') {
    uVar2 = FUN_00f36124(local_30,&uStack_11,&DAT_01873d48);
    *param_1 = 1;
    param_1[1] = uVar2;
    FUN_00c01f94(local_30);
    return;
  }
  if (local_28 == 0) {
    uVar3 = FUN_01845f30();
  }
  else if (local_28 == 1) {
    uVar3 = FUN_01845d5c();
  }
  *param_1 = 0;
  *(undefined8 *)(param_1 + 2) = uVar3;
  return;
}


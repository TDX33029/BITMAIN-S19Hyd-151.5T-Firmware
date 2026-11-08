// FUN_01623454 @ 01623454 size=148 calls_out=2 calls_in=1
// strings: 

void FUN_01623454(undefined1 *param_1,int param_2,int param_3)

{
  undefined1 uVar1;
  int iVar2;
  int local_28;
  int iStack_24;
  undefined1 *local_20;
  undefined1 *local_1c;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;
  
  local_20 = (undefined1 *)&local_28;
  local_28 = param_2;
  iStack_24 = param_3;
  if (param_3 == 0x10) {
    iVar2 = 0;
    local_c = 0;
    local_10 = 0;
    local_14 = 0;
    local_18 = 0;
    do {
      *(undefined1 *)((int)&local_18 + iVar2) = *(undefined1 *)(param_2 + iVar2);
      iVar2 = iVar2 + 1;
    } while (iVar2 != 0x10);
    FUN_01bed4e2(param_1 + 1,&local_18,0x10);
    uVar1 = 0;
  }
  else {
    local_1c = &LAB_0141634c;
    FUN_00664898(param_1 + 4,&DAT_0057df49,&local_20);
    uVar1 = 1;
  }
  *param_1 = uVar1;
  return;
}


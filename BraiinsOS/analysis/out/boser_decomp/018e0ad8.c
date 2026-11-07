// FUN_018e0ad8 @ 018e0ad8 size=180 calls_out=2 calls_in=4
// strings: 

void FUN_018e0ad8(int param_1)

{
  char *local_90;
  undefined1 *local_8c;
  undefined *local_88;
  undefined4 local_84;
  undefined *local_80;
  undefined4 local_7c;
  undefined *local_78;
  undefined2 local_c;
  
  if (3 < DAT_01d51b00) {
    local_8c = &LAB_018e0ba4;
    local_80 = &DAT_00520dbb;
    local_88 = &DAT_00520dbb;
    local_90 = "";
    local_7c = 0x14;
    local_84 = 0x14;
    local_78 = &DAT_01d23230;
    FUN_0193b350(&DAT_00587d70,&local_90,4,&local_88);
  }
  local_c = 4;
  local_84 = 0;
  local_88 = (undefined *)0x80000000;
  FUN_018e077c(param_1,&local_88,*(char *)(param_1 + 0x28) == '\x02');
  return;
}

